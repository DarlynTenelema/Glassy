import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../theme/app_theme.dart';

class AnimatedWallet extends StatefulWidget {
  const AnimatedWallet({Key? key}) : super(key: key);

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
      begin: AppTheme.crystalBlue.withOpacity(0.0),
      end: AppTheme.crystalBlue.withOpacity(0.6),
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

        return Transform.scale(
          scale: _scaleAnimation.value,
          child: Container(
            padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
            decoration: BoxDecoration(
              color: Colors.white.withOpacity(0.15),
              borderRadius: BorderRadius.circular(25),
              border: Border.all(color: AppTheme.crystalBlue.withOpacity(0.7), width: 1.5),
              boxShadow: [
                BoxShadow(
                  color: _colorAnimation.value ?? Colors.transparent,
                  blurRadius: 15,
                  spreadRadius: 2,
                )
              ],
            ),
            child: Row(
              mainAxisSize: MainAxisSize.min,
              children: [
                Image.asset(
                  'assets/images/lapislazuli.png', 
                  width: 20, 
                  height: 20, 
                  errorBuilder: (c, e, s) => const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 20)
                ),
                const SizedBox(width: 8),
                TweenAnimationBuilder<int>(
                  tween: IntTween(begin: gameProvider.crystals, end: gameProvider.crystals), 
                  duration: const Duration(milliseconds: 1200),
                  curve: Curves.easeOutExpo,
                  builder: (context, value, child) {
                    // Si el valor cambia por trigger externo, TweenAnimationBuilder 
                    // usará el nuevo end y animará desde su valor interno actual.
                    // Empezamos con el valor actual para no contar desde 0 al cargar la app.
                    return Text(
                      '$value',
                      style: const TextStyle(
                        color: Colors.white,
                        fontWeight: FontWeight.w900,
                        fontSize: 16,
                        letterSpacing: 1,
                      ),
                    );
                  },
                ),
              ],
            ),
          ),
        );
      },
    );
  }
}
