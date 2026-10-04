import 'dart:async';
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../theme/app_theme.dart';
import '../widgets/gaming_button.dart';
import '../flutter_unity_bridge/src/unity_bridge_controller.dart';
import '../flutter_unity_bridge/src/models/payloads.dart';
import '../services/audio_service.dart';
import '../services/achievements_service.dart';
import '../services/game_api_service.dart';

class GameScreen extends StatefulWidget {
  const GameScreen({Key? key}) : super(key: key);

  @override
  State<GameScreen> createState() => _GameScreenState();
}

class _GameScreenState extends State<GameScreen> {
  late UnityWidgetController _unityWidgetController;
  late UnityBridgeController _bridgeController;
  
  // Suscripciones para evitar memory leaks
  StreamSubscription? _readySub;
  StreamSubscription? _scoreSub;
  StreamSubscription? _crystalsSub;
  StreamSubscription? _gameOverSub;
  StreamSubscription? _achievementSub;
  StreamSubscription? _comboBonusSub;
  StreamSubscription? _epicSaveSub;
  StreamSubscription? _dangerZoneSub;
  StreamSubscription? _missionStartedSub;
  StreamSubscription? _missionUpdatedSub;
  StreamSubscription? _missionCompletedSub;
  Timer? _missionTimer;

  bool _isDangerZone = false;
  String? _epicSaveText;
  String? _comboText;
  
  bool _isMissionActive = false;
  String _missionText = '';
  int _missionCurrent = 0;
  int _missionTarget = 0;
  int _missionTimeRemaining = 0;
  String? _missionCompleteText;
  
  bool _isPaused = false;
  bool _isGameOver = false;
  bool _showStartBanner = false;
  
  // Estado de configuración local
  bool _volumen = true;
  bool _efectos = true;
  double _musicVolume = 1.0;
  
  int _score = 0;
  int _highScore = 0; // Para la lógica de "Nuevo Score"
  int _crystals = 100; // Valor inicial o cargado del estado global

