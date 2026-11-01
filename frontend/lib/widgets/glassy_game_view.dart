import 'dart:async';
import 'dart:convert';
import 'dart:math' as math;
import 'dart:ui' as ui;
import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import '../services/audio_service.dart';

enum GemType {
  pearl, // 0 pts - Perla (iniciador, cae al fondo sin interactuar con gemas)
  emerald, // 1 pt - Esmeralda (peso 1.0)
  amethyst, // 2 pts - Amatista (peso 1.2)
  topaz, // 4 pts - Topacio (peso 1.6)
  greenRuby, // 8 pts - Rubí verde / Peridoto (peso 2.2)
  sapphire, // 16 pts - Zafiro (peso 3.0)
  redRuby, // 32 pts - Rubí rojo (peso 4.0)
  diamond, // 64 pts - Diamante gigante (explota y libera espacio)
  quartz, // 20 pts - Cuarzo (limpiador)
  stone // 30 pts - Piedra (obstáculo)
}

class GlassyGem {
  final GemType type;
  double x;
  double y;
  double vx;
  double vy;
  double radius;
  double mass;
  double angle;
  double angularVelocity;
  bool isKinematic; // Cascada cinemática ordenada en el tubo

  // Semillas para ruido ASMR Zero-G
  final double noiseOffsetX;
  final double noiseOffsetY;
  final double noiseOffsetTorque;

  // Jelly squash & stretch (10% sutil y elástico)
  double squashX = 0.0;
  double squashY = 0.0;
  double squashRecovery = 0.0;

  // Intervención Humana (regla estricta de versión_1.md: arrastre/lanzamiento suma +1.5 masa)
  bool isBeingInteracted = false;
  double interactionEndTime = -999.0;
  bool isMerged = false;

  GlassyGem({
    required this.type,
    required this.x,
    required this.y,
    this.vx = 0.0,
    this.vy = 0.0,
    required this.radius,
    required this.mass,
    this.angle = 0.0,
    this.angularVelocity = 0.0,
    this.isKinematic = false,
  })  : noiseOffsetX = math.Random().nextDouble() * 1000.0,
        noiseOffsetY = math.Random().nextDouble() * 1000.0,
        noiseOffsetTorque = math.Random().nextDouble() * 1000.0;

  bool hasRecentInteraction(double now) {
    if (type == GemType.pearl) return false;
    if (isBeingInteracted) return true;
    return (now - interactionEndTime) <= 2.0;
  }
}

class GlassyGameController {
  void Function(String gameObject, String method, String param)? onPostMessage;
  void Function(GemType type, int count)? onSpawnAttackGems;

  void postMessage(String gameObject, String method, String param) {
    onPostMessage?.call(gameObject, method, param);
  }

  void spawnAttackGems(GemType type, int count) {
    onSpawnAttackGems?.call(type, count);
  }
}

class GlassyNativeView extends StatefulWidget {
  final void Function(GlassyGameController controller)? onCreated;
  final void Function(dynamic message)? onMessage;
  final void Function(GemType gemType, int comboCount)? onComboAttack;
  final String? skinId;
  final bool isVersusMode;
  final bool isOpponentBoard;
  final bool autoPlayBgm;

  const GlassyNativeView({
    super.key,
    this.onCreated,
    this.onMessage,
    this.onComboAttack,
    this.skinId,
    this.isVersusMode = false,
    this.isOpponentBoard = false,
    this.autoPlayBgm = true,
  });

  @override
  State<GlassyNativeView> createState() => _GlassyNativeViewState();
}

