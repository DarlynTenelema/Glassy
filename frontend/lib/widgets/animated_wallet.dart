import 'dart:ui';
import 'package:glassy/theme/app_colors.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import 'ui/currency_icon.dart';

class AnimatedWallet extends StatefulWidget {
  final VoidCallback? onTap;

  const AnimatedWallet({super.key, this.onTap});

  @override
  State<AnimatedWallet> createState() => _AnimatedWalletState();
}

class _AnimatedWalletState extends State<AnimatedWallet> with SingleTickerProviderStateMixin {
  int _lastCrystals = -1;
  late AnimationController _bumpController;
  late Animation<double> _scaleAnimation;
  late Animation<Color?> _colorAnimation;

  @override
  void initState() {
    super.initState();
    _bumpController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 600),
    );
    
    _scaleAnimation = TweenSequence<double>([
      TweenSequenceItem(tween: Tween(begin: 1.0, end: 1.2).chain(CurveTween(curve: Curves.easeOut)), weight: 30),
      TweenSequenceItem(tween: Tween(begin: 1.2, end: 1.0).chain(CurveTween(curve: Curves.elasticOut)), weight: 70),
    ]).animate(_bumpController);

    _colorAnimation = ColorTween(
      begin: AppColors.lightBlue.withValues(alpha: 0.0),
      end: AppColors.lightBlue.withValues(alpha: 0.6),
    ).animate(CurvedAnimation(parent: _bumpController, curve: Curves.easeOut));
    
    _bumpController.addListener(() {
      setState(() {});
    });
  }

  @override
  void dispose() {
    _bumpController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Consumer<GameProvider>(
      builder: (context, gameProvider, child) {
        if (_lastCrystals == -1) {
           _lastCrystals = gameProvider.crystals;
        } else if (gameProvider.crystals != _lastCrystals) {
          _bumpController.forward(from: 0.0);
          _lastCrystals = gameProvider.crystals;
        }

        return GestureDetector(
          onTap: widget.onTap,
          child: Transform.scale(
            scale: _scaleAnimation.value,
            child: ClipRRect(
              borderRadius: BorderRadius.circular(25),
              child: BackdropFilter(
                filter: ImageFilter.blur(sigmaX: 12, sigmaY: 12),
                child: Container(
                  padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
                  decoration: BoxDecoration(
                    color: const Color(0xFF0A1A33).withValues(alpha: 0.65),
                    borderRadius: BorderRadius.circular(25),
                    border: Border.all(
                      color: Colors.white.withValues(alpha: 0.35),
                      width: 1.2,
                    ),
                    boxShadow: [
                      BoxShadow(
                        color: _colorAnimation.value ?? const Color(0xFF00E5FF).withValues(alpha: 0.25),
                        blurRadius: 18,
                        spreadRadius: 1,
                      ),
                      BoxShadow(
                        color: Colors.black.withValues(alpha: 0.4),
                        offset: const Offset(0, 4),
                        blurRadius: 10,
                      ),
                    ],
                  ),
                  child: Row(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const CurrencyIcon(size: 22),
                      const SizedBox(width: 8),
                      TweenAnimationBuilder<int>(
                        tween: IntTween(begin: gameProvider.crystals, end: gameProvider.crystals), 
                        duration: const Duration(milliseconds: 1200),
                        curve: Curves.easeOutExpo,
                        builder: (context, value, child) {
                          return Text(
                            '$value',
                            style: const TextStyle(
                              color: Colors.white,
                              fontWeight: FontWeight.w900,
                              fontSize: 16,
                              letterSpacing: 1.2,
                              shadows: [
                                Shadow(
                                  color: Color(0xFF00E5FF),
                                  blurRadius: 10,
                                ),
                              ],
                            ),
                          );
                        },
                      ),
                    ],
                  ),
                ),
              ),
            ),
          ),
        );
      },
    );
  }
}
