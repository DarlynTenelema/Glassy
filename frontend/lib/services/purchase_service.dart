import 'dart:async';
import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:in_app_purchase/in_app_purchase.dart';
import 'package:http/http.dart' as http;
import '../providers/game_provider.dart';
import 'package:provider/provider.dart';
import 'auth_service.dart';
import 'storage_service.dart';
import '../config/env.dart';
import '../main.dart';

class PurchaseService {
  static final PurchaseService _instance = PurchaseService._internal();
  factory PurchaseService() => _instance;
  PurchaseService._internal();

  final InAppPurchase _inAppPurchase = InAppPurchase.instance;
  StreamSubscription<List<PurchaseDetails>>? _subscription;
  bool _isInitialized = false;
  
  // Backend URL centralizada
  final String _backendUrl = Env.backendUrl; 
  
  BuildContext? _currentContext;

  void initialize([BuildContext? context]) {
    if (context != null) {
      _currentContext = context;
    }
    if (_isInitialized) return;
    _isInitialized = true;
    
    final Stream<List<PurchaseDetails>> purchaseUpdated = _inAppPurchase.purchaseStream;
    _subscription = purchaseUpdated.listen((purchaseDetailsList) {
      _listenToPurchaseUpdated(purchaseDetailsList);
    }, onDone: () {
      _isInitialized = false;
      _subscription?.cancel();
      _subscription = null;
    }, onError: (error) {
      debugPrint('Purchase Stream Error: $error');
    });
  }

  void setContext(BuildContext context) {
    _currentContext = context;
  }

  void dispose() {
    _isInitialized = false;
    _subscription?.cancel();
    _subscription = null;
  }

  Future<bool> isAvailable() async {
    return await _inAppPurchase.isAvailable();
  }

  Future<Map<String, dynamic>?> getStoreStatus() async {
    try {
      final token = await AuthService().getFreshAccessToken();
      if (token == null) return null;

      final response = await http.get(
        Uri.parse('$_backendUrl/player/store-status'),
        headers: {
          'Authorization': 'Bearer $token',
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
      final token = await AuthService().getFreshAccessToken();
      if (token == null) return null;

      final response = await http.post(
        Uri.parse('$_backendUrl/player/piggy-bank/claim'),
        headers: {
          'Authorization': 'Bearer $token',
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
      final ctx = (_currentContext?.mounted == true) ? _currentContext : rootNavigatorKey.currentContext;
      if (ctx != null && ctx.mounted) {
         ScaffoldMessenger.of(ctx).showSnackBar(
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
        debugPrint('Purchase pending: ${purchaseDetails.productID}');
      } else {
        if (purchaseDetails.status == PurchaseStatus.error) {
          debugPrint('Purchase error: ${purchaseDetails.error}');
          if (purchaseDetails.pendingCompletePurchase) {
            _inAppPurchase.completePurchase(purchaseDetails);
          }
        } else if (purchaseDetails.status == PurchaseStatus.purchased ||
                   purchaseDetails.status == PurchaseStatus.restored) {
          // Se completa la compra dentro de _verifyPurchaseWithBackend tras recibir confirmación del backend
          _verifyPurchaseWithBackend(purchaseDetails);
        }
      }
    }
  }

  Future<void> _verifyPurchaseWithBackend(PurchaseDetails purchaseDetails) async {
    final token = await AuthService().getFreshAccessToken();
    if (token == null) {
      debugPrint('No access token available to verify purchase with backend');
      return;
    }
    
    try {
      // En Play Store, el serverVerificationData es el purchaseToken real
      final purchaseToken = purchaseDetails.verificationData.serverVerificationData;
      final productId = purchaseDetails.productID;

      final response = await http.post(
        Uri.parse('$_backendUrl/player/verify-purchase'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer $token',
        },
        body: jsonEncode({
          'purchase_token': purchaseToken,
          'product_id': productId,
        }),
      );

      final ctx = (_currentContext?.mounted == true) 
          ? _currentContext 
          : rootNavigatorKey.currentContext;

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        final crystalsAdded = data['crystals_added'] as int? ?? 0;
        
        // Guardar respaldo inmediato en almacenamiento local para prevenir pérdidas al salir
        final currentCrystals = StorageService().getInt('crystals', defaultValue: 0);
        await StorageService().setInt('crystals', currentCrystals + crystalsAdded);

        if (ctx != null && ctx.mounted) {
          final gameProvider = Provider.of<GameProvider>(ctx, listen: false);
          if (crystalsAdded > 0) {
            gameProvider.addCrystals(crystalsAdded);
          }
          gameProvider.fetchEconomyStatus();
          
          ScaffoldMessenger.of(ctx).showSnackBar(
             SnackBar(
               content: Text('¡Compra verificada con éxito! +$crystalsAdded Lapislázulis'), 
               backgroundColor: Colors.green,
             ),
          );
        }

        // CONFIRMACIÓN CRÍTICA: Notificar a Google Play que la compra fue entregada
        if (purchaseDetails.pendingCompletePurchase) {
          await _inAppPurchase.completePurchase(purchaseDetails);
        }
      } else if (response.statusCode == 409) {
        // La compra ya fue acreditada previamente en la BD.
        // Confirmamos en Google Play para no dejar la transacción pendiente reintentándose.
        debugPrint('Purchase already claimed in database (409). Completing in Google Play.');
        if (purchaseDetails.pendingCompletePurchase) {
          await _inAppPurchase.completePurchase(purchaseDetails);
        }
        if (ctx != null && ctx.mounted) {
          Provider.of<GameProvider>(ctx, listen: false).fetchEconomyStatus();
        }
      } else {
        debugPrint('Verification failed: ${response.statusCode} - ${response.body}');
        // Si falló (error de red o servidor temporal), NO llamamos a completePurchase.
        // Google Play mantendrá la compra pendiente y la reintentará automáticamente.
      }
    } catch (e) {
      debugPrint('Error verifying purchase: $e');
    }
  }
}
