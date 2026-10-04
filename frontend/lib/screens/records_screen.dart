import 'package:flutter/material.dart';
import 'dart:ui';
import 'package:provider/provider.dart';
import 'package:supabase_flutter/supabase_flutter.dart';

import '../theme/app_theme.dart';
import '../services/audio_service.dart';
import '../services/achievements_service.dart';
import '../providers/game_provider.dart';

class RecordsScreen extends StatefulWidget {
  const RecordsScreen({Key? key}) : super(key: key);

  @override
  State<RecordsScreen> createState() => _RecordsScreenState();
}

class _RecordsScreenState extends State<RecordsScreen> with TickerProviderStateMixin {
  late TabController _tabController;
  late AnimationController _bgAnimController;

  // Estado para Logros
  List<Map<String, dynamic>> _userProgress = [];
  bool _isLoadingAchievements = true;

  @override
  void initState() {
    super.initState();
    AudioService().playBgMusic();
    
    _tabController = TabController(length: 3, vsync: this);
    
    _bgAnimController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 10),
    )..repeat(reverse: true);

    _loadAchievements();
  }

  @override
  void dispose() {
    _tabController.dispose();
    _bgAnimController.dispose();
    super.dispose();
  }

  // --- LÓGICA DE LOGROS ---
  Future<void> _loadAchievements() async {
    final progress = await AchievementsService().getAchievementsStatus();
    if (mounted) {
      setState(() {
        _userProgress = progress;
        _isLoadingAchievements = false;
      });
    }
  }

  Map<String, dynamic>? _getProgressFor(int groupId, int level) {
    try {
      return _userProgress.firstWhere((p) => p['group_id'] == groupId && p['level'] == level);
    } catch (e) {
      return null;
    }
  }

  // --- LÓGICA DE LEADERBOARD ---
  Future<List<Map<String, dynamic>>> _fetchLeaderboard() async {
    try {
      final response = await Supabase.instance.client
          .from('leaderboards')
          .select('score, users(name)')
          .order('score', ascending: false)
          .limit(100);
      return List<Map<String, dynamic>>.from(response);
    } catch (e) {
      debugPrint('Error fetching leaderboard: $e');
      return [];
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF0D0D12),
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'RECORDS',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 3,
            fontSize: 22,
            shadows: [Shadow(color: AppTheme.crystalBlue, blurRadius: 15)],
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        automaticallyImplyLeading: false,
        bottom: TabBar(
          controller: _tabController,
          indicatorColor: AppTheme.crystalBlue,
          indicatorWeight: 4,
          labelColor: Colors.white,
          unselectedLabelColor: Colors.white54,
          tabs: const [
            Tab(icon: Icon(Icons.emoji_events_rounded), text: 'Logros'),
            Tab(icon: Icon(Icons.leaderboard_rounded), text: 'Ranking'),
            Tab(icon: Icon(Icons.calendar_month_rounded), text: 'Diario'),
          ],
        ),
      ),
      body: Stack(
        children: [
          // Fondo animado unificado
          Container(
            decoration: const BoxDecoration(
              gradient: RadialGradient(
                center: Alignment.topCenter,
                radius: 1.5,
                colors: [Color(0xFF1A1A2E), Color(0xFF0D0D12)],
              ),
            ),
          ),
          AnimatedBuilder(
            animation: _bgAnimController,
            builder: (context, child) {
              return Stack(
                children: [
                  Positioned(
                    top: -50 + (_bgAnimController.value * 40),
                    left: -50 - (_bgAnimController.value * 20),
                    child: _buildBlurBlob(color: const Color(0xFF651FFF), size: 250),
                  ),
                  Positioned(
                    bottom: -50 + (_bgAnimController.value * 20),
                    right: -50 + (_bgAnimController.value * 30),
                    child: _buildBlurBlob(color: const Color(0xFF00E5FF), size: 300),
                  ),
                ],
              );
            },
          ),
          
          SafeArea(
            child: TabBarView(
              controller: _tabController,
              children: [
                _buildAchievementsTab(),
                _buildLeaderboardTab(),
                _buildDailyCalendarTab(),
              ],
            ),
          ),
        ],
      ),
    );
  }

  // ==========================================
  // TAB 1: LOGROS
  // ==========================================
  Widget _buildAchievementsTab() {
    if (_isLoadingAchievements) {
      return const Center(child: CircularProgressIndicator(color: AppTheme.crystalBlue));
    }
    return ListView(
      physics: const BouncingScrollPhysics(),
      padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 20),
      children: [
        Container(
          padding: const EdgeInsets.all(20),
          decoration: BoxDecoration(
            color: const Color(0xFF161622),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.orangeAccent.withOpacity(0.3), width: 1),
          ),
          child: const Row(
            children: [
              Icon(Icons.emoji_events, color: Colors.orangeAccent, size: 40),
              SizedBox(width: 16),
              Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text('SISTEMA DE LOGROS', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16)),
                    SizedBox(height: 8),
                    Text('Completa retos para ganar Lapislázulis gratis.', style: TextStyle(color: Colors.white70, fontSize: 13, height: 1.4)),
                  ],
                ),
              ),
            ],
          ),
        ),
        const SizedBox(height: 30),
        const Text('FUSIÓN DE GEMAS', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold, fontSize: 14, letterSpacing: 2)),
        const SizedBox(height: 15),
        _buildDynamicAchievementCard(1, 1, 'Nivel 1: Fusiona Esmeraldas', 'Logra fusionar 1,000 esmeraldas en total.', 1, 1000, Colors.greenAccent),
        
        const SizedBox(height: 30),
        const Text('PUNTUACIÓN HISTÓRICA', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold, fontSize: 14, letterSpacing: 2)),
        const SizedBox(height: 15),
        _buildDynamicAchievementCard(10, 1, 'Nivel 1: Principiante', 'Consigue 20,000 puntos en una partida.', 10, 20000, Colors.purpleAccent),
        _buildDynamicAchievementCard(10, 2, 'Nivel 2: Promesa', 'Consigue 40,000 puntos en una partida.', 20, 40000, Colors.purpleAccent),
      ],
    );
  }

  Widget _buildDynamicAchievementCard(int groupId, int level, String title, String desc, int reward, int total, Color color) {
    final status = _getProgressFor(groupId, level);
    final currentProgress = status?['progress'] ?? 0;
    final isClaimed = status?['is_claimed'] ?? false;
    
    bool isCompleted = isClaimed;
    bool isClaimable = !isClaimed && currentProgress >= total;
    double progressPercent = (currentProgress / total).clamp(0.0, 1.0);

    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: const Color(0xFF161622),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: isClaimable ? color : const Color(0xFF2A2A3A), width: isClaimable ? 2 : 1),
        boxShadow: isClaimable ? [BoxShadow(color: color.withOpacity(0.15), blurRadius: 15, spreadRadius: -2)] : [],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Expanded(child: Text(title, style: TextStyle(color: isClaimable ? Colors.white : Colors.white70, fontSize: 16, fontWeight: FontWeight.bold))),
              const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 20),
              const SizedBox(width: 4),
              Text('+$reward', style: const TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 16)),
            ],
          ),
          const SizedBox(height: 8),
          Text(desc, style: const TextStyle(color: Colors.white54, fontSize: 13)),
          const SizedBox(height: 16),
          if (!isCompleted) ...[
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                const Text('Progreso', style: TextStyle(color: Colors.white54, fontSize: 12)),
                Text('$currentProgress / $total', style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 12)),
              ],
            ),
            const SizedBox(height: 8),
            ClipRRect(
              borderRadius: BorderRadius.circular(10),
              child: LinearProgressIndicator(value: progressPercent, backgroundColor: const Color(0xFF2A2A3A), color: isClaimable ? color : AppTheme.crystalBlue, minHeight: 8),
            ),
            const SizedBox(height: 20),
            SizedBox(
              width: double.infinity,
              child: ElevatedButton(
                onPressed: isClaimable ? () async {
                  bool success = await AchievementsService().claimReward(groupId, level, total, reward, 'crystals');
                  if (success) {
                    _loadAchievements();
                    ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: const Text('¡Logro Reclamado!'), backgroundColor: color));
                  }
                } : null,
                style: ElevatedButton.styleFrom(
                  backgroundColor: color,
                  disabledBackgroundColor: const Color(0xFF232332),
                  padding: const EdgeInsets.symmetric(vertical: 14),
                  shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                ),
                child: Text(isClaimable ? 'RECLAMAR' : 'EN PROGRESO', style: const TextStyle(fontWeight: FontWeight.w900, color: Colors.black)),
              ),
            ),
          ] else ...[
             Row(
               mainAxisAlignment: MainAxisAlignment.center,
               children: [
                 Icon(Icons.check_circle, color: color, size: 20),
                 const SizedBox(width: 8),
                 const Text('COMPLETADO', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1)),
               ],
             )
          ]
        ],
      ),
    );
  }

  // ==========================================
  // TAB 2: LEADERBOARD
  // ==========================================
  Widget _buildLeaderboardTab() {
    return FutureBuilder<List<Map<String, dynamic>>>(
      future: _fetchLeaderboard(),
      builder: (context, snapshot) {
        if (snapshot.connectionState == ConnectionState.waiting) {
          return const Center(child: CircularProgressIndicator(color: AppTheme.crystalBlue));
        }
        final leaders = snapshot.data ?? [];
        if (leaders.isEmpty) {
          return const Center(child: Text('No hay puntajes aún. ¡Sé el primero!', style: TextStyle(color: Colors.white70)));
        }
        return ListView.builder(
          padding: const EdgeInsets.all(20),
          physics: const BouncingScrollPhysics(),
          itemCount: leaders.length,
          itemBuilder: (context, index) {
            final player = leaders[index];
            final rank = index + 1;
            String name = player['users']?['name'] ?? 'Desconocido';
            Color rankColor = rank == 1 ? Colors.amber : (rank == 2 ? Colors.grey[300]! : (rank == 3 ? Colors.brown[300]! : Colors.white70));
            
            return Container(
              margin: const EdgeInsets.only(bottom: 12),
              padding: const EdgeInsets.all(16),
              decoration: BoxDecoration(
                color: Colors.white.withOpacity(rank <= 3 ? 0.08 : 0.03),
                borderRadius: BorderRadius.circular(16),
                border: Border.all(color: rankColor.withOpacity(0.3), width: rank <= 3 ? 2 : 1),
              ),
              child: Row(
                children: [
                  Text('#$rank', style: TextStyle(color: rankColor, fontSize: 20, fontWeight: FontWeight.w900)),
                  const SizedBox(width: 16),
                  const CircleAvatar(radius: 16, backgroundColor: Colors.transparent, child: Icon(Icons.person, color: Colors.white54)),
                  const SizedBox(width: 12),
                  Expanded(child: Text(name, style: const TextStyle(color: Colors.white, fontSize: 16, fontWeight: FontWeight.bold))),
                  Text('${player['score']}', style: const TextStyle(color: AppTheme.crystalBlue, fontSize: 18, fontWeight: FontWeight.w900)),
                ],
              ),
            );
          },
        );
      }
    );
  }

  // ==========================================
  // TAB 3: CALENDARIO DIARIO
  // ==========================================
  Widget _buildDailyCalendarTab() {
    return Consumer<GameProvider>(
      builder: (context, gameProvider, child) {
        int currentStreak = gameProvider.currentStreak == 0 ? 1 : gameProvider.currentStreak;
        bool canClaim = gameProvider.canClaimDailyReward;

        return SingleChildScrollView(
          padding: const EdgeInsets.all(24),
          physics: const BouncingScrollPhysics(),
          child: Column(
            children: [
              Container(
                padding: const EdgeInsets.all(20),
                decoration: BoxDecoration(
                  color: const Color(0xFF161622),
                  borderRadius: BorderRadius.circular(20),
                  border: Border.all(color: Colors.orangeAccent.withOpacity(0.5), width: 2),
                  boxShadow: [BoxShadow(color: Colors.orangeAccent.withOpacity(0.1), blurRadius: 30)],
                ),
                child: Column(
                  children: [
                    const Icon(Icons.calendar_month, color: Colors.orangeAccent, size: 40),
                    const SizedBox(height: 10),
                    const Text('RECOMPENSA DIARIA', style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 18, letterSpacing: 1)),
                    const SizedBox(height: 8),
                    const Text('Vuelve cada día para reclamar gemas gratis.', textAlign: TextAlign.center, style: TextStyle(color: Colors.white70)),
                    const SizedBox(height: 24),
                    Wrap(
                      spacing: 12,
                      runSpacing: 12,
                      alignment: WrapAlignment.center,
                      children: List.generate(7, (index) {
                        int day = index + 1;
                        bool isToday = day == currentStreak;
                        bool isPast = day < currentStreak;
                        
                        return Container(
                          width: 65,
                          height: 85,
                          decoration: BoxDecoration(
                            color: isToday ? Colors.orangeAccent.withOpacity(0.2) : (isPast ? Colors.green.withOpacity(0.1) : const Color(0xFF232332)),
                            borderRadius: BorderRadius.circular(12),
                            border: Border.all(color: isToday ? Colors.orangeAccent : (isPast ? Colors.green : const Color(0xFF2A2A3A)), width: isToday ? 2 : 1),
                          ),
                          child: Column(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Text('Día $day', style: TextStyle(color: isToday ? Colors.white : Colors.white54, fontSize: 12, fontWeight: FontWeight.bold)),
                              const SizedBox(height: 8),
                              isPast ? const Icon(Icons.check_circle, color: Colors.green, size: 24) : const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 24),
                              const SizedBox(height: 8),
                              Text('+$day', style: TextStyle(color: isToday ? Colors.orangeAccent : AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 14)),
                            ],
                          ),
                        );
                      }),
                    ),
                    const SizedBox(height: 24),
                    SizedBox(
                      width: double.infinity,
                      child: ElevatedButton(
                        onPressed: canClaim ? () {
                          gameProvider.claimDailyReward();
                          ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('¡Recompensa Reclamada!'), backgroundColor: Colors.orange));
                        } : null,
                        style: ElevatedButton.styleFrom(
                          backgroundColor: Colors.orangeAccent,
                          disabledBackgroundColor: const Color(0xFF232332),
                          padding: const EdgeInsets.symmetric(vertical: 16),
                          shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
                        ),
                        child: Text(canClaim ? 'RECLAMAR HOY' : 'VUELVE MAÑANA', style: TextStyle(fontWeight: FontWeight.w900, fontSize: 16, color: canClaim ? Colors.black : Colors.white54)),
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        );
      },
    );
  }

  Widget _buildBlurBlob({required Color color, required double size}) {
    return Container(
      width: size,
      height: size,
      decoration: BoxDecoration(
        shape: BoxShape.circle,
        color: color.withOpacity(0.2),
        boxShadow: [BoxShadow(color: color.withOpacity(0.25), blurRadius: 100, spreadRadius: 50)],
      ),
    );
  }
}
