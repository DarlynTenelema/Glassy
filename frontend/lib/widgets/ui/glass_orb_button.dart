import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import '../../services/audio_service.dart';

/// Un botón circular con PROFUNDIDAD 3D y hundimiento mecánico (Glass 3D Orb).
/// Cuenta con zócalo base inferior, hundimiento de 4px al presionar,
/// reflejo esférico de cristal convexo y rebote elástico.
class GlassOrbButton extends StatefulWidget {
  final Widget icon;
  final VoidCallback onTap;
  final double size;
  final String? label;
  final bool hasBadge;
  final Color glowColor;
  final double iconSize;

  const GlassOrbButton({
    super.key,
    required this.icon,
    required this.onTap,
    this.size = 54.0,
    this.label,
    this.hasBadge = false,
    this.glowColor = const Color(0xFF00E5FF),
    this.iconSize = 26.0,
  });

  @override
  State<GlassOrbButton> createState() => _GlassOrbButtonState();
}

class _GlassOrbButtonState extends State<GlassOrbButton> with SingleTickerProviderStateMixin {
  late AnimationController _pressController;
  late Animation<double> _depthAnimation;
  bool _isPressed = false;

  static const double _orbExtrusion = 4.5; // Grosor visible del zócalo 3D

  @override
  void initState() {
    super.initState();
    _pressController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 100),
      reverseDuration: const Duration(milliseconds: 280),
    );

    _depthAnimation = Tween<double>(begin: 0.0, end: 1.0).animate(
      CurvedAnimation(
        parent: _pressController,
        curve: Curves.easeOutQuad,
        reverseCurve: Curves.elasticOut,
      ),
    );
  }

  @override
  void dispose() {
    _pressController.dispose();
    super.dispose();
  }

  void _handleTapDown(TapDownDetails details) {
    if (!_isPressed) {
      setState(() => _isPressed = true);
      _pressController.forward();
      HapticFeedback.lightImpact();
      AudioService().playClick();
    }
  }

  void _handleTapUp(TapUpDetails details) {
    if (_isPressed) {
      _pressController.reverse().then((_) {
        if (mounted) setState(() => _isPressed = false);
      });
      widget.onTap();
    }
  }

  void _handleTapCancel() {
    if (_isPressed) {
      _pressController.reverse().then((_) {
        if (mounted) setState(() => _isPressed = false);
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    final double totalHeight = widget.size + _orbExtrusion;

    Widget orb = AnimatedBuilder(
      animation: _depthAnimation,
      builder: (context, child) {
        final depthVal = _depthAnimation.value;
        final currentY = depthVal * (_orbExtrusion - 0.5); // Se hunde 4px

        return SizedBox(
          width: widget.size,
          height: totalHeight,
          child: Stack(
            clipBehavior: Clip.none,
            children: [
              // =======================================================
              // 1. ZÓCALO / BASE 3D INFERIOR FIJA
              // =======================================================
              Positioned(
                top: _orbExtrusion,
                left: 0,
                right: 0,
                height: widget.size,
                child: Container(
                  decoration: BoxDecoration(
                    shape: BoxShape.circle,
                    color: const Color(0xFF030A1C), // Zócalo oscuro tallado
                    border: Border.all(
                      color: widget.glowColor.withValues(alpha: 0.35),
                      width: 1.2,
                    ),
                    boxShadow: [
                      // Resplandor neón exterior de la base
                      BoxShadow(
                        color: widget.glowColor.withValues(alpha: 0.25 + (0.35 * depthVal)),
                        blurRadius: 18 - (8 * depthVal),
                        spreadRadius: 1 * (1 - depthVal),
                        offset: Offset(0, 6 - (4 * depthVal)), // Sombra se comprime
                      ),
                      // Sombra oclusión contra el fondo
                      BoxShadow(
                        color: Colors.black.withValues(alpha: 0.65),
                        offset: Offset(0, 8 - (5 * depthVal)),
                        blurRadius: 12 - (6 * depthVal),
                      ),
                    ],
                  ),
                ),
              ),

              // =======================================================
              // 2. ESFERA DE CRISTAL FLOTANTE QUE SE HUNDE AL PRESIONAR
              // =======================================================
              Positioned(
                top: currentY,
                left: 0,
                right: 0,
                height: widget.size,
                child: Transform.scale(
                  scale: 1.0 - (0.04 * depthVal),
                  child: Container(
                    decoration: BoxDecoration(
                      shape: BoxShape.circle,
                      boxShadow: [
                        BoxShadow(
                          color: widget.glowColor.withValues(alpha: 0.25 + (0.30 * depthVal)),
                          blurRadius: 14,
                        ),
                      ],
                    ),
                    child: ClipOval(
                      child: BackdropFilter(
                        filter: ImageFilter.blur(sigmaX: 12, sigmaY: 12),
                        child: CustomPaint(
                          painter: _GlassOrbPainter(
                            glowColor: widget.glowColor,
                            isPressed: depthVal > 0.5,
                          ),
                          child: Center(
                            child: SizedBox(
                              width: widget.iconSize,
                              height: widget.iconSize,
                              child: Center(child: widget.icon),
                            ),
                          ),
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
    );

    if (widget.hasBadge) {
      orb = Stack(
        clipBehavior: Clip.none,
        children: [
          orb,
          Positioned(
            top: 2,
            right: 2,
            child: Container(
              width: 13,
              height: 13,
              decoration: BoxDecoration(
                color: const Color(0xFFFF3366),
                shape: BoxShape.circle,
                border: Border.all(color: Colors.white, width: 2),
                boxShadow: [
                  BoxShadow(
                    color: const Color(0xFFFF3366).withValues(alpha: 0.8),
                    blurRadius: 7,
                    spreadRadius: 1,
                  ),
                ],
              ),
            ),
          ),
        ],
      );
    }

    if (widget.label != null) {
      return GestureDetector(
        onTapDown: _handleTapDown,
        onTapUp: _handleTapUp,
        onTapCancel: _handleTapCancel,
        behavior: HitTestBehavior.opaque,
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            orb,
            const SizedBox(height: 6),
            Text(
              widget.label!,
              style: TextStyle(
                color: Colors.white.withValues(alpha: _isPressed ? 1.0 : 0.9),
                fontSize: 13,
                fontWeight: FontWeight.w900,
                letterSpacing: 2.2,
                shadows: [
                  Shadow(
                    color: widget.glowColor.withValues(alpha: 0.6),
                    blurRadius: 10,
                  ),
                ],
              ),
            ),
          ],
        ),
      );
    }

    return GestureDetector(
      onTapDown: _handleTapDown,
      onTapUp: _handleTapUp,
      onTapCancel: _handleTapCancel,
      behavior: HitTestBehavior.opaque,
      child: orb,
    );
  }
}

/// Dibuja el volumen esférico 3D, reflejo de lente curvo y bisel de cristal.
class _GlassOrbPainter extends CustomPainter {
  final Color glowColor;
  final bool isPressed;

  _GlassOrbPainter({required this.glowColor, required this.isPressed});

  @override
  void paint(Canvas canvas, Size size) {
    final rect = Offset.zero & size;
    final center = Offset(size.width / 2, size.height / 2);
    final radius = size.width / 2;

    // 1. Cuerpo esférico con degradado radial descentrado (luz cenital a las 10:30 en el reloj)
    final spherePaint = Paint()
      ..shader = RadialGradient(
        center: const Alignment(-0.25, -0.3),
        radius: 0.85,
        colors: [
          Colors.white.withValues(alpha: isPressed ? 0.45 : 0.32),
          glowColor.withValues(alpha: isPressed ? 0.30 : 0.18),
          const Color(0xFF0F2547).withValues(alpha: 0.55),
          const Color(0xFF050E1D).withValues(alpha: 0.75),
        ],
        stops: const [0.0, 0.35, 0.70, 1.0],
      ).createShader(rect);
    canvas.drawCircle(center, radius, spherePaint);

    // 2. Reflejo de lente superior curva (Specular Sheen)
    final sheenPath = Path();
    final sheenRect = Rect.fromCenter(
      center: Offset(center.dx, center.dy * 0.48),
      width: size.width * 0.78,
      height: size.height * 0.42,
    );
    sheenPath.addOval(sheenRect);

    final sheenPaint = Paint()
      ..shader = LinearGradient(
        begin: Alignment.topCenter,
        end: Alignment.bottomCenter,
        colors: [
          Colors.white.withValues(alpha: isPressed ? 0.75 : 0.60),
          Colors.white.withValues(alpha: 0.0),
        ],
      ).createShader(sheenRect);
    canvas.drawPath(sheenPath, sheenPaint);

    // 3. Bisel perimetral de cristal (borde con luz de borde)
    final rimPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.6
      ..shader = SweepGradient(
        startAngle: 0.0,
        endAngle: 3.14159 * 2,
        colors: [
          Colors.white.withValues(alpha: 0.85),
          glowColor.withValues(alpha: 0.5),
          Colors.white.withValues(alpha: 0.2),
          glowColor.withValues(alpha: 0.7),
          Colors.white.withValues(alpha: 0.85),
        ],
        stops: const [0.0, 0.25, 0.5, 0.75, 1.0],
        transform: const GradientRotation(-3.14159 / 4), // Giro de 45 grados para alinear la luz arriba-izquierda
      ).createShader(rect);
    canvas.drawCircle(center, radius - 0.8, rimPaint);

    // 4. Punto de brillo especular diminuto (hotspot) en el cuadrante superior
    final hotspotPaint = Paint()
      ..color = Colors.white.withValues(alpha: isPressed ? 0.9 : 0.75)
      ..maskFilter = const MaskFilter.blur(BlurStyle.normal, 1.5);
    canvas.drawCircle(Offset(size.width * 0.32, size.height * 0.26), size.width * 0.06, hotspotPaint);
  }

  @override
  bool shouldRepaint(covariant _GlassOrbPainter oldDelegate) {
    return oldDelegate.isPressed != isPressed || oldDelegate.glowColor != glowColor;
  }
}
