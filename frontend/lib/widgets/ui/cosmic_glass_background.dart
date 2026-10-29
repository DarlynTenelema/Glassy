import 'dart:math' as math;
import 'package:flutter/material.dart';

/// Fondo atmosférico de Glassy:
/// Degradado cósmico de cristal profundo + partículas de polvo estelar parpadeantes
/// + orbe celestial de cristal desenfocado en segundo plano.
class CosmicGlassBackground extends StatefulWidget {
  final Widget child;

  const CosmicGlassBackground({super.key, required this.child});

  @override
  State<CosmicGlassBackground> createState() => _CosmicGlassBackgroundState();
}

class _CosmicGlassBackgroundState extends State<CosmicGlassBackground> with SingleTickerProviderStateMixin {
  late AnimationController _stardustController;
  final List<_StardustPoint> _stars = [];

  @override
  void initState() {
    super.initState();
    _stardustController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 10),
    )..repeat();

    // Generar 45 partículas de polvo estelar con posiciones y fases únicas
    final random = math.Random(42);
    for (int i = 0; i < 45; i++) {
      _stars.add(_StardustPoint(
        relativeX: random.nextDouble(),
        relativeY: random.nextDouble(),
        radius: 1.0 + random.nextDouble() * 2.2,
        speed: 0.3 + random.nextDouble() * 0.7,
        phase: random.nextDouble() * 2 * math.pi,
        color: i % 4 == 0
            ? const Color(0xFFC084FC) // Lavanda mágica
            : (i % 2 == 0 ? const Color(0xFF38BDF8) : Colors.white), // Cian o blanco
      ));
    }
  }

  @override
  void dispose() {
    _stardustController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Stack(
      children: [
        // 1. Degradado cósmico profundo base
        Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
              begin: Alignment.topCenter,
              end: Alignment.bottomCenter,
              colors: [
                Color(0xFF0A1938), // Azul noche estelar
                Color(0xFF071229), // Azul zafiro abisal
                Color(0xFF020713), // Negro cósmico
              ],
              stops: [0.0, 0.55, 1.0],
            ),
          ),
        ),

        // 2. Resplandor radial de nebulosa central
        Positioned.fill(
          child: Container(
            decoration: BoxDecoration(
              gradient: RadialGradient(
                center: const Alignment(0.0, -0.2),
                radius: 0.95,
                colors: [
                  const Color(0xFF0284C7).withValues(alpha: 0.28), // Azul gema bioluminiscente
                  const Color(0xFF4F46E5).withValues(alpha: 0.15), // Tono violeta tenue
                  Colors.transparent,
                ],
                stops: const [0.0, 0.45, 1.0],
              ),
            ),
          ),
        ),

        // 3. Orbe celestial de cristal translúcido en segundo plano (bokeh/planeta de vidrio)
        Positioned(
          left: -80,
          bottom: 120,
          child: Container(
            width: 220,
            height: 220,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              gradient: RadialGradient(
                center: const Alignment(-0.3, -0.3),
                colors: [
                  const Color(0xFF38BDF8).withValues(alpha: 0.15),
                  const Color(0xFF1E3A8A).withValues(alpha: 0.08),
                  Colors.transparent,
                ],
                stops: const [0.0, 0.6, 1.0],
              ),
            ),
          ),
        ),

        // 4. Pintor de partículas de polvo estelar (Stardust Particles)
        Positioned.fill(
          child: AnimatedBuilder(
            animation: _stardustController,
            builder: (context, _) {
              return CustomPaint(
                painter: _StardustPainter(
                  stars: _stars,
                  animationValue: _stardustController.value,
                ),
              );
            },
          ),
        ),

        // 5. Contenido por encima del fondo
        widget.child,
      ],
    );
  }
}

class _StardustPoint {
  final double relativeX;
  final double relativeY;
  final double radius;
  final double speed;
  final double phase;
  final Color color;

  _StardustPoint({
    required this.relativeX,
    required this.relativeY,
    required this.radius,
    required this.speed,
    required this.phase,
    required this.color,
  });
}

class _StardustPainter extends CustomPainter {
  final List<_StardustPoint> stars;
  final double animationValue;

  _StardustPainter({required this.stars, required this.animationValue});

  @override
  void paint(Canvas canvas, Size size) {
    for (final star in stars) {
      // Parpadeo suave y desplazamiento ascendente lento
      final t = (animationValue * star.speed + star.phase) % 1.0;
      final opacity = (0.25 + 0.65 * math.sin(t * 2 * math.pi).abs()).clamp(0.0, 1.0);

      // Movimiento ascendente sutil
      double y = (star.relativeY - (animationValue * 0.08 * star.speed)) % 1.0;
      if (y < 0) y += 1.0;

      final position = Offset(star.relativeX * size.width, y * size.height);

      // Halo difuso suave
      final glowPaint = Paint()
        ..color = star.color.withValues(alpha: opacity * 0.45)
        ..maskFilter = const MaskFilter.blur(BlurStyle.normal, 2.5);
      canvas.drawCircle(position, star.radius * 1.8, glowPaint);

      // Núcleo blanco nítido
      final corePaint = Paint()
        ..color = Colors.white.withValues(alpha: opacity);
      canvas.drawCircle(position, star.radius * 0.75, corePaint);
    }
  }

  @override
  bool shouldRepaint(covariant _StardustPainter oldDelegate) => true;
}
