import 'dart:math' as math;
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import '../../services/audio_service.dart';

/// El monumental botón "PLAY" con PROFUNDIDAD 3D MECÁNICA (Spatial Glassy Button).
/// Cuenta con:
/// 1. Bisel de extrusión 3D inferior (Base fija de 7px).
/// 2. Placa de cristal flotante que se hunde físicamente en el eje Z al presionar.
/// 3. Inclinación de perspectiva 3D (*Touch Tilt*) según dónde toca el dedo.
/// 4. Sombra proyectada que se comprime contra el suelo.
/// 5. Lente convexa superior, destello de estrella y rebote elástico.
class GlassPlayButton extends StatefulWidget {
  final VoidCallback onPressed;
  final String text;
  final double height;
  final double? width;
  final Widget? icon;
  final Color? glowColor;
  final double? fontSize;

  const GlassPlayButton({
    super.key,
    required this.onPressed,
    this.text = 'PLAY',
    this.height = 76.0,
    this.width,
    this.icon,
    this.glowColor,
    this.fontSize,
  });

  @override
  State<GlassPlayButton> createState() => _GlassPlayButtonState();
}

class _GlassPlayButtonState extends State<GlassPlayButton> with TickerProviderStateMixin {
  late AnimationController _pressController;
  late Animation<double> _depthAnimation;
  late AnimationController _sparkleController;

  bool _isPressed = false;
  double _tiltX = 0.0;
  double _tiltY = 0.0;

  static const double _extrusionDepth = 7.0; // Grosor visible del bisel 3D

