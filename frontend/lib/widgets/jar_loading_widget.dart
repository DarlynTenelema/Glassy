import 'package:flutter/material.dart';
import 'dart:math' as math;

class JarLoadingWidget extends StatefulWidget {
  final double size;
  final Color color;

  const JarLoadingWidget({
    Key? key,
    this.size = 100.0,
    this.color = Colors.blueAccent,
  }) : super(key: key);

  @override
  State<JarLoadingWidget> createState() => _JarLoadingWidgetState();
}

class _JarLoadingWidgetState extends State<JarLoadingWidget> with SingleTickerProviderStateMixin {
  late AnimationController _controller;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 2),
    )..repeat();
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return AnimatedBuilder(
      animation: _controller,
      builder: (context, child) {
        return CustomPaint(
          size: Size(widget.size, widget.size),
          painter: JarPainter(
            progress: _controller.value,
            color: widget.color,
          ),
        );
      },
    );
  }
}

class JarPainter extends CustomPainter {
  final double progress;
  final Color color;

  JarPainter({required this.progress, required this.color});

  @override
  void paint(Canvas canvas, Size size) {
    final double width = size.width;
    final double height = size.height;

    final Paint outlinePaint = Paint()
      ..color = Colors.white.withOpacity(0.8)
      ..style = PaintingStyle.stroke
      ..strokeWidth = 4.0
      ..strokeCap = StrokeCap.round;

    final Paint fillPaint = Paint()
      ..color = color.withOpacity(0.7)
      ..style = PaintingStyle.fill;

    // Draw Jar Outline
    final Path jarPath = Path();
    final double neckWidth = width * 0.3;
    final double neckHeight = height * 0.3;
    final double bodyRadius = width * 0.45;

    // Start at top left lip
    jarPath.moveTo(width / 2 - neckWidth / 2, 0);
    jarPath.lineTo(width / 2 + neckWidth / 2, 0); // Top lip
    jarPath.lineTo(width / 2 + neckWidth / 2, neckHeight); // Right neck
    
    // Right body curve
    jarPath.arcToPoint(
      Offset(width / 2, height),
      radius: Radius.circular(bodyRadius),
      clockwise: true,
    );
    
    // Left body curve
    jarPath.arcToPoint(
      Offset(width / 2 - neckWidth / 2, neckHeight),
      radius: Radius.circular(bodyRadius),
      clockwise: true,
    );
    
    jarPath.lineTo(width / 2 - neckWidth / 2, 0); // Left neck

    canvas.drawPath(jarPath, outlinePaint);

    // Draw Liquid Filling
    canvas.save();
    canvas.clipPath(jarPath);
    
    // Liquid level goes from bottom (height) to top (0)
    final double liquidLevel = height - (height * progress);
    
    final Path wavePath = Path();
    wavePath.moveTo(0, liquidLevel);
    
    // Simple wave effect
    for (double i = 0.0; i <= width; i++) {
      wavePath.lineTo(
        i,
        liquidLevel + math.sin((i / width * math.pi * 2) + (progress * math.pi * 4)) * 5,
      );
    }
    
    wavePath.lineTo(width, height);
    wavePath.lineTo(0, height);
    wavePath.close();

    canvas.drawPath(wavePath, fillPaint);
    canvas.restore();
    
    // Draw some bubbles
    final Paint bubblePaint = Paint()
      ..color = Colors.white.withOpacity(0.5)
      ..style = PaintingStyle.fill;
      
    final int bubbleCount = 3;
    for (int i = 0; i < bubbleCount; i++) {
      final double bubbleX = (width * 0.3) + ((width * 0.4) * (i / bubbleCount));
      // Bubbles go up
      double bubbleY = liquidLevel + (height - liquidLevel) * ((progress + i * 0.3) % 1.0);
      if (bubbleY > liquidLevel && bubbleY < height - 5) {
        canvas.drawCircle(Offset(bubbleX, bubbleY), 3.0, bubblePaint);
      }
    }
  }

  @override
  bool shouldRepaint(covariant JarPainter oldDelegate) {
    return oldDelegate.progress != progress || oldDelegate.color != color;
  }
}
