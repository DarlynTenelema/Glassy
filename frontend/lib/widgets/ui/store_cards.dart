import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../providers/game_provider.dart';
import '../../services/purchase_service.dart';
import 'currency_icon.dart';
import 'glass_card.dart';

// Función auxiliar compartida para el diálogo de compra
void showPurchaseConfirmation(BuildContext context, String id, String title, String price) {
  final theme = Theme.of(context);
  showDialog(
    context: context,
    builder: (context) => AlertDialog(
      title: const Text('Confirmar compra'),
      content: Text('¿Deseas adquirir $title por $price?'),
      actions: [
        TextButton(
          onPressed: () => Navigator.pop(context),
          child: Text('CANCELAR', style: TextStyle(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
        ),
        ElevatedButton(
          onPressed: () {
            Navigator.pop(context);
            PurchaseService().buyProduct(id);
            ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Procesando compra...')));
          },
          child: const Text('COMPRAR'),
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
                if (bonus > 0) Text('+$bonus de regalo', style: const TextStyle(color: Colors.greenAccent, fontSize: 11, fontWeight: FontWeight.bold)),
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
              child: Text('SUSCRIBIRSE POR $price'),
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
    String countdownStr = 'ABRIR';

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
          Text('Cada $time', style: theme.textTheme.bodySmall?.copyWith(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
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
                  ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text('¡Cofre abierto! +$fragments Fragmentos')));
                } else {
                  if (!context.mounted) return;
                  ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Error al abrir el cofre')));
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

    final result = await PurchaseService().claimPiggyBank();
    if (!mounted) return;
    setState(() => _isClaiming = false);

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
                  '🎉 ¡Has roto el cerdito! +$reward Lapislázulis gratis añadidos a tu billetera.',
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
        const SnackBar(
          content: Text('No se pudo canjear el Piggy Bank en este momento.'),
          backgroundColor: Colors.redAccent,
        ),
      );
    }
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
            onTap: canClaim ? _handleClaim : null,
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
                        'PIGGY BANK', 
                        style: theme.textTheme.titleLarge?.copyWith(
                          fontWeight: FontWeight.w900, 
                          letterSpacing: 1,
                          color: canClaim ? Colors.amber : null,
                        ),
                      ),
                      const SizedBox(height: 4),
                      Text(
                        canClaim ? '¡Llegaste a 100! Toca el cerdito para canjear GRATIS' : 'Cashback gratis por cada compra', 
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
            SizedBox(
              width: double.infinity,
              child: ElevatedButton.icon(
                onPressed: _isClaiming ? null : _handleClaim,
                icon: _isClaiming 
                    ? const SizedBox(width: 18, height: 18, child: CircularProgressIndicator(strokeWidth: 2, color: Colors.black))
                    : const Icon(Icons.stars, color: Colors.black),
                label: Text(
                  _isClaiming ? 'CANJEANDO...' : '¡CANJEAR 100 LAPIS GRATIS!',
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

class AdBannerCard extends StatelessWidget {
  const AdBannerCard({super.key});

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
                Text('LAPISLAZULI GRATIS', style: theme.textTheme.titleSmall?.copyWith(fontWeight: FontWeight.bold)),
                const SizedBox(height: 4),
                Text('Mira un video y gana +5.', style: theme.textTheme.bodySmall?.copyWith(color: theme.colorScheme.onSurface.withValues(alpha: 0.5))),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () {},
            style: ElevatedButton.styleFrom(
              backgroundColor: theme.colorScheme.primary,
              foregroundColor: theme.colorScheme.surface,
            ),
            child: const Text('VER'),
          ),
        ],
      ),
    );
  }
}