  @override
  void initState() {
    super.initState();
    // Controlador de compresión y rebote elástico al presionar
    _pressController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 100),
      reverseDuration: const Duration(milliseconds: 320),
    );

    _depthAnimation = Tween<double>(begin: 0.0, end: 1.0).animate(
      CurvedAnimation(
        parent: _pressController,
        curve: Curves.easeOutQuad,
        reverseCurve: Curves.elasticOut,
      ),
    );

    // Controlador de destello continuo de la estrella superior derecha
    _sparkleController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 2400),
    )..repeat();
  }

  @override
  void dispose() {
    _pressController.dispose();
    _sparkleController.dispose();
    super.dispose();
  }

  void _handlePointerDown(PointerDownEvent event, BoxConstraints constraints) {
    if (!_isPressed) {
      final size = Size(constraints.maxWidth, widget.height);
      final local = event.localPosition;

      // Calcular inclinación 3D sutil según el punto de impacto (-1 a 1)
      final normX = ((local.dx / size.width) - 0.5) * 2;
      final normY = ((local.dy / size.height) - 0.5) * 2;

      setState(() {
        _isPressed = true;
        _tiltX = -normY * 0.05; // Inclinación en eje X
        _tiltY = normX * 0.05;  // Inclinación en eje Y
      });

      _pressController.forward();
      HapticFeedback.mediumImpact();
      AudioService().playClick();
    }
  }

  void _handlePointerUp(PointerUpEvent event) {
    if (_isPressed) {
      _pressController.reverse().then((_) {
        if (mounted) {
          setState(() {
            _isPressed = false;
            _tiltX = 0.0;
            _tiltY = 0.0;
          });
        }
      });
      widget.onPressed();
    }
  }

  void _handlePointerCancel(PointerCancelEvent event) {
    if (_isPressed) {
      _pressController.reverse().then((_) {
        if (mounted) {
          setState(() {
            _isPressed = false;
            _tiltX = 0.0;
            _tiltY = 0.0;
          });
        }
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    final double radius = widget.height / 2;
    final double totalHeight = widget.height + _extrusionDepth;

    return LayoutBuilder(
      builder: (context, constraints) {
        return Listener(
          onPointerDown: (e) => _handlePointerDown(e, constraints),
          onPointerUp: _handlePointerUp,
          onPointerCancel: _handlePointerCancel,
          child: AnimatedBuilder(
            animation: Listenable.merge([_depthAnimation, _sparkleController]),
            builder: (context, child) {
              final depthVal = _depthAnimation.value;
              final currentYOffset = depthVal * (_extrusionDepth - 1.0); // Se hunde 6px hacia abajo
              final glow = widget.glowColor ?? const Color(0xFF00E5FF);
              final double computedFontSize = widget.fontSize ??
                  (widget.text.length > 8 ? 20.0 : (widget.text.length > 5 ? 24.0 : 30.0));
              final double computedLetterSpacing = widget.text.length > 8 ? 2.0 : 4.0;

              return SizedBox(
                width: widget.width ?? double.infinity,
                height: totalHeight,
                child: Stack(
                  clipBehavior: Clip.none,
                  children: [
                    // =========================================================
                    // 1. BASE FIJA DE EXTRUSIÓN 3D (El grosor visible del bisel)
                    // =========================================================
                    Positioned(
                      top: _extrusionDepth,
                      left: 0,
                      right: 0,
                      height: widget.height,
                      child: Container(
                        decoration: BoxDecoration(
                          borderRadius: BorderRadius.circular(radius),
                          color: const Color(0xFF030D24), // Base oscura del zócalo de cristal
                          border: Border.all(
                            color: glow.withValues(alpha: 0.35),
                            width: 1.5,
                          ),
                          boxShadow: [
                            // Resplandor neón exterior base
                            BoxShadow(
                              color: glow.withValues(alpha: 0.30 + (0.35 * depthVal)),
                              blurRadius: 28 - (12 * depthVal),
                              spreadRadius: 2 * (1 - depthVal),
                              offset: Offset(0, 10 - (7 * depthVal)), // Sombra se comprime contra el suelo
                            ),
                            // Sombra oclusión oscura lejana en reposo, comprimida al presionar
                            BoxShadow(
                              color: Colors.black.withValues(alpha: 0.7),
                              offset: Offset(0, 14 - (9 * depthVal)),
                              blurRadius: 22 - (12 * depthVal),
                            ),
                          ],
                        ),
                      ),
                    ),

                    // =========================================================
                    // 2. PLACA DE CRISTAL FLOTANTE QUE SE HUNDE FÍSICAMENTE
                    // =========================================================
                    Positioned(
                      top: currentYOffset,
                      left: 0,
                      right: 0,
                      height: widget.height,
                      child: Transform(
                        alignment: Alignment.center,
                        transform: Matrix4.identity()
                          ..setEntry(3, 2, 0.0012) // Matriz de perspectiva 3D
                          ..rotateX(_tiltX * depthVal)
                          ..rotateY(_tiltY * depthVal),
                        child: Container(
                          decoration: BoxDecoration(
                            borderRadius: BorderRadius.circular(radius),
                            boxShadow: [
                              // Resplandor directo de la placa
                              BoxShadow(
                                color: glow.withValues(alpha: 0.35 + (0.35 * depthVal)),
                                blurRadius: 24,
                                spreadRadius: 1,
                              ),
                            ],
                          ),
                          child: ClipRRect(
                            borderRadius: BorderRadius.circular(radius),
                            child: BackdropFilter(
                              filter: ImageFilter.blur(sigmaX: 16, sigmaY: 16),
                              child: Stack(
                                clipBehavior: Clip.none,
                                children: [
                                  // Cuerpo de cristal translúcido con gradiente
                                  Container(
                                    decoration: BoxDecoration(
                                      borderRadius: BorderRadius.circular(radius),
                                      gradient: LinearGradient(
                                        begin: Alignment.topLeft,
                                        end: Alignment.bottomRight,
                                        colors: [
                                          const Color(0xFF1E3A8A).withValues(alpha: 0.55),
                                          const Color(0xFF0284C7).withValues(alpha: 0.30),
                                          const Color(0xFF0F172A).withValues(alpha: 0.75),
                                        ],
                                      ),
                                    ),
                                  ),

                                  // Reflejo de lente convexa superior
                                  Positioned.fill(
                                    child: CustomPaint(
                                      painter: _GlassCapsulePainter(
                                        radius: radius,
                                        isPressed: depthVal > 0.5,
                                      ),
                                    ),
                                  ),

                                  // Contenido (Ícono + Texto PLAY)
                                  Center(
                                    child: Row(
                                      mainAxisAlignment: MainAxisAlignment.center,
                                      mainAxisSize: MainAxisSize.min,
                                      children: [
                                        widget.icon ?? _buildPrismaticPlayIcon(),
                                        const SizedBox(width: 16),
                                        Text(
                                          widget.text,
                                          style: TextStyle(
                                            color: Colors.white,
                                            fontSize: computedFontSize,
                                            fontWeight: FontWeight.w900,
                                            letterSpacing: computedLetterSpacing,
                                            shadows: [
                                              Shadow(
                                                color: glow.withValues(alpha: 0.8),
                                                blurRadius: 18,
                                              ),
                                              Shadow(
                                                color: Colors.white.withValues(alpha: 0.9),
                                                blurRadius: 4,
                                              ),
                                            ],
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),

                                  // Estrella de destello animada (Twinkle Sparkle)
                                  Positioned(
                                    top: 6,
                                    right: 28,
                                    child: AnimatedBuilder(
                                      animation: _sparkleController,
                                      builder: (context, _) {
                                        final val = _sparkleController.value;
                                        final scale = 0.8 + 0.35 * math.sin(val * 2 * math.pi);
                                        final angle = val * 2 * math.pi * 0.25;

                                        return Transform.rotate(
                                          angle: angle,
                                          child: Transform.scale(
                                            scale: scale,
                                            child: const _FourPointSparkle(size: 22),
                                          ),
                                        );
                                      },
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              );
            },
          ),
        );
      },
    );
  }

  Widget _buildPrismaticPlayIcon() {
    return Container(
      width: 44,
      height: 44,
      decoration: BoxDecoration(
        shape: BoxShape.circle,
        boxShadow: [
          BoxShadow(
            color: const Color(0xFF00E5FF).withValues(alpha: 0.5),
            blurRadius: 14,
          ),
        ],
      ),
      child: CustomPaint(
        painter: _PrismaticTrianglePainter(),
      ),
    );
  }
}

/// Dibuja el reflejo de lente superior curvo y el doble bisel perimetral
class _GlassCapsulePainter extends CustomPainter {
  final double radius;
  final bool isPressed;

  _GlassCapsulePainter({required this.radius, required this.isPressed});

  @override
  void paint(Canvas canvas, Size size) {
    final rect = Offset.zero & size;
    final rrect = RRect.fromRectAndRadius(rect, Radius.circular(radius));

    // 1. Reflejo de lente superior (convex lens highlight)
    final lensHeight = size.height * 0.48;
    final lensRect = Rect.fromLTWH(4, 2, size.width - 8, lensHeight);
    final lensRRect = RRect.fromRectAndCorners(
      lensRect,
      topLeft: Radius.circular(radius - 2),
      topRight: Radius.circular(radius - 2),
      bottomLeft: Radius.circular(radius * 0.6),
      bottomRight: Radius.circular(radius * 0.6),
    );

    final lensPaint = Paint()
      ..shader = LinearGradient(
        begin: Alignment.topCenter,
        end: Alignment.bottomCenter,
        colors: [
          Colors.white.withValues(alpha: isPressed ? 0.70 : 0.55),
          Colors.white.withValues(alpha: 0.12),
          Colors.white.withValues(alpha: 0.0),
        ],
        stops: const [0.0, 0.7, 1.0],
      ).createShader(lensRect);
    canvas.drawRRect(lensRRect, lensPaint);

    // 2. Línea de brillo superior ultra nítida
    final crestPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.8
      ..shader = LinearGradient(
        colors: [
          Colors.white.withValues(alpha: 0.0),
          Colors.white.withValues(alpha: 0.95),
          Colors.white.withValues(alpha: 0.0),
        ],
        stops: const [0.15, 0.5, 0.85],
      ).createShader(rect);

    final crestPath = Path()
      ..moveTo(radius, 1.2)
      ..lineTo(size.width - radius, 1.2);
    canvas.drawPath(crestPath, crestPaint);

    // 3. Bisel perimetral completo con gradiente cenital
    final borderPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.6
      ..shader = LinearGradient(
        begin: Alignment.topCenter,
        end: Alignment.bottomCenter,
        colors: [
          Colors.white.withValues(alpha: 0.9),
          const Color(0xFF00E5FF).withValues(alpha: 0.6),
          const Color(0xFF38BDF8).withValues(alpha: 0.25),
        ],
        stops: const [0.0, 0.45, 1.0],
      ).createShader(rect);
    canvas.drawRRect(rrect.deflate(0.8), borderPaint);
  }

  @override
  bool shouldRepaint(covariant _GlassCapsulePainter oldDelegate) {
    return oldDelegate.isPressed != isPressed || oldDelegate.radius != radius;
  }
}

/// Dibuja el triángulo de play holográfico prismático
class _PrismaticTrianglePainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    final w = size.width;
    final h = size.height;

    final path = Path()
      ..moveTo(w * 0.28, h * 0.18)
      ..lineTo(w * 0.82, h * 0.50)
      ..lineTo(w * 0.28, h * 0.82)
      ..close();

    final fillPaint = Paint()
      ..shader = const LinearGradient(
        begin: Alignment.topLeft,
        end: Alignment.bottomRight,
        colors: [
          Color(0xFF00F0FF),
          Color(0xFF67E8F9),
          Color(0xFFE879F9),
          Color(0xFFFDE047),
        ],
        stops: [0.0, 0.35, 0.70, 1.0],
      ).createShader(Offset.zero & size);
    canvas.drawPath(path, fillPaint);

    final borderPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.5
      ..color = Colors.white.withValues(alpha: 0.85);
    canvas.drawPath(path, borderPaint);

    final sheenPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.2
      ..shader = LinearGradient(
        begin: Alignment.topLeft,
        end: Alignment.bottomRight,
        colors: [
          Colors.white,
          Colors.white.withValues(alpha: 0.0),
        ],
      ).createShader(Offset.zero & size);

    final sheenPath = Path()
      ..moveTo(w * 0.28, h * 0.18)
      ..lineTo(w * 0.82, h * 0.50);
    canvas.drawPath(sheenPath, sheenPaint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => false;
}

class _FourPointSparkle extends StatelessWidget {
  final double size;

  const _FourPointSparkle({required this.size});

  @override
  Widget build(BuildContext context) {
    return SizedBox(
      width: size,
      height: size,
      child: CustomPaint(
        painter: _SparklePainter(),
      ),
    );
  }
}

class _SparklePainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    final cx = size.width / 2;
    final cy = size.height / 2;
    final w = size.width;
    final h = size.height;

    final path = Path()
      ..moveTo(cx, 0)
      ..quadraticBezierTo(cx, cy, w, cy)
      ..quadraticBezierTo(cx, cy, cx, h)
      ..quadraticBezierTo(cx, cy, 0, cy)
      ..quadraticBezierTo(cx, cy, cx, 0)
      ..close();

    final glowPaint = Paint()
      ..color = const Color(0xFF67E8F9).withValues(alpha: 0.6)
      ..maskFilter = const MaskFilter.blur(BlurStyle.normal, 4);
    canvas.drawPath(path, glowPaint);

    final corePaint = Paint()..color = Colors.white;
    canvas.drawPath(path, corePaint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => false;
}
