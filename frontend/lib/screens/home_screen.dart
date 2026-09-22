import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import 'leaderboard_screen.dart';
import 'settings_screen.dart';

class HomeScreen extends StatelessWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          // Fondo
          Container(
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                colors: [Color(0xFF0F0C29), Color(0xFF302B63), Color(0xFF24243E)],
                begin: Alignment.bottomRight,
                end: Alignment.topLeft,
              ),
            ),
          ),
          
          SafeArea(
            child: Column(
              children: [
                const Spacer(flex: 2),
                
                // Logo 
                Text(
                  'Glassy',
                  style: Theme.of(context).textTheme.displayLarge?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.bold,
                    letterSpacing: 2,
                    shadows: [
                      const Shadow(
                        color: AppTheme.neonBlue,
                        blurRadius: 20,
                      )
                    ],
                  ),
                ),
                const SizedBox(height: 10),
                Text(
                  'Merge to evolve',
                  style: Theme.of(context).textTheme.titleMedium?.copyWith(
                    color: Colors.white70,
                  ),
                ),
                
                const Spacer(flex: 3),
                
                // Botón PLAY gigante
                GestureDetector(
                  onTap: () {
                    // TODO: Navegar a GameScreen
                  },
                  child: Container(
                    padding: const EdgeInsets.symmetric(horizontal: 60, vertical: 20),
                    decoration: BoxDecoration(
                      color: AppTheme.neonPurple.withOpacity(0.8),
                      borderRadius: BorderRadius.circular(40),
                      boxShadow: [
                        BoxShadow(
                          color: AppTheme.neonPurple.withOpacity(0.5),
                          blurRadius: 25,
                          spreadRadius: 2,
                        ),
                      ],
                    ),
                    child: Text(
                      'Play!!!',
                      style: Theme.of(context).textTheme.headlineMedium?.copyWith(
                        color: Colors.white,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                
                const Spacer(flex: 3),
                
                // Botones Inferiores (Leaderboard y Settings)
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 40, vertical: 30),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      // Leaderboard
                      IconButton(
                        onPressed: () {
                          Navigator.push(context, MaterialPageRoute(builder: (_) => const LeaderboardScreen()));
                        },
                        icon: const Icon(Icons.leaderboard_rounded),
                        color: Colors.white,
                        iconSize: 35,
                      ),
                      
                      // Settings
                      IconButton(
                        onPressed: () {
                          Navigator.push(context, MaterialPageRoute(builder: (_) => const SettingsScreen()));
                        },
                        icon: const Icon(Icons.settings),
                        color: Colors.white,
                        iconSize: 35,
                      ),
                    ],
                  ),
                )
              ],
            ),
          ),
        ],
      ),
    );
  }
}
