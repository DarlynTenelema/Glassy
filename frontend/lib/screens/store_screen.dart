import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import '../services/audio_service.dart';
import '../services/purchase_service.dart';

class StoreScreen extends StatelessWidget {
  const StoreScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    AudioService().playBgMusic();
    PurchaseService().initialize(context);
    return Scaffold(
      backgroundColor: const Color(0xFF0D0D12), // Fondo oscuro elegante y sólido
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'STORE',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 4,
            fontSize: 22,
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
          // Gradiente sutil de fondo (limpio, sin blobs)
          Container(
            decoration: const BoxDecoration(
              gradient: RadialGradient(
                center: Alignment.topCenter,
                radius: 1.5,
                colors: [
                  Color(0xFF1A1A2E), // Un azul medianoche muy sutil arriba
                  Color(0xFF0D0D12), // Negro profundo abajo
                ],
              ),
            ),
          ),
          
          SafeArea(
            child: ListView(
              physics: const BouncingScrollPhysics(),
              padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 20),
              children: [
                // Banner Promocional Limpio
                _buildAdBanner(context),
                
                const SizedBox(height: 35),
                
                const Text(
                  'PAQUETES DE CRISTALES',
                  style: TextStyle(
                    color: Colors.white54,
                    fontWeight: FontWeight.bold,
                    fontSize: 14,
                    letterSpacing: 2,
                  ),
                ),
                
                const SizedBox(height: 15),
                
                // Tarjetas de la tienda
                _buildPackageCard(
                  context,
                  title: 'Starter Pack',
                  crystals: 100,
                  bonus: 0,
                  price: '\$0.99',
                  id: 'glass_pack_100',
                  accentColor: const Color(0xFF00E5FF),
                ),
                _buildPackageCard(
                  context,
                  title: 'Pro Pack',
                  crystals: 500,
                  bonus: 100,
                  price: '\$4.99',
                  id: 'glass_pack_600',
                  accentColor: const Color(0xFF651FFF),
                ),
                _buildPackageCard(
                  context,
                  title: 'Master Pack',
                  crystals: 1000,
                  bonus: 500,
                  price: '\$9.99',
                  id: 'glass_pack_1500',
                  accentColor: const Color(0xFFFFD700), // Oro
                  isPopular: true,
                ),
                _buildPackageCard(
                  context,
                  title: 'Legendary',
                  crystals: 2000,
                  bonus: 3000,
                  price: '\$19.99',
                  id: 'glass_pack_5000',
                  accentColor: const Color(0xFFFF3D00), // Naranja neón
                ),
                
                  // Etiqueta Popular
                  // ... (el ListView original termina en la línea 110 aprox)
                const SizedBox(height: 100), // Espacio extra para que no tape los botones
              ],
            ),
          ),
          
          // Personaje animando la tienda
          Positioned(
            bottom: -20,
            right: -30,
            child: IgnorePointer(
              child: Image.asset(
                'assets/avatar/glassy_lapislazully_offer.png',
                height: 320,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildAdBanner(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(24),
      decoration: BoxDecoration(
        color: const Color(0xFF161622), // Tarjeta sólida y oscura
        borderRadius: BorderRadius.circular(24),
        border: Border.all(color: const Color(0xFF2A2A3A), width: 1),
      ),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(12),
            decoration: BoxDecoration(
              color: AppTheme.neonCyan.withOpacity(0.1),
              shape: BoxShape.circle,
            ),
            child: const Icon(Icons.play_arrow_rounded, color: AppTheme.neonCyan, size: 32),
          ),
          const SizedBox(width: 16),
          const Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  'CRISTALES GRATIS',
                  style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                ),
                SizedBox(height: 4),
                Text(
                  'Mira un video (30s) y gana +5.',
                  style: TextStyle(color: Colors.white54, fontSize: 13),
                ),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () {
              ScaffoldMessenger.of(context).showSnackBar(
                const SnackBar(content: Text('Ads no disponibles aún.')),
              );
            },
            style: ElevatedButton.styleFrom(
              backgroundColor: AppTheme.neonCyan,
              foregroundColor: Colors.black, // Texto negro para contraste
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(100)),
              elevation: 0,
            ),
            child: const Text('VER', style: TextStyle(fontWeight: FontWeight.w900)),
          ),
        ],
      ),
    );
  }

  Widget _buildPackageCard(BuildContext context, {
    required String title,
    required int crystals,
    required int bonus,
    required String price,
    required String id,
    required Color accentColor,
    bool isPopular = false,
  }) {
    int total = crystals + bonus;
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      child: Stack(
        clipBehavior: Clip.none,
        children: [
          Container(
            padding: const EdgeInsets.all(24),
            decoration: BoxDecoration(
              color: const Color(0xFF161622), // Tarjeta limpia y sólida
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: isPopular ? accentColor : const Color(0xFF2A2A3A), 
                width: isPopular ? 2 : 1
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
            child: Row(
              children: [
                // Icono minimalista
                Icon(Icons.diamond_rounded, color: accentColor, size: 36),
                const SizedBox(width: 20),
                
                // Textos
                Expanded(
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        title.toUpperCase(),
                        style: TextStyle(
                          color: isPopular ? accentColor : Colors.white70, 
                          fontWeight: FontWeight.bold, 
                          fontSize: 12,
                          letterSpacing: 1,
                        ),
                      ),
                      const SizedBox(height: 4),
                      Row(
                        crossAxisAlignment: CrossAxisAlignment.baseline,
                        textBaseline: TextBaseline.alphabetic,
                        children: [
                          Text(
                            '$total',
                            style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 24),
                          ),
                          if (bonus > 0)
                            Padding(
                              padding: const EdgeInsets.only(left: 6),
                              child: Text(
                                '+$bonus gratis',
                                style: const TextStyle(color: Colors.greenAccent, fontSize: 13, fontWeight: FontWeight.w600),
                              ),
                            ),
                        ],
                      ),
                    ],
                  ),
                ),
                
                // Botón de precio
                ElevatedButton(
                  onPressed: () {
                    PurchaseService().buyProduct(id);
                  },
                  style: ElevatedButton.styleFrom(
                    backgroundColor: isPopular ? accentColor : const Color(0xFF232332),
                    foregroundColor: isPopular ? Colors.black : Colors.white,
                    padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 14),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(100)),
                    elevation: 0,
                  ),
                  child: Text(price, style: const TextStyle(fontWeight: FontWeight.w800, fontSize: 16)),
                ),
              ],
            ),
          ),
          
          // Etiqueta Popular
          if (isPopular)
            Positioned(
              top: -12,
              left: 40,
              child: Container(
                padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 6),
                decoration: BoxDecoration(
                  color: accentColor,
                  borderRadius: BorderRadius.circular(100),
                ),
                child: const Text(
                  'MÁS POPULAR',
                  style: TextStyle(color: Colors.black, fontSize: 11, fontWeight: FontWeight.w900, letterSpacing: 1),
                ),
              ),
            ),
        ],
      ),
    );
  }
}