  void onUnityCreated(controller) {
    AudioService().stopBgMusic();
    _unityWidgetController = controller;
    _bridgeController = UnityBridgeController(_unityWidgetController);
    
    // Configurar suscripciones a los eventos de Unity
    _readySub = _bridgeController.onReady.listen((_) {
      if (mounted) {
        setState(() {
          _showStartBanner = true;
          _isGameOver = false; // Asegurar estado limpio
        });
        
        // Reproducir música ahora que Unity y Flutter están listos
        _unityWidgetController.postMessage('AudioManager', 'PlayStartGameFromFlutter', '');
        
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

    _crystalsSub = _bridgeController.onCrystalsUpdated.listen((payload) {
      if (mounted) {
        if (_crystals > payload.currentCrystals) {
          int spent = _crystals - payload.currentCrystals;
          GameApiService().spendCrystals(spent); // Gasto real en backend
          Provider.of<GameProvider>(context, listen: false).updateCrystals(payload.currentCrystals);
        }
        setState(() => _crystals = payload.currentCrystals);
      }
    });

    _gameOverSub = _bridgeController.onGameOver.listen((payload) {
      if (mounted) {
        setState(() {
          _score = payload.finalScore;
          _isGameOver = true;
          if (_score > _highScore) {
            _highScore = _score;
          }
        });
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
        setState(() => _epicSaveText = '¡SALVADA ÉPICA!\n+${payload.bonus}');
        Future.delayed(const Duration(seconds: 3), () {
          if (mounted) setState(() => _epicSaveText = null);
        });
      }
    });

    _comboBonusSub = _bridgeController.onComboBonus.listen((payload) {
      if (mounted) {
        setState(() => _comboText = '¡COMBO X${payload.combo}!\n+${payload.bonus}');
        Future.delayed(const Duration(seconds: 2), () {
          if (mounted) setState(() => _comboText = null);
        });
      }
    });

    _missionStartedSub = _bridgeController.onMissionStarted.listen((payload) {
      if (mounted) {
        setState(() {
          _isMissionActive = true;
          _missionText = payload.text;
          _missionCurrent = 0;
          _missionTarget = int.tryParse(payload.text.split(' ')[1]) ?? 3;
          _missionTimeRemaining = payload.timeLimitSeconds;
        });
        _missionTimer?.cancel();
        _missionTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
          if (!mounted) return;
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
          _missionCompleteText = '¡MISIÓN CUMPLIDA!\n+${payload.bonusPoints}';
        });
        Future.delayed(const Duration(seconds: 3), () {
          if (mounted) setState(() => _missionCompleteText = null);
        });
      }
    });

    // Reiniciar la escena en Unity siempre que se entre aquí para borrar estado previo
    // Esto lo dejamos afuera porque UnityWidget puede ya estar instanciado en caché.
    _unityWidgetController.postMessage('GameManager', 'RestartGame', '');
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

  void onUnityMessage(message) {
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
      barrierColor: Colors.black.withOpacity(0.6), // Fondo oscuro
      builder: (context) => Dialog(
        backgroundColor: Colors.transparent,
        elevation: 0,
        child: BackdropFilter(
          filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
          child: Stack(
            clipBehavior: Clip.none,
            alignment: Alignment.center,
            children: [
              GlassContainer(
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
                        shadows: [const Shadow(color: AppTheme.crystalBlue, blurRadius: 15)],
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
                      primaryColor: AppTheme.crystalBlue,
                      secondaryColor: AppTheme.crystalBlue,
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
                  'assets/avatar/glassy_lapislazully_surprised.png',
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
      _unityWidgetController.postMessage('GameManager', 'TriggerGameOver', '');
      return false; // Retornamos false para que no haga pop inmediato y se muestre la pantalla de Game Over
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
    return PopScope(
      canPop: false,
      onPopInvoked: (didPop) async {
        if (didPop) return;
        final bool canExit = await _onExitPressed();
        if (canExit && mounted) {
          Navigator.pop(context);
        }
      },
      child: Scaffold(
      backgroundColor: Colors.black,
      body: Stack(
        children: [
          // 1. Capa Base: Unity (El Juego)
          UnityWidget(
            onUnityCreated: onUnityCreated,
            onUnityMessage: onUnityMessage,
            useAndroidViewSurface: false,
            borderRadius: const BorderRadius.all(Radius.circular(0)),
          ),
          
          // 2. Capa de HUD (Puntaje, Botones)
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
              child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  // Top HUD: Lapislázulis, Score, Controles
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      // Controles Izquierdos: Lapislázulis + Power-ups
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          // Contador de Lapislázulis
                          Container(
                            padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
                            decoration: BoxDecoration(
                              color: Colors.black.withOpacity(0.5),
                              borderRadius: BorderRadius.circular(20),
                              border: Border.all(color: AppTheme.crystalBlue, width: 1),
                              boxShadow: [
                                BoxShadow(
                                  color: AppTheme.crystalBlue.withOpacity(0.3),
                                  blurRadius: 8,
                                )
                              ],
                            ),
                            child: Row(
                              children: [
                                const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 20),
                                const SizedBox(width: 6),
                                Text(
                                  '$_crystals',
                                  style: const TextStyle(
                                    color: Colors.white,
                                    fontWeight: FontWeight.bold,
                                    fontSize: 16,
                                  ),
                                ),
                              ],
                            ),
                          ),
                        ],
                      ),
                      
                      // Score Central
                      Container(
                        padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                        decoration: BoxDecoration(
                          color: Colors.black.withOpacity(0.6),
                          borderRadius: BorderRadius.circular(25),
                          border: Border.all(color: Colors.white24, width: 1),
                        ),
                        child: Column(
                          mainAxisSize: MainAxisSize.min,
                          children: [
                            const Text(
                              'SCORE',
                              style: TextStyle(
                                color: Colors.white70,
                                fontSize: 10,
                                letterSpacing: 2,
                              ),
                            ),
                            Text(
                              '$_score',
                              style: const TextStyle(
                                color: Colors.white,
                                fontSize: 24,
                                fontWeight: FontWeight.w900,
                                shadows: [Shadow(color: AppTheme.crystalBlue, blurRadius: 10)],
                              ),
                            ),
                          ],
                        ),
                      ),
                      
                      // Botones Superiores Derecha
                      Row(
                        mainAxisSize: MainAxisSize.min,
                        children: [
                          IconButton(
                            onPressed: _togglePause,
                            icon: Icon(
                              _isPaused ? Icons.play_arrow : Icons.pause,
                              color: Colors.white,
                              size: 28,
                              shadows: [Shadow(color: Colors.white.withOpacity(0.9), blurRadius: 10)],
                            ),
                          ),
                          IconButton(
                            onPressed: () async {
                              final bool canExit = await _onExitPressed();
                              if (canExit && mounted) {
                                Navigator.pop(context);
                              }
                            },
                            icon: Icon(
                              Icons.close,
                              color: Colors.white,
                              size: 28,
                              shadows: [Shadow(color: Colors.white.withOpacity(0.9), blurRadius: 10)],
                            ),
                          ),
                        ],
                      )
                    ],
                  ),
                  
                  // Misión Express UI (Centrada arriba)
                  if (_isMissionActive) _buildMissionWidget(),

                ],
              ),
            ),
          ),
          
          // Efectos Visuales Especiales (Danger Zone, Combos, Salvada)
          if (_isDangerZone && !_isGameOver && !_isPaused) _buildDangerZoneOverlay(),
          if (_comboText != null) _buildComboOverlay(),
          if (_epicSaveText != null) _buildEpicSaveOverlay(),
          if (_missionCompleteText != null) _buildMissionCompletedOverlay(),
          
          // 3. Capa de Overlays (Pausa o Game Over)
          if (_isPaused) _buildPauseOverlay(),
          
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
          border: Border.all(color: Colors.redAccent.withOpacity(0.6), width: 8),
          gradient: RadialGradient(
            colors: [Colors.transparent, Colors.red.withOpacity(0.2)],
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
            color: Colors.black.withOpacity(0.6),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.greenAccent, width: 2),
            boxShadow: [BoxShadow(color: Colors.green.withOpacity(0.4), blurRadius: 30)],
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

  Widget _buildMissionWidget() {
    return Container(
      margin: const EdgeInsets.only(top: 5),
      padding: const EdgeInsets.symmetric(horizontal: 15, vertical: 8),
      decoration: BoxDecoration(
        color: Colors.black.withOpacity(0.7),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: Colors.orangeAccent, width: 1.5),
        boxShadow: [BoxShadow(color: Colors.orange.withOpacity(0.3), blurRadius: 15)],
      ),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        children: [
          const Icon(Icons.star, color: Colors.orangeAccent, size: 24),
          const SizedBox(width: 10),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            mainAxisSize: MainAxisSize.min,
            children: [
              Text(
                _missionText,
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
                  const Icon(Icons.timer, color: Colors.white70, size: 14),
                  const SizedBox(width: 4),
                  Text(
                    '${_missionTimeRemaining}s',
                    style: const TextStyle(color: Colors.white70, fontSize: 12),
                  ),
                ],
              ),
            ],
          ),
        ],
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
                  color: Colors.orange.withOpacity(0.85),
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
        color: Colors.black.withOpacity(0.4),
        child: Center(
          child: GlassContainer(
            padding: const EdgeInsets.symmetric(vertical: 40, horizontal: 25),
            width: 340,
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                const Icon(Icons.pause_circle_filled_rounded, color: AppTheme.crystalBlue, size: 60),
                const SizedBox(height: 10),
                Text(
                  'BREAK!!!',
                  style: Theme.of(context).textTheme.displaySmall?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 4,
                    shadows: [const Shadow(color: AppTheme.crystalBlue, blurRadius: 20)],
                  ),
                ),
                const SizedBox(height: 30),
                
                // Configuración
                const Text('Ajustes Rápidos', style: TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.bold, letterSpacing: 1.5)),
                const SizedBox(height: 10),
                Container(
                  decoration: BoxDecoration(
                    color: Colors.white.withOpacity(0.05),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  child: Column(
                    children: [
                      SwitchListTile(
                        title: const Text('Volumen General', style: TextStyle(color: Colors.white)),
                        value: _volumen,
                        activeColor: AppTheme.crystalBlue,
                        onChanged: (v) {
                          setState(() => _volumen = v);
                          _saveSetting('volume', v);
                          _bridgeController.updateAudioSettings(_volumen, _efectos, _musicVolume);
                        },
                      ),
                      const Divider(color: Colors.white24, height: 1),
                      SwitchListTile(
                        title: const Text('Efectos', style: TextStyle(color: Colors.white)),
                        value: _efectos,
                        activeColor: AppTheme.crystalBlue,
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
                            const Text('Música Juego', style: TextStyle(color: Colors.white, fontSize: 16)),
                            Expanded(
                              child: Slider(
                                value: _musicVolume,
                                min: 0.0,
                                max: 1.0,
                                activeColor: AppTheme.crystalBlue,
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
                const Text('Recarga de Gemas', style: TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.bold, letterSpacing: 1.5)),
                const SizedBox(height: 10),
                Container(
                  decoration: BoxDecoration(
                    color: Colors.white.withOpacity(0.05),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.all(15),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      const Row(
                        children: [
                          Icon(Icons.diamond, color: AppTheme.crystalBlue),
                          SizedBox(width: 8),
                          Text('100 Gemas', style: TextStyle(color: Colors.white, fontSize: 16)),
                        ],
                      ),
                      SizedBox(
                        width: 90,
                        child: GamingButton(
                          text: '\$0.99',
                          height: 35,
                          fontSize: 14,
                          primaryColor: AppTheme.crystalBlue,
                          secondaryColor: const Color(0xFF6A0DAD),
                          onPressed: () {},
                        ),
                      ),
                    ],
                  ),
                ),
                
                const SizedBox(height: 40),
                SizedBox(
                  width: double.infinity,
                  child: GamingButton(
                    text: 'REANUDAR',
                    height: 55,
                    fontSize: 18,
                    primaryColor: AppTheme.crystalBlue,
                    secondaryColor: const Color(0xFF0055FF),
                    onPressed: _togglePause,
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
    final String title = 'Juega, relájate y disfruta';

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
            color: Colors.white.withOpacity(0.1),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.white.withOpacity(0.3), width: 1.5),
            boxShadow: [
              BoxShadow(
                color: AppTheme.crystalBlue.withOpacity(0.2),
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
                  shadows: [Shadow(color: AppTheme.crystalBlue, blurRadius: 10)],
                ),
              ),
            ],
          ),
        ), // closes Container
        ), // closes Center
      ), // closes IgnorePointer
    ); // closes AnimatedPositioned
  }

  Widget _buildGameOverOverlay() {
    final bool isNewScore = (_score >= _highScore && _score > 0);
    final String title = isNewScore ? '¡Felicidades, nuevo score!' : 'Buen intento';
    return BackdropFilter(
      filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
      child: Container(
        color: Colors.black.withOpacity(0.6),
        child: Center(
          child: Stack(
            clipBehavior: Clip.none,
            alignment: Alignment.center,
            children: [
              GlassContainer(
                padding: const EdgeInsets.only(top: 100, left: 25, right: 25, bottom: 40),
                width: 340,
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    Text(
                      'GAME OVER',
                      style: Theme.of(context).textTheme.displaySmall?.copyWith(
                        color: Colors.white,
                        fontWeight: FontWeight.w900,
                        letterSpacing: 4,
                        shadows: [const Shadow(color: Colors.redAccent, blurRadius: 20)],
                      ),
                    ),
                    const SizedBox(height: 20),
                    Text(
                      title,
                      textAlign: TextAlign.center,
                      style: const TextStyle(color: AppTheme.crystalBlue, fontSize: 20, fontWeight: FontWeight.bold),
                    ),
                    const SizedBox(height: 10),
                    Text(
                      'Tu score: $_score',
                      style: const TextStyle(color: Colors.white, fontSize: 24, fontWeight: FontWeight.w900),
                    ),
                    const SizedBox(height: 40),
                    SizedBox(
                      width: double.infinity,
                      child: GamingButton(
                        text: 'VOLVER A JUGAR',
                        height: 55,
                        fontSize: 18,
                        primaryColor: AppTheme.crystalBlue,
                        secondaryColor: const Color(0xFF0055FF),
                        onPressed: () {
                          setState(() {
                            _isGameOver = false;
                            _score = 0;
                          });
                          _unityWidgetController.postMessage('GameManager', 'RestartGame', '');
                        },
                      ),
                    ),
                    const SizedBox(height: 15),
                    SizedBox(
                      width: double.infinity,
                      child: GamingButton(
                        text: 'IR AL MENÚ PRINCIPAL',
                        height: 55,
                        fontSize: 18,
                        primaryColor: Colors.redAccent,
                        secondaryColor: Colors.red,
                        onPressed: () => Navigator.pop(context),
                      ),
                    ),
                  ],
                ),
              ),
              if (isNewScore)
                Positioned(
                  top: -150,
                  child: Image.asset(
                    'assets/avatar/glassy_lapislazully_congratulations.png',
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
    _crystalsSub?.cancel();
    _gameOverSub?.cancel();
    _comboBonusSub?.cancel();
    _epicSaveSub?.cancel();
    _dangerZoneSub?.cancel();
    _missionStartedSub?.cancel();
    _missionUpdatedSub?.cancel();
    _missionCompletedSub?.cancel();
    _missionTimer?.cancel();
    
    _bridgeController.dispose();
    super.dispose();
  }
}
