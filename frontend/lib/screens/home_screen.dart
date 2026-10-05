import 'dart:math' as math;
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../theme/app_theme.dart';
import '../widgets/gaming_button.dart';
import 'records_screen.dart';
import 'settings_screen.dart';
import 'game_screen.dart';
import 'store_screen.dart';
import 'skins_screen.dart';
import '../services/audio_service.dart';
import '../providers/game_provider.dart';
import '../widgets/animated_wallet.dart';

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
      duration: const Duration(seconds: 5), // 5s in, 5s out = 10s total
    )..repeat(reverse: true);
    
    // Iniciar música de fondo
    AudioService().playBgMusic();
    
    // Mostrar calendario diario si puede reclamar
    WidgetsBinding.instance.addPostFrameCallback((_) {
      final gameProvider = Provider.of<GameProvider>(context, listen: false);
      if (gameProvider.canClaimDailyReward) {
        _showDailyCalendar(context, gameProvider);
      }
    });
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
                colors: [AppTheme.deepLapis, Color(0xFF0A1128)],
                begin: Alignment.bottomRight,
                end: Alignment.topLeft,
              ),
            ),
          ),
          
          // Animación de gemas flotantes (siluetas ASMR)
          AnimatedBuilder(
            animation: _animController,
            builder: (context, child) {
              final size = MediaQuery.of(context).size;
              final value = _animController.value;
              final t = value * 2 * math.pi;

              // Trayectorias para que entren, floten (wobble) y salgan suavemente
              double esmeraldaX = -150 + (size.width * 0.8) * value;
              double esmeraldaY = size.height * 0.2 + 60 * math.sin(t);

              double topacioX = size.width + 50 - (size.width * 0.9) * value;
              double topacioY = size.height * 0.5 + 80 * math.cos(t);

              double zafiroX = size.width * 0.3 + 100 * math.sin(t);
              double zafiroY = size.height + 50 - (size.height * 0.7) * value;

              double rubiX = size.width * 0.6 + 80 * math.cos(t);
              double rubiY = -150 + (size.height * 0.6) * value;

              return Stack(
                children: [
                  Positioned(
                    left: esmeraldaX, top: esmeraldaY,
                    child: Transform.rotate(
                      angle: value * math.pi,
                      child: _buildGemSilhouette('esmeralda.png', 120),
                    ),
                  ),
                  Positioned(
                    left: topacioX, top: topacioY,
                    child: Transform.rotate(
                      angle: -value * math.pi * 0.8,
                      child: _buildGemSilhouette('topacio.png', 100),
                    ),
                  ),
                  Positioned(
                    left: zafiroX, top: zafiroY,
                    child: Transform.rotate(
                      angle: value * math.pi * 1.2,
                      child: _buildGemSilhouette('zafiro.png', 140),
                    ),
                  ),
                  Positioned(
                    left: rubiX, top: rubiY,
                    child: Transform.rotate(
                      angle: -value * math.pi * 1.5,
                      child: _buildGemSilhouette('rubi.png', 110),
                    ),
                  ),
                ],
              );
            },
          ),
          
          SafeArea(
            child: Column(
              children: [
                // Top HUD
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 24.0, vertical: 16.0),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      // Botón Records / Perfil
                      GestureDetector(
                        onTap: () {
                          Navigator.push(
                            context,
                            PageRouteBuilder(
                              pageBuilder: (context, animation, secondaryAnimation) => const RecordsScreen(),
                              transitionsBuilder: (context, animation, secondaryAnimation, child) {
                                return FadeTransition(opacity: animation, child: child);
                              },
                            ),
                          );
                        },
                        child: ClipRRect(
                          borderRadius: BorderRadius.circular(20),
                          child: BackdropFilter(
                            filter: ImageFilter.blur(sigmaX: 10.0, sigmaY: 10.0),
                            child: Container(
                              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
                              decoration: BoxDecoration(
                                color: Colors.white.withOpacity(0.15),
                                borderRadius: BorderRadius.circular(20),
                                border: Border.all(color: Colors.white.withOpacity(0.3)),
                              ),
                              child: Row(
                                children: [
                                  Image.asset('assets/ui/elemento_1.png', width: 24, height: 24),
                                  const SizedBox(width: 8),
                                  Text(
                                    'RECORDS',
                                    style: Theme.of(context).textTheme.titleSmall?.copyWith(
                                      color: Colors.white,
                                      fontWeight: FontWeight.bold,
                                      letterSpacing: 1,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ),
                        ),
                      ),
                      
                      // Botones de la derecha (Wallet y Settings)
                      Row(
                        children: [
                          // Wallet
                          const AnimatedWallet(),
                          const SizedBox(width: 12),
                          // Botón Settings
                          ClipRRect(
                            borderRadius: BorderRadius.circular(30),
                            child: BackdropFilter(
                              filter: ImageFilter.blur(sigmaX: 10.0, sigmaY: 10.0),
                              child: Container(
                                decoration: BoxDecoration(
                                  color: Colors.white.withOpacity(0.15),
                                  shape: BoxShape.circle,
                                  border: Border.all(color: Colors.white.withOpacity(0.3)),
                                ),
                                child: IconButton(
                                  icon: Image.asset('assets/ui/elemento_2.png', width: 28, height: 28),
                                  onPressed: () {
                                    Navigator.push(
                                      context,
                                      PageRouteBuilder(
                                        pageBuilder: (context, animation, secondaryAnimation) => const SettingsScreen(),
                                        transitionsBuilder: (context, animation, secondaryAnimation, child) {
                                          return FadeTransition(opacity: animation, child: child);
                                        },
                                      ),
                                    );
                                  },
                                ),
                              ),
                            ),
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
                
                const Spacer(flex: 1),
                
                // Título Glassy
                Text(
                  'Glassy',
                  style: Theme.of(context).textTheme.displayLarge?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 4,
                    shadows: [
                      const Shadow(color: AppTheme.crystalBlue, blurRadius: 25),
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
                
                // Botón de PLAY central y gigante
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 40),
                  child: ClipRRect(
                    borderRadius: BorderRadius.circular(30),
                    child: BackdropFilter(
                      filter: ImageFilter.blur(sigmaX: 15.0, sigmaY: 15.0),
                      child: Container(
                        decoration: BoxDecoration(
                          color: Colors.white.withOpacity(0.1),
                          borderRadius: BorderRadius.circular(30),
                          border: Border.all(color: Colors.white.withOpacity(0.4), width: 1.5),
                          boxShadow: [
                            BoxShadow(color: AppTheme.crystalBlue.withOpacity(0.3), blurRadius: 30, spreadRadius: 5),
                          ],
                        ),
                        child: Material(
                          color: Colors.transparent,
                          child: InkWell(
                            borderRadius: BorderRadius.circular(30),
                            onTap: () async {
                              AudioService().stopBgMusic();
                              await Navigator.push(
                                context, 
                                PageRouteBuilder(
                                  pageBuilder: (context, animation, secondaryAnimation) => const GameScreen(),
                                  transitionsBuilder: (context, animation, secondaryAnimation, child) {
                                    return FadeTransition(opacity: animation, child: child);
                                  },
                                ),
                              );
                              AudioService().playBgMusic();
                            },
                            child: Padding(
                              padding: const EdgeInsets.symmetric(vertical: 20),
                              child: Row(
                                mainAxisAlignment: MainAxisAlignment.center,
                                children: [
                                  Image.asset('assets/ui/elemento_3.png', width: 45, height: 45),
                                  const SizedBox(width: 15),
                                  const Text(
                                    'PLAY',
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontSize: 36,
                                      fontWeight: FontWeight.w900,
                                      letterSpacing: 4,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
                
                const Spacer(flex: 1),
                
                // Barra de navegación inferior tipo juego
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 30, vertical: 20),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      _buildBottomNavButton(
                        context,
                        'SKINS',
                        'assets/ui/elemento_4.png',
                        () => Navigator.push(
                          context, 
                          PageRouteBuilder(
                            pageBuilder: (context, animation, secondaryAnimation) => const SkinsScreen(),
                            transitionsBuilder: (context, animation, secondaryAnimation, child) => FadeTransition(opacity: animation, child: child),
                          ),
                        ),
                      ),
                      _buildBottomNavButton(
                        context,
                        'STORE',
                        'assets/ui/elemento_5.png',
                        () => Navigator.push(
                          context, 
                          PageRouteBuilder(
                            pageBuilder: (context, animation, secondaryAnimation) => const StoreScreen(),
                            transitionsBuilder: (context, animation, secondaryAnimation, child) => FadeTransition(opacity: animation, child: child),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
                const SizedBox(height: 20),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildBottomNavButton(BuildContext context, String title, String iconAsset, VoidCallback onTap) {
    return GestureDetector(
      onTap: onTap,
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          ClipRRect(
            borderRadius: BorderRadius.circular(35),
            child: BackdropFilter(
              filter: ImageFilter.blur(sigmaX: 10.0, sigmaY: 10.0),
              child: Container(
                padding: const EdgeInsets.all(16),
                decoration: BoxDecoration(
                  color: Colors.white.withOpacity(0.1),
                  shape: BoxShape.circle,
                  border: Border.all(color: Colors.white.withOpacity(0.3), width: 1.5),
                  boxShadow: [
                    BoxShadow(color: Colors.white.withOpacity(0.1), blurRadius: 15, spreadRadius: 1),
                  ],
                ),
                child: Image.asset(iconAsset, width: 35, height: 35),
              ),
            ),
          ),
          const SizedBox(height: 8),
          Text(
            title,
            style: const TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.bold,
              letterSpacing: 1,
            ),
          ),
        ],
      ),
    );
  }

  void _showDailyCalendar(BuildContext context, GameProvider gameProvider) {
    showDialog(
      context: context,
      barrierDismissible: true,
      builder: (BuildContext dialogContext) {
        int currentStreak = gameProvider.currentStreak;
        if (currentStreak == 0) currentStreak = 1;

        return Dialog(
          backgroundColor: Colors.transparent,
          elevation: 0,
          child: Container(
            padding: const EdgeInsets.all(24),
            decoration: BoxDecoration(
              color: const Color(0xFF161622),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(color: Colors.orangeAccent.withOpacity(0.5), width: 2),
              boxShadow: [
                BoxShadow(color: Colors.orangeAccent.withOpacity(0.2), blurRadius: 30, spreadRadius: -5),
              ],
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                // Header con botón X
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    const Icon(Icons.calendar_today_rounded, color: Colors.orangeAccent),
                    const Text(
                      'RECOMPENSA DIARIA',
                      style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 16, letterSpacing: 1),
                    ),
                    InkWell(
                      onTap: () => Navigator.pop(dialogContext),
                      child: const Icon(Icons.close_rounded, color: Colors.white54),
                    ),
                  ],
                ),
                const SizedBox(height: 24),
                
                // Grilla de 7 días
                Wrap(
                  spacing: 10,
                  runSpacing: 10,
                  alignment: WrapAlignment.center,
                  children: List.generate(7, (index) {
                    int day = index + 1;
                    bool isToday = day == currentStreak;
                    bool isPast = day < currentStreak;
                    
                    int rewardValue = 10;
                    if (day == 2) rewardValue = 20;
                    if (day == 3) rewardValue = 30;
                    if (day == 4) rewardValue = 40;
                    if (day == 5) rewardValue = 50;
                    if (day == 6) rewardValue = 75;
                    if (day == 7) rewardValue = 100;
                    
                    String imageAsset = day == 7 ? 'assets/images/lapislazuli.png' : 'assets/images/lapis_fragments.png';
                    
                    return Container(
                      width: 60,
                      height: 80,
                      decoration: BoxDecoration(
                        color: isToday ? Colors.orangeAccent.withOpacity(0.2) : (isPast ? Colors.green.withOpacity(0.1) : const Color(0xFF232332)),
                        borderRadius: BorderRadius.circular(12),
                        border: Border.all(
                          color: isToday ? Colors.orangeAccent : (isPast ? Colors.green : const Color(0xFF2A2A3A)),
                          width: isToday ? 2 : 1,
                        ),
                        boxShadow: isToday ? [BoxShadow(color: Colors.orangeAccent.withOpacity(0.4), blurRadius: 10)] : [],
                      ),
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Text('Día $day', style: TextStyle(color: isToday ? Colors.white : Colors.white54, fontSize: 12, fontWeight: FontWeight.bold)),
                          const SizedBox(height: 4),
                          isPast 
                            ? const Icon(Icons.check_circle, color: Colors.green, size: 28)
                            : Image.asset(imageAsset, width: 28, height: 28, errorBuilder: (c,e,s) => const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 28)),
                          const SizedBox(height: 4),
                          Text('+$rewardValue', style: TextStyle(color: isToday ? Colors.orangeAccent : AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 14)),
                        ],
                      ),
                    );
                  }),
                ),
                
                const SizedBox(height: 24),
                
                // Botón Reclamar
                SizedBox(
                  width: double.infinity,
                  child: ElevatedButton(
                    onPressed: () {
                      int claimedDay = currentStreak;
                      gameProvider.claimDailyReward();
                      Navigator.pop(dialogContext);
                      ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text('¡Recompensa del Día $claimedDay Reclamada!'), backgroundColor: Colors.orange));
                    },
                    style: ElevatedButton.styleFrom(
                      backgroundColor: Colors.orangeAccent,
                      foregroundColor: Colors.black,
                      padding: const EdgeInsets.symmetric(vertical: 16),
                      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
                      elevation: 10,
                      shadowColor: Colors.orangeAccent.withOpacity(0.5),
                    ),
                    child: const Text('RECLAMAR', style: TextStyle(fontWeight: FontWeight.w900, fontSize: 16, letterSpacing: 2)),
                  ),
                ),
              ],
            ),
          ),
        );
      },
    );
  }

  Widget _buildGemSilhouette(String assetName, double size) {
    return Opacity(
      opacity: 0.5, // Opacidad del 50% solicitada
      child: Image.asset(
        'assets/game/gems/$assetName',
        width: size,
        height: size,
        color: AppTheme.crystalBlue, // Silueta con el color complementario
      ),
    );
  }
}
