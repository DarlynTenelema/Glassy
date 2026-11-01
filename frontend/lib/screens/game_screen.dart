import 'package:glassy/theme/app_colors.dart';
import '../services/skin_themes.dart';
import 'dart:async';
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../widgets/glassy_game_view.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../widgets/ui/glass_card.dart';
import '../widgets/gaming_button.dart';
import '../flutter_unity_bridge/src/unity_bridge_controller.dart';
import '../services/audio_service.dart';
import '../services/achievements_service.dart';
import '../services/game_api_service.dart';
import '../services/purchase_service.dart';
import '../services/ad_service.dart';
import '../widgets/ui/currency_icon.dart';
import 'package:share_plus/share_plus.dart';
import '../l10n/l10n_extension.dart';
import '../l10n/app_localizations.dart';

class GameScreen extends StatefulWidget {
  const GameScreen({super.key});

  @override
  State<GameScreen> createState() => _GameScreenState();
}

class _GameScreenState extends State<GameScreen> {
  dynamic _unityWidgetController;
  late UnityBridgeController _bridgeController;
  
  // Suscripciones para evitar memory leaks
  StreamSubscription? _readySub;
  StreamSubscription? _scoreSub;

  StreamSubscription? _gameOverSub;
  StreamSubscription? _achievementSub;
  StreamSubscription? _comboBonusSub;
  StreamSubscription? _epicSaveSub;
  StreamSubscription? _dangerZoneSub;
  StreamSubscription? _missionStartedSub;
  StreamSubscription? _missionUpdatedSub;
  StreamSubscription? _missionCompletedSub;
  StreamSubscription? _reviveOpportunitySub;
  Timer? _missionTimer;
  Timer? _comboTimerDisplay;

  bool _isDangerZone = false;
  String? _epicSaveText;
  String? _comboText;
  
  bool _isMissionActive = false;
  String _missionText = '';
  int _missionGemType = -1;
  int _missionTargetAmount = 0;
  int _missionCurrent = 0;
  int _missionTarget = 0;
  int _missionTimeRemaining = 0;
  String _missionAction = 'merge';
  String? _missionCompleteText;

  String _getGemName(AppLocalizations l10n, int gemType, {String? skinId, int count = 1}) {
    if (skinId != null && skinId != 'gemas_clasicas') {
      return SkinThemes.getElementName(skinId, gemType, count: count);
    }
    switch (gemType) {
      case 0: return l10n.gemPearl;
      case 1: return l10n.gemEmerald;
      case 2: return l10n.gemAmethyst;
      case 3: return l10n.gemTopaz;
      case 4: return l10n.gemGreenRuby;
      case 5: return l10n.gemSapphire;
      case 6: return l10n.gemRedRuby;
      case 7: return l10n.gemDiamond;
      default: return l10n.gemDefault;
    }
  }
  
  bool _isPaused = false;
  bool _isGameOver = false;
  bool _showStartBanner = false;
  
  // Estado de configuración local
  bool _volumen = true;
  bool _efectos = true;
  double _musicVolume = 1.0;
  
  int _score = 0;
  int _highScore = 0; // Para la lógica de "Nuevo Score"
  String? _videoPathReady;

  // Modelo Appodeal - Recompensa Base + Duplicador x2
  bool _rewardDoubled = false;
  bool _isDoublingReward = false;
  bool _baseRewardAwarded = false;

  // Modelo Appodeal - Oportunidad de Revivir (Salvar Partida)
  bool _showReviveDialog = false;
  int _reviveCountdown = 5;
  Timer? _reviveTimer;
  bool _isReviving = false;

  @override
  void initState() {
    super.initState();
    // Precarga automática en segundo plano para disponibilidad instantánea al Game Over
    AdService().loadRewardedAd();
    WidgetsBinding.instance.addPostFrameCallback((_) {
      if (mounted) {
        PurchaseService().initialize(context);
      }
    });
  }

