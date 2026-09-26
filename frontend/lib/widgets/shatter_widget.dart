import 'dart:ui' as ui;
import 'dart:math' as math;
import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import '../services/audio_service.dart';

class ShatterWidget extends StatefulWidget {
  final Widget child;
  final bool isShattered;
  final Duration duration;

  const ShatterWidget({
    Key? key,
    required this.child,
    required this.isShattered,
    this.duration = const Duration(milliseconds: 1500),
  }) : super(key: key);

  @override
  State<ShatterWidget> createState() => _ShatterWidgetState();
}

class _ShatterWidgetState extends State<ShatterWidget> with SingleTickerProviderStateMixin {
  final GlobalKey _repaintKey = GlobalKey();
  ui.Image? _capturedImage;
  late AnimationController _animationController;
  List<ShatterPiece>? _pieces;
  bool _isCaptured = false;

  @override
  void initState() {
    super.initState();
    _animationController = AnimationController(
      vsync: this,
      duration: widget.duration,
    );
  }

  @override
  void didUpdateWidget(covariant ShatterWidget oldWidget) {
    super.didUpdateWidget(oldWidget);
    if (widget.isShattered && !oldWidget.isShattered) {
      _startShatter();
    } else if (!widget.isShattered && oldWidget.isShattered) {
      _reverseShatter();
    }
  }

  Future<void> _startShatter() async {
    if (!_isCaptured) {
      await _captureWidget();
    }
    if (_capturedImage != null) {
      _generatePieces();
      setState(() {
        _isCaptured = true;
      });
      AudioService().playGlassBreak();
      _animationController.forward(from: 0.0);
    }
  }

  void _reverseShatter() {
    AudioService().playChangeGlass();
    _animationController.reverse().then((_) {
      if (mounted) {
        setState(() {
          _isCaptured = false;
        });
      }
    });
  }

  Future<void> _captureWidget() async {
    try {
      final boundary = _repaintKey.currentContext?.findRenderObject() as RenderRepaintBoundary?;
      if (boundary != null) {
        // PixelRatio 2.0 para que la imagen sea de alta calidad al romperse
        final image = await boundary.toImage(pixelRatio: 2.0);
        _capturedImage = image;
      }
    } catch (e) {
      debugPrint("Error capturing widget: $e");
    }
  }

  void _generatePieces() {
    if (_capturedImage == null) return;
    
    final width = _capturedImage!.width.toDouble();
    final height = _capturedImage!.height.toDouble();
    final centerX = width / 2;
    final centerY = height / 2;
    
    final math.Random rnd = math.Random();
    _pieces = [];

    // Cortamos la imagen en un grid de pedazos irregulares
    int rows = 4;
    int cols = 10;
    double cellW = width / cols;
    double cellH = height / rows;

    for (int r = 0; r < rows; r++) {
      for (int c = 0; c < cols; c++) {
        double x = c * cellW;
        double y = r * cellH;
        
        Path path = Path();
        path.moveTo(x + rnd.nextDouble() * 10 - 5, y + rnd.nextDouble() * 10 - 5);
        path.lineTo(x + cellW + rnd.nextDouble() * 10 - 5, y + rnd.nextDouble() * 10 - 5);
        path.lineTo(x + cellW + rnd.nextDouble() * 10 - 5, y + cellH + rnd.nextDouble() * 10 - 5);
        path.lineTo(x + rnd.nextDouble() * 10 - 5, y + cellH + rnd.nextDouble() * 10 - 5);
        path.close();

        double cx = x + cellW / 2;
        double cy = y + cellH / 2;
        
        double dx = cx - centerX;
        double dy = cy - centerY;
        double dist = math.sqrt(dx * dx + dy * dy);
        
        double dirX = dist == 0 ? 0 : dx / dist;
        double dirY = dist == 0 ? 0 : dy / dist;

        double velocity = 50 + rnd.nextDouble() * 150;
        double rotVelocity = (rnd.nextDouble() - 0.5) * 4;

        _pieces!.add(ShatterPiece(
          path: path,
          dirX: dirX,
          dirY: dirY,
          velocity: velocity,
          rotVelocity: rotVelocity,
          cx: cx,
          cy: cy,
        ));
      }
    }
  }

  @override
  void dispose() {
    _animationController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    if (_isCaptured && _capturedImage != null && _pieces != null) {
      return AnimatedBuilder(
        animation: _animationController,
        builder: (context, child) {
          return CustomPaint(
            size: Size(_capturedImage!.width / 2.0, _capturedImage!.height / 2.0),
            painter: ShatterPainter(
              image: _capturedImage!,
              pieces: _pieces!,
              progress: _animationController.value,
            ),
          );
        },
      );
    }

    return RepaintBoundary(
      key: _repaintKey,
      child: widget.child,
    );
  }
}

class ShatterPiece {
  final Path path;
  final double dirX;
  final double dirY;
  final double velocity;
  final double rotVelocity;
  final double cx;
  final double cy;

  ShatterPiece({
    required this.path,
    required this.dirX,
    required this.dirY,
    required this.velocity,
    required this.rotVelocity,
    required this.cx,
    required this.cy,
  });
}

class ShatterPainter extends CustomPainter {
  final ui.Image image;
  final List<ShatterPiece> pieces;
  final double progress;

  ShatterPainter({
    required this.image,
    required this.pieces,
    required this.progress,
  });

  @override
  void paint(Canvas canvas, Size size) {
    canvas.save();
    canvas.scale(0.5, 0.5);

    Paint paint = Paint()
      ..isAntiAlias = true
      ..filterQuality = FilterQuality.high;

    double opacity = (1.0 - progress * 1.5).clamp(0.0, 1.0);
    if (opacity < 1.0) {
      paint.color = Color.fromRGBO(255, 255, 255, opacity);
      paint.blendMode = BlendMode.dstIn; // Apply opacity to image
    }

    double gravity = 400 * progress * progress;

    for (var piece in pieces) {
      canvas.save();

      double tx = piece.dirX * piece.velocity * progress;
      double ty = piece.dirY * piece.velocity * progress + gravity;
      double rotation = piece.rotVelocity * progress * math.pi;

      canvas.translate(piece.cx + tx, piece.cy + ty);
      canvas.rotate(rotation);
      canvas.translate(-piece.cx, -piece.cy);

      canvas.clipPath(piece.path);
      
      // Paint image inside path
      if (opacity < 1.0) {
        canvas.saveLayer(piece.path.getBounds(), Paint());
        canvas.drawImage(image, Offset.zero, Paint());
        canvas.drawRect(piece.path.getBounds(), paint);
        canvas.restore();
      } else {
        canvas.drawImage(image, Offset.zero, Paint());
      }

      canvas.restore();
    }
    canvas.restore();
  }

  @override
  bool shouldRepaint(covariant ShatterPainter oldDelegate) {
    return oldDelegate.progress != progress;
  }
}
