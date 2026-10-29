import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../providers/game_provider.dart';
import '../../theme/app_colors.dart';
import '../../services/audio_service.dart';
import 'currency_icon.dart';

enum _SkinDialogStep { confirm, loading, success, error }

class SkinPurchaseDialog extends StatefulWidget {
  final Map<String, dynamic> skin;

  const SkinPurchaseDialog({
    super.key,
    required this.skin,
  });

  @override
  State<SkinPurchaseDialog> createState() => _SkinPurchaseDialogState();
}

class _SkinPurchaseDialogState extends State<SkinPurchaseDialog> with SingleTickerProviderStateMixin {
  _SkinDialogStep _currentStep = _SkinDialogStep.confirm;
  String _errorMessage = '';
  late AnimationController _animController;
  late Animation<double> _scaleAnimation;
  late Animation<double> _pulseAnimation;

  @override
  void initState() {
    super.initState();
    _animController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 1200),
    )..repeat(reverse: true);

    _scaleAnimation = Tween<double>(begin: 0.95, end: 1.05).animate(
      CurvedAnimation(parent: _animController, curve: Curves.easeInOut),
    );

    _pulseAnimation = Tween<double>(begin: 0.6, end: 1.0).animate(
      CurvedAnimation(parent: _animController, curve: Curves.easeInOut),
    );
  }

  @override
  void dispose() {
    _animController.dispose();
    super.dispose();
  }

  Future<void> _handleBuy(GameProvider gameProvider) async {
    AudioService().playClick();
    setState(() {
      _currentStep = _SkinDialogStep.loading;
    });

    final String skinId = widget.skin['id'];
    final int skinPrice = widget.skin['price'] ?? 100;

    final bool success = await gameProvider.buySkin(skinId, skinPrice);

    if (!mounted) return;

    if (success) {
      AudioService().playClick();
      setState(() {
        _currentStep = _SkinDialogStep.success;
      });
    } else {
      setState(() {
        _currentStep = _SkinDialogStep.error;
        _errorMessage = gameProvider.crystals < skinPrice
            ? 'No tienes suficientes Lapislázulis.'
            : 'No se pudo procesar la compra en el servidor. Intenta de nuevo.';
      });
    }
  }

  void _handleEquip(GameProvider gameProvider) {
    AudioService().playClick();
    gameProvider.equipSkin(widget.skin['id']);
    Navigator.of(context).pop(true);
    ScaffoldMessenger.of(context).showSnackBar(
      SnackBar(
        content: Text('¡Skin "${widget.skin['name']}" equipada con éxito!'),
        backgroundColor: AppColors.lightBlue,
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);
    final int price = widget.skin['price'] ?? 100;
    final int userBalance = gameProvider.crystals;
    final bool hasEnoughBalance = userBalance >= price;
    final bool isAlreadyOwned = gameProvider.unlockedSkins.contains(widget.skin['id']);

    final bool isModalLocked = _currentStep == _SkinDialogStep.loading;

    return PopScope(
      canPop: !isModalLocked,
      child: Dialog(
        backgroundColor: Colors.transparent,
        insetPadding: const EdgeInsets.symmetric(horizontal: 24, vertical: 24),
        child: ClipRRect(
          borderRadius: BorderRadius.circular(28),
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 16, sigmaY: 16),
            child: Container(
              width: double.infinity,
              constraints: const BoxConstraints(maxWidth: 360),
              decoration: BoxDecoration(
                gradient: LinearGradient(
                  begin: Alignment.topLeft,
                  end: Alignment.bottomRight,
                  colors: [
                    const Color(0xFF1E293B).withValues(alpha: 0.96),
                    AppColors.navyBlue.withValues(alpha: 0.98),
                  ],
                ),
                borderRadius: BorderRadius.circular(28),
                border: Border.all(
                  color: _currentStep == _SkinDialogStep.success
                      ? Colors.greenAccent.withValues(alpha: 0.6)
                      : (_currentStep == _SkinDialogStep.error
                          ? Colors.redAccent.withValues(alpha: 0.5)
                          : AppColors.lightBlue.withValues(alpha: 0.35)),
                  width: 1.5,
                ),
                boxShadow: [
                  BoxShadow(
                    color: (_currentStep == _SkinDialogStep.success
                            ? Colors.greenAccent
                            : (_currentStep == _SkinDialogStep.error
                                ? Colors.redAccent
                                : AppColors.lightBlue))
                        .withValues(alpha: 0.25),
                    blurRadius: 30,
                    spreadRadius: 2,
                  ),
                ],
              ),
              child: AnimatedSwitcher(
                duration: const Duration(milliseconds: 300),
                transitionBuilder: (child, animation) {
                  return FadeTransition(
                    opacity: animation,
                    child: ScaleTransition(
                      scale: Tween<double>(begin: 0.92, end: 1.0).animate(animation),
                      child: child,
                    ),
                  );
                },
                child: _buildCurrentContent(
                  gameProvider: gameProvider,
                  price: price,
                  userBalance: userBalance,
                  hasEnoughBalance: hasEnoughBalance,
                  isAlreadyOwned: isAlreadyOwned,
                ),
              ),
            ),
          ),
        ),
      ),
    );
  }

  Widget _buildCurrentContent({
    required GameProvider gameProvider,
    required int price,
    required int userBalance,
    required bool hasEnoughBalance,
    required bool isAlreadyOwned,
  }) {
    switch (_currentStep) {
      case _SkinDialogStep.confirm:
        return _buildConfirmView(
          gameProvider: gameProvider,
          price: price,
          userBalance: userBalance,
          hasEnoughBalance: hasEnoughBalance,
          isAlreadyOwned: isAlreadyOwned,
        );
      case _SkinDialogStep.loading:
        return _buildLoadingView();
      case _SkinDialogStep.success:
        return _buildSuccessView(gameProvider);
      case _SkinDialogStep.error:
        return _buildErrorView();
    }
  }

  // ===========================================================================
  // 1. VISTA DE CONFIRMACIÓN: ¿Deseas comprar esta skin? (Cancelar) (Comprar)
  // ===========================================================================
  Widget _buildConfirmView({
    required GameProvider gameProvider,
    required int price,
    required int userBalance,
    required bool hasEnoughBalance,
    required bool isAlreadyOwned,
  }) {
    final String skinId = widget.skin['id'];
    final String skinName = widget.skin['name'] ?? 'Skin';

    return Column(
      key: const ValueKey('confirm_view'),
      mainAxisSize: MainAxisSize.min,
      children: [
        // Cabecera con Wallpaper y Diamante 3D
        Stack(
          clipBehavior: Clip.none,
          children: [
            Container(
              height: 140,
              width: double.infinity,
              decoration: BoxDecoration(
                borderRadius: const BorderRadius.only(
                  topLeft: Radius.circular(28),
                  topRight: Radius.circular(28),
                ),
              ),
              clipBehavior: Clip.hardEdge,
              child: Stack(
                fit: StackFit.expand,
                children: [
                  Image.asset(
                    'assets/skin/$skinId/wallpaper.jpg',
                    fit: BoxFit.cover,
                    errorBuilder: (c, e, s) => Container(color: Colors.black45),
                  ),
                  Container(
                    decoration: BoxDecoration(
                      gradient: LinearGradient(
                        begin: Alignment.topCenter,
                        end: Alignment.bottomCenter,
                        colors: [
                          Colors.black.withValues(alpha: 0.3),
                          AppColors.navyBlue.withValues(alpha: 0.85),
                        ],
                      ),
                    ),
                  ),
                ],
              ),
            ),
            // Diamante Central con Pulso
            Positioned.fill(
              child: Center(
                child: ScaleTransition(
                  scale: _scaleAnimation,
                  child: Container(
                    decoration: BoxDecoration(
                      shape: BoxShape.circle,
                      boxShadow: [
                        BoxShadow(
                          color: AppColors.lightBlue.withValues(alpha: 0.4),
                          blurRadius: 25,
                          spreadRadius: 4,
                        ),
                      ],
                    ),
                    child: Image.asset(
                      'assets/skin/$skinId/Diamond.png',
                      width: 90,
                      height: 90,
                      fit: BoxFit.contain,
                      errorBuilder: (c, e, s) => const Icon(
                        Icons.diamond_outlined,
                        color: AppColors.lightBlue,
                        size: 70,
                      ),
                    ),
                  ),
                ),
              ),
            ),
            // Botón de cierre en esquina superior derecha
            Positioned(
              top: 8,
              right: 8,
              child: IconButton(
                icon: const Icon(Icons.close, color: Colors.white70, size: 22),
                onPressed: () => Navigator.of(context).pop(),
              ),
            ),
          ],
        ),

        Padding(
          padding: const EdgeInsets.symmetric(horizontal: 22, vertical: 16),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              // Nombre de la Skin
              Text(
                skinName.toUpperCase(),
                style: const TextStyle(
                  color: Colors.white,
                  fontWeight: FontWeight.w900,
                  fontSize: 16,
                  letterSpacing: 1.5,
                ),
                textAlign: TextAlign.center,
              ),
              const SizedBox(height: 8),

              // Pregunta requerida explícitamente por el usuario
              const Text(
                '¿Deseas comprar esta skin?',
                style: TextStyle(
                  color: Colors.white,
                  fontWeight: FontWeight.bold,
                  fontSize: 18,
                  letterSpacing: 0.3,
                ),
                textAlign: TextAlign.center,
              ),
              const SizedBox(height: 14),

              // Precio en Lapislázulis
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
                decoration: BoxDecoration(
                  color: Colors.white.withValues(alpha: 0.06),
                  borderRadius: BorderRadius.circular(20),
                  border: Border.all(
                    color: AppColors.lightBlue.withValues(alpha: 0.3),
                  ),
                ),
                child: Row(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    CurrencyIcon(size: 20),
                    const SizedBox(width: 8),
                    Text(
                      '$price',
                      style: const TextStyle(
                        color: Colors.white,
                        fontWeight: FontWeight.w900,
                        fontSize: 18,
                      ),
                    ),
                    const SizedBox(width: 6),
                    const Text(
                      'Lapislázulis',
                      style: TextStyle(
                        color: Colors.white70,
                        fontWeight: FontWeight.w600,
                        fontSize: 12,
                      ),
                    ),
                  ],
                ),
              ),
              const SizedBox(height: 14),

              // Información del Balance del Jugador
              if (isAlreadyOwned) ...[
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
                  decoration: BoxDecoration(
                    color: Colors.greenAccent.withValues(alpha: 0.12),
                    borderRadius: BorderRadius.circular(12),
                    border: Border.all(color: Colors.greenAccent.withValues(alpha: 0.4)),
                  ),
                  child: const Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Icon(Icons.check_circle_outline, color: Colors.greenAccent, size: 16),
                      SizedBox(width: 8),
                      Text(
                        '¡Ya posees esta skin en tu colección!',
                        style: TextStyle(color: Colors.greenAccent, fontSize: 12, fontWeight: FontWeight.bold),
                      ),
                    ],
                  ),
                ),
              ] else if (!hasEnoughBalance) ...[
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
                  decoration: BoxDecoration(
                    color: Colors.redAccent.withValues(alpha: 0.12),
                    borderRadius: BorderRadius.circular(12),
                    border: Border.all(color: Colors.redAccent.withValues(alpha: 0.4)),
                  ),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      const Icon(Icons.warning_amber_rounded, color: Colors.redAccent, size: 16),
                      const SizedBox(width: 6),
                      Expanded(
                        child: Text(
                          'Saldo insuficiente: tienes $userBalance de $price lapis.',
                          style: const TextStyle(color: Colors.redAccent, fontSize: 12, fontWeight: FontWeight.bold),
                          textAlign: TextAlign.center,
                        ),
                      ),
                    ],
                  ),
                ),
              ] else ...[
                Text(
                  'Tu saldo actual: $userBalance Lapis  →  Restante: ${userBalance - price}',
                  style: const TextStyle(
                    color: Colors.white54,
                    fontSize: 11,
                    fontWeight: FontWeight.w500,
                  ),
                  textAlign: TextAlign.center,
                ),
              ],

              const SizedBox(height: 22),

              // Botones de acción: (Cancelar) y (Comprar)
              Row(
                children: [
                  // Botón Cancelar
                  Expanded(
                    child: OutlinedButton(
                      onPressed: () {
                        AudioService().playClick();
                        Navigator.of(context).pop();
                      },
                      style: OutlinedButton.styleFrom(
                        foregroundColor: Colors.white70,
                        side: BorderSide(color: Colors.white.withValues(alpha: 0.2)),
                        padding: const EdgeInsets.symmetric(vertical: 13),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(16),
                        ),
                      ),
                      child: const Text(
                        'Cancelar',
                        style: TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 14,
                        ),
                      ),
                    ),
                  ),
                  const SizedBox(width: 12),

                  // Botón Comprar
                  Expanded(
                    child: ElevatedButton(
                      onPressed: (!hasEnoughBalance || isAlreadyOwned)
                          ? null
                          : () => _handleBuy(gameProvider),
                      style: ElevatedButton.styleFrom(
                        backgroundColor: AppColors.lightBlue,
                        foregroundColor: Colors.black,
                        disabledBackgroundColor: Colors.white12,
                        disabledForegroundColor: Colors.white30,
                        padding: const EdgeInsets.symmetric(vertical: 13),
                        elevation: 4,
                        shadowColor: AppColors.lightBlue.withValues(alpha: 0.4),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(16),
                        ),
                      ),
                      child: const Text(
                        'Comprar',
                        style: TextStyle(
                          fontWeight: FontWeight.w900,
                          fontSize: 14,
                          letterSpacing: 0.5,
                        ),
                      ),
                    ),
                  ),
                ],
              ),
              const SizedBox(height: 6),
            ],
          ),
        ),
      ],
    );
  }

  // ===========================================================================
  // 2. VISTA DE CARGA: Animación de carga y seguro anti-doble clic
  // ===========================================================================
  Widget _buildLoadingView() {
    return Padding(
      key: const ValueKey('loading_view'),
      padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 40),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          // Spinner con aura neón y joya en el centro
          Stack(
            alignment: Alignment.center,
            children: [
              FadeTransition(
                opacity: _pulseAnimation,
                child: Container(
                  width: 90,
                  height: 90,
                  decoration: BoxDecoration(
                    shape: BoxShape.circle,
                    boxShadow: [
                      BoxShadow(
                        color: AppColors.lightBlue.withValues(alpha: 0.4),
                        blurRadius: 30,
                        spreadRadius: 6,
                      ),
                    ],
                  ),
                ),
              ),
              const SizedBox(
                width: 76,
                height: 76,
                child: CircularProgressIndicator(
                  strokeWidth: 4,
                  valueColor: AlwaysStoppedAnimation<Color>(AppColors.lightBlue),
                  backgroundColor: Colors.white12,
                ),
              ),
              ScaleTransition(
                scale: _scaleAnimation,
                child: CurrencyIcon(size: 32),
              ),
            ],
          ),
          const SizedBox(height: 26),

          const Text(
            'PROCESANDO COMPRA...',
            style: TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.w900,
              fontSize: 16,
              letterSpacing: 2,
            ),
          ),
          const SizedBox(height: 10),

          const Text(
            'Desbloqueando aspecto en el servidor de forma segura...',
            style: TextStyle(
              color: Colors.white60,
              fontSize: 12,
              height: 1.4,
            ),
            textAlign: TextAlign.center,
          ),
        ],
      ),
    );
  }

  // ===========================================================================
  // 3. VISTA DE ÉXITO: Sistema entrega la skin al usuario
  // ===========================================================================
  Widget _buildSuccessView(GameProvider gameProvider) {
    final String skinName = widget.skin['name'] ?? 'Skin';

    return Padding(
      key: const ValueKey('success_view'),
      padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 30),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          Container(
            width: 76,
            height: 76,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              color: Colors.greenAccent.withValues(alpha: 0.15),
              border: Border.all(color: Colors.greenAccent, width: 2),
              boxShadow: [
                BoxShadow(
                  color: Colors.greenAccent.withValues(alpha: 0.35),
                  blurRadius: 25,
                  spreadRadius: 2,
                ),
              ],
            ),
            child: const Icon(
              Icons.check_circle_rounded,
              color: Colors.greenAccent,
              size: 46,
            ),
          ),
          const SizedBox(height: 18),

          const Text(
            '¡SKIN DESBLOQUEADA!',
            style: TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.w900,
              fontSize: 18,
              letterSpacing: 1.5,
            ),
          ),
          const SizedBox(height: 8),

          Text(
            '¡Felicidades! Has adquirido "$skinName". Ya forma parte de tu colección permanente.',
            style: const TextStyle(
              color: Colors.white70,
              fontSize: 13,
              height: 1.4,
            ),
            textAlign: TextAlign.center,
          ),
          const SizedBox(height: 24),

          // Botón Equipar y Botón Continuar
          Row(
            children: [
              Expanded(
                child: OutlinedButton(
                  onPressed: () => Navigator.of(context).pop(true),
                  style: OutlinedButton.styleFrom(
                    foregroundColor: Colors.white70,
                    side: BorderSide(color: Colors.white.withValues(alpha: 0.2)),
                    padding: const EdgeInsets.symmetric(vertical: 13),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(16),
                    ),
                  ),
                  child: const Text('Cerrar', style: TextStyle(fontWeight: FontWeight.bold)),
                ),
              ),
              const SizedBox(width: 10),
              Expanded(
                child: ElevatedButton(
                  onPressed: () => _handleEquip(gameProvider),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.greenAccent,
                    foregroundColor: Colors.black,
                    padding: const EdgeInsets.symmetric(vertical: 13),
                    elevation: 4,
                    shadowColor: Colors.greenAccent.withValues(alpha: 0.4),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(16),
                    ),
                  ),
                  child: const Text(
                    'EQUIPAR',
                    style: TextStyle(fontWeight: FontWeight.w900, letterSpacing: 1),
                  ),
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }

  // ===========================================================================
  // 4. VISTA DE ERROR
  // ===========================================================================
  Widget _buildErrorView() {
    return Padding(
      key: const ValueKey('error_view'),
      padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 30),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          Container(
            width: 70,
            height: 70,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              color: Colors.redAccent.withValues(alpha: 0.15),
              border: Border.all(color: Colors.redAccent, width: 2),
            ),
            child: const Icon(
              Icons.error_outline_rounded,
              color: Colors.redAccent,
              size: 40,
            ),
          ),
          const SizedBox(height: 18),

          const Text(
            'NO SE PUDO COMPLETAR',
            style: TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.w900,
              fontSize: 16,
              letterSpacing: 1.2,
            ),
          ),
          const SizedBox(height: 8),

          Text(
            _errorMessage,
            style: const TextStyle(
              color: Colors.white70,
              fontSize: 13,
              height: 1.4,
            ),
            textAlign: TextAlign.center,
          ),
          const SizedBox(height: 24),

          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () => Navigator.of(context).pop(),
              style: ElevatedButton.styleFrom(
                backgroundColor: Colors.white12,
                foregroundColor: Colors.white,
                padding: const EdgeInsets.symmetric(vertical: 13),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(16),
                ),
              ),
              child: const Text('Entendido', style: TextStyle(fontWeight: FontWeight.bold)),
            ),
          ),
        ],
      ),
    );
  }
}
