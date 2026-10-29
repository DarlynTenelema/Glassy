import 'dart:async';
import 'package:flutter/foundation.dart';
import 'package:google_mobile_ads/google_mobile_ads.dart';

class AdService {
  static final AdService _instance = AdService._internal();
  factory AdService() => _instance;
  AdService._internal();

  // ID de producción configurado en Google AdMob (confirmado por el usuario)
  static const String _productionRewardedAdUnitId = 'ca-app-pub-6984024121811101/6599772715';
  // ID de prueba oficial de Google AdMob para anuncios de video bonificados (Rewarded)
  static const String _testRewardedAdUnitId = 'ca-app-pub-3940256099942544/5224354917';

  String get rewardedAdUnitId {
    // En modo desarrollo usamos el ID de prueba de Google para garantizar carga inmediata 100% de las veces
    // sin riesgo de penalización ni bloqueo por estado 'Debe revisarse' en AdMob.
    // En modo producción (Release / APK final) se usa automáticamente el ID real de Glassy.
    if (kDebugMode) {
      return _testRewardedAdUnitId;
    }
    return _productionRewardedAdUnitId;
  }

  RewardedAd? _rewardedAd;
  bool _isLoading = false;

  bool get isAdLoaded => _rewardedAd != null;

  /// Carga previa de un anuncio bonificado en segundo plano
  void loadRewardedAd({Function()? onLoaded, Function(LoadAdError error)? onFailed}) {
    if (_isLoading || _rewardedAd != null) return;
    _isLoading = true;

    RewardedAd.load(
      adUnitId: rewardedAdUnitId,
      request: const AdRequest(),
      rewardedAdLoadCallback: RewardedAdLoadCallback(
        onAdLoaded: (RewardedAd ad) {
          _rewardedAd = ad;
          _isLoading = false;
          debugPrint('AdMob: Anuncio bonificado cargado con éxito.');
          onLoaded?.call();
        },
        onAdFailedToLoad: (LoadAdError error) {
          _rewardedAd = null;
          _isLoading = false;
          debugPrint('AdMob: Error al cargar anuncio bonificado: ${error.code} - ${error.message}');
          onFailed?.call(error);
        },
      ),
    );
  }

  /// Muestra el anuncio bonificado. Devuelve true si el usuario vio el video y ganó la recompensa.
  Future<bool> showRewardedAd({required Function() onRewardEarned}) async {
    // Si no está cargado previamente, cargarlo ahora
    if (_rewardedAd == null) {
      final completer = Completer<bool>();
      loadRewardedAd(
        onLoaded: () {
          if (!completer.isCompleted) completer.complete(true);
        },
        onFailed: (error) {
          if (!completer.isCompleted) completer.complete(false);
        },
      );

      final loaded = await completer.future.timeout(
        const Duration(seconds: 8),
        onTimeout: () {
          _isLoading = false;
          return false;
        },
      );

      if (!loaded || _rewardedAd == null) {
        debugPrint('AdMob: No se pudo mostrar el anuncio porque falló la carga.');
        return false;
      }
    }

    final ad = _rewardedAd!;
    _rewardedAd = null; // Consumir la instancia

    bool rewardGranted = false;

    ad.fullScreenContentCallback = FullScreenContentCallback(
      onAdDismissedFullScreenContent: (RewardedAd ad) {
        debugPrint('AdMob: Anuncio cerrado por el usuario.');
        ad.dispose();
        // Precargar el siguiente anuncio en segundo plano
        loadRewardedAd();
      },
      onAdFailedToShowFullScreenContent: (RewardedAd ad, AdError error) {
        debugPrint('AdMob: Error al reproducir anuncio: ${error.message}');
        ad.dispose();
        loadRewardedAd();
      },
    );

    await ad.show(
      onUserEarnedReward: (AdWithoutView ad, RewardItem reward) {
        debugPrint('AdMob: Recompensa obtenida por el usuario: ${reward.amount} ${reward.type}');
        rewardGranted = true;
        onRewardEarned();
      },
    );

    return rewardGranted;
  }
}
