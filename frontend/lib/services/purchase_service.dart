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
  final String _backendUrl = 'https://glassy-production.up.railway.app/api'; 
  
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

  Future<Map<String, dynamic>?> getStoreStatus() async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return null;

      final response = await http.get(
        Uri.parse('$_backendUrl/player/store-status'),
        headers: {
          'Authorization': 'Bearer ${session.accessToken}',
        },
      );

      if (response.statusCode == 200) {
        return jsonDecode(response.body) as Map<String, dynamic>;
      } else {
        debugPrint('Error fetching store status: ${response.statusCode} - ${response.body}');
      }
    } catch (e) {
      debugPrint('Exception fetching store status: $e');
    }
    return null;
  }

  Future<Map<String, dynamic>?> claimPiggyBank() async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return null;

      final response = await http.post(
        Uri.parse('$_backendUrl/player/piggy-bank/claim'),
        headers: {
          'Authorization': 'Bearer ${session.accessToken}',
          'Content-Type': 'application/json',
        },
      );

      if (response.statusCode == 200) {
        return jsonDecode(response.body) as Map<String, dynamic>;
      } else {
        debugPrint('Error claiming piggy bank: ${response.statusCode} - ${response.body}');
      }
    } catch (e) {
      debugPrint('Exception claiming piggy bank: $e');
    }
    return null;
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
    
    // Ejecuta la compra: Si es suscripción es NonConsumable, si es cristales es Consumable
    if (productId.startsWith('sub_')) {
      _inAppPurchase.buyNonConsumable(purchaseParam: purchaseParam);
    } else {
      _inAppPurchase.buyConsumable(purchaseParam: purchaseParam);
    }
  }

  void _listenToPurchaseUpdated(List<PurchaseDetails> purchaseDetailsList) {
    for (var purchaseDetails in purchaseDetailsList) {
      if (purchaseDetails.status == PurchaseStatus.pending) {
        // UI de carga si es necesario
      } else {
        if (purchaseDetails.status == PurchaseStatus.error) {
          debugPrint('Purchase error: ${purchaseDetails.error}');
          if (purchaseDetails.pendingCompletePurchase) {
            _inAppPurchase.completePurchase(purchaseDetails);
          }
        } else if (purchaseDetails.status == PurchaseStatus.purchased ||
                   purchaseDetails.status == PurchaseStatus.restored) {
          // Solo se completa la compra dentro de _verifyPurchaseWithBackend tras recibir HTTP 200 OK
          _verifyPurchaseWithBackend(purchaseDetails);
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
        final crystalsAdded = data['crystals_added'] as int? ?? 0;
        
        if (_currentContext != null && _currentContext!.mounted) {
          final gameProvider = Provider.of<GameProvider>(_currentContext!, listen: false);
          if (crystalsAdded > 0) {
            gameProvider.addCrystals(crystalsAdded);
          }
          gameProvider.fetchEconomyStatus();
          
          ScaffoldMessenger.of(_currentContext!).showSnackBar(
             SnackBar(
               content: Text('¡Compra verificada con éxito! +$crystalsAdded Lapislázulis'), 
               backgroundColor: Colors.green,
             ),
          );
        }

        // CONFIRMACIÓN CRÍTICA: Solo le decimos a Google que la compra fue completada
        // DESPUÉS de que el servidor la registró y acreditó exitosamente.
        if (purchaseDetails.pendingCompletePurchase) {
          await _inAppPurchase.completePurchase(purchaseDetails);
        }
      } else {
        debugPrint('Verification failed: ${response.statusCode} - ${response.body}');
        // Si falló (error de red o servidor temporal), NO llamamos a completePurchase.
        // Google Play mantendrá la compra pendiente y la reintentará automáticamente al reiniciar la app.
      }
    } catch (e) {
      debugPrint('Error verifying purchase: $e');
    }
  }
}
