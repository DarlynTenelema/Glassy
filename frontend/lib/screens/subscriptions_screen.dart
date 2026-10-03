import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import '../services/purchase_service.dart';

class SubscriptionsScreen extends StatelessWidget {
  const SubscriptionsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF0D0D12),
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'SUSCRIPCIONES',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 3,
            fontSize: 20,
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 22),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: Stack(
        children: [
          Container(
            decoration: const BoxDecoration(
              gradient: RadialGradient(
                center: Alignment.topCenter,
                radius: 1.5,
                colors: [
                  Color(0xFF1A1A2E),
                  Color(0xFF0D0D12),
                ],
              ),
            ),
          ),
          SafeArea(
            child: ListView(
              physics: const BouncingScrollPhysics(),
              padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 20),
              children: [
                _buildHeaderInfo(),
                const SizedBox(height: 30),
                _buildSubscriptionCard(
                  context,
                  title: 'PASE BRONCE',
                  duration: '1 Semana',
                  rewardText: '2 Lapislázulis por cada 1,000 puntos',
                  maxRewardText: 'Máximo de 28 al día',
                  price: '\$0.99',
                  id: 'sub_bronze_weekly',
                  accentColor: const Color(0xFFCD7F32), // Bronce
                ),
                _buildSubscriptionCard(
                  context,
                  title: 'PASE PLATA',
                  duration: '1 Mes',
                  rewardText: '2 Lapislázulis por cada 1,000 puntos',
                  maxRewardText: 'Máximo de 20 al día',
                  price: '\$2.99',
                  id: 'sub_silver_biweekly',
                  accentColor: const Color(0xFFC0C0C0), // Plata
                ),
                _buildSubscriptionCard(
                  context,
                  title: 'PASE ORO',
                  duration: '1 Mes',
                  rewardText: '5 Lapislázulis por cada 1,000 puntos',
                  maxRewardText: 'Máximo de 67 al día',
                  price: '\$4.99',
                  id: 'sub_gold_monthly',
                  accentColor: const Color(0xFFFFD700), // Oro
                  isPopular: true,
                ),
                const SizedBox(height: 40),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildHeaderInfo() {
    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: const Color(0xFF161622),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: AppTheme.crystalBlue.withOpacity(0.3), width: 1),
      ),
      child: Row(
        children: [
          Image.asset(
            'assets/images/lapislazuli.png',
            width: 60,
            height: 60,
            errorBuilder: (context, error, stackTrace) => const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 50),
          ),
          const SizedBox(width: 16),
          const Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  '¡JUEGA Y GANA!',
                  style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                ),
                SizedBox(height: 8),
                Text(
                  'Al suscribirte, cada 1,000 puntos que acumules en el juego se transformarán en Lapislázulis.',
                  style: TextStyle(color: Colors.white70, fontSize: 13, height: 1.4),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildSubscriptionCard(
    BuildContext context, {
    required String title,
    required String duration,
    required String rewardText,
    required String maxRewardText,
    required String price,
    required String id,
    required Color accentColor,
    bool isPopular = false,
  }) {
    return Container(
      margin: const EdgeInsets.only(bottom: 20),
      child: Stack(
        clipBehavior: Clip.none,
        children: [
          Container(
            padding: const EdgeInsets.all(24),
            decoration: BoxDecoration(
              color: const Color(0xFF161622),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: isPopular ? accentColor : const Color(0xFF2A2A3A),
                width: isPopular ? 2 : 1,
              ),
              boxShadow: isPopular ? [
                BoxShadow(
                  color: accentColor.withOpacity(0.15),
                  blurRadius: 20,
                  spreadRadius: -5,
                  offset: const Offset(0, 10),
                )
              ] : [],
            ),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Text(
                      title,
                      style: TextStyle(
                        color: isPopular ? accentColor : Colors.white,
                        fontWeight: FontWeight.w900,
                        fontSize: 18,
                        letterSpacing: 1,
                      ),
                    ),
                    Container(
                      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 4),
                      decoration: BoxDecoration(
                        color: accentColor.withOpacity(0.2),
                        borderRadius: BorderRadius.circular(12),
                        border: Border.all(color: accentColor, width: 1),
                      ),
                      child: Text(
                        duration,
                        style: TextStyle(color: accentColor, fontWeight: FontWeight.bold, fontSize: 12),
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: 20),
                Row(
                  children: [
                    Icon(Icons.check_circle_outline, color: accentColor, size: 20),
                    const SizedBox(width: 12),
                    Expanded(
                      child: Text(
                        rewardText,
                        style: const TextStyle(color: Colors.white70, fontSize: 14),
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: 12),
                Row(
                  children: [
                    Icon(Icons.auto_graph, color: accentColor, size: 20),
                    const SizedBox(width: 12),
                    Expanded(
                      child: Text(
                        maxRewardText,
                        style: const TextStyle(color: Colors.white70, fontSize: 14),
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: 24),
                SizedBox(
                  width: double.infinity,
                  child: ElevatedButton(
                    onPressed: () {
                      _showSubscriptionConfirmation(context, id, title, price);
                    },
                    style: ElevatedButton.styleFrom(
                      backgroundColor: isPopular ? accentColor : const Color(0xFF232332),
                      foregroundColor: isPopular ? Colors.black : Colors.white,
                      padding: const EdgeInsets.symmetric(vertical: 16),
                      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
                      elevation: 0,
                    ),
                    child: Text(
                      'SUSCRIBIRSE POR $price',
                      style: const TextStyle(fontWeight: FontWeight.w900, fontSize: 16),
                    ),
                  ),
                ),
              ],
            ),
          ),
          if (isPopular)
            Positioned(
              top: -12,
              right: 24,
              child: Container(
                padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 6),
                decoration: BoxDecoration(
                  color: accentColor,
                  borderRadius: BorderRadius.circular(100),
                ),
                child: const Text(
                  'MÁS RENTABLE',
                  style: TextStyle(color: Colors.black, fontSize: 11, fontWeight: FontWeight.w900, letterSpacing: 1),
                ),
              ),
            ),
        ],
      ),
    );
  }

  void _showSubscriptionConfirmation(BuildContext context, String id, String title, String price) {
    showDialog(
      context: context,
      builder: (BuildContext dialogContext) {
        return Dialog(
          backgroundColor: Colors.transparent,
          elevation: 0,
          child: Container(
            padding: const EdgeInsets.all(24),
            decoration: BoxDecoration(
              color: const Color(0xFF161622),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(color: AppTheme.crystalBlue.withOpacity(0.5), width: 2),
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                Text(
                  '¿COMPRAR $title?',
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 20,
                    fontWeight: FontWeight.w900,
                  ),
                  textAlign: TextAlign.center,
                ),
                const SizedBox(height: 12),
                Text(
                  'Te suscribirás al plan por $price.',
                  style: const TextStyle(color: Colors.white70, fontSize: 15),
                  textAlign: TextAlign.center,
                ),
                const SizedBox(height: 30),
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: [
                    TextButton(
                      onPressed: () => Navigator.pop(dialogContext),
                      child: const Text('Cancelar', style: TextStyle(color: Colors.white54)),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        Navigator.pop(dialogContext);
                        PurchaseService().buyProduct(id);
                      },
                      style: ElevatedButton.styleFrom(
                        backgroundColor: AppTheme.crystalBlue,
                        foregroundColor: Colors.black,
                        shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(100)),
                      ),
                      child: const Text('Suscribirse', style: TextStyle(fontWeight: FontWeight.w900)),
                    ),
                  ],
                ),
              ],
            ),
          ),
        );
      },
    );
  }
}