class _GlassyNativeViewState extends State<GlassyNativeView>
    with SingleTickerProviderStateMixin {
  late AnimationController _ticker;
  final GlassyGameController _controller = GlassyGameController();
  final AudioService _audio = AudioService();

  final List<GlassyGem> _gems = [];
  final List<List<GlassyGem>> _pendingMerges = [];

  // Texturas de fondos adaptables
  ui.Image? _bgPhone;
  ui.Image? _bgTablet;
  ui.Image? _bgDesktop;
  ui.Image? _flaskImage;
  final Map<GemType, ui.Image> _gemImages = {};

  // Estado del juego
  int _score = 0;
  bool _isGameOver = false;
  bool _isPaused = false;
  int _comboMultiplier = 0;
  double _comboTimer = 0.0;
  GemType? _activeComboGemType;

  // Spawner de perlas (cadencia suave y relajante: 0.65s entre perlas)
  double _spawnTimer = 1.0;
  final double _spawnInterval = 0.65;

  // Zona de peligro exacta de GameOverZone.cs
  double _dangerTimer = 0.0;
  bool _isInDanger = false;
  bool _wasInDanger = false;

  double _totalTime = 0.0;

  // Escala y compensación activas calculadas en LayoutBuilder
  double _lastScale = 1.0;
  double _lastOffsetX = 0.0;
  double _lastOffsetY = 0.0;
  bool _isMobileMultiplayerLayout = false;

  // Arrastre e inercia táctil
  GlassyGem? _draggedGem;
  Offset _lastTouchPos = Offset.zero;

  /// Calcula dinámicamente el punto de spawn de las perlas y gemas de ataque.
  /// Si el cuello del frasco está recortado y se eleva fuera del borde superior de la pantalla
  /// (modo multijugador en móvil), spawnea justo encima del corte visible de la pantalla
  /// para que la perla ingrese en caída instantánea sin demorarse ni flotar en el vacío.
  double _getDynamicSpawnY() {
    if (_lastScale <= 0) return 85.0;

    // Coordenada Y virtual correspondiente al borde superior visible de la pantalla
    final virtualScreenTopY = (0.0 - _lastOffsetY) / _lastScale;

    // Si la pantalla visible corta el cuello por debajo de Y=50,
    // spawneamos 35 unidades virtuales por encima del corte para que entre inmediatamente en pantalla.
    if (virtualScreenTopY > 50.0) {
      return virtualScreenTopY - 35.0;
    }

    // Modo solitario o cuello completamente visible
    return 85.0;
  }

  // Puntos por gema (versión_1.md y GameConfig.cs)
  static const List<int> gemScores = [0, 1, 2, 4, 8, 16, 32, 64, 20, 30];

  // Masas base según versión_1.md (Pearls=0, 1.0, 1.2, 1.6, 2.2, 3.0, 4.0, Diamond=0)
  static const List<double> gemMasses = [0.0, 1.0, 1.2, 1.6, 2.2, 3.0, 4.0, 0.0, 1.0, 4.5];

  // Radios de colisión en Canvas virtuales
  // Cada gema superior es aprox 20% más grande que la anterior para ocupar más espacio en el frasco
  // Perla: 16 (diámetro 32)
  // Esmeralda: 25 (+56% respecto a perla)
  // Amatista: 30 (+20%)
  // Topacio: 36 (+20%)
  // Peridoto / Rubí Verde: 43 (+20%)
  // Zafiro: 52 (+20%)
  // Rubí: 62 (+20%)
  // Diamante: 75 (+20%, gema suprema antes de explotar)
  // Radios de colisión y tamaño físico (-25% aplicado a todos excepto la perla)
  static const List<double> gemRadii = [
    16.0,  // Pearl (iniciador, intacto)
    18.75, // Emerald (-25% de 25.0)
    22.5,  // Amethyst (-25% de 30.0)
    27.0,  // Topaz (-25% de 36.0)
    32.25, // GreenRuby / Peridot (-25% de 43.0)
    39.0,  // Sapphire (-25% de 52.0)
    46.5,  // RedRuby (-25% de 62.0)
    56.25, // Diamond (-25% de 75.0)
    27.0,  // Quartz (-25% de 36.0)
    36.0   // Stone (-25% de 48.0)
  ];

  // Factores de escala visual para que el dibujo visible de la gema coincida
  // exactamente con el límite de su hitbox físico (compensa el margen transparente de cada PNG)
  static const Map<GemType, double> gemVisualScales = {
    GemType.pearl: 1.34,
    GemType.emerald: 1.48,
    GemType.amethyst: 1.30,
    GemType.topaz: 1.28,
    GemType.greenRuby: 1.58,
    GemType.sapphire: 1.33,
    GemType.redRuby: 1.70,
    GemType.diamond: 1.28,
    GemType.quartz: 1.43,
    GemType.stone: 1.44,
  };

  // Estado del sistema de micro-misiones
  String _activeMissionAction = 'merge'; // 'merge' (fusionar) o 'create' (sintetizar)
  int _activeMissionGemType = -1;
  int _activeMissionTarget = 0;
  int _activeMissionCurrent = 0;
  int _activeMissionTimeRemaining = 0;
  int _activeMissionReward = 0;
  bool _isMissionActive = false;
  double _nextMissionCooldownRemaining = 0.0;
  Timer? _missionCountdownTimer;
  Timer? _nextMissionCooldownTimer;

  @override
  void initState() {
    super.initState();
    _loadAssets();

    _controller.onPostMessage = _handleHostMessage;
    _controller.onSpawnAttackGems = _spawnAttackGems;
    widget.onCreated?.call(_controller);

    // Iniciar música de fondo del juego si aplica
    if (widget.autoPlayBgm) {
      _audio.playBgMusic();
    }

    _ticker = AnimationController(vsync: this, duration: const Duration(seconds: 1))
      ..addListener(_gameLoop)
      ..repeat();

    WidgetsBinding.instance.addPostFrameCallback((_) {
      _sendBridgeEvent('READY', '{}');
      if (!widget.isVersusMode) {
        _scheduleNextMission(initialDelaySeconds: 10);
      }
    });
  }

  @override
  void didUpdateWidget(covariant GlassyNativeView oldWidget) {
    super.didUpdateWidget(oldWidget);
    if (oldWidget.skinId != widget.skinId) {
      _loadAssets();
    }
  }

  Future<void> _loadAssets() async {
    final skin = widget.skinId;

    if (skin != null && skin != 'gemas_clasicas') {
      _bgPhone = await _loadImage('assets/skin/$skin/wallpaper.jpg') ?? await _loadImage('assets/images/fondo.jpg');
      _bgTablet = _bgPhone;
      _bgDesktop = _bgPhone;
      _flaskImage = await _loadImage('assets/game/gems/frasco.png');

      final skinFilenames = {
        GemType.pearl: 'assets/skin/$skin/Pearl.png',
        GemType.emerald: 'assets/skin/$skin/Emerald.png',
        GemType.amethyst: 'assets/skin/$skin/Amethyst.png',
        GemType.topaz: 'assets/skin/$skin/Topaz.png',
        GemType.greenRuby: 'assets/skin/$skin/GreenRuby.png',
        GemType.sapphire: 'assets/skin/$skin/Sapphire.png',
        GemType.redRuby: 'assets/skin/$skin/RedRuby.png',
        GemType.diamond: 'assets/skin/$skin/Diamond.png',
        GemType.quartz: 'assets/game/gems/cuarzo.png',
        GemType.stone: 'assets/game/gems/piedra.png',
      };

      final defaultFilenames = {
        GemType.pearl: 'assets/game/gems/perla.png',
        GemType.emerald: 'assets/game/gems/esmeralda.png',
        GemType.amethyst: 'assets/game/gems/amatista.png',
        GemType.topaz: 'assets/game/gems/topacio.png',
        GemType.greenRuby: 'assets/game/gems/peridoto.png',
        GemType.sapphire: 'assets/game/gems/zafiro.png',
        GemType.redRuby: 'assets/game/gems/rubi.png',
        GemType.diamond: 'assets/game/gems/diamante.png',
        GemType.quartz: 'assets/game/gems/cuarzo.png',
        GemType.stone: 'assets/game/gems/piedra.png',
      };
      for (var entry in skinFilenames.entries) {
        var img = await _loadImage(entry.value);
        if (img == null) {
          final defPath = defaultFilenames[entry.key];
          if (defPath != null) {
            img = await _loadImage(defPath);
          }
        }
        if (img != null) {
          _gemImages[entry.key] = img;
        }
      }
    } else {
      _bgPhone = await _loadImage('assets/images/fondo.jpg');
      _bgTablet = await _loadImage('assets/images/fondo_tablet.jpg') ?? _bgPhone;
      _bgDesktop = await _loadImage('assets/images/fondo_desktop.jpg') ?? _bgPhone;
      _flaskImage = await _loadImage('assets/game/gems/frasco.png');

      final filenames = {
        GemType.pearl: 'assets/game/gems/perla.png',
        GemType.emerald: 'assets/game/gems/esmeralda.png',
        GemType.amethyst: 'assets/game/gems/amatista.png',
        GemType.topaz: 'assets/game/gems/topacio.png',
        GemType.greenRuby: 'assets/game/gems/peridoto.png',
        GemType.sapphire: 'assets/game/gems/zafiro.png',
        GemType.redRuby: 'assets/game/gems/rubi.png',
        GemType.diamond: 'assets/game/gems/diamante.png',
        GemType.quartz: 'assets/game/gems/cuarzo.png',
        GemType.stone: 'assets/game/gems/piedra.png',
      };

      for (var entry in filenames.entries) {
        final img = await _loadImage(entry.value);
        if (img != null) {
          _gemImages[entry.key] = img;
        }
      }
    }

    if (mounted) setState(() {});
  }

  Future<ui.Image?> _loadImage(String path) async {
    try {
      final data = await rootBundle.load(path);
      final codec = await ui.instantiateImageCodec(data.buffer.asUint8List());
      final frame = await codec.getNextFrame();
      return frame.image;
    } catch (_) {
      return null;
    }
  }

  void _sendBridgeEvent(String eventName, String payloadJson) {
    final msg = json.encode({
      'eventName': eventName,
      'payload': payloadJson,
    });
    widget.onMessage?.call(msg);
  }

  void _handleHostMessage(String gameObject, String method, String param) {
    if (method == 'RestartGame') {
      _restartGame();
    } else if (method == 'TriggerGameOver') {
      _isGameOver = true;
      _audio.playGameOver();
    } else if (method == 'ReceiveMessageFromFlutter') {
      try {
        final parsed = json.decode(param);
        final event = parsed['eventName'];
        if (event == 'PAUSE_GAME') {
          final payload = json.decode(parsed['payload'] ?? '{}');
          _isPaused = payload['isPaused'] == true;
          if (_isPaused) {
            _audio.stopBgMusic();
          } else {
            _audio.playBgMusic();
            // Si no hay misión activa y el cooldown no está corriendo, asegurar que se programe una
            if (!_isMissionActive && (_nextMissionCooldownTimer == null || !_nextMissionCooldownTimer!.isActive)) {
              _scheduleNextMission(initialDelaySeconds: 5);
            }
          }
        } else if (event == 'REVIVE_GAME') {
          _reviveGame();
        }
      } catch (_) {}
    } else if (gameObject == 'AudioManager') {
      if (method == 'PlayStartGameFromFlutter' || method == 'PlayStartGame') {
        _audio.playStartGame();
      } else if (method == 'PlayMusicFromFlutter') {
        _audio.playBgMusic();
      }
    }
  }

  void _updateScore(int newScore) {
    _score = newScore;
    _sendBridgeEvent('SCORE_UPDATED', json.encode({
      'currentScore': _score,
      'score': _score,
    }));
  }

  void _restartGame() {
    _gems.clear();
    _pendingMerges.clear();
    _score = 0;
    _isGameOver = false;
    _isPaused = false;
    _dangerTimer = 0.0;
    _spawnTimer = 1.0;
    _comboMultiplier = 0;
    _comboTimer = 0.0;
    _activeComboGemType = null;
    _isMissionActive = false;
    _missionCountdownTimer?.cancel();
    _nextMissionCooldownTimer?.cancel();
    _scheduleNextMission(initialDelaySeconds: 10);
    _audio.playStartGame();
    _updateScore(0);
    _sendBridgeEvent('DANGER_ZONE', json.encode({'isDanger': false}));
  }

  void _reviveGame() {
    _gems.sort((a, b) => a.y.compareTo(b.y));
    final countToDestroy = math.max(3, (_gems.length * 0.35).ceil());
    for (int i = 0; i < math.min(countToDestroy, _gems.length); i++) {
      _gems[i].isMerged = true;
    }
    _gems.removeWhere((g) => g.isMerged);
    _dangerTimer = 0.0;
    _isGameOver = false;
    _audio.playBgMusic();
    _sendBridgeEvent('DANGER_ZONE', json.encode({'isDanger': false}));
  }

  void _gameLoop() {
    if (_isPaused || _isGameOver) return;

    const dt = 1.0 / 60.0;
    _totalTime += dt;

    // 1. Spawner de perlas dentro del cuello del frasco (SpawnPoint de Unity)
    _spawnTimer -= dt;
    if (_spawnTimer <= 0) {
      _spawnPearl();
      _spawnTimer = _spawnInterval;
    }

    // 2. Físicas y Colisiones
    _updatePhysics(dt);

    // 3. Procesar fusiones
    _processMerges();

    // 4. Temporizador de Combos
    if (_comboTimer > 0) {
      _comboTimer -= dt;
      if (_comboTimer <= 0) {
        if (_comboMultiplier >= 2 && _activeComboGemType != null) {
          widget.onComboAttack?.call(_activeComboGemType!, _comboMultiplier);
        }
        _comboMultiplier = 0;
        _activeComboGemType = null;
      }
    }

    // 5. Zona de Peligro:
    // Se activa SOLO cuando las gemas no-perlas se acumulan por desbordamiento real
    // (es decir, suben o quedan estancadas cerca de la entrada del cuenco con vy <= 25.0)
    // Se excluyen las gemas que están cayendo activamente en cascada hacia el fondo (vy > 25.0).
    final double dangerThresholdY = _isMobileMultiplayerLayout ? 370.0 : 250.0;

    int dangerCount = 0;
    if (!widget.isOpponentBoard) {
      for (var g in _gems) {
        if (!g.isMerged && g.type != GemType.pearl) {
          if (g.y <= dangerThresholdY && g.vy <= 25.0) {
            dangerCount++;
          }
        }
      }
    }

    _isInDanger = dangerCount > 0;
    if (_isInDanger != _wasInDanger) {
      _wasInDanger = _isInDanger;
      _sendBridgeEvent('DANGER_ZONE', json.encode({'isDanger': _isInDanger}));
    }

    if (_isInDanger) {
      _dangerTimer += dt;
      if (_dangerTimer >= 2.5 && !_isGameOver) {
        _isGameOver = true;
        _audio.playGameOver();
        _sendBridgeEvent('GAME_OVER', json.encode({'finalScore': _score, 'isNewHighScore': false}));
      }
    } else {
      _dangerTimer = 0.0;
    }

    setState(() {});
  }

  void _spawnPearl() {
    _audio.playPearlSpawn();

    final spawnY = _getDynamicSpawnY();

    // Descenso ASMR por el centro del cuello (X = 288.0)
    _gems.add(GlassyGem(
      type: GemType.pearl,
      x: 288.0,
      y: spawnY,
      vy: 110.0, // Caída suave y relajante
      radius: gemRadii[0],
      mass: gemMasses[0],
      isKinematic: true,
    ));
  }

  void _spawnGem(GemType type, double x, double y) {
    final idx = type.index;
    if (type == GemType.diamond) {
      _updateScore(_score + gemScores[idx]);
      _audio.playDiamondExplosion();
      return;
    }

    // Al nacer por fusión, la gema emerge y flota libremente hacia el interior del frasco
    final angle = (math.Random().nextDouble() - 0.5) * math.pi * 0.7;
    final speed = 55.0 + math.Random().nextDouble() * 35.0;
    final initialVx = math.sin(angle) * speed;
    final initialVy = -math.cos(angle).abs() * speed; // Se eleva flotando hacia el interior del frasco

    _gems.add(GlassyGem(
      type: type,
      x: x,
      y: y,
      vx: initialVx,
      vy: initialVy,
      radius: gemRadii[idx],
      mass: gemMasses[idx],
      isKinematic: false,
    ));
  }

  void _spawnAttackGems(GemType type, int count) {
    if (_isGameOver) return;
    final idx = type.index;
    final spawnBaseY = _getDynamicSpawnY();
    final spacing = math.max(38.0, gemRadii[idx] * 2.2);

    for (int i = 0; i < count; i++) {
      _gems.add(GlassyGem(
        type: type,
        x: 288.0,
        y: spawnBaseY - (i * spacing),
        vx: 0.0,
        vy: 140.0, // Caída enérgica hacia abajo por el centro del cuello
        radius: gemRadii[idx],
        mass: gemMasses[idx],
        isKinematic: false,
      ));
    }

    _audio.playPearlSpawn();
    if (mounted) setState(() {});
  }

  void _updatePhysics(double dt) {
    const double damping = 0.997; // Resistencia de fluido suave para que las gemas no pierdan impulso y floten libremente
    final now = _totalTime;

    // Físicas de cada gema
    for (var gem in _gems) {
      if (gem.isKinematic) {
        // Descenso ASMR en línea recta por el centro del tubo (X = 288) hasta el fondo del frasco
        gem.x = 288.0;
        gem.vx = 0.0;
        gem.y += 110.0 * dt;

        // Al llegar al fondo de la botella (suelo Y >= 856), se detiene y espera a la siguiente perla
        if (gem.y >= 856.0) {
          gem.y = 856.0;
          gem.vy = 0.0;
        }
      } else {
        if (!gem.isBeingInteracted) {
          if (gem.y < 430.0) {
            // ENTRADA ACTIVA POR EL CUELLO: Gravedad descendente continua y centrado
            gem.vy += 320.0 * dt;
            gem.vx += (288.0 - gem.x) * 4.0 * dt;
            gem.vx *= 0.95;
            gem.x += gem.vx * dt;
            gem.y += gem.vy * dt;
          } else {
            // Flotabilidad libre Zero-G en el interior del cuenco (FloatingPhysics de Unity)
            final nx = math.sin(now * 0.7 + gem.noiseOffsetX) * 18.0;
            final ny = math.cos(now * 0.7 + gem.noiseOffsetY) * 18.0;
            gem.vx += nx * dt;
            gem.vy += ny * dt;

            gem.vx *= damping;
            gem.vy *= damping;
            gem.x += gem.vx * dt;
            gem.y += gem.vy * dt;

            gem.angularVelocity *= 0.98;
            gem.angle += gem.angularVelocity * dt;
          }
        }

        // Rebote elástico contra las paredes del frasco
        _constrainToFlask(gem);
      }

      // Animación Jelly (Squash & stretch elástico calibrado al 10%)
      if (gem.squashRecovery > 0) {
        gem.squashRecovery -= dt;
        gem.squashX *= 0.85;
        gem.squashY *= 0.85;
        if (gem.squashRecovery <= 0) {
          gem.squashX = 0;
          gem.squashY = 0;
        }
      }
    }

    // Colisiones físicas entre objetos
    for (int i = 0; i < _gems.length; i++) {
      for (int j = i + 1; j < _gems.length; j++) {
        final a = _gems[i];
        final b = _gems[j];

        // Regla estricta del Iniciador (versión_1.md):
        // 1. La perla solo interactúa con otra perla.
        // 2. Las gemas superiores solo interactúan entre ellas.
        if (a.type == GemType.pearl && b.type != GemType.pearl) continue;
        if (a.type != GemType.pearl && b.type == GemType.pearl) continue;

        // Si ambas son perlas cayendo en el cuello y aún no llegan al fondo, no colisionan entre sí en el aire
        if (a.type == GemType.pearl && b.type == GemType.pearl) {
          // Si una perla que cae toca a la perla que está quieta en el fondo (o en el camino)
          final dy = (b.y - a.y).abs();
          if (dy < (a.radius + b.radius)) {
            // Fusión instantánea de perlas para crear la Esmeralda
            _pendingMerges.add([a, b]);
          }
          continue;
        }

        // Colisión física entre gemas superiores (Esmeralda, Amatista, etc.)
        final dx = b.x - a.x;
        final dy = b.y - a.y;
        final dist = math.sqrt(dx * dx + dy * dy);
        final minDist = a.radius + b.radius;

        if (dist > 0 && dist < minDist) {
          final nx = dx / dist;
          final ny = dy / dist;
          final overlap = minDist - dist;

          // Separación posicional para evitar que se traspasen
          if (!a.isBeingInteracted && !b.isBeingInteracted) {
            a.x -= nx * overlap * 0.5;
            a.y -= ny * overlap * 0.5;
            b.x += nx * overlap * 0.5;
            b.y += ny * overlap * 0.5;
          } else if (a.isBeingInteracted && !b.isBeingInteracted) {
            b.x += nx * overlap;
            b.y += ny * overlap;
          } else if (!a.isBeingInteracted && b.isBeingInteracted) {
            a.x -= nx * overlap;
            a.y -= ny * overlap;
          }

          // Velocidad relativa
          final rvx = b.vx - a.vx;
          final rvy = b.vy - a.vy;
          final velAlongNormal = rvx * nx + rvy * ny;

          // Si ya se están separando, no aplicar impulso de rebote
          if (velAlongNormal < 0) {
            final massA = a.mass + (a.isBeingInteracted ? 1.5 : 0.0);
            final massB = b.mass + (b.isBeingInteracted ? 1.5 : 0.0);
            final totalMass = math.max(0.1, massA + massB);

            // Coeficiente de restitución elástica (las gemas rebotan en sentido contrario con la misma fuerza)
            const double restitution = 0.98;
            final impulseMag = -(1.0 + restitution) * velAlongNormal / totalMass;

            if (!a.isBeingInteracted) {
              a.vx -= (impulseMag * massB) * nx;
              a.vy -= (impulseMag * massB) * ny;
            }
            if (!b.isBeingInteracted) {
              b.vx += (impulseMag * massA) * nx;
              b.vy += (impulseMag * massA) * ny;
            }
          }

          // Squash & stretch elástico (Jelly 10% sutil)
          final impact = math.sqrt((a.vx - b.vx) * (a.vx - b.vx) + (a.vy - b.vy) * (a.vy - b.vy));
          if (impact > 10.0) {
            final intensity = (impact * 0.0008).clamp(0.04, 0.10);
            a.squashX = intensity;
            a.squashY = intensity;
            a.squashRecovery = 0.25;
            b.squashX = intensity;
            b.squashY = intensity;
            b.squashRecovery = 0.25;
          }

          // Regla de dificultad estricta (Dificultad.md):
          // Las gemas superiores NO se fusionan por sí solas.
          // Solo si hay intervención humana activa o dentro de los 2.0s de lanzamiento
          if (a.type == b.type && a.type != GemType.stone && a.type != GemType.diamond) {
            final hasHumanIntervention = a.hasRecentInteraction(now) || b.hasRecentInteraction(now);
            if (hasHumanIntervention) {
              _pendingMerges.add([a, b]);
            }
          }
        }
      }
    }
  }

  void _constrainToFlask(GlassyGem gem) {
    const double cx = 288.0;
    const double cy = 630.0;
    const double r = 240.0;
    const double restitution = 0.98;
    const double leftWall = 248.0;
    const double rightWall = 328.0;
    const double neckJunctionY = 393.4;

    // 1. En el cuello vertical superior (Y < neckJunctionY)
    if (gem.y < neckJunctionY) {
      if (gem.x - gem.radius < leftWall) {
        gem.x = leftWall + gem.radius;
        if (gem.vx < 0) gem.vx = -gem.vx * restitution;
      } else if (gem.x + gem.radius > rightWall) {
        gem.x = rightWall - gem.radius;
        if (gem.vx > 0) gem.vx = -gem.vx * restitution;
      }
      return;
    }

    // 2. Garganta abierta entre el cuello y el cuenco (Y entre 393.4 y 430.0)
    // El paso está completamente abierto en el centro para que los elementos caigan al cuenco
    final bool isInNeckThroat = (gem.y < 430.0 && gem.x >= leftWall && gem.x <= rightWall);
    if (isInNeckThroat) {
      if (gem.x - gem.radius < leftWall) {
        gem.x = leftWall + gem.radius;
        if (gem.vx < 0) gem.vx = -gem.vx * restitution;
      } else if (gem.x + gem.radius > rightWall) {
        gem.x = rightWall - gem.radius;
        if (gem.vx > 0) gem.vx = -gem.vx * restitution;
      }
      return;
    }

    // 3. Cuenco esférico inferior y hombros laterales
    final dx = gem.x - cx;
    final dy = gem.y - cy;
    final dist = math.sqrt(dx * dx + dy * dy);
    final maxDist = r - gem.radius;

    if (dist > maxDist && dist > 0.0001) {
      final nx = dx / dist;
      final ny = dy / dist;

      gem.x = cx + nx * (maxDist - 1.0);
      gem.y = cy + ny * (maxDist - 1.0);

      final dot = gem.vx * nx + gem.vy * ny;
      if (dot > 0) {
        gem.vx -= (1.0 + restitution) * dot * nx;
        gem.vy -= (1.0 + restitution) * dot * ny;
      }

      final inwardSpeed = -(gem.vx * nx + gem.vy * ny);
      if (inwardSpeed < 25.0) {
        gem.vx -= nx * (25.0 - inwardSpeed);
        gem.vy -= ny * (25.0 - inwardSpeed);
      }
    }
  }

  void _processMerges() {
    if (_pendingMerges.isEmpty) return;

    for (var pair in _pendingMerges) {
      final a = pair[0];
      final b = pair[1];
      if (a.isMerged || b.isMerged) continue;

      a.isMerged = true;
      b.isMerged = true;

      final midX = (a.x + b.x) * 0.5;
      final midY = (a.y + b.y) * 0.5;

      if (a.type == GemType.quartz) {
        _updateScore(_score + gemScores[GemType.quartz.index]);
        _audio.playGemMerge(0);
        _destroyNearbyStones(midX, midY, 180.0);
        continue;
      }

      final nextType = GemType.values[a.type.index + 1];
      final basePoints = gemScores[nextType.index];

      if (a.type == GemType.pearl) {
        _updateScore(_score + basePoints);
        // Sonido de fusión con Do musical base
        _audio.playGemMerge(0);
      } else {
        // Fusión de gemas jugables:
        // Validar si es combo consecutivo del MISMO elemento dentro de la ventana de 3 segundos
        if (_comboTimer > 0 && _comboMultiplier >= 1 && _activeComboGemType == a.type) {
          _comboMultiplier++;
          _comboTimer = 3.0;
        } else {
          // Si había una racha de combo previa >= 2, emitir el ataque antes de iniciar nueva racha
          if (_comboMultiplier >= 2 && _activeComboGemType != null) {
            widget.onComboAttack?.call(_activeComboGemType!, _comboMultiplier);
          }
          // Nueva racha o cambio de elemento
          _activeComboGemType = a.type;
          _comboMultiplier = 1;
          _comboTimer = 3.0;
        }

        final totalPoints = basePoints * _comboMultiplier;
        _updateScore(_score + totalPoints);

        // Escala musical ascendente (Do, Re, Mi, Fa...) según racha
        _audio.playGemMerge(_comboMultiplier);

        _sendBridgeEvent('COMBO_BONUS', json.encode({
          'combo': _comboMultiplier,
          'bonus': totalPoints,
        }));
      }

      _spawnGem(nextType, midX, midY);
      _destroyNearbyStones(midX, midY, 120.0);

      // Comprobar avance de Micro-Misión Express con validación estricta de elementos
      if (_isMissionActive) {
        bool missionProgressed = false;

        if (_activeMissionAction == 'merge') {
          // Identificación ESTRICTA del elemento que se está fusionando (origen: a.type)
          // Si pide amatistas, SOLO cuenta si fusiona amatistas, no esmeraldas
          if (a.type.index == _activeMissionGemType) {
            _activeMissionCurrent++;
            missionProgressed = true;
          }
        } else if (_activeMissionAction == 'combo') {
          // Identificación ESTRICTA de Combo con elemento específico:
          // Solo progresa si el combo activo actual es con la gema requerida
          if (a.type.index == _activeMissionGemType) {
            _activeMissionCurrent = math.min(_comboMultiplier, _activeMissionTarget);
            missionProgressed = true;
          }
        } else if (_activeMissionAction == 'create') {
          // Identificación ESTRICTA del elemento nuevo resultante (resultado: nextType)
          if (nextType.index == _activeMissionGemType) {
            _activeMissionCurrent++;
            missionProgressed = true;
          }
        }

        if (missionProgressed) {
          _sendBridgeEvent('MISSION_UPDATED', json.encode({
            'currentProgress': _activeMissionCurrent,
            'targetProgress': _activeMissionTarget,
          }));

          if (_activeMissionCurrent >= _activeMissionTarget) {
            _isMissionActive = false;
            _missionCountdownTimer?.cancel();
            _updateScore(_score + _activeMissionReward);
            _sendBridgeEvent('MISSION_COMPLETED', json.encode({
              'bonusPoints': _activeMissionReward,
            }));
            _audio.playDiamondExplosion();
            _scheduleNextMission(initialDelaySeconds: 15);
          }
        }
      }
    }

    _pendingMerges.clear();
    _gems.removeWhere((g) => g.isMerged);
  }

  void _scheduleNextMission({int initialDelaySeconds = 12}) {
    _nextMissionCooldownTimer?.cancel();
    _nextMissionCooldownRemaining = initialDelaySeconds.toDouble();

    // Timer periódico de 1 segundo para pausar limpiamente sin perder la programación
    _nextMissionCooldownTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
      if (_isGameOver || !mounted) {
        timer.cancel();
        return;
      }
      if (_isPaused) {
        // En pausa el cooldown se congela sin avanzar ni perderse
        return;
      }

      _nextMissionCooldownRemaining--;
      if (_nextMissionCooldownRemaining <= 0) {
        timer.cancel();
        if (!_isMissionActive && !_isGameOver && mounted) {
          _generateProceduralMission();
        }
      }
    });
  }

  void _generateProceduralMission() {
    if (_isGameOver || _isMissionActive || !mounted) return;

    final rand = math.Random();
    String action;
    int targetTier;
    int targetCount;
    int timeLimit;
    int reward;

    if (_score < 300) {
      // Early game:
      final typeRoll = rand.nextInt(3);
      if (typeRoll == 0) {
        action = 'merge';
        targetTier = 1; // Esmeraldas
        targetCount = 2;
        timeLimit = 50;
        reward = 150;
      } else if (typeRoll == 1) {
        action = 'combo';
        targetTier = 1; // Esmeraldas
        targetCount = 2; // Logra un combo de 2 con Esmeraldas
        timeLimit = 55;
        reward = 200;
      } else {
        action = 'create';
        targetTier = 2; // Amatistas
        targetCount = 1; // Crea 1 Amatista
        timeLimit = 50;
        reward = 220;
      }
    } else if (_score < 1200) {
      // Mid game:
      final typeRoll = rand.nextInt(3);
      if (typeRoll == 0) {
        action = 'merge';
        targetTier = 1 + rand.nextInt(3); // 1 (Esmeralda), 2 (Amatista) o 3 (Topacio)
        targetCount = (targetTier >= 3) ? 2 : (rand.nextBool() ? 2 : 3);
        timeLimit = 55;
        reward = 300 + targetTier * 40;
      } else if (typeRoll == 1) {
        action = 'combo';
        targetTier = 1 + rand.nextInt(3); // 1 (Esmeralda), 2 (Amatista) o 3 (Topacio)
        targetCount = (targetTier >= 3) ? 2 : 3; // Logra combo de 2 o 3 con ese elemento
        timeLimit = 60;
        reward = 350 + targetTier * 50;
      } else {
        action = 'create';
        targetTier = 2 + rand.nextInt(3); // 2 (Amatista), 3 (Topacio) o 4 (Peridoto)
        targetCount = (targetTier >= 4) ? 1 : 2;
        timeLimit = 60;
        reward = 350 + targetTier * 50;
      }
    } else {
      // Late game:
      final typeRoll = rand.nextInt(3);
      if (typeRoll == 0) {
        action = 'merge';
        targetTier = 2 + rand.nextInt(4); // 2 (Amatista) a 5 (Zafiro)
        targetCount = (targetTier >= 4) ? 2 : 3;
        timeLimit = 60;
        reward = 450 + targetTier * 50;
      } else if (typeRoll == 1) {
        action = 'combo';
        targetTier = 2 + rand.nextInt(3); // 2 (Amatista) a 4 (Peridoto)
        targetCount = 3; // Logra un combo de 3 con este elemento
        timeLimit = 65;
        reward = 500 + targetTier * 60;
      } else {
        action = 'create';
        targetTier = 4 + rand.nextInt(4); // 4 (Peridoto), 5 (Zafiro), 6 (Rubí) o 7 (Diamante)
        targetCount = 1;
        timeLimit = 70;
        reward = 600 + targetTier * 60;
      }
    }

    _activeMissionAction = action;
    _activeMissionGemType = targetTier;
    _activeMissionTarget = targetCount;
    _activeMissionCurrent = 0;
    _activeMissionTimeRemaining = timeLimit;
    _activeMissionReward = reward;
    _isMissionActive = true;

    _sendBridgeEvent('MISSION_STARTED', json.encode({
      'text': '',
      'action': action,
      'gemType': targetTier,
      'targetAmount': targetCount,
      'timeLimitSeconds': timeLimit,
      'bonusPoints': reward,
    }));

    _missionCountdownTimer?.cancel();
    _missionCountdownTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
      if (!_isMissionActive || !mounted || _isGameOver) {
        timer.cancel();
        return;
      }
      if (_isPaused) {
        // En pausa, congelar cronómetro de la misión activa
        return;
      }

      _activeMissionTimeRemaining--;
      if (_activeMissionTimeRemaining <= 0) {
        timer.cancel();
        _isMissionActive = false;
        _scheduleNextMission(initialDelaySeconds: 15);
      }
    });
  }

  void _destroyNearbyStones(double cx, double cy, double radius) {
    for (var g in _gems) {
      if (!g.isMerged && g.type == GemType.stone) {
        final dx = g.x - cx;
        final dy = g.y - cy;
        if (math.sqrt(dx * dx + dy * dy) <= radius) {
          g.isMerged = true;
          _updateScore(_score + gemScores[GemType.stone.index]);
        }
      }
    }
  }

  @override
  void dispose() {
    _missionCountdownTimer?.cancel();
    _nextMissionCooldownTimer?.cancel();
    _ticker.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return LayoutBuilder(
      builder: (context, constraints) {
        final screenW = constraints.maxWidth;
        final screenH = constraints.maxHeight;
        final safeTop = MediaQuery.of(context).padding.top;
        final safeBottom = MediaQuery.of(context).padding.bottom;

        // 1. Zonas reservadas para UI:
        // Arriba: Espacio para HUD (Lapislázulis, Score, Botones de pausa/salida)
        final double topReserved = widget.isVersusMode
            ? (safeTop + 40.0)
            : safeTop + (screenH < 700 ? 60.0 : (screenH < 900 ? 70.0 : 80.0));

        // Abajo: Espacio reservado para el futuro sistema de micromisiones
        // En versus no hay micromisiones, optimizamos el área visible
        final double bottomReserved = widget.isVersusMode
            ? (safeBottom + 16.0)
            : safeBottom + (screenH < 700 ? 90.0 : (screenH < 900 ? 110.0 : 125.0));

        // Detectar si estamos en modo multijugador en móvil/pantalla horizontal
        final bool isMobileMultiplayer = widget.isVersusMode &&
            (screenH < 560 ||
                defaultTargetPlatform == TargetPlatform.android ||
                defaultTargetPlatform == TargetPlatform.iOS);
        _isMobileMultiplayerLayout = isMobileMultiplayer;

        double scale;
        double offsetX;
        double offsetY;

        if (isMobileMultiplayer) {
          // ===================================================================
          // MODO MULTIJUGADOR EN TELÉFONO (APROVECHAMIENTO MÁXIMO DEL ESPACIO)
          // ===================================================================
          // Se maximiza el cuenco esférico para que ocupe casi la totalidad de la altura de la pantalla,
          // permitiendo que la boca y cuello superior del frasco queden recortados por arriba.
          // El cuenco interior mide 480 de diámetro (base Y=878.4, cuenco Y=393.4 a 878.4 -> 485 alto).
          // Proyectamos el cuenco completo + aprox 95 unidades de cuello visible.
          const double targetVisibleVirtualH = 580.0;
          const double bottomMargin = 8.0;

          final double scaleByH = (screenH - bottomMargin) / targetVisibleVirtualH;

          // Escala por ancho de cada frasco en pantalla dividida
          const double flaskVirtualW = 503.4;
          final double sideMargin = screenW < 360 ? 6.0 : 10.0;
          final double scaleByW = (screenW - 2.0 * sideMargin) / flaskVirtualW;

          scale = math.min(scaleByW, scaleByH);

          final double renderW = 576.0 * scale;
          offsetX = (screenW - renderW) / 2.0;

          // Alinear la base del frasco (Y = 878.4) al fondo de la pantalla
          const double flaskBaseY = 878.4;
          offsetY = (screenH - bottomMargin) - (flaskBaseY * scale);
        } else {
          // ===================================================================
          // MODO SOLITARIO O PANTALLAS GRANDES DE PC (LAYOUT COMPLETO ESTÁNDAR)
          // ===================================================================
          const double flaskVisibleW = 503.4;
          const double flaskVisibleH = 850.8;
          const double flaskMouthY = 28.0;

          final double sideMargin = screenW < 450 ? 10.0 : (screenW < 700 ? 16.0 : 24.0);
          final double maxScaleByWidth = (screenW - 2.0 * sideMargin) / flaskVisibleW;

          final double availH = math.max(120.0, screenH - topReserved - bottomReserved);
          final double maxScaleByHeight = availH / flaskVisibleH;

          scale = math.min(maxScaleByWidth, maxScaleByHeight);

          final double renderW = 576.0 * scale;
          offsetX = (screenW - renderW) / 2.0;

          final double flaskHeightOnScreen = flaskVisibleH * scale;
          final double extraVerticalSpace = availH - flaskHeightOnScreen;
          offsetY = (topReserved + math.max(0.0, extraVerticalSpace * 0.35)) - (flaskMouthY * scale);
        }

        _lastScale = scale;
        _lastOffsetX = offsetX;
        _lastOffsetY = offsetY;

        return Listener(
          onPointerDown: (event) {
            final vX = (event.localPosition.dx - offsetX) / scale;
            final vY = (event.localPosition.dy - offsetY) / scale;

            for (var gem in _gems) {
              if (gem.type == GemType.pearl) continue;
              final dx = gem.x - vX;
              final dy = gem.y - vY;
              final vScale = gemVisualScales[gem.type] ?? 1.35;
              if (math.sqrt(dx * dx + dy * dy) <= gem.radius * vScale) {
                _draggedGem = gem;
                gem.isBeingInteracted = true;
                _lastTouchPos = Offset(vX, vY);
                break;
              }
            }
          },
          onPointerMove: (event) {
            if (_draggedGem == null) return;
            final vX = (event.localPosition.dx - offsetX) / scale;
            final vY = (event.localPosition.dy - offsetY) / scale;

            final dX = vX - _lastTouchPos.dx;
            final dY = vY - _lastTouchPos.dy;

            _draggedGem!.x += dX;
            _draggedGem!.y += dY;
            _draggedGem!.vx = dX * 8.0;
            _draggedGem!.vy = dY * 8.0;

            _lastTouchPos = Offset(vX, vY);
          },
          onPointerUp: (event) {
            if (_draggedGem != null) {
              _draggedGem!.isBeingInteracted = false;
              _draggedGem!.interactionEndTime = _totalTime;
              _draggedGem = null;
            }
          },
          child: CustomPaint(
            size: Size(screenW, screenH),
            painter: _GlassyPainter(
              gems: _gems,
              bgPhone: _bgPhone,
              bgTablet: _bgTablet,
              bgDesktop: _bgDesktop,
              flaskImage: _flaskImage,
              gemImages: _gemImages,
              scale: scale,
              offsetX: offsetX,
              offsetY: offsetY,
              screenW: screenW,
              screenH: screenH,
              isInDanger: _isInDanger,
              dangerLineY: isMobileMultiplayer ? 370.0 : 260.0,
            ),
          ),
        );
      },
    );
  }
}

