import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:flutter_animate/flutter_animate.dart';
import '../../providers/game_provider.dart';
import '../../services/purchase_service.dart';
import '../../services/game_api_service.dart';
import '../../services/ad_service.dart';
import 'currency_icon.dart';
import 'glass_card.dart';
import '../../l10n/l10n_extension.dart';

// Función auxiliar compartida para el diálogo de compra
void showPurchaseConfirmation(BuildContext context, String id, String title, String price) {
  final theme = Theme.of(context);
  showDialog(
    context: context,
    builder: (context) => AlertDialog(
      title: Text(context.l10n.confirmPurchase),
      content: Text(context.l10n.confirmPurchasePrompt(title, price)),
      actions: [
        TextButton(
          onPressed: () => Navigator.pop(context),
          child: Text(context.l10n.cancel, style: TextStyle(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
        ),
        ElevatedButton(
          onPressed: () {
            Navigator.pop(context);
            PurchaseService().buyProduct(id);
            ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text(context.l10n.processingPurchase)));
          },
          child: Text(context.l10n.buy),
        ),
      ],
    ),
  );
}

class EventCard extends StatelessWidget {
  final String title;
  final int crystals;
  final String price;
  final String id;
  final Color accentColor;

  const EventCard({
    super.key,
    required this.title,
    required this.crystals,
    required this.price,
    required this.id,
    required this.accentColor,
  });

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: accentColor.withValues(alpha: 0.1),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: accentColor.withValues(alpha: 0.5), width: 2),
      ),
      padding: const EdgeInsets.all(20),
      child: Row(
        children: [
          CurrencyIcon(size: 45),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(title.toUpperCase(), style: TextStyle(color: accentColor, fontWeight: FontWeight.bold, fontSize: 11, letterSpacing: 1)),
                const SizedBox(height: 4),
                Text('+$crystals Lapis', style: theme.textTheme.titleMedium?.copyWith(fontWeight: FontWeight.w900, fontSize: 18)),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () => showPurchaseConfirmation(context, id, title, price),
            style: ElevatedButton.styleFrom(
              backgroundColor: accentColor,
              foregroundColor: Colors.black,
            ),
            child: Text(price),
          ),
        ],
      ),
    );
  }
}

class PackageCard extends StatelessWidget {
  final String title;
  final int crystals;
  final int bonus;
  final String price;
  final String id;
  final Color accentColor;
  final bool isPopular;

  const PackageCard({
    super.key,
    required this.title,
    required this.crystals,
    required this.bonus,
    required this.price,
    required this.id,
    required this.accentColor,
    this.isPopular = false,
  });

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    return GlassCard(
      margin: const EdgeInsets.only(bottom: 16),
      padding: const EdgeInsets.all(20),
      borderColor: isPopular ? accentColor : theme.colorScheme.onSurface.withValues(alpha: 0.1),
      child: Row(
        children: [
          CurrencyIcon(size: 40),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(title.toUpperCase(), style: TextStyle(color: isPopular ? accentColor : theme.colorScheme.onSurface.withValues(alpha: 0.7), fontWeight: FontWeight.bold, fontSize: 12, letterSpacing: 1)),
                const SizedBox(height: 4),
                Text('$crystals Lapis', style: theme.textTheme.titleMedium?.copyWith(fontWeight: FontWeight.w900, fontSize: 16)),
                if (bonus > 0) Text(context.l10n.giftBonus(bonus), style: const TextStyle(color: Colors.greenAccent, fontSize: 11, fontWeight: FontWeight.bold)),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () => showPurchaseConfirmation(context, id, title, price),
            style: ElevatedButton.styleFrom(
              backgroundColor: isPopular ? accentColor : theme.colorScheme.onSurface.withValues(alpha: 0.24),
              foregroundColor: isPopular ? Colors.black : theme.colorScheme.onSurface,
            ),
            child: Text(price),
          ),
        ],
      ),
    );
  }
}

class SubscriptionCard extends StatelessWidget {
  final String title;
  final String description;
  final String price;
  final String id;
  final Color accentColor;
  final bool isPopular;

  const SubscriptionCard({
    super.key,
    required this.title,
    required this.description,
    required this.price,
    required this.id,
    required this.accentColor,
    this.isPopular = false,
  });

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: accentColor.withValues(alpha: 0.05),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: isPopular ? accentColor : theme.colorScheme.onSurface.withValues(alpha: 0.1), width: isPopular ? 2 : 1),
      ),
      padding: const EdgeInsets.all(20),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Icon(Icons.star_rounded, color: accentColor, size: 28),
              const SizedBox(width: 12),
              Expanded(child: Text(title.toUpperCase(), style: theme.textTheme.titleMedium?.copyWith(color: isPopular ? accentColor : null, fontWeight: FontWeight.w900))),
            ],
          ),
          const SizedBox(height: 12),
          Text(description, style: theme.textTheme.bodyMedium?.copyWith(color: theme.colorScheme.onSurface.withValues(alpha: 0.7), height: 1.4)),
          const SizedBox(height: 16),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () => showPurchaseConfirmation(context, id, title, price),
              style: ElevatedButton.styleFrom(
                backgroundColor: isPopular ? accentColor : theme.colorScheme.onSurface.withValues(alpha: 0.24),
                foregroundColor: isPopular ? Colors.black : theme.colorScheme.onSurface,
              ),
              child: Text(context.l10n.subscribeFor(price)),
            ),
          ),
        ],
      ),
    );
  }
}

class TimeChestCard extends StatelessWidget {
  final String title;
  final String time;
  final int fragments;
  final Color color;
  final String? assetPath;
  final String chestType;
  final double hoursRequired;
  final GameProvider gameProvider;

  const TimeChestCard({
    super.key,
    required this.title,
    required this.time,
    required this.fragments,
    required this.color,
    this.assetPath,
    required this.chestType,
    required this.hoursRequired,
    required this.gameProvider,
  });

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    DateTime? lastChestTime;
    if (chestType == '6h') lastChestTime = gameProvider.lastChest6h;
    if (chestType == '12h') lastChestTime = gameProvider.lastChest12h;
    if (chestType == '24h') lastChestTime = gameProvider.lastChest24h;

    bool isReady = true;
    String countdownStr = context.l10n.chestOpenBtn;

    if (lastChestTime != null) {
      final now = DateTime.now();
      final targetTime = lastChestTime.add(Duration(hours: hoursRequired.toInt()));
      if (now.isBefore(targetTime)) {
        isReady = false;
        final diff = targetTime.difference(now);
        final h = diff.inHours.toString().padLeft(2, '0');
        final m = (diff.inMinutes % 60).toString().padLeft(2, '0');
        final s = (diff.inSeconds % 60).toString().padLeft(2, '0');
        countdownStr = '$h:$m:$s';
      }
    }

    return GlassCard(
      padding: const EdgeInsets.all(12),
      borderColor: color.withValues(alpha: 0.3),
      child: Column(
        children: [
          if (assetPath != null)
            Image.asset(assetPath!, width: 60, height: 60, errorBuilder: (c, e, s) => Icon(Icons.inventory_2_rounded, color: color, size: 40))
          else
            Icon(Icons.inventory_2_rounded, color: color, size: 40),
          const SizedBox(height: 10),
          Text(title.toUpperCase(), style: TextStyle(color: color, fontSize: 11, fontWeight: FontWeight.w900, letterSpacing: 1), textAlign: TextAlign.center),
          const SizedBox(height: 4),
          Text(context.l10n.chestEvery(time), style: theme.textTheme.bodySmall?.copyWith(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
          const SizedBox(height: 8),
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Image.asset('assets/images/lapis_fragments.png', width: 16, height: 16, errorBuilder: (c,e,s) => Icon(Icons.extension, color: color, size: 16)),
              const SizedBox(width: 4),
              Text('+$fragments', style: TextStyle(color: color, fontSize: 12, fontWeight: FontWeight.bold)),
            ],
          ),
          const SizedBox(height: 12),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: isReady ? () async {
                bool success = await gameProvider.claimChest(chestType);
                if (success) {
                  if (!context.mounted) return;
                  ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text(context.l10n.chestOpened(fragments))));
                } else {
                  if (!context.mounted) return;
                  ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text(context.l10n.chestOpenError)));
                }
              } : null,
              style: ElevatedButton.styleFrom(
                backgroundColor: isReady ? color.withValues(alpha: 0.2) : theme.colorScheme.onSurface.withValues(alpha: 0.1),
                foregroundColor: isReady ? color : theme.colorScheme.onSurface.withValues(alpha: 0.5),
                padding: const EdgeInsets.symmetric(vertical: 8),
              ),
              child: Text(countdownStr, style: const TextStyle(fontSize: 11, fontWeight: FontWeight.bold)),
            ),
          )
        ],
      ),
    );
  }
}

class PiggyBankCard extends StatefulWidget {
  final Map<String, dynamic>? storeStatus;
  final VoidCallback? onClaimed;

  const PiggyBankCard({super.key, this.storeStatus, this.onClaimed});

  @override
  State<PiggyBankCard> createState() => _PiggyBankCardState();
}

