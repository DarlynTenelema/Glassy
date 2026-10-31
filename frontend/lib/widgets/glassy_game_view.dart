import 'dart:async';
import 'dart:convert';
import 'dart:math' as math;
import 'dart:ui' as ui;
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';

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

  // Jelly squash & stretch
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

  void postMessage(String gameObject, String method, String param) {
    onPostMessage?.call(gameObject, method, param);
  }
}

class GlassyNativeView extends StatefulWidget {
  final void Function(GlassyGameController controller)? onCreated;
  final void Function(dynamic message)? onMessage;

  const GlassyNativeView({
    super.key,
    this.onCreated,
    this.onMessage,
  });

  @override
  State<GlassyNativeView> createState() => _GlassyNativeViewState();
}

class _GlassyNativeViewState extends State<GlassyNativeView>
    with SingleTickerProviderStateMixin {
  late AnimationController _ticker;
  final GlassyGameController _controller = GlassyGameController();

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

  // Arrastre e inercia táctil
  GlassyGem? _draggedGem;
  Offset _lastTouchPos = Offset.zero;

  // Puntos por gema (versión_1.md y GameConfig.cs)
  static const List<int> gemScores = [0, 1, 2, 4, 8, 16, 32, 64, 20, 30];

  // Masas base según versión_1.md (Pearls=0, 1.0, 1.2, 1.6, 2.2, 3.0, 4.0, Diamond=0)
  static const List<double> gemMasses = [0.0, 1.0, 1.2, 1.6, 2.2, 3.0, 4.0, 0.0, 1.0, 4.5];

  // Radios de colisión en Canvas virtuales
  static const List<double> gemRadii = [
    16.0, // Pearl (diámetro 32 px, cabe con fluidez)
    25.0, // Emerald
    32.0, // Amethyst
    39.0, // Topaz
    46.0, // GreenRuby / Peridot
    53.0, // Sapphire
    60.0, // RedRuby
    60.0, // Diamond
    32.0, // Quartz
    44.0  // Stone
  ];

  @override
  void initState() {
    super.initState();
    _loadAssets();

    _controller.onPostMessage = _handleHostMessage;
    widget.onCreated?.call(_controller);

    _ticker = AnimationController(vsync: this, duration: const Duration(seconds: 1))
      ..addListener(_gameLoop)
      ..repeat();

    WidgetsBinding.instance.addPostFrameCallback((_) {
      _sendBridgeEvent('READY', '{}');
    });
  }

  Future<void> _loadAssets() async {
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
    } else if (method == 'ReceiveMessageFromFlutter') {
      try {
        final parsed = json.decode(param);
        final event = parsed['eventName'];
        if (event == 'PAUSE_GAME') {
          final payload = json.decode(parsed['payload'] ?? '{}');
          _isPaused = payload['isPaused'] == true;
        } else if (event == 'REVIVE_GAME') {
          _reviveGame();
        }
      } catch (_) {}
    }
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
    _sendBridgeEvent('SCORE_UPDATED', json.encode({'score': 0}));
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
        _comboMultiplier = 0;
        _activeComboGemType = null;
      }
    }

    // 5. Zona de Peligro exacta de GameOverZone.cs:
    // Se activa únicamente si gemas (no-perlas) están en la caja del sensor [210.0, 310.0]
    int dangerCount = 0;
    for (var g in _gems) {
      if (!g.isMerged && g.type != GemType.pearl && g.y >= 210.0 && g.y <= 310.0) {
        dangerCount++;
      }
    }

    _isInDanger = dangerCount > 0;
    if (_isInDanger != _wasInDanger) {
      _wasInDanger = _isInDanger;
      _sendBridgeEvent('DANGER_ZONE', json.encode({'isDanger': _isInDanger}));
    }

    if (_isInDanger) {
      _dangerTimer += dt;
      if (_dangerTimer >= 1.5 && !_isGameOver) {
        _isGameOver = true;
        _sendBridgeEvent('GAME_OVER', json.encode({'finalScore': _score, 'isNewHighScore': false}));
      }
    } else {
      _dangerTimer = 0.0;
    }

    setState(() {});
  }

  void _spawnPearl() {
    // SpawnPoint exacto en X=288.0, Y=85.0 dentro del cuello
    _gems.add(GlassyGem(
      type: GemType.pearl,
      x: 288.0,
      y: 85.0,
      vy: 110.0, // Caída suave y relajante (ASMR)
      radius: gemRadii[0],
      mass: gemMasses[0],
      isKinematic: true,
    ));
  }

  void _spawnGem(GemType type, double x, double y) {
    final idx = type.index;
    if (type == GemType.diamond) {
      _score += gemScores[idx];
      _sendBridgeEvent('SCORE_UPDATED', json.encode({'score': _score}));
      return;
    }

    _gems.add(GlassyGem(
      type: type,
      x: x,
      y: y,
      vx: (math.Random().nextDouble() - 0.5) * 35.0,
      vy: (math.Random().nextDouble() - 0.5) * 35.0,
      radius: gemRadii[idx],
      mass: gemMasses[idx],
      isKinematic: false,
    ));
  }

  void _updatePhysics(double dt) {
    const double damping = 0.985;
    final now = _totalTime;

    // Actualizar movimiento
    for (var gem in _gems) {
      if (gem.isKinematic) {
        // Descenso ASMR en línea recta por el tubo hasta tocar el suelo o chocar con otra gema
        gem.y += 110.0 * dt;

        // Si llega al fondo de la botella (suelo Y >= 849), se detiene y pasa a dinámica
        if (gem.y >= 849.0) {
          gem.y = 849.0;
          gem.isKinematic = false;
          gem.vy = 0.0;
        }
      } else {
        if (!gem.isBeingInteracted) {
          if (gem.type == GemType.pearl) {
            // Perlas libres: gravedad suave para asentarse abajo si salieron del cuello
            gem.vy += 80.0 * dt;
          } else {
            // Flotabilidad Zero-G con Perlin Noise suave para gemas superiores (Esmeralda a Rubí)
            final nx = math.sin(now * 0.8 + gem.noiseOffsetX) * 14.0;
            final ny = math.cos(now * 0.8 + gem.noiseOffsetY) * 14.0;
            gem.vx += nx * dt;
            gem.vy += ny * dt;
          }

          gem.vx *= damping;
          gem.vy *= damping;
          gem.x += gem.vx * dt;
          gem.y += gem.vy * dt;

          final torque = math.sin(now * 0.5 + gem.noiseOffsetTorque) * 0.4;
          gem.angularVelocity += torque * dt;
          gem.angularVelocity *= 0.95;
          gem.angle += gem.angularVelocity * dt;
        }
      }

      // Animación Jelly (Squash & stretch elástico)
      if (gem.squashRecovery > 0) {
        gem.squashRecovery -= dt;
        gem.squashX *= 0.88;
        gem.squashY *= 0.88;
        if (gem.squashRecovery <= 0) {
          gem.squashX = 0;
          gem.squashY = 0;
        }
      }

      // Contener dentro del contorno del frasco
      _constrainToFlask(gem);
    }

    // Colisiones entre gemas
    for (int i = 0; i < _gems.length; i++) {
      for (int j = i + 1; j < _gems.length; j++) {
        final a = _gems[i];
        final b = _gems[j];

        // Regla de capas de Unity (Gem.cs y versión_1.md):
        // Perlas solo colisionan con perlas.
        // Gemas solo colisionan con gemas.
        if (a.type == GemType.pearl && b.type != GemType.pearl) continue;
        if (a.type != GemType.pearl && b.type == GemType.pearl) continue;

        // Si ambas son perlas cinemáticas cayendo en fila por el cuello, mantener la distancia
        if (a.type == GemType.pearl && b.type == GemType.pearl && a.isKinematic && b.isKinematic) {
          continue;
        }

        final dx = b.x - a.x;
        final dy = b.y - a.y;
        final dist = math.sqrt(dx * dx + dy * dy);
        final minDist = a.radius + b.radius;

        if (dist > 0 && dist < minDist) {
          // Despertar perlas cinemáticas si impactan con otra perla asentada
          if (a.isKinematic) a.isKinematic = false;
          if (b.isKinematic) b.isKinematic = false;

          final nx = dx / dist;
          final ny = dy / dist;
          final overlap = minDist - dist;
          final kx = a.vx - b.vx;
          final ky = a.vy - b.vy;

          if (!a.isBeingInteracted && !b.isBeingInteracted) {
            a.x -= nx * overlap * 0.5;
            a.y -= ny * overlap * 0.5;
            b.x += nx * overlap * 0.5;
            b.y += ny * overlap * 0.5;

            // Intercambio de momento elástico con masas según versión_1.md
            final massA = a.mass + (a.isBeingInteracted ? 1.5 : 0.0);
            final massB = b.mass + (b.isBeingInteracted ? 1.5 : 0.0);
            final totalMass = math.max(0.1, massA + massB);

            final p = 2.0 * (nx * kx + ny * ky) / totalMass;
            a.vx -= p * massB * nx * 0.7;
            a.vy -= p * massB * ny * 0.7;
            b.vx += p * massA * nx * 0.7;
            b.vy += p * massA * nx * 0.7;
          }

          // Squash & stretch de impacto
          final impact = math.sqrt(kx * kx + ky * ky);
          if (impact > 20.0) {
            final intensity = (impact * 0.001).clamp(0.05, 0.2);
            a.squashX = intensity;
            a.squashY = intensity;
            a.squashRecovery = 0.3;
            b.squashX = intensity;
            b.squashY = intensity;
            b.squashRecovery = 0.3;
          }

          // Fusión si son del mismo tipo
          if (a.type == b.type && a.type != GemType.stone && a.type != GemType.diamond) {
            // Regla estricta de versión_1.md:
            // Perlas y Cuarzos se fusionan automáticamente al tocarse.
            // Para el resto (Esmeralda a Rubí) se requiere intervención humana (< 2s).
            final isAuto = (a.type == GemType.pearl || a.type == GemType.quartz);
            final isHuman = a.hasRecentInteraction(now) || b.hasRecentInteraction(now);

            if (isAuto || isHuman) {
              _pendingMerges.add([a, b]);
            }
          }
        }
      }
    }
  }

  void _constrainToFlask(GlassyGem gem) {
    final y = gem.y;
    double leftWall = 247.0;
    double rightWall = 329.0;

    if (y <= 360.0) {
      // Cuello cilíndrico recto (ancho 82 px)
      leftWall = 247.0;
      rightWall = 329.0;
    } else if (y <= 450.0) {
      // Hombro acampanado (apertura suave del cuello al cuerpo)
      final t = (y - 360.0) / 90.0;
      final smooth = t * t * (3.0 - 2.0 * t);
      leftWall = 247.0 - smooth * (247.0 - 76.0);
      rightWall = 329.0 + smooth * (500.0 - 329.0);
    } else if (y <= 867.0) {
      // Cámara esférica inferior (centro en 288, 625, radio 242)
      const cy = 625.0;
      const r = 242.0;
      final dy = (y - cy).clamp(-r, r);
      final halfW = math.sqrt(math.max(0.0, r * r - dy * dy));
      leftWall = 288.0 - halfW;
      rightWall = 288.0 + halfW;
    } else {
      leftWall = 288.0;
      rightWall = 288.0;
    }

    if (gem.x - gem.radius < leftWall) {
      gem.x = leftWall + gem.radius;
      gem.vx = -gem.vx * 0.3;
    }
    if (gem.x + gem.radius > rightWall) {
      gem.x = rightWall - gem.radius;
      gem.vx = -gem.vx * 0.3;
    }

    // Suelo inferior de la botella (las perlas tocan el fondo en Y ~ 865)
    if (gem.y + gem.radius > 865.0) {
      gem.y = 865.0 - gem.radius;
      gem.vy = -gem.vy * 0.2;
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
        _score += gemScores[GemType.quartz.index];
        _destroyNearbyStones(midX, midY, 180.0);
        continue;
      }

      final nextType = GemType.values[a.type.index + 1];
      final basePoints = gemScores[nextType.index];

      if (a.type == GemType.pearl) {
        _score += basePoints;
      } else {
        _comboMultiplier++;
        _comboTimer = 3.0;
        final totalPoints = basePoints * _comboMultiplier;
        _score += totalPoints;
        _sendBridgeEvent('COMBO_BONUS', json.encode({
          'combo': _comboMultiplier,
          'bonus': totalPoints,
        }));
      }

      _sendBridgeEvent('SCORE_UPDATED', json.encode({'score': _score}));
      _spawnGem(nextType, midX, midY);
      _destroyNearbyStones(midX, midY, 120.0);
    }

    _pendingMerges.clear();
    _gems.removeWhere((g) => g.isMerged);
  }

  void _destroyNearbyStones(double cx, double cy, double radius) {
    for (var g in _gems) {
      if (!g.isMerged && g.type == GemType.stone) {
        final dx = g.x - cx;
        final dy = g.y - cy;
        if (math.sqrt(dx * dx + dy * dy) <= radius) {
          g.isMerged = true;
          _score += gemScores[GemType.stone.index];
        }
      }
    }
  }

  @override
  void dispose() {
    _ticker.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return LayoutBuilder(
      builder: (context, constraints) {
        final screenW = constraints.maxWidth;
        final screenH = constraints.maxHeight;

        // Escala vertical responsiva:
        // En teléfonos alargados (20:9), escalamos por altura para llenar el 100% vertical
        // y evitar cualquier franja negra o corte abajo.
        final scaleH = screenH / 1024.0;
        final scaleW = screenW / 576.0;
        final isWide = (screenW / screenH) > (576.0 / 1024.0);

        final scale = isWide ? math.min(scaleW, scaleH) : scaleH;
        final renderW = 576.0 * scale;
        final renderH = 1024.0 * scale;
        final offsetX = (screenW - renderW) / 2.0;
        final offsetY = (screenH - renderH) / 2.0;

        return Listener(
          onPointerDown: (event) {
            final vX = (event.localPosition.dx - offsetX) / scale;
            final vY = (event.localPosition.dy - offsetY) / scale;

            for (var gem in _gems) {
              if (gem.type == GemType.pearl) continue;
              final dx = gem.x - vX;
              final dy = gem.y - vY;
              if (math.sqrt(dx * dx + dy * dy) <= gem.radius * 1.3) {
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
      // Escalado Cover para llenar la pantalla completa sin distorsión
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

    // 4. Línea de peligro (GameOverZone de Unity en Y = 260)
    final dangerPaint = Paint()
      ..color = isInDanger ? const Color(0xFFFF2222) : const Color(0x33FFFFFF)
      ..strokeWidth = 2.0;
    canvas.drawLine(const Offset(247, 260), const Offset(329, 260), dangerPaint);

    // 5. Gemas
    for (var gem in gems) {
      if (gem.isMerged) continue;

      final img = gemImages[gem.type];
      final r = gem.radius;

      canvas.save();
      canvas.translate(gem.x, gem.y);
      canvas.rotate(gem.angle);

      final w = r * (1.0 + gem.squashX);
      final h = r * (1.0 - gem.squashY);

      if (img != null) {
        canvas.drawImageRect(
          img,
          Rect.fromLTWH(0, 0, img.width.toDouble(), img.height.toDouble()),
          Rect.fromLTWH(-w, -h, w * 2, h * 2),
          Paint(),
        );
      } else {
        canvas.drawCircle(Offset.zero, r, Paint()..color = Colors.amber);
      }
      canvas.restore();
    }

    canvas.restore();
  }

  @override
  bool shouldRepaint(covariant _GlassyPainter oldDelegate) => true;
}