class _GlassyPainter extends CustomPainter {
  final List<GlassyGem> gems;
  final ui.Image? bgPhone;
  final ui.Image? bgTablet;
  final ui.Image? bgDesktop;
  final ui.Image? flaskImage;
  final Map<GemType, ui.Image> gemImages;
  final double scale;
  final double offsetX;
  final double offsetY;
  final double screenW;
  final double screenH;
  final bool isInDanger;
  final double dangerLineY;

  _GlassyPainter({
    required this.gems,
    required this.bgPhone,
    required this.bgTablet,
    required this.bgDesktop,
    required this.flaskImage,
    required this.gemImages,
    required this.scale,
    required this.offsetX,
    required this.offsetY,
    required this.screenW,
    required this.screenH,
    required this.isInDanger,
    this.dangerLineY = 260.0,
  });

  @override
  void paint(Canvas canvas, Size size) {
    final aspect = size.width / size.height;

    // 1. Dibujar el fondo adaptado al 100% de la pantalla (Cover completo sin cortes)
    ui.Image? activeBg = bgPhone;
    if (aspect > 1.3) {
      activeBg = bgDesktop ?? bgPhone;
    } else if (aspect > 0.65) {
      activeBg = bgTablet ?? bgPhone;
    }

    if (activeBg != null) {
      final imgW = activeBg.width.toDouble();
      final imgH = activeBg.height.toDouble();
      final imgAspect = imgW / imgH;

      double srcW = imgW;
      double srcH = imgH;
      double srcX = 0.0;
      double srcY = 0.0;

      if (aspect > imgAspect) {
        srcH = imgW / aspect;
        srcY = (imgH - srcH) / 2.0;
      } else {
        srcW = imgH * aspect;
        srcX = (imgW - srcW) / 2.0;
      }

      canvas.drawImageRect(
        activeBg,
        Rect.fromLTWH(srcX, srcY, srcW, srcH),
        Rect.fromLTWH(0, 0, size.width, size.height),
        Paint(),
      );
    } else {
      canvas.drawRect(Rect.fromLTWH(0, 0, size.width, size.height), Paint()..color = const Color(0xFF070510));
    }

    // 2. Capa del juego centrada con responsive
    canvas.save();
    canvas.translate(offsetX, offsetY);
    canvas.scale(scale);

    // 3. Frasco oficial alineado (escala uniforme con base en Y = 880)
    if (flaskImage != null) {
      const flaskW = 576.0;
      const flaskH = 1033.0;
      const flaskX = 0.0;
      const flaskY = -69.7;

      canvas.drawImageRect(
        flaskImage!,
        Rect.fromLTWH(0, 0, flaskImage!.width.toDouble(), flaskImage!.height.toDouble()),
        const Rect.fromLTWH(flaskX, flaskY, flaskW, flaskH),
        Paint(),
      );
    }

    // 4. Línea de peligro (GameOverZone)
    final dangerPaint = Paint()
      ..color = isInDanger ? const Color(0xFFFF2222) : const Color(0x33FFFFFF)
      ..strokeWidth = 2.0;
    canvas.drawLine(Offset(247, dangerLineY), Offset(329, dangerLineY), dangerPaint);

    // 5. Gemas
    for (var gem in gems) {
      if (gem.isMerged) continue;

      final img = gemImages[gem.type];
      final vScale = _GlassyNativeViewState.gemVisualScales[gem.type] ?? 1.35;
      final drawR = gem.radius * vScale;

      canvas.save();
      canvas.translate(gem.x, gem.y);
      canvas.rotate(gem.angle);

      final w = drawR * (1.0 + gem.squashX);
      final h = drawR * (1.0 - gem.squashY);

      if (img != null) {
        canvas.drawImageRect(
          img,
          Rect.fromLTWH(0, 0, img.width.toDouble(), img.height.toDouble()),
          Rect.fromLTWH(-w, -h, w * 2, h * 2),
          Paint(),
        );
      } else {
        canvas.drawCircle(Offset.zero, gem.radius, Paint()..color = Colors.amber);
      }
      canvas.restore();
    }

    canvas.restore();
  }

  @override
  bool shouldRepaint(covariant _GlassyPainter oldDelegate) => true;
}