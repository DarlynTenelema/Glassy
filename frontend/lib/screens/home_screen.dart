import 'dart:math' as math;
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../widgets/ui/currency_icon.dart';
import '../l10n/l10n_extension.dart';
import 'records_screen.dart';
import 'settings_screen.dart';
import 'game_screen.dart';
import 'store_screen.dart';
import 'skins_screen.dart';
import 'profile_screen.dart';
import '../services/audio_service.dart';
import '../providers/game_provider.dart';
import '../widgets/animated_wallet.dart';
import '../widgets/ui/glass_orb_button.dart';
import '../widgets/ui/glass_play_button.dart';
import '../widgets/ui/cosmic_glass_background.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> with SingleTickerProviderStateMixin {
  late AnimationController _floatAnimController;
  bool _hasShownDailyDialog = false;

  @override
  void initState() {
    super.initState();
    // Animación suave continua para la levitación de la gema central y esquirlas
    _floatAnimController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 4),
    )..repeat(reverse: true);

    // Iniciar música de fondo
    AudioService().playBgMusic();

    // Sincronizar datos y mostrar recompensa diaria si está disponible
    WidgetsBinding.instance.addPostFrameCallback((_) async {
      final gameProvider = Provider.of<GameProvider>(context, listen: false);
      await gameProvider.fetchEconomyStatus();
      await gameProvider.fetchSkins();
      if (mounted && gameProvider.canClaimDailyReward && !_hasShownDailyDialog) {
        _hasShownDailyDialog = true;
        _showDailyCalendar(context, gameProvider);
      }
    });
  }

  @override
  void dispose() {
    _floatAnimController.dispose();
    super.dispose();
  }

  void _navigateTo(Widget screen) {
    Navigator.push(
      context,
      PageRouteBuilder(
        pageBuilder: (context, animation, secondaryAnimation) => screen,
        transitionsBuilder: (context, animation, secondaryAnimation, child) {
          return FadeTransition(opacity: animation, child: child);
        },
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);

    return Scaffold(
      backgroundColor: const Color(0xFF030A1A),
      body: CosmicGlassBackground(
        child: SafeArea(
          child: Column(
            children: [
              // ---------------------------------------------------------------
              // 1. TOP HUD (Esferas de Perfil, Trofeo, Saldo y Ajustes)
              // ---------------------------------------------------------------
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 20.0, vertical: 12.0),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    // Izquierda: Perfil y Records (Trophy)
                    Row(
                      children: [
                        GlassOrbButton(
                          size: 52,
                          iconSize: 26,
                          glowColor: const Color(0xFF38BDF8),
                          icon: const Icon(Icons.person_rounded, color: Colors.white),
                          onTap: () => _navigateTo(const ProfileScreen()),
                        ),
                        const SizedBox(width: 10),
                        GlassOrbButton(
                          size: 52,
                          iconSize: 28,
                          glowColor: const Color(0xFFFFD700),
                          icon: Image.asset('assets/ui/elemento_1.png', fit: BoxFit.contain),
                          onTap: () => _navigateTo(const RecordsScreen()),
                        ),
                      ],
                    ),

                    // Derecha: Wallet de Lapislázulis y Ajustes
                    Row(
                      children: [
                        AnimatedWallet(
                          onTap: () => _navigateTo(const StoreScreen()),
                        ),
                        const SizedBox(width: 10),
                        GlassOrbButton(
                          size: 52,
                          iconSize: 28,
                          glowColor: const Color(0xFFA855F7),
                          icon: Image.asset('assets/ui/elemento_2.png', fit: BoxFit.contain),
                          onTap: () => _navigateTo(const SettingsScreen()),
                        ),
                      ],
                    ),
                  ],
                ),
              ),

              const Spacer(flex: 1),

              // ---------------------------------------------------------------
              // 2. HERO CENTRAL: Gema Facetada 3D Levitando + Esquirlas Orbitando
              // ---------------------------------------------------------------
              AnimatedBuilder(
                animation: _floatAnimController,
                builder: (context, child) {
                  final t = _floatAnimController.value * 2 * math.pi;
                  final gemOffsetY = 10 * math.sin(t);
                  final shard1OffsetY = -14 * math.sin(t * 1.2);
                  final shard2OffsetY = 12 * math.cos(t * 0.9);

                  return Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      // Contenedor de la Gema 3D con Esquirlas de Cristal
                      SizedBox(
                        width: 220,
                        height: 160,
                        child: Stack(
                          alignment: Alignment.center,
                          clipBehavior: Clip.none,
                          children: [
                            // Resplandor de nebulosa azul zafiro detrás de la gema
                            Container(
                              width: 140,
                              height: 140,
                              decoration: BoxDecoration(
                                shape: BoxShape.circle,
                                boxShadow: [
                                  BoxShadow(
                                    color: const Color(0xFF00E5FF).withValues(alpha: 0.35),
                                    blurRadius: 45,
                                    spreadRadius: 10,
                                  ),
                                  BoxShadow(
                                    color: const Color(0xFF6366F1).withValues(alpha: 0.30),
                                    blurRadius: 60,
                                    spreadRadius: 15,
                                  ),
                                ],
                              ),
                            ),

                            // Gema Principal Levitando (Lapislázuli)
                            Transform.translate(
                              offset: Offset(0, gemOffsetY),
                              child: Container(
                                decoration: BoxDecoration(
                                  shape: BoxShape.circle,
                                  boxShadow: [
                                    BoxShadow(
                                      color: const Color(0xFF00E5FF).withValues(alpha: 0.50),
                                      blurRadius: 36,
                                      spreadRadius: 3,
                                    ),
                                  ],
                                ),
                                child: Image.asset(
                                  'assets/images/lapislazuli.png',
                                  width: 140,
                                  height: 140,
                                  fit: BoxFit.contain,
                                  filterQuality: FilterQuality.high,
                                ),
                              ),
                            ),

                            // Esquirla de cristal superior izquierda
                            Positioned(
                              left: 20,
                              top: 15 + shard1OffsetY,
                              child: Transform.rotate(
                                angle: -0.4 + (0.1 * math.sin(t)),
                                child: _buildCrystalShard(size: 28, opacity: 0.85),
                              ),
                            ),

                            // Esquirla de cristal derecha
                            Positioned(
                              right: 15,
                              top: 40 + shard2OffsetY,
                              child: Transform.rotate(
                                angle: 0.5 + (0.15 * math.cos(t)),
                                child: _buildCrystalShard(size: 34, opacity: 0.90),
                              ),
                            ),

                            // Pequeña esquirla inferior izquierda
                            Positioned(
                              left: 35,
                              bottom: 10 - shard1OffsetY * 0.5,
                              child: Transform.rotate(
                                angle: 0.8,
                                child: _buildCrystalShard(size: 20, opacity: 0.70),
                              ),
                            ),
                          ],
                        ),
                      ),

                      const SizedBox(height: 12),

                      // Logo "Glassy" con tipografía de cristal esculpido y brillo
                      _buildCrystalLogo(context),

                      const SizedBox(height: 6),

                      // Subtítulo "Merge to evolve"
                      Text(
                        context.l10n.mergeToEvolve,
                        style: TextStyle(
                          color: Colors.white.withValues(alpha: 0.85),
                          fontSize: 16,
                          fontWeight: FontWeight.w500,
                          letterSpacing: 2.5,
                          shadows: [
                            Shadow(
                              color: const Color(0xFF00E5FF).withValues(alpha: 0.4),
                              blurRadius: 10,
                            ),
                          ],
                        ),
                      ),
                    ],
                  );
                },
              ),

              const Spacer(flex: 2),

              // ---------------------------------------------------------------
              // 3. BOTÓN PRINCIPAL DE ACCIÓN: ▶ PLAY (Glassy Capsule)
              // ---------------------------------------------------------------
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 32.0),
                child: GlassPlayButton(
                  text: context.l10n.play,
                  icon: Image.asset(
                    'assets/ui/elemento_3.png',
                    width: 44,
                    height: 44,
                    fit: BoxFit.contain,
                  ),
                  onPressed: () async {
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
                ),
              ),

              const Spacer(flex: 2),

              // ---------------------------------------------------------------
              // 4. NAVEGACIÓN INFERIOR: SKINS & STORE (Esferas de Cristal 3D)
              // ---------------------------------------------------------------
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 40.0, vertical: 16.0),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceAround,
                  children: [
                    // Botón SKINS (Esfera de Cristal)
                    GlassOrbButton(
                      size: 72,
                      iconSize: 40,
                      label: context.l10n.skins,
                      glowColor: const Color(0xFF00E5FF),
                      icon: Image.asset('assets/ui/elemento_4.png', fit: BoxFit.contain),
                      onTap: () => _navigateTo(const SkinsScreen()),
                    ),

                    // Botón STORE (Esfera de Cristal con cofre/diamante)
                    GlassOrbButton(
                      size: 72,
                      iconSize: 40,
                      label: context.l10n.store,
                      glowColor: const Color(0xFFA855F7),
                      hasBadge: gameProvider.canClaimDailyReward,
                      icon: Image.asset('assets/ui/elemento_5.png', fit: BoxFit.contain),
                      onTap: () => _navigateTo(const StoreScreen()),
                    ),
                  ],
                ),
              ),

              const SizedBox(height: 10),
            ],
          ),
        ),
      ),
    );
  }

  /// Construye el logotipo "Glassy" con gradiente de cristal y sombra bioluminiscente
  Widget _buildCrystalLogo(BuildContext context) {
    return ShaderMask(
      shaderCallback: (bounds) {
        return const LinearGradient(
          begin: Alignment.topCenter,
          end: Alignment.bottomCenter,
          colors: [
            Colors.white,
            Color(0xFFE0F7FA), // Hielo brillante
            Color(0xFF80DEEA), // Cian de cristal
            Color(0xFF00E5FF), // Resplandor zafiro
          ],
          stops: [0.0, 0.35, 0.70, 1.0],
        ).createShader(bounds);
      },
      child: Text(
        'Glassy',
        style: Theme.of(context).textTheme.displayLarge?.copyWith(
          color: Colors.white,
          fontSize: 54,
          fontWeight: FontWeight.w900,
          letterSpacing: 4.0,
          shadows: [
            const Shadow(
              color: Color(0xFF00E5FF),
              blurRadius: 30,
              offset: Offset(0, 4),
            ),
            const Shadow(
              color: Colors.white,
              blurRadius: 10,
            ),
          ],
        ),
      ),
    );
  }

  /// Dibuja una esquirla de cristal translúcida facetada
  Widget _buildCrystalShard({required double size, required double opacity}) {
    return Container(
      width: size,
      height: size,
      decoration: BoxDecoration(
        boxShadow: [
          BoxShadow(
            color: const Color(0xFF00E5FF).withValues(alpha: opacity * 0.6),
            blurRadius: 12,
          ),
        ],
      ),
      child: CustomPaint(
        painter: _ShardPainter(opacity: opacity),
      ),
    );
  }

  /// Diálogo del Calendario de Recompensas Diarias (Preservado)
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
              color: const Color(0xFF0A162B).withValues(alpha: 0.95),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(color: const Color(0xFF00E5FF).withValues(alpha: 0.5), width: 1.5),
              boxShadow: [
                BoxShadow(
                  color: const Color(0xFF00E5FF).withValues(alpha: 0.25),
                  blurRadius: 35,
                  spreadRadius: 2,
                ),
              ],
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    const Icon(Icons.calendar_today_rounded, color: Color(0xFF00E5FF)),
                    Text(
                      context.l10n.dailyReward,
                      style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 16, letterSpacing: 1),
                    ),
                    InkWell(
                      onTap: () => Navigator.pop(dialogContext),
                      child: const Icon(Icons.close_rounded, color: Colors.white54),
                    ),
                  ],
                ),
                const SizedBox(height: 24),
                Wrap(
                  spacing: 10,
                  runSpacing: 10,
                  alignment: WrapAlignment.center,
                  children: List.generate(7, (index) {
                    int day = index + 1;
                    bool isToday = day == currentStreak;
                    bool isPast = day < currentStreak;
                    int rewardValue = day == 7 ? 10 : day;

                    return Container(
                      width: 60,
                      height: 80,
                      decoration: BoxDecoration(
                        color: isToday
                            ? const Color(0xFF00E5FF).withValues(alpha: 0.2)
                            : (isPast ? Colors.green.withValues(alpha: 0.15) : const Color(0xFF13233D)),
                        borderRadius: BorderRadius.circular(12),
                        border: Border.all(
                          color: isToday ? const Color(0xFF00E5FF) : (isPast ? Colors.green : Colors.white12),
                          width: isToday ? 2 : 1,
                        ),
                        boxShadow: isToday ? [BoxShadow(color: const Color(0xFF00E5FF).withValues(alpha: 0.4), blurRadius: 10)] : [],
                      ),
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Text(context.l10n.dayNumber(day), style: TextStyle(color: isToday ? Colors.white : Colors.white54, fontSize: 12, fontWeight: FontWeight.bold)),
                          const SizedBox(height: 4),
                          isPast ? const Icon(Icons.check_circle, color: Colors.green, size: 28) : const CurrencyIcon(size: 28),
                          const SizedBox(height: 4),
                          Text('+$rewardValue', style: TextStyle(color: isToday ? const Color(0xFF00E5FF) : const Color(0xFF38BDF8), fontWeight: FontWeight.w900, fontSize: 14)),
                        ],
                      ),
                    );
                  }),
                ),
                const SizedBox(height: 24),
                SizedBox(
                  width: double.infinity,
                  child: ElevatedButton(
                    onPressed: (gameProvider.canClaimDailyReward && !gameProvider.isClaimingDaily) ? () async {
                      int claimedDay = currentStreak;
                      Navigator.pop(dialogContext);
                      final success = await gameProvider.claimDailyReward();
                      if (context.mounted) {
                        if (success) {
                          ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text(context.l10n.dailyRewardClaimed(claimedDay)), backgroundColor: const Color(0xFF00E5FF)));
                        } else {
                          ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Ya has reclamado tu recompensa diaria de hoy.'), backgroundColor: Colors.redAccent));
                        }
                      }
                    } : null,
                    style: ElevatedButton.styleFrom(
                      backgroundColor: const Color(0xFF00E5FF),
                      foregroundColor: Colors.black,
                      padding: const EdgeInsets.symmetric(vertical: 16),
                      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
                      elevation: 10,
                      shadowColor: const Color(0xFF00E5FF).withValues(alpha: 0.5),
                    ),
                    child: Text(
                      gameProvider.canClaimDailyReward ? context.l10n.claim : 'VUELVE MAÑANA',
                      style: TextStyle(
                        fontWeight: FontWeight.w900,
                        fontSize: 16,
                        letterSpacing: 2,
                        color: gameProvider.canClaimDailyReward ? Colors.black : Colors.white54,
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),
        );
      },
    );
  }
}

/// Dibuja una esquirla de cristal triangular facetada
class _ShardPainter extends CustomPainter {
  final double opacity;

  _ShardPainter({required this.opacity});

  @override
  void paint(Canvas canvas, Size size) {
    final w = size.width;
    final h = size.height;

    final path = Path()
      ..moveTo(w * 0.5, 0)
      ..lineTo(w, h * 0.7)
      ..lineTo(w * 0.3, h)
      ..lineTo(0, h * 0.4)
      ..close();

    final fillPaint = Paint()
      ..shader = LinearGradient(
        begin: Alignment.topLeft,
        end: Alignment.bottomRight,
        colors: [
          Colors.white.withValues(alpha: opacity * 0.9),
          const Color(0xFF38BDF8).withValues(alpha: opacity * 0.7),
          const Color(0xFF0284C7).withValues(alpha: opacity * 0.4),
        ],
      ).createShader(Offset.zero & size);
    canvas.drawPath(path, fillPaint);

    final edgePaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.2
      ..color = Colors.white.withValues(alpha: opacity);
    canvas.drawPath(path, edgePaint);
  }

  @override
  bool shouldRepaint(covariant _ShardPainter oldDelegate) => oldDelegate.opacity != opacity;
}
