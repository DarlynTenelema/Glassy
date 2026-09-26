import 'dart:ui';
import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import '../services/audio_service.dart';

class GamingButton extends StatefulWidget {
  final String text;
  final VoidCallback onPressed;
  final Widget? icon;
  final Color primaryColor;
  final Color secondaryColor;
  final double width;
  final double height;
  final double fontSize;
  final bool shatterEffect; // Nuevo parámetro para el efecto de romperse

  const GamingButton({
    Key? key,
    required this.text,
    required this.onPressed,
    this.icon,
    this.primaryColor = AppTheme.neonCyan,
    this.secondaryColor = AppTheme.tealGlass,
    this.width = double.infinity,
    this.height = 65.0,
    this.fontSize = 22.0,
    this.shatterEffect = false,
  }) : super(key: key);

  @override
  State<GamingButton> createState() => _GamingButtonState();
}

class _GamingButtonState extends State<GamingButton> with TickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<double> _scaleAnimation;
  
  late AnimationController _shatterController;
  
  bool _isPressed = false;
  bool _isShattering = false;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 150),
    );
    _scaleAnimation = Tween<double>(begin: 1.0, end: 0.92).animate(
      CurvedAnimation(parent: _controller, curve: Curves.easeOutCubic),
    );
    
    _shatterController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 400),
    );
  }

  @override
  void dispose() {
    _controller.dispose();
    _shatterController.dispose();
    super.dispose();
  }

  void _onPointerDown(PointerDownEvent event) {
    if (!_isPressed && !_isShattering) {
      AudioService().playClick();
      setState(() => _isPressed = true);
      _controller.forward();
    }
  }

  void _onPointerUp(PointerUpEvent event) async {
    if (_isPressed && !_isShattering) {
      if (widget.shatterEffect) {
        setState(() => _isShattering = true);
        _shatterController.forward(from: 0.0);
        // Esperamos a que la animación de quiebre esté un poco avanzada antes de navegar
        await Future.delayed(const Duration(milliseconds: 250));
        widget.onPressed();
        
        // Reset state
        if (mounted) {
          setState(() {
            _isShattering = false;
            _isPressed = false;
          });
          _controller.reverse();
          _shatterController.reset();
        }
      } else {
        setState(() => _isPressed = false);
        _controller.reverse();
        widget.onPressed();
      }
    }
  }

  void _onPointerCancel(PointerCancelEvent event) {
    if (_isPressed && !_isShattering) {
      setState(() => _isPressed = false);
      _controller.reverse();
    }
  }

  @override
  Widget build(BuildContext context) {
    return Listener(
      onPointerDown: _onPointerDown,
      onPointerUp: _onPointerUp,
      onPointerCancel: _onPointerCancel,
      child: AnimatedBuilder(
        animation: Listenable.merge([_scaleAnimation, _shatterController]),
        builder: (context, child) {
          // El efecto de shake se añade si se está rompiendo
          double shakeOffset = 0;
          if (_isShattering) {
            shakeOffset = (1 - _shatterController.value) * 10 * ((_shatterController.value * 20).toInt() % 2 == 0 ? 1 : -1);
          }
          
          return Transform.translate(
            offset: Offset(shakeOffset, 0),
            child: Transform.scale(
              scale: _scaleAnimation.value,
              child: SizedBox(
                width: widget.width,
                height: widget.height + (_isPressed ? 2 : 8),
                child: Stack(
                  alignment: Alignment.bottomCenter,
                  clipBehavior: Clip.none,
                  children: [
                    // Base sombra cristalina
                    Container(
                      width: widget.width,
                      height: widget.height,
                      decoration: BoxDecoration(
                        color: widget.secondaryColor.withOpacity(0.3),
                        borderRadius: BorderRadius.circular(widget.height / 2),
                        boxShadow: [
                          BoxShadow(
                            color: widget.primaryColor.withOpacity(0.5),
                            offset: const Offset(0, 8),
                            blurRadius: 20,
                          ),
                        ],
                      ),
                    ),
                    
                    // Botón flotante Glassy
                    AnimatedPositioned(
                      duration: const Duration(milliseconds: 150),
                      curve: Curves.easeOutCubic,
                      bottom: _isPressed ? 0 : 8,
                      left: 0,
                      right: 0,
                      child: ClipRRect(
                        borderRadius: BorderRadius.circular(widget.height / 2),
                        child: BackdropFilter(
                          filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
                          child: Stack(
                            children: [
                              Container(
                                height: widget.height,
                                decoration: BoxDecoration(
                                  gradient: LinearGradient(
                                    begin: Alignment.topLeft,
                                    end: Alignment.bottomRight,
                                    colors: [
                                      Colors.white.withOpacity(0.4),
                                      widget.primaryColor.withOpacity(0.3),
                                      widget.primaryColor.withOpacity(0.1),
                                    ],
                                  ),
                                  borderRadius: BorderRadius.circular(widget.height / 2),
                                  border: Border.all(
                                    color: Colors.white.withOpacity(0.6),
                                    width: 1.5,
                                  ),
                                ),
                                child: Center(
                                  child: Row(
                                    mainAxisAlignment: MainAxisAlignment.center,
                                    children: [
                                      if (widget.icon != null) ...[
                                        widget.icon!,
                                        const SizedBox(width: 8),
                                      ],
                                      Text(
                                        widget.text,
                                        style: TextStyle(
                                          color: Colors.white,
                                          fontSize: widget.fontSize,
                                          fontWeight: FontWeight.w900,
                                          letterSpacing: 2.0,
                                          shadows: [
                                            Shadow(
                                              color: widget.primaryColor,
                                              offset: const Offset(0, 0),
                                              blurRadius: 15,
                                            ),
                                          ],
                                        ),
                                      ),
                                    ],
                                  ),
                                ),
                              ),
                              
                              // Capa de grietas dibujadas encima
                              if (_isShattering || _shatterController.value > 0)
                                Positioned.fill(
                                  child: CustomPaint(
                                    painter: CrackPainter(
                                      progress: _shatterController.value,
                                      crackColor: Colors.white,
                                    ),
                                  ),
                                ),
                            ],
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ),
          );
        },
      ),
    );
  }
}

// Pintor personalizado para crear las grietas del cristal
class CrackPainter extends CustomPainter {
  final double progress; // 0.0 to 1.0
  final Color crackColor;

  CrackPainter({required this.progress, required this.crackColor});

  @override
  void paint(Canvas canvas, Size size) {
    if (progress == 0) return;
    
    final paint = Paint()
      ..color = crackColor.withOpacity((1 - progress).clamp(0.0, 1.0))
      ..style = PaintingStyle.stroke
      ..strokeWidth = 2 + (progress * 3)
      ..strokeJoin = StrokeJoin.miter;

    final center = Offset(size.width / 2, size.height / 2);
    
    // Dibujamos 5 grietas saliendo desde el centro
    _drawCrack(canvas, paint, center, Offset(-10, -10), progress, size);
    _drawCrack(canvas, paint, center, Offset(size.width + 10, -10), progress, size);
    _drawCrack(canvas, paint, center, Offset(size.width + 10, size.height + 10), progress, size);
    _drawCrack(canvas, paint, center, Offset(-10, size.height + 10), progress, size);
    _drawCrack(canvas, paint, center, Offset(size.width / 2, -20), progress, size);
    _drawCrack(canvas, paint, center, Offset(size.width / 2, size.height + 20), progress, size);
  }

  void _drawCrack(Canvas canvas, Paint paint, Offset start, Offset target, double progress, Size size) {
    final path = Path()..moveTo(start.dx, start.dy);
    
    final dx = target.dx - start.dx;
    final dy = target.dy - start.dy;
    
    // Puntos intermedios para hacer zigzag
    final p1 = Offset(start.dx + dx * 0.3 + dy * 0.2, start.dy + dy * 0.3 - dx * 0.2);
    final p2 = Offset(start.dx + dx * 0.7 - dy * 0.1, start.dy + dy * 0.7 + dx * 0.1);
    
    final p = progress * 3; // Escalamos el progreso para animar cada segmento
    
    if (p > 0) {
      if (p <= 1) {
        path.lineTo(start.dx + (p1.dx - start.dx) * p, start.dy + (p1.dy - start.dy) * p);
      } else if (p <= 2) {
        path.lineTo(p1.dx, p1.dy);
        final pSegment = p - 1;
        path.lineTo(p1.dx + (p2.dx - p1.dx) * pSegment, p1.dy + (p2.dy - p1.dy) * pSegment);
      } else {
        path.lineTo(p1.dx, p1.dy);
        path.lineTo(p2.dx, p2.dy);
        final pSegment = p - 2;
        path.lineTo(p2.dx + (target.dx - p2.dx) * pSegment, p2.dy + (target.dy - p2.dy) * pSegment);
      }
    }
    
    canvas.drawPath(path, paint);
  }

  @override
  bool shouldRepaint(covariant CrackPainter oldDelegate) => oldDelegate.progress != progress;
}
