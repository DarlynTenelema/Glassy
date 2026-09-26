import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import '../widgets/gaming_button.dart';
import 'leaderboard_screen.dart';
import 'settings_screen.dart';
import 'game_screen.dart';
import 'store_screen.dart';
import '../services/audio_service.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> with SingleTickerProviderStateMixin {
  late AnimationController _animController;

  @override
  void initState() {
    super.initState();
    _animController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 8),
    )..repeat(reverse: true);
    
    // Iniciar música de fondo
    AudioService().playBgMusic();
  }

  @override
  void dispose() {
    _animController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          // Fondo base
          Container(
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                colors: [AppTheme.darkBackground, Color(0xFF0A1128)],
                begin: Alignment.bottomRight,
                end: Alignment.topLeft,
              ),
            ),
          ),
          
          // Blobs animados flotando (Efecto ASMR)
          AnimatedBuilder(
            animation: _animController,
            builder: (context, child) {
              return Stack(
                children: [
                  Positioned(
                    top: -50 + (_animController.value * 30),
                    left: -50 - (_animController.value * 20),
                    child: _buildBlurBlob(color: AppTheme.neonCyan, size: 250),
                  ),
                  Positioned(
                    bottom: 100 - (_animController.value * 40),
                    right: -50 + (_animController.value * 30),
                    child: _buildBlurBlob(color: const Color(0xFF312E81), size: 300),
                  ),
                ],
              );
            },
          ),
          
          SafeArea(
            child: Column(
              children: [
                const Spacer(flex: 1),
                
                // Título Glassy
                Text(
                  'Glassy',
                  style: Theme.of(context).textTheme.displayLarge?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 4,
                    shadows: [
                      const Shadow(color: AppTheme.neonCyan, blurRadius: 25),
                      const Shadow(color: Colors.white, blurRadius: 5),
                    ],
                  ),
                ),
                const SizedBox(height: 10),
                Text(
                  'Merge to evolve',
                  style: Theme.of(context).textTheme.titleMedium?.copyWith(
                    color: Colors.white70,
                    letterSpacing: 2,
                  ),
                ),
                
                const Spacer(flex: 2),
                
                // Botones ordenados verticalmente
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 40),
                  child: Column(
                    children: [
                      GamingButton(
                        text: 'PLAY',
                        icon: const Icon(Icons.play_arrow_rounded, color: Colors.white, size: 32),
                        height: 75,
                        fontSize: 28,
                        primaryColor: AppTheme.neonCyan,
                        secondaryColor: AppTheme.tealGlass,
                        onPressed: () async {
                          AudioService().stopBgMusic();
                          await Navigator.push(context, MaterialPageRoute(builder: (_) => const GameScreen()));
                          AudioService().playBgMusic();
                        },
                      ),
                      const SizedBox(height: 20),
                      GamingButton(
                        text: 'LEADERBOARDS',
                        icon: const Icon(Icons.leaderboard_rounded, color: Colors.white),
                        height: 60,
                        fontSize: 18,
                        primaryColor: const Color(0xFFB388FF), // Purple
                        secondaryColor: const Color(0xFF651FFF),
                        onPressed: () {
                          Navigator.push(context, MaterialPageRoute(builder: (_) => const LeaderboardScreen()));
                        },
                      ),
                      const SizedBox(height: 20),
                      GamingButton(
                        text: 'STORE',
                        icon: const Icon(Icons.store_rounded, color: Colors.white),
                        height: 60,
                        fontSize: 18,
                        primaryColor: const Color(0xFFFFD54F), // Amber
                        secondaryColor: const Color(0xFFFF8F00),
                        onPressed: () {
                          Navigator.push(context, MaterialPageRoute(builder: (_) => const StoreScreen()));
                        },
                      ),
                      const SizedBox(height: 20),
                      GamingButton(
                        text: 'SETTINGS',
                        icon: const Icon(Icons.settings_rounded, color: Colors.white),
                        height: 60,
                        fontSize: 18,
                        primaryColor: const Color(0xFF90A4AE), // Blue Grey
                        secondaryColor: const Color(0xFF546E7A),
                        onPressed: () {
                          Navigator.push(context, MaterialPageRoute(builder: (_) => const SettingsScreen()));
                        },
                      ),
                    ],
                  ),
                ),
                
                const Spacer(flex: 2),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildBlurBlob({required Color color, required double size}) {
    return Container(
      width: size,
      height: size,
      decoration: BoxDecoration(
        shape: BoxShape.circle,
        color: color.withOpacity(0.15),
        boxShadow: [
          BoxShadow(
            color: color.withOpacity(0.2),
            blurRadius: 100,
            spreadRadius: 50,
          ),
        ],
      ),
    );
  }
}