  void onUnityCreated(dynamic controller) {
    AudioService().stopBgMusic();
    _unityWidgetController = controller;
    _bridgeController = UnityBridgeController(_unityWidgetController);
    
    // Configurar suscripciones a los eventos de Unity
    _readySub = _bridgeController.onReady.listen((_) {
      if (mounted) {
        setState(() {
          _showStartBanner = true;
          _isGameOver = false; // Asegurar estado limpio
          _rewardDoubled = false;
          _isDoublingReward = false;
          _baseRewardAwarded = false;
          _showReviveDialog = false;
          _reviveTimer?.cancel();
        });
        
        // Reproducir música ahora que Unity y Flutter están listos
        _unityWidgetController.postMessage('AudioManager', 'PlayStartGameFromFlutter', '');
        _unityWidgetController.postMessage('AudioManager', 'PlayMusicFromFlutter', '');
        
        // Pasar el token a Unity
        final session = Supabase.instance.client.auth.currentSession;
        if (session != null) {
          _bridgeController.sendAuthToken(session.accessToken);
        }
        
        // Pasar la skin actual seleccionada a Unity
        // Pasar la skin actual seleccionada a Unity y los cristales
        final gameProvider = Provider.of<GameProvider>(context, listen: false);
        _bridgeController.setSkin(gameProvider.selectedSkinId);
        _bridgeController.updateCrystals(gameProvider.crystals);
        
        // Cargar y enviar configuración de audio
        _loadAndSendSettings();

        // Ocultar la barra de inicio después de 3 segundos
        Future.delayed(const Duration(seconds: 3), () {
          if (mounted) {
            setState(() {
              _showStartBanner = false;
            });
          }
        });
      }
    });

    _scoreSub = _bridgeController.onScoreUpdated.listen((payload) {
      if (mounted) setState(() => _score = payload.currentScore);
    });



    _gameOverSub = _bridgeController.onGameOver.listen((payload) {
      if (mounted) {
        setState(() {
          _score = payload.finalScore;
          _isGameOver = true;
          _rewardDoubled = false;
          _isDoublingReward = false;
          if (_score > _highScore) {
            _highScore = _score;
          }
        });

        // Recompensa base por partida jugada: +1 Lapislázuli acreditado de inmediato en la UI
        if (payload.finalScore >= 10 && !_baseRewardAwarded) {
          _baseRewardAwarded = true;
          Provider.of<GameProvider>(context, listen: false).addCrystals(1);
        }
      }
      // Llamadas a la API centralizadas en Flutter usando el JWT correcto y fresco
      GameApiService().submitScoreWithRetry(payload.finalScore);
      GameApiService().updateMissionProgress(1); // +1 partida jugada
    });

    _achievementSub = _bridgeController.onAchievementProgress.listen((payload) {
      AchievementsService().updateProgress(payload.groupId, payload.level, payload.progressAdded);
    });
    
    _dangerZoneSub = _bridgeController.onDangerZone.listen((payload) {
      if (mounted) setState(() => _isDangerZone = payload.isDanger);
    });

    _epicSaveSub = _bridgeController.onEpicSave.listen((payload) {
      if (mounted) {
        setState(() => _epicSaveText = context.l10n.epicSave(payload.bonus));
        Future.delayed(const Duration(seconds: 3), () {
          if (mounted) setState(() => _epicSaveText = null);
        });
      }
    });

    _comboBonusSub = _bridgeController.onComboBonus.listen((payload) {
      if (mounted) {
        setState(() => _comboText = context.l10n.comboText(payload.combo, payload.bonus));
        _comboTimerDisplay?.cancel();
        _comboTimerDisplay = Timer(const Duration(seconds: 2), () {
          if (mounted) setState(() => _comboText = null);
        });
      }
    });

    _missionStartedSub = _bridgeController.onMissionStarted.listen((payload) {
      if (mounted) {
        setState(() {
          _isMissionActive = true;
          _missionGemType = payload.gemType;
          _missionTargetAmount = payload.targetAmount;
          _missionAction = payload.action;
          _missionCurrent = 0;
          _missionTarget = payload.targetAmount > 0 
              ? payload.targetAmount 
              : (int.tryParse(payload.text.split(' ')[1]) ?? 3);
          _missionText = payload.text;
          _missionTimeRemaining = payload.timeLimitSeconds;
        });
        _missionTimer?.cancel();
        _missionTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
          if (!mounted) return;
          if (_isPaused) return; // Pausar temporizador si el juego está en pausa
          setState(() {
            _missionTimeRemaining--;
            if (_missionTimeRemaining <= 0 || !_isMissionActive) {
              _missionTimer?.cancel();
              _isMissionActive = false;
            }
          });
        });
      }
    });

    _missionUpdatedSub = _bridgeController.onMissionUpdated.listen((payload) {
      if (mounted) {
        setState(() {
          _missionCurrent = payload.currentProgress;
          _missionTarget = payload.targetProgress;
        });
      }
      
      // La actualización de misión de recoger gemas se guarda en el servidor
      // GameApiService().updateMissionProgress(payload.currentProgress, payload.targetProgress); 
      // Nota: Si esto se llama muy rápido por cada gema, es mejor dejar que Unity mande un MISSION_COMPLETED
      // y actualizar ahí.
    });

    _missionCompletedSub = _bridgeController.onMissionCompleted.listen((payload) {
      if (mounted) {
        setState(() {
          _isMissionActive = false;
          _missionTimer?.cancel();
          _missionCompleteText = '${context.l10n.missionComplete}\n+${payload.bonusPoints}';
        });
        Future.delayed(const Duration(seconds: 3), () {
          if (mounted) setState(() => _missionCompleteText = null);
        });
      }
    });

    _reviveOpportunitySub = _bridgeController.onReviveOpportunity.listen((payload) {
      if (mounted) {
        _triggerReviveOpportunity(payload.currentScore);
      }
    });

    // Reiniciar la escena en Unity siempre que se entre aquí para borrar estado previo
    // Esto lo dejamos afuera porque UnityWidget puede ya estar instanciado en caché.
    _unityWidgetController.postMessage('GameManager', 'RestartGame', '');
    _unityWidgetController.postMessage('AudioManager', 'PlayMusicFromFlutter', '');
  }


  Future<void> _loadAndSendSettings() async {
    final prefs = await SharedPreferences.getInstance();
    if (mounted) {
      setState(() {
        _volumen = prefs.getBool('volume') ?? true;
        _efectos = prefs.getBool('effects') ?? true;
        _musicVolume = prefs.getDouble('musicVolume') ?? 1.0;
      });
    }
    _bridgeController.updateAudioSettings(_volumen, _efectos, _musicVolume);
  }

  Future<void> _saveSetting(String key, bool value) async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setBool(key, value);
  }

  Future<void> _saveDoubleSetting(String key, double value) async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setDouble(key, value);
  }

  void _shareVideo() async {
    if (_videoPathReady != null) {
      await Share.shareXFiles([XFile(_videoPathReady!)], text: '¡Mira mi partida en Glassy!');
    }
  }

  void onUnityMessage(dynamic message) {
    if (message.toString().startsWith("VIDEO_READY:")) {
      if (mounted) {
        setState(() {
          _videoPathReady = message.toString().split("VIDEO_READY:")[1];
        });
      }
      return;
    }
    // Delegamos el procesamiento del mensaje al BridgeController
    _bridgeController.receiveMessageFromUnity(message);
  }

  Future<bool> _onExitPressed() async {
    if (_isGameOver) {
      return true;
    }
    
    bool wasPaused = _isPaused;
    if (!_isPaused) {
      _togglePause();
    }

    final bool? shouldExit = await showDialog<bool>(
      context: context,
      barrierDismissible: false,
      barrierColor: Colors.black.withValues(alpha: 0.6), // Fondo oscuro
      builder: (context) => Dialog(
        backgroundColor: Colors.transparent,
        elevation: 0,
        child: BackdropFilter(
          filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
          child: Stack(
            clipBehavior: Clip.none,
            alignment: Alignment.center,
            children: [
              GlassCard(
                padding: const EdgeInsets.only(top: 80, left: 30, right: 30, bottom: 30),
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    Text(
                      '¿ABANDONAR PARTIDA?',
                      textAlign: TextAlign.center,
                      style: Theme.of(context).textTheme.titleLarge?.copyWith(
                        color: Colors.white,
                        fontWeight: FontWeight.w900,
                        letterSpacing: 2,
                        shadows: [const Shadow(color: AppColors.lightBlue, blurRadius: 15)],
                      ),
                    ),
                    const SizedBox(height: 15),
                    const Text(
                      'Si sales ahora, terminará la partida y se guardará tu puntaje actual.',
                      textAlign: TextAlign.center,
                      style: TextStyle(color: Colors.white70, fontSize: 16),
                    ),
                    const SizedBox(height: 35),
                    GamingButton(
                      text: 'CONTINUAR',
                      height: 50,
                      fontSize: 16,
                      primaryColor: AppColors.lightBlue,
                      secondaryColor: AppColors.lightBlue,
                      onPressed: () => Navigator.of(context).pop(false),
                    ),
                    const SizedBox(height: 15),
                    GamingButton(
                      text: 'SALIR DEL JUEGO',
                      height: 50,
                      fontSize: 16,
                      primaryColor: Colors.redAccent,
                      secondaryColor: Colors.red,
                      onPressed: () => Navigator.of(context).pop(true),
                    ),
                  ],
                ),
              ),
              Positioned(
                top: -120,
                child: Image.asset(
                  'assets/avatar/personaje/glassy_lapislazully_surprised.png',
                  height: 180,
                ),
              ),
            ],
          ),
        ),
      ),
    );

    if (shouldExit == true) {
      if (_isPaused) _togglePause();
      try {
        _unityWidgetController.postMessage('GameManager', 'TriggerGameOver', '');
      } catch (_) {}
      if (mounted) {
        setState(() {
          _isGameOver = true;
          if (_score > _highScore) {
            _highScore = _score;
          }
        });
      }
      // Aseguramos el registro del puntaje alcanzado al abandonar por voluntad propia
      GameApiService().submitScoreWithRetry(_score);
      GameApiService().updateMissionProgress(1);
      return false; // Muestra el overlay de Fin de Partida con el puntaje y botón de volver al menú
    } else {
      if (!wasPaused && _isPaused) _togglePause();
      return false;
    }
  }

  void _togglePause() {
    setState(() {
      _isPaused = !_isPaused;
    });
    // Enviar mensaje a Unity usando el bridge
    _bridgeController.pauseGame(_isPaused);
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);
    final currentSkinId = gameProvider.selectedSkinId;
    final screenSize = MediaQuery.of(context).size;
    final bool isWideScreen = screenSize.width >= 750 && (screenSize.width / screenSize.height) >= 0.85;

    return PopScope(
      canPop: false,
      onPopInvokedWithResult: (didPop, result) async {
        if (didPop) return;
        final navigator = Navigator.of(context);
        final bool canExit = await _onExitPressed();
        if (canExit && mounted) {
          navigator.pop();
        }
      },
      child: Scaffold(
      backgroundColor: Colors.black,
      body: Stack(
        children: [
          // 1. Capa Base: Motor de Juego con la Skin Equipada
          GlassyNativeView(
            skinId: currentSkinId,
            onCreated: onUnityCreated,
            onMessage: onUnityMessage,
          ),
          
          // 2. Capa de HUD Responsiva
          if (isWideScreen)
            _buildWideHUD(currentSkinId, gameProvider)
          else
            _buildMobileHUD(currentSkinId, gameProvider),
          
          // Misión Express Adaptativa:
          // En móvil: dock inferior
          // En tablet/computadora: ala lateral izquierda para NO tapar el fondo del frasco
          if (_isMissionActive)
            if (isWideScreen)
              Positioned(
                left: 20,
                top: 90,
                child: ConstrainedBox(
                  constraints: const BoxConstraints(maxWidth: 280),
                  child: _buildWideMissionWidget(currentSkinId),
                ),
              )
            else
              Positioned(
                bottom: 80,
                left: 0,
                right: 0,
                child: Center(
                  child: _buildMissionWidget(skinId: currentSkinId),
                ),
              ),

          // En tablet y computadora: Ala derecha con Stats y Botones de acción rápida
          if (isWideScreen)
            Positioned(
              right: 20,
              top: 90,
              child: ConstrainedBox(
                constraints: const BoxConstraints(maxWidth: 240),
                child: _buildWideRightPanel(currentSkinId),
              ),
            ),
          
          // Efectos Visuales Especiales (Danger Zone, Combos, Salvada)
          if (_isDangerZone && !_isGameOver && !_isPaused) _buildDangerZoneOverlay(),
          if (_comboText != null) _buildComboOverlay(),
          if (_epicSaveText != null) _buildEpicSaveOverlay(),
          if (_missionCompleteText != null) _buildMissionCompletedOverlay(),
          
          // 3. Capa de Overlays (Pausa, Salvar Partida o Game Over)
          if (_isPaused) _buildPauseOverlay(),
          if (_showReviveDialog) _buildReviveOverlay(),
          
          // 4. Capa Táctil de Salida Rápida (Game Over)
          if (_isGameOver) _buildGameOverOverlay(),
          
          // 5. Banners Animados (Inicio y Game Over)
          _buildAnimatedBanner(),
        ],
      ),
      ),
    );
  }

  Widget _buildDangerZoneOverlay() {
    return IgnorePointer(
      child: Container(
        decoration: BoxDecoration(
          border: Border.all(color: Colors.redAccent.withValues(alpha: 0.6), width: 8),
          gradient: RadialGradient(
            colors: [Colors.transparent, Colors.red.withValues(alpha: 0.2)],
            radius: 1.5,
          ),
        ),
      ),
    );
  }

  Widget _buildComboOverlay() {
    return IgnorePointer(
      child: Center(
        child: TweenAnimationBuilder(
          key: ValueKey(_comboText),
          tween: Tween<double>(begin: 0.5, end: 1.0),
          duration: const Duration(milliseconds: 300),
          curve: Curves.elasticOut,
          builder: (context, value, child) {
            return Transform.scale(
              scale: value,
              child: Text(
                _comboText!,
                textAlign: TextAlign.center,
                style: const TextStyle(
                  color: Colors.amberAccent,
                  fontSize: 40,
                  fontWeight: FontWeight.w900,
                  shadows: [Shadow(color: Colors.orange, blurRadius: 20)],
                ),
              ),
            );
          },
        ),
      ),
    );
  }

  Widget _buildEpicSaveOverlay() {
    return IgnorePointer(
      child: Center(
        child: Container(
          padding: const EdgeInsets.symmetric(horizontal: 30, vertical: 20),
          decoration: BoxDecoration(
            color: Colors.black.withValues(alpha: 0.6),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.greenAccent, width: 2),
            boxShadow: [BoxShadow(color: Colors.green.withValues(alpha: 0.4), blurRadius: 30)],
          ),
          child: TweenAnimationBuilder(
            tween: Tween<double>(begin: 0.0, end: 1.0),
            duration: const Duration(milliseconds: 600),
            curve: Curves.bounceOut,
            builder: (context, value, child) {
              return Transform.scale(
                scale: value,
                child: Text(
                  _epicSaveText!,
                  textAlign: TextAlign.center,
                  style: const TextStyle(
                    color: Colors.greenAccent,
                    fontSize: 35,
                    fontWeight: FontWeight.w900,
                    shadows: [Shadow(color: Colors.green, blurRadius: 15)],
                  ),
                ),
              );
            },
          ),
        ),
      ),
    );
  }

  Widget _buildMobileHUD(String? skinId, GameProvider provider) {
    return SafeArea(
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Contador de Lapislázulis
            Container(
              padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.5),
                borderRadius: BorderRadius.circular(20),
                border: Border.all(color: AppColors.lightBlue, width: 1),
                boxShadow: [
                  BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.3), blurRadius: 8),
                ],
              ),
              child: Row(
                children: [
                  const CurrencyIcon(size: 20),
                  const SizedBox(width: 6),
                  Text(
                    '${provider.crystals}',
                    style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                  ),
                ],
              ),
            ),

            // Score Central
            Container(
              padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.6),
                borderRadius: BorderRadius.circular(25),
                border: Border.all(color: Colors.white24, width: 1),
              ),
              child: Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  const Text('SCORE', style: TextStyle(color: Colors.white70, fontSize: 10, letterSpacing: 2)),
                  Text(
                    '$_score',
                    style: const TextStyle(
                      color: Colors.white,
                      fontSize: 24,
                      fontWeight: FontWeight.w900,
                      shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 10)],
                    ),
                  ),
                ],
              ),
            ),

            // Botones Pausa y Salir
            Row(
              mainAxisSize: MainAxisSize.min,
              children: [
                IconButton(
                  onPressed: _togglePause,
                  icon: Icon(
                    _isPaused ? Icons.play_arrow : Icons.pause,
                    color: Colors.white,
                    size: 28,
                    shadows: [Shadow(color: Colors.white.withValues(alpha: 0.9), blurRadius: 10)],
                  ),
                ),
                IconButton(
                  onPressed: () async {
                    final navigator = Navigator.of(context);
                    final bool canExit = await _onExitPressed();
                    if (canExit && mounted) navigator.pop();
                  },
                  icon: Icon(
                    Icons.close,
                    color: Colors.white,
                    size: 28,
                    shadows: [Shadow(color: Colors.white.withValues(alpha: 0.9), blurRadius: 10)],
                  ),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildWideHUD(String? skinId, GameProvider provider) {
    return SafeArea(
      child: Align(
        alignment: Alignment.topCenter,
        child: Container(
          constraints: const BoxConstraints(maxWidth: 480),
          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              // Contador de Lapislázulis
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
                decoration: BoxDecoration(
                  color: Colors.black.withValues(alpha: 0.6),
                  borderRadius: BorderRadius.circular(20),
                  border: Border.all(color: AppColors.lightBlue, width: 1.5),
                  boxShadow: [
                    BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.3), blurRadius: 8),
                  ],
                ),
                child: Row(
                  children: [
                    const CurrencyIcon(size: 20),
                    const SizedBox(width: 8),
                    Text(
                      '${provider.crystals}',
                      style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                    ),
                  ],
                ),
              ),

              // Score Central
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 8),
                decoration: BoxDecoration(
                  color: Colors.black.withValues(alpha: 0.6),
                  borderRadius: BorderRadius.circular(25),
                  border: Border.all(color: Colors.white24, width: 1),
                ),
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    const Text('SCORE', style: TextStyle(color: Colors.white70, fontSize: 10, letterSpacing: 2)),
                    Text(
                      '$_score',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 22,
                        fontWeight: FontWeight.w900,
                        shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 10)],
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildMissionWidget({String? skinId}) {
    String displayMissionText = _missionText;
    if (_missionGemType >= 0 && _missionTargetAmount > 0) {
      displayMissionText = SkinThemes.getMissionText(skinId, _missionGemType, _missionTargetAmount, action: _missionAction);
    }
    final iconAsset = SkinThemes.getElementAsset(skinId, _missionGemType);

    return Container(
      margin: const EdgeInsets.only(top: 5),
      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
      decoration: BoxDecoration(
        color: const Color(0xE60E0B1C),
        borderRadius: BorderRadius.circular(22),
        border: Border.all(color: Colors.orangeAccent.withValues(alpha: 0.8), width: 1.5),
        boxShadow: [BoxShadow(color: Colors.orange.withValues(alpha: 0.25), blurRadius: 15)],
      ),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        children: [
          Image.asset(
            iconAsset,
            width: 28,
            height: 28,
            fit: BoxFit.contain,
            errorBuilder: (c, e, s) => const Icon(Icons.star, color: Colors.orangeAccent, size: 24),
          ),
          const SizedBox(width: 10),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            mainAxisSize: MainAxisSize.min,
            children: [
              Text(
                displayMissionText,
                style: const TextStyle(color: Colors.white, fontSize: 14, fontWeight: FontWeight.bold),
              ),
              const SizedBox(height: 2),
              Row(
                children: [
                  Text(
                    '$_missionCurrent / $_missionTarget',
                    style: const TextStyle(color: Colors.orangeAccent, fontSize: 12, fontWeight: FontWeight.w900),
                  ),
                  const SizedBox(width: 12),
                  const Icon(Icons.timer_outlined, color: Colors.white70, size: 14),
                  const SizedBox(width: 4),
                  Text(
                    '${_missionTimeRemaining}s',
                    style: TextStyle(
                      color: _missionTimeRemaining <= 10 ? Colors.redAccent : Colors.white70,
                      fontSize: 12,
                      fontWeight: _missionTimeRemaining <= 10 ? FontWeight.bold : FontWeight.normal,
                    ),
                  ),
                ],
              ),
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildWideMissionWidget(String? skinId) {
    String displayMissionText = _missionText;
    if (_missionGemType >= 0 && _missionTargetAmount > 0) {
      displayMissionText = SkinThemes.getMissionText(skinId, _missionGemType, _missionTargetAmount, action: _missionAction);
    }
    final iconAsset = SkinThemes.getElementAsset(skinId, _missionGemType);
    final progress = _missionTarget > 0 ? (_missionCurrent / _missionTarget).clamp(0.0, 1.0) : 0.0;

    return ClipRRect(
      borderRadius: BorderRadius.circular(20),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 12, sigmaY: 12),
        child: Container(
          padding: const EdgeInsets.all(16),
          decoration: BoxDecoration(
            color: const Color(0xCC0E0B1C),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.orangeAccent.withValues(alpha: 0.6), width: 1.5),
            boxShadow: [
              BoxShadow(
                color: Colors.orange.withValues(alpha: 0.2),
                blurRadius: 20,
                spreadRadius: 2,
              ),
            ],
          ),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            mainAxisSize: MainAxisSize.min,
            children: [
              Row(
                children: [
                  const Icon(Icons.track_changes, color: Colors.orangeAccent, size: 18),
                  const SizedBox(width: 6),
                  const Text(
                    'MISIÓN EXPRESS',
                    style: TextStyle(
                      color: Colors.orangeAccent,
                      fontSize: 12,
                      fontWeight: FontWeight.w900,
                      letterSpacing: 1.2,
                    ),
                  ),
                  const Spacer(),
                  Container(
                    padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 3),
                    decoration: BoxDecoration(
                      color: (_missionTimeRemaining <= 10 ? Colors.redAccent : Colors.white.withValues(alpha: 0.1)),
                      borderRadius: BorderRadius.circular(10),
                    ),
                    child: Row(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        const Icon(Icons.timer_outlined, color: Colors.white, size: 12),
                        const SizedBox(width: 3),
                        Text(
                          '${_missionTimeRemaining}s',
                          style: const TextStyle(color: Colors.white, fontSize: 11, fontWeight: FontWeight.bold),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
              const SizedBox(height: 14),
              Row(
                children: [
                  Container(
                    width: 44,
                    height: 44,
                    padding: const EdgeInsets.all(4),
                    decoration: BoxDecoration(
                      color: Colors.white.withValues(alpha: 0.05),
                      borderRadius: BorderRadius.circular(12),
                      border: Border.all(color: Colors.white.withValues(alpha: 0.15)),
                    ),
                    child: Image.asset(
                      iconAsset,
                      fit: BoxFit.contain,
                      errorBuilder: (c, e, s) => const Icon(Icons.star, color: Colors.orangeAccent, size: 24),
                    ),
                  ),
                  const SizedBox(width: 10),
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          displayMissionText,
                          style: const TextStyle(
                            color: Colors.white,
                            fontSize: 13,
                            fontWeight: FontWeight.bold,
                          ),
                          maxLines: 2,
                          overflow: TextOverflow.ellipsis,
                        ),
                        const SizedBox(height: 4),
                        Text(
                          'Progreso: $_missionCurrent / $_missionTarget',
                          style: const TextStyle(color: Colors.white70, fontSize: 11),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
              const SizedBox(height: 12),
              ClipRRect(
                borderRadius: BorderRadius.circular(6),
                child: LinearProgressIndicator(
                  value: progress,
                  minHeight: 8,
                  backgroundColor: Colors.white.withValues(alpha: 0.1),
                  valueColor: const AlwaysStoppedAnimation<Color>(Colors.orangeAccent),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildWideRightPanel(String? skinId) {
    return ClipRRect(
      borderRadius: BorderRadius.circular(20),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 12, sigmaY: 12),
        child: Container(
          padding: const EdgeInsets.all(16),
          decoration: BoxDecoration(
            color: const Color(0xCC0E0B1C),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: AppColors.lightBlue.withValues(alpha: 0.4), width: 1.5),
          ),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.center,
            mainAxisSize: MainAxisSize.min,
            children: [
              const Text(
                'SCORE',
                style: TextStyle(color: Colors.white60, fontSize: 11, letterSpacing: 2, fontWeight: FontWeight.bold),
              ),
              const SizedBox(height: 4),
              Text(
                '$_score',
                style: const TextStyle(
                  color: Colors.white,
                  fontSize: 26,
                  fontWeight: FontWeight.w900,
                  shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 10)],
                ),
              ),
              if (_highScore > 0) ...[
                const SizedBox(height: 4),
                Text(
                  'RÉCORD: $_highScore',
                  style: const TextStyle(color: Colors.amberAccent, fontSize: 11, fontWeight: FontWeight.bold),
                ),
              ],
              const SizedBox(height: 12),
              const Divider(color: Colors.white12, height: 1),
              const SizedBox(height: 10),
              Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  IconButton(
                    onPressed: _togglePause,
                    tooltip: 'Pausa',
                    icon: Icon(
                      _isPaused ? Icons.play_arrow : Icons.pause,
                      color: Colors.white,
                      size: 26,
                    ),
                  ),
                  const SizedBox(width: 8),
                  IconButton(
                    onPressed: () async {
                      final navigator = Navigator.of(context);
                      final bool canExit = await _onExitPressed();
                      if (canExit && mounted) navigator.pop();
                    },
                    tooltip: 'Salir',
                    icon: const Icon(
                      Icons.close,
                      color: Colors.white,
                      size: 26,
                    ),
                  ),
                ],
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildMissionCompletedOverlay() {
    return IgnorePointer(
      child: Center(
        child: TweenAnimationBuilder(
          tween: Tween<double>(begin: 0.0, end: 1.0),
          duration: const Duration(milliseconds: 600),
          curve: Curves.elasticOut,
          builder: (context, value, child) {
            return Transform.scale(
              scale: value,
              child: Container(
                padding: const EdgeInsets.symmetric(horizontal: 30, vertical: 20),
                decoration: BoxDecoration(
                  color: Colors.orange.withValues(alpha: 0.85),
                  borderRadius: BorderRadius.circular(25),
                  border: Border.all(color: Colors.orangeAccent, width: 2),
                  boxShadow: [BoxShadow(color: Colors.orangeAccent, blurRadius: 30)],
                ),
                child: Text(
                  _missionCompleteText!,
                  textAlign: TextAlign.center,
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 32,
                    fontWeight: FontWeight.w900,
                  ),
                ),
              ),
            );
          },
        ),
      ),
    );
  }

  Widget _buildPauseOverlay() {
    return BackdropFilter(
      filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
      child: Container(
        color: Colors.black.withValues(alpha: 0.4),
        child: Center(
          child: GlassCard(
            padding: const EdgeInsets.symmetric(vertical: 40, horizontal: 25),
            width: 340,
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                const Icon(Icons.pause_circle_filled_rounded, color: AppColors.lightBlue, size: 60),
                const SizedBox(height: 10),
                Text(
                  context.l10n.breakTitle,
                  style: Theme.of(context).textTheme.displaySmall?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 4,
                    shadows: [const Shadow(color: AppColors.lightBlue, blurRadius: 20)],
                  ),
                ),
                const SizedBox(height: 30),
                
                // Configuración
                Text(context.l10n.quickSettings, style: const TextStyle(color: AppColors.lightBlue, fontWeight: FontWeight.bold, letterSpacing: 1.5)),
                const SizedBox(height: 10),
                Container(
                  decoration: BoxDecoration(
                    color: Colors.white.withValues(alpha: 0.05),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  child: Column(
                    children: [
                      SwitchListTile(
                        title: Text(context.l10n.generalVolume, style: const TextStyle(color: Colors.white)),
                        value: _volumen,
                        activeThumbColor: AppColors.lightBlue,
                        onChanged: (v) {
                          setState(() => _volumen = v);
                          _saveSetting('volume', v);
                          _bridgeController.updateAudioSettings(_volumen, _efectos, _musicVolume);
                        },
                      ),
                      const Divider(color: Colors.white24, height: 1),
                      SwitchListTile(
                        title: Text(context.l10n.effects, style: const TextStyle(color: Colors.white)),
                        value: _efectos,
                        activeThumbColor: AppColors.lightBlue,
                        onChanged: (v) {
                          setState(() => _efectos = v);
                          _saveSetting('effects', v);
                          _bridgeController.updateAudioSettings(_volumen, _efectos, _musicVolume);
                        },
                      ),
                      const Divider(color: Colors.white24, height: 1),
                      Padding(
                        padding: const EdgeInsets.symmetric(horizontal: 16.0, vertical: 8.0),
                        child: Row(
                          children: [
                            Text(context.l10n.gameMusic, style: const TextStyle(color: Colors.white, fontSize: 16)),
                            Expanded(
                              child: Slider(
                                value: _musicVolume,
                                min: 0.0,
                                max: 1.0,
                                activeColor: AppColors.lightBlue,
                                onChanged: (v) {
                                  setState(() => _musicVolume = v);
                                  _saveDoubleSetting('musicVolume', v);
                                  _bridgeController.updateAudioSettings(_volumen, _efectos, _musicVolume);
                                },
                              ),
                            ),
                          ],
                        ),
                      ),
                    ],
                  ),
                ),
                
                const SizedBox(height: 25),
                // Tienda rápida
                Text(context.l10n.gemRecharge, style: const TextStyle(color: AppColors.lightBlue, fontWeight: FontWeight.bold, letterSpacing: 1.5)),
                const SizedBox(height: 10),
                Container(
                  decoration: BoxDecoration(
                    color: Colors.white.withValues(alpha: 0.05),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.all(15),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Row(
                        children: [
                          const CurrencyIcon(size: 24),
                          const SizedBox(width: 8),
                          Text('100 ${context.l10n.gemDefault}', style: const TextStyle(color: Colors.white, fontSize: 16)),
                        ],
                      ),
                      SizedBox(
                        width: 90,
                        child: GamingButton(
                          text: '\$0.99',
                          height: 35,
                          fontSize: 14,
                          primaryColor: AppColors.lightBlue,
                          secondaryColor: const Color(0xFF6A0DAD),
                          onPressed: () {
                            PurchaseService().buyProduct('glass_pack_100');
                            ScaffoldMessenger.of(context).showSnackBar(
                              SnackBar(content: Text(context.l10n.processingPurchase)),
                            );
                          },
                        ),
                      ),
                    ],
                  ),
                ),
                
                const SizedBox(height: 30),
                SizedBox(
                  width: double.infinity,
                  child: GamingButton(
                    text: context.l10n.resume,
                    height: 55,
                    fontSize: 18,
                    primaryColor: AppColors.lightBlue,
                    secondaryColor: const Color(0xFF0055FF),
                    onPressed: _togglePause,
                  ),
                ),
                const SizedBox(height: 12),
                SizedBox(
                  width: double.infinity,
                  child: GamingButton(
                    text: context.l10n.mainMenu,
                    height: 50,
                    fontSize: 16,
                    primaryColor: Colors.redAccent,
                    secondaryColor: Colors.red,
                    onPressed: () async {
                      final bool canExit = await _onExitPressed();
                      if (canExit && mounted) {
                        try {
                          _unityWidgetController.postMessage('AudioManager', 'StopMusicFromFlutter', '');
                        } catch (_) {}
                        Navigator.pop(context);
                      }
                    },
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }

  Widget _buildAnimatedBanner() {
    final bool showBanner = _showStartBanner;
    final String title = context.l10n.gameStartBanner;

    return AnimatedPositioned(
      duration: const Duration(milliseconds: 800),
      curve: Curves.elasticOut,
      top: showBanner ? MediaQuery.of(context).size.height * 0.4 : -200, // Entra desde arriba o sale
      left: 0,
      right: 0,
      child: IgnorePointer(
        ignoring: true,
        child: Center(
          child: Container(
          width: double.infinity,
          margin: const EdgeInsets.symmetric(horizontal: 20),
          padding: const EdgeInsets.symmetric(vertical: 25, horizontal: 20),
          decoration: BoxDecoration(
            color: Colors.white.withValues(alpha: 0.1),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.white.withValues(alpha: 0.3), width: 1.5),
            boxShadow: [
              BoxShadow(
                color: AppColors.lightBlue.withValues(alpha: 0.2),
                blurRadius: 30,
                spreadRadius: 5,
              )
            ],
          ),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              Text(
                title,
                textAlign: TextAlign.center,
                style: const TextStyle(
                  color: Colors.white,
                  fontSize: 26,
                  fontWeight: FontWeight.bold,
                  shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 10)],
                ),
              ),
            ],
          ),
        ), // closes Container
        ), // closes Center
      ), // closes IgnorePointer
    ); // closes AnimatedPositioned
  }

  // =========================================================================
  // APPODEAL - SALVAR PARTIDA (REVIVE FLOW)
  // =========================================================================

  void _triggerReviveOpportunity(int score) {
    if (_showReviveDialog || _isGameOver) return;
    _reviveTimer?.cancel();
    setState(() {
      _score = score;
      _showReviveDialog = true;
      _reviveCountdown = 5;
      _isReviving = false;
    });

    _reviveTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
      if (!mounted) return;
      if (_isReviving) return; // No descontar tiempo mientras mira el video

      setState(() {
        _reviveCountdown--;
        if (_reviveCountdown <= 0) {
          _reviveTimer?.cancel();
          _handleDeclineRevive();
        }
      });
    });
  }

  Future<void> _handleAcceptRevive() async {
    if (_isReviving) return;
    setState(() => _isReviving = true);

    try {
      final success = await AdService().showRewardedAd(
        onRewardEarned: () {
          if (mounted) {
            _reviveTimer?.cancel();
            setState(() {
              _showReviveDialog = false;
              _isReviving = false;
            });
            _bridgeController.reviveGame();
            AudioService().playClick();
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
                content: Row(
                  children: [
                    Icon(Icons.shield_rounded, color: Color(0xFF00E5FF)),
                    SizedBox(width: 10),
                    Text('¡Partida Salvada! Continúa jugando.', style: TextStyle(fontWeight: FontWeight.bold)),
                  ],
                ),
                backgroundColor: Color(0xFF1E2640),
                duration: Duration(seconds: 2),
              ),
            );
          }
        },
      );

      if (!success && mounted) {
        setState(() => _isReviving = false);
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(
            content: Text('No se pudo cargar el anuncio. Intenta de nuevo.'),
            backgroundColor: Colors.redAccent,
          ),
        );
      }
    } catch (e) {
      if (mounted) {
        setState(() => _isReviving = false);
      }
    }
  }

  void _handleDeclineRevive() {
    _reviveTimer?.cancel();
    setState(() {
      _showReviveDialog = false;
      _isReviving = false;
    });
    _bridgeController.declineRevive();
  }

  Widget _buildReviveOverlay() {
    return BackdropFilter(
      filter: ImageFilter.blur(sigmaX: 12, sigmaY: 12),
      child: Container(
        color: Colors.black.withValues(alpha: 0.75),
        child: Center(
          child: GlassCard(
            padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 30),
            width: 330,
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                // Icono animado de salvavidas / escudo
                Container(
                  width: 68,
                  height: 68,
                  decoration: BoxDecoration(
                    shape: BoxShape.circle,
                    gradient: const LinearGradient(
                      colors: [Color(0xFF00E5FF), Color(0xFF651FFF)],
                      begin: Alignment.topLeft,
                      end: Alignment.bottomRight,
                    ),
                    boxShadow: [
                      BoxShadow(
                        color: const Color(0xFF00E5FF).withValues(alpha: 0.5),
                        blurRadius: 20,
                        spreadRadius: 2,
                      ),
                    ],
                  ),
                  child: const Center(
                    child: Icon(Icons.shield_rounded, color: Colors.white, size: 36),
                  ),
                ),
                const SizedBox(height: 18),

                // Título
                Text(
                  '¡BOTELLA LLENA!',
                  style: Theme.of(context).textTheme.displaySmall?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 2,
                    fontSize: 20,
                    shadows: [const Shadow(color: Color(0xFF00E5FF), blurRadius: 15)],
                  ),
                ),
                const SizedBox(height: 8),

                // Subtítulo
                const Text(
                  'Salva tu partida y despeja la zona de peligro viendo un breve video.',
                  textAlign: TextAlign.center,
                  style: TextStyle(color: Colors.white70, fontSize: 13, height: 1.4),
                ),
                const SizedBox(height: 20),

                // Temporizador circular de 5 segundos
                Stack(
                  alignment: Alignment.center,
                  children: [
                    SizedBox(
                      width: 56,
                      height: 56,
                      child: CircularProgressIndicator(
                        value: _reviveCountdown / 5.0,
                        strokeWidth: 4,
                        valueColor: const AlwaysStoppedAnimation<Color>(Color(0xFF00E5FF)),
                        backgroundColor: Colors.white.withValues(alpha: 0.1),
                      ),
                    ),
                    Text(
                      '$_reviveCountdown',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 20,
                        fontWeight: FontWeight.w900,
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: 22),

                // Botón Salvar Partida (Video Recompensado)
                SizedBox(
                  width: double.infinity,
                  child: GamingButton(
                    text: _isReviving ? 'CARGANDO ANUNCIO...' : 'SALVAR PARTIDA 🎥',
                    height: 52,
                    fontSize: 14,
                    icon: _isReviving
                        ? const SizedBox(
                            width: 18,
                            height: 18,
                            child: CircularProgressIndicator(
                              strokeWidth: 2,
                              valueColor: AlwaysStoppedAnimation<Color>(Colors.white),
                            ),
                          )
                        : const Icon(Icons.play_circle_fill_rounded, color: Colors.white, size: 22),
                    primaryColor: const Color(0xFF00E676),
                    secondaryColor: const Color(0xFF00B0FF),
                    onPressed: _isReviving ? () {} : _handleAcceptRevive,
                  ),
                ),
                const SizedBox(height: 12),

                // Botón No, Terminar Partida
                GestureDetector(
                  onTap: _isReviving ? null : _handleDeclineRevive,
                  child: Container(
                    padding: const EdgeInsets.symmetric(vertical: 8, horizontal: 16),
                    color: Colors.transparent,
                    child: Text(
                      'Terminar partida',
                      style: TextStyle(
                        color: Colors.white.withValues(alpha: 0.5),
                        fontSize: 13,
                        fontWeight: FontWeight.w600,
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.white.withValues(alpha: 0.3),
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }

  Future<void> _handleDoubleReward() async {
    if (_rewardDoubled || _isDoublingReward) return;
    setState(() => _isDoublingReward = true);

    try {
      final success = await AdService().showRewardedAd(
        onRewardEarned: () async {
          // Acreditar en el servidor Go (+1 Lapislázuli adicional en base de datos)
          await GameApiService().claimAdReward();
          if (mounted) {
            Provider.of<GameProvider>(context, listen: false).addCrystals(1);
            setState(() {
              _rewardDoubled = true;
              _isDoublingReward = false;
            });
            AudioService().playClick();
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
                content: Row(
                  children: [
                    Icon(Icons.stars_rounded, color: Color(0xFFFFD700)),
                    SizedBox(width: 10),
                    Expanded(
                      child: Text(
                        '¡Recompensa duplicada! +2 Lapislázulis conseguidos.',
                        style: TextStyle(fontWeight: FontWeight.bold),
                      ),
                    ),
                  ],
                ),
                backgroundColor: Color(0xFF1E2640),
                duration: Duration(seconds: 3),
              ),
            );
          }
        },
      );

      if (!success && mounted) {
        setState(() => _isDoublingReward = false);
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(
            content: Text('El anuncio no se pudo cargar en este momento. Intenta de nuevo en unos segundos.'),
            backgroundColor: Colors.redAccent,
          ),
        );
      }
    } catch (e) {
      if (mounted) {
        setState(() => _isDoublingReward = false);
      }
    }
  }

  Widget _buildGameOverOverlay() {
    final bool isNewScore = (_score >= _highScore && _score > 0);
    final String title = isNewScore ? context.l10n.newHighScore : context.l10n.goodTry;
    final bool canClaimReward = _score >= 10;

    return BackdropFilter(
      filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
      child: Container(
        color: Colors.black.withValues(alpha: 0.6),
        child: Center(
          child: Stack(
            clipBehavior: Clip.none,
            alignment: Alignment.center,
            children: [
              GlassCard(
                padding: const EdgeInsets.only(top: 85, left: 22, right: 22, bottom: 30),
                width: 340,
                child: SingleChildScrollView(
                  physics: const BouncingScrollPhysics(),
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      Text(
                        context.l10n.gameOver,
                        style: Theme.of(context).textTheme.displaySmall?.copyWith(
                          color: Colors.white,
                          fontWeight: FontWeight.w900,
                          letterSpacing: 4,
                          shadows: [const Shadow(color: Colors.redAccent, blurRadius: 20)],
                        ),
                      ),
                      const SizedBox(height: 16),
                      Text(
                        title,
                        textAlign: TextAlign.center,
                        style: const TextStyle(color: AppColors.lightBlue, fontSize: 18, fontWeight: FontWeight.bold),
                      ),
                      const SizedBox(height: 8),
                      Text(
                        context.l10n.yourScore(_score),
                        style: const TextStyle(color: Colors.white, fontSize: 24, fontWeight: FontWeight.w900),
                      ),
                      const SizedBox(height: 8),
                      Consumer<GameProvider>(
                        builder: (context, provider, child) {
                          return Container(
                            padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 6),
                            decoration: BoxDecoration(
                              color: AppColors.accentPurple.withValues(alpha: 0.2),
                              borderRadius: BorderRadius.circular(12),
                              border: Border.all(color: AppColors.accentPurple.withValues(alpha: 0.5)),
                            ),
                            child: Text(
                              context.l10n.globalAccumulated(provider.totalScore),
                              style: const TextStyle(color: AppColors.accentPurple, fontSize: 13, fontWeight: FontWeight.bold),
                            ),
                          );
                        }
                      ),
                      const SizedBox(height: 18),

                      // Tarjeta Recompensa Base de la Partida
                      Container(
                        padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 10),
                        decoration: BoxDecoration(
                          gradient: LinearGradient(
                            colors: [
                              const Color(0xFF00E5FF).withValues(alpha: 0.15),
                              const Color(0xFF651FFF).withValues(alpha: 0.15),
                            ],
                          ),
                          borderRadius: BorderRadius.circular(14),
                          border: Border.all(
                            color: _rewardDoubled
                                ? const Color(0xFFFFD700)
                                : const Color(0xFF00E5FF).withValues(alpha: 0.4),
                            width: 1.5,
                          ),
                        ),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            CurrencyIcon(size: 20),
                            const SizedBox(width: 8),
                            Text(
                              !canClaimReward
                                  ? 'HAZ AL MENOS 10 PTS PARA LAPIS'
                                  : _rewardDoubled
                                      ? '+2 LAPISLÁZULIS (X2)'
                                      : '+1 LAPISLÁZULI GANADO',
                              style: TextStyle(
                                color: _rewardDoubled ? const Color(0xFFFFD700) : Colors.white,
                                fontSize: 13,
                                fontWeight: FontWeight.w900,
                                letterSpacing: 0.8,
                              ),
                            ),
                          ],
                        ),
                      ),
                      const SizedBox(height: 10),

                      // Botón Duplicar Recompensa x2 (Video Recompensado)
                      if (canClaimReward) ...[
                        if (!_rewardDoubled)
                          SizedBox(
                            width: double.infinity,
                            child: GamingButton(
                              text: _isDoublingReward
                                  ? 'CARGANDO ANUNCIO...'
                                  : 'DUPLICAR RECOMPENSA X2',
                              height: 52,
                              fontSize: 13,
                              icon: _isDoublingReward
                                  ? const SizedBox(
                                      width: 18,
                                      height: 18,
                                      child: CircularProgressIndicator(
                                        strokeWidth: 2,
                                        valueColor: AlwaysStoppedAnimation<Color>(Colors.white),
                                      ),
                                    )
                                  : const Icon(Icons.play_circle_fill_rounded, color: Colors.amberAccent, size: 22),
                              primaryColor: const Color(0xFFFFB300),
                              secondaryColor: const Color(0xFFFF6F00),
                              onPressed: _isDoublingReward ? () {} : _handleDoubleReward,
                            ),
                          )
                        else
                          Container(
                            padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
                            decoration: BoxDecoration(
                              color: const Color(0xFFFFD700).withValues(alpha: 0.15),
                              borderRadius: BorderRadius.circular(12),
                              border: Border.all(color: const Color(0xFFFFD700).withValues(alpha: 0.6)),
                            ),
                            child: const Row(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                Icon(Icons.check_circle_rounded, color: Color(0xFFFFD700), size: 18),
                                SizedBox(width: 6),
                                Text(
                                  '¡Recompensa Duplicada con Éxito!',
                                  style: TextStyle(
                                    color: Color(0xFFFFD700),
                                    fontSize: 12,
                                    fontWeight: FontWeight.bold,
                                  ),
                                ),
                              ],
                            ),
                          ),
                      ],

                      const SizedBox(height: 20),
                      SizedBox(
                        width: double.infinity,
                        child: GamingButton(
                          text: context.l10n.playAgain,
                          height: 52,
                          fontSize: 16,
                          primaryColor: AppColors.lightBlue,
                          secondaryColor: const Color(0xFF0055FF),
                          onPressed: () {
                            setState(() {
                              _isGameOver = false;
                              _score = 0;
                              _rewardDoubled = false;
                              _isDoublingReward = false;
                              _baseRewardAwarded = false;
                              _showReviveDialog = false;
                              _reviveTimer?.cancel();
                            });
                            _unityWidgetController.postMessage('GameManager', 'RestartGame', '');
                            _unityWidgetController.postMessage('AudioManager', 'PlayStartGameFromFlutter', '');
                            _unityWidgetController.postMessage('AudioManager', 'PlayMusicFromFlutter', '');
                          },
                        ),
                      ),
                      const SizedBox(height: 12),
                      SizedBox(
                        width: double.infinity,
                        child: GamingButton(
                          text: context.l10n.mainMenu,
                          height: 52,
                          fontSize: 16,
                          primaryColor: Colors.redAccent,
                          secondaryColor: Colors.red,
                          onPressed: () {
                            try {
                              _unityWidgetController.postMessage('AudioManager', 'StopMusicFromFlutter', '');
                            } catch (_) {}
                            Navigator.pop(context);
                          },
                        ),
                      ),
                      if (_videoPathReady != null) ...[
                        const SizedBox(height: 15),
                        SizedBox(
                          width: double.infinity,
                          child: GamingButton(
                            text: 'COMPARTIR EN TIKTOK',
                            height: 55,
                            fontSize: 18,
                            primaryColor: Colors.pinkAccent,
                            secondaryColor: Colors.pink,
                            onPressed: _shareVideo,
                          ),
                        ),
                      ],
                    ],
                  ),
                ),
              ),
              if (isNewScore)
                Positioned(
                  top: -150,
                  child: Image.asset(
                    'assets/avatar/personaje/glassy_lapislazully_congratulations.png',
                    height: 250,
                  ),
                ),
            ],
          ),
        ),
      ),
    );
  }



  @override
  void dispose() {
    // Liberar recursos y cancelar suscripciones para evitar memory leaks
    _readySub?.cancel();
    _scoreSub?.cancel();

    _gameOverSub?.cancel();
    _achievementSub?.cancel();
    _comboBonusSub?.cancel();
    _epicSaveSub?.cancel();
    _dangerZoneSub?.cancel();
    _missionStartedSub?.cancel();
    _missionUpdatedSub?.cancel();
    _missionCompletedSub?.cancel();
    _missionTimer?.cancel();
    _reviveOpportunitySub?.cancel();
    _reviveTimer?.cancel();
    
    try {
      _unityWidgetController.postMessage('AudioManager', 'StopMusicFromFlutter', '');
    } catch (_) {}
    _bridgeController.dispose();
    super.dispose();
  }
}
