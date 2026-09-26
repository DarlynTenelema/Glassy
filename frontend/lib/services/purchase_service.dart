import 'dart:async';
import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:in_app_purchase/in_app_purchase.dart';
import 'package:http/http.dart' as http;
import 'package:supabase_flutter/supabase_flutter.dart';
import '../providers/game_provider.dart';
import 'package:provider/provider.dart';

class PurchaseService {
  static final PurchaseService _instance = PurchaseService._internal();
  factory PurchaseService() => _instance;
  PurchaseService._internal();

  final InAppPurchase _inAppPurchase = InAppPurchase.instance;
  late StreamSubscription<List<PurchaseDetails>> _subscription;
  
  // Backend URL donde correrá el servicio Go
  // En producción, esto debe reemplazarse por la URL real.
  final String _backendUrl = 'http://localhost:8080/api'; 
  
  BuildContext? _currentContext;

  void initialize(BuildContext context) {
    _currentContext = context;
    final Stream<List<PurchaseDetails>> purchaseUpdated = _inAppPurchase.purchaseStream;
    _subscription = purchaseUpdated.listen((purchaseDetailsList) {
      _listenToPurchaseUpdated(purchaseDetailsList);
    }, onDone: () {
      _subscription.cancel();
    }, onError: (error) {
      // handle error
      debugPrint('Purchase Stream Error: $error');
    });
  }

  void dispose() {
    _subscription.cancel();
  }

  Future<bool> isAvailable() async {
    return await _inAppPurchase.isAvailable();
  }

  Future<void> buyProduct(String productId) async {
    final ProductDetailsResponse response = await _inAppPurchase.queryProductDetails({productId});
    if (response.notFoundIDs.isNotEmpty) {
      debugPrint('Product not found: $productId');
      if (_currentContext != null) {
         ScaffoldMessenger.of(_currentContext!).showSnackBar(
            const SnackBar(content: Text('Producto no disponible en la tienda')),
         );
      }
      return;
    }
    
    final ProductDetails productDetails = response.productDetails.first;
    final PurchaseParam purchaseParam = PurchaseParam(productDetails: productDetails);
    
    // Ejecuta la compra
    _inAppPurchase.buyConsumable(purchaseParam: purchaseParam);
  }

  void _listenToPurchaseUpdated(List<PurchaseDetails> purchaseDetailsList) {
    for (var purchaseDetails in purchaseDetailsList) {
      if (purchaseDetails.status == PurchaseStatus.pending) {
        // UI de carga si es necesario
      } else {
        if (purchaseDetails.status == PurchaseStatus.error) {
          debugPrint('Purchase error: ${purchaseDetails.error}');
        } else if (purchaseDetails.status == PurchaseStatus.purchased ||
                   purchaseDetails.status == PurchaseStatus.restored) {
          _verifyPurchaseWithBackend(purchaseDetails);
        }
        
        if (purchaseDetails.pendingCompletePurchase) {
          _inAppPurchase.completePurchase(purchaseDetails);
        }
      }
    }
  }

  Future<void> _verifyPurchaseWithBackend(PurchaseDetails purchaseDetails) async {
    final session = Supabase.instance.client.auth.currentSession;
    if (session == null || _currentContext == null) return;
    
    try {
      // En Play Store, el serverVerificationData es el purchaseToken real
      final token = purchaseDetails.verificationData.serverVerificationData;
      final productId = purchaseDetails.productID;

      final response = await http.post(
        Uri.parse('$_backendUrl/player/verify-purchase'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'purchase_token': token,
          'product_id': productId,
        }),
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        final crystalsAdded = data['crystals_added'] as int;
        
        final gameProvider = Provider.of<GameProvider>(_currentContext!, listen: false);
        gameProvider.addCrystals(crystalsAdded);
        
        ScaffoldMessenger.of(_currentContext!).showSnackBar(
           SnackBar(content: Text('¡Compra exitosa! +$crystalsAdded Cristales'), backgroundColor: Colors.green),
        );
      } else {
        debugPrint('Verification failed: ${response.statusCode} - ${response.body}');
      }
    } catch (e) {
      debugPrint('Error verifying purchase: $e');
    }
  }
}
