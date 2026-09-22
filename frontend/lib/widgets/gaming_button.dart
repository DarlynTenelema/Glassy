import 'package:flutter/material.dart';
import '../theme/app_theme.dart';

class GamingButton extends StatefulWidget {
  final String text;
  final VoidCallback onPressed;
  final Widget? icon;
  final Color primaryColor;
  final Color secondaryColor;
  final double width;
  final double height;
  final double fontSize;

  const GamingButton({
    Key? key,
    required this.text,
    required this.onPressed,
    this.icon,
    this.primaryColor = AppTheme.neonPurple,
    this.secondaryColor = const Color(0xFF6A0DAD), // Darker purple for shadow
    this.width = double.infinity,
    this.height = 60.0,
    this.fontSize = 20.0,
  }) : super(key: key);

  @override
  State<GamingButton> createState() => _GamingButtonState();
}

class _GamingButtonState extends State<GamingButton> with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<double> _scaleAnimation;
  bool _isPressed = false;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 100),
    );
    _scaleAnimation = Tween<double>(begin: 1.0, end: 0.95).animate(
      CurvedAnimation(parent: _controller, curve: Curves.easeInOut),
    );
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  void _onPointerDown(PointerDownEvent event) {
    if (!_isPressed) {
      setState(() => _isPressed = true);
      _controller.forward();
    }
  }

  void _onPointerUp(PointerUpEvent event) {
    if (_isPressed) {
      setState(() => _isPressed = false);
      _controller.reverse();
      widget.onPressed();
    }
  }

  void _onPointerCancel(PointerCancelEvent event) {
    if (_isPressed) {
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
        animation: _scaleAnimation,
        builder: (context, child) {
          return Transform.scale(
            scale: _scaleAnimation.value,
            child: SizedBox(
              width: widget.width,
              height: widget.height + 6, // Extra height for the 3D bottom effect
              child: Stack(
                alignment: Alignment.bottomCenter,
                children: [
                  // Bottom shadow/3D part
                  Container(
                    width: widget.width,
                    height: widget.height,
                    decoration: BoxDecoration(
                      color: widget.secondaryColor,
                      borderRadius: BorderRadius.circular(widget.height / 2),
                      boxShadow: [
                        BoxShadow(
                          color: Colors.black.withOpacity(0.5),
                          offset: const Offset(0, 4),
                          blurRadius: 10,
                        ),
                      ],
                    ),
                  ),
                  // Top part (The actual button)
                  AnimatedPositioned(
                    duration: const Duration(milliseconds: 50),
                    bottom: _isPressed ? 0 : 6, // Sinks down when pressed
                    left: 0,
                    right: 0,
                    child: Container(
                      height: widget.height,
                      decoration: BoxDecoration(
                        gradient: LinearGradient(
                          begin: Alignment.topCenter,
                          end: Alignment.bottomCenter,
                          colors: [
                            widget.primaryColor.withOpacity(0.8),
                            widget.primaryColor,
                          ],
                        ),
                        borderRadius: BorderRadius.circular(widget.height / 2),
                        border: Border.all(
                          color: Colors.white.withOpacity(0.5),
                          width: 2,
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
                                fontWeight: FontWeight.bold,
                                letterSpacing: 1.2,
                                shadows: const [
                                  Shadow(
                                    color: Colors.black45,
                                    offset: Offset(0, 2),
                                    blurRadius: 2,
                                  ),
                                ],
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
          );
        },
      ),
    );
  }
}