class _PiggyBankCardState extends State<PiggyBankCard> {
  bool _isClaiming = false;

  Future<void> _handleClaim() async {
    if (_isClaiming) return;
    setState(() => _isClaiming = true);

    try {
      final result = await PurchaseService().claimPiggyBank();
      if (!mounted) return;

      if (result != null) {
        final reward = result['reward'] as int? ?? 100;
        final gameProvider = Provider.of<GameProvider>(context, listen: false);
        gameProvider.addCrystals(reward);
        gameProvider.fetchEconomyStatus();

        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Row(
              children: [
                const Icon(Icons.savings, color: Colors.amber, size: 28),
                const SizedBox(width: 10),
                Expanded(
                  child: Text(
                    context.l10n.piggyClaimSuccess(reward),
                    style: const TextStyle(fontWeight: FontWeight.bold),
                  ),
                ),
              ],
            ),
            backgroundColor: Colors.green[700],
            duration: const Duration(seconds: 4),
          ),
        );
        widget.onClaimed?.call();
      } else {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text(context.l10n.piggyClaimError),
            backgroundColor: Colors.redAccent,
          ),
        );
      }
    } finally {
      if (mounted) {
        setState(() => _isClaiming = false);
      }
    }
  }

  Widget _buildClaimingAnimation(ThemeData theme) {
    return Container(
      width: double.infinity,
      padding: const EdgeInsets.symmetric(vertical: 14, horizontal: 16),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [
            Colors.amber.withValues(alpha: 0.25),
            Colors.orangeAccent.withValues(alpha: 0.40),
            Colors.amber.withValues(alpha: 0.25),
          ],
        ),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.amber, width: 1.5),
        boxShadow: [
          BoxShadow(
            color: Colors.amber.withValues(alpha: 0.35),
            blurRadius: 18,
            spreadRadius: 2,
          ),
        ],
      ),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Icon(Icons.savings_rounded, color: Colors.amber, size: 26)
              .animate(onPlay: (controller) => controller.repeat(reverse: true))
              .scale(begin: const Offset(0.9, 0.9), end: const Offset(1.2, 1.2), duration: 450.ms)
              .rotate(begin: -0.06, end: 0.06, duration: 450.ms),
          const SizedBox(width: 12),
          Text(
            '¡Rompiendo cerdito y canjeando!...',
            style: const TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.w900,
              fontSize: 13,
              letterSpacing: 0.5,
            ),
          ).animate(onPlay: (controller) => controller.repeat(reverse: true))
           .shimmer(duration: 1200.ms, color: Colors.amberAccent),
          const SizedBox(width: 12),
          const SizedBox(
            width: 18,
            height: 18,
            child: CircularProgressIndicator(strokeWidth: 2.5, color: Colors.amber),
          ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    int currentPiggy = widget.storeStatus?['piggy_bank'] ?? 0;
    int maxPiggy = 100;
    double progress = (currentPiggy / maxPiggy).clamp(0.0, 1.0);
    bool canClaim = currentPiggy >= maxPiggy;

    return GlassCard(
      padding: const EdgeInsets.all(24),
      borderColor: canClaim 
          ? Colors.amber.withValues(alpha: 0.8) 
          : theme.colorScheme.primary.withValues(alpha: 0.3),
      child: Column(
        children: [
          GestureDetector(
            onTap: (canClaim && !_isClaiming) ? _handleClaim : null,
            child: Row(
              children: [
                Stack(
                  alignment: Alignment.center,
                  children: [
                    Image.asset(
                      'assets/images/piggy_bank.png', 
                      width: 65, 
                      height: 65, 
                      errorBuilder: (c, e, s) => Icon(Icons.savings, color: canClaim ? Colors.amber : theme.colorScheme.primary, size: 45),
                    ),
                    if (canClaim)
                      Positioned(
                        right: 0,
                        top: 0,
                        child: Container(
                          padding: const EdgeInsets.all(4),
                          decoration: const BoxDecoration(color: Colors.green, shape: BoxShape.circle),
                          child: const Icon(Icons.check, size: 14, color: Colors.white),
                        ),
                      ),
                  ],
                ),
                const SizedBox(width: 16),
                Expanded(
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        context.l10n.piggyBankTitle, 
                        style: theme.textTheme.titleLarge?.copyWith(
                          fontWeight: FontWeight.w900, 
                          letterSpacing: 1,
                          color: canClaim ? Colors.amber : null,
                        ),
                      ),
                      const SizedBox(height: 4),
                      Text(
                        canClaim ? context.l10n.piggyReady : context.l10n.piggyCashback, 
                        style: theme.textTheme.bodySmall?.copyWith(
                          color: canClaim ? Colors.greenAccent : theme.colorScheme.onSurface.withValues(alpha: 0.7),
                          fontWeight: canClaim ? FontWeight.bold : FontWeight.normal,
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),
          const SizedBox(height: 20),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text(
                '$currentPiggy / $maxPiggy Lapis', 
                style: theme.textTheme.bodyMedium?.copyWith(
                  fontWeight: FontWeight.bold,
                  color: canClaim ? Colors.amber : null,
                ),
              ),
              Text(
                '${(progress * 100).toInt()}%', 
                style: theme.textTheme.bodyMedium?.copyWith(
                  color: canClaim ? Colors.amber : theme.colorScheme.primary, 
                  fontWeight: FontWeight.bold,
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          ClipRRect(
            borderRadius: BorderRadius.circular(10),
            child: LinearProgressIndicator(
              value: progress, 
              backgroundColor: theme.colorScheme.onSurface.withValues(alpha: 0.1), 
              color: canClaim ? Colors.amber : theme.colorScheme.primary, 
              minHeight: 10,
            ),
          ),
          if (canClaim) ...[
            const SizedBox(height: 18),
            if (_isClaiming)
              _buildClaimingAnimation(theme)
            else
              SizedBox(
                width: double.infinity,
                child: ElevatedButton.icon(
                  onPressed: _handleClaim,
                  icon: const Icon(Icons.stars, color: Colors.black),
                  label: Text(
                    context.l10n.piggyClaimBtn,
                    style: const TextStyle(fontWeight: FontWeight.w900, letterSpacing: 1, color: Colors.black),
                  ),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.amber,
                    padding: const EdgeInsets.symmetric(vertical: 14),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
                    elevation: 6,
                  ),
                ),
              ),
          ],
        ],
      ),
    );
  }
}

class AdBannerCard extends StatefulWidget {
  const AdBannerCard({super.key});

  @override
  State<AdBannerCard> createState() => _AdBannerCardState();
}

class _AdBannerCardState extends State<AdBannerCard> {
  bool _isLoadingAd = false;

  @override
  void initState() {
    super.initState();
    // Precargar el anuncio bonificado
    AdService().loadRewardedAd();
  }

  Future<void> _handleWatchAd() async {
    if (_isLoadingAd) return;
    setState(() => _isLoadingAd = true);

    ScaffoldMessenger.of(context).showSnackBar(
      const SnackBar(
        content: Text('Abriendo video de anuncio...'),
        duration: Duration(seconds: 1),
      ),
    );

    try {
      final rewardGranted = await AdService().showRewardedAd(
        onRewardEarned: () async {
          final success = await GameApiService().claimAdReward();
          if (mounted && success) {
            final gameProvider = Provider.of<GameProvider>(context, listen: false);
            gameProvider.addCrystals(1);
            gameProvider.fetchEconomyStatus();
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
                content: Text('¡Recompensa obtenida! +1 Lapislázuli'),
                backgroundColor: Colors.green,
              ),
            );
          }
        },
      );

      if (mounted && !rewardGranted) {
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(
            content: Text('El anuncio no se pudo cargar o no completaste el video.'),
            backgroundColor: Colors.orange,
          ),
        );
      }
    } catch (e) {
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text('Error al reproducir anuncio: $e'),
            backgroundColor: Colors.redAccent,
          ),
        );
      }
    } finally {
      if (mounted) {
        setState(() => _isLoadingAd = false);
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    return GlassCard(
      padding: const EdgeInsets.all(20),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(12),
            decoration: BoxDecoration(color: theme.colorScheme.primary.withValues(alpha: 0.2), shape: BoxShape.circle),
            child: Image.asset('assets/ui/elemento_3.png', width: 28, height: 28),
          ),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(context.l10n.freeLapisAd, style: theme.textTheme.titleSmall?.copyWith(fontWeight: FontWeight.bold)),
                const SizedBox(height: 4),
                Text(context.l10n.freeLapisAdDesc, style: theme.textTheme.bodySmall?.copyWith(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: _isLoadingAd ? null : _handleWatchAd,
            style: ElevatedButton.styleFrom(
              backgroundColor: theme.colorScheme.primary,
              foregroundColor: theme.colorScheme.surface,
            ),
            child: _isLoadingAd
                ? const SizedBox(
                    width: 16,
                    height: 16,
                    child: CircularProgressIndicator(strokeWidth: 2, color: Colors.white),
                  )
                : Text(context.l10n.watchAd),
          ),
        ],
      ),
    );
  }
}
