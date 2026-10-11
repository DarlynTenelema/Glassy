import 'package:glassy/theme/app_colors.dart';
import 'package:flutter/material.dart';
import 'dart:ui';
import 'package:provider/provider.dart';
import 'package:supabase_flutter/supabase_flutter.dart';

import '../theme/app_theme.dart';
import '../widgets/ui/currency_icon.dart';
import '../widgets/ui/glass_card.dart';
import '../services/audio_service.dart';
import '../services/achievements_service.dart';
import '../providers/game_provider.dart';

class RecordsScreen extends StatefulWidget {
  const RecordsScreen({super.key});

  @override
  State<RecordsScreen> createState() => _RecordsScreenState();
}

class _RecordsScreenState extends State<RecordsScreen> with TickerProviderStateMixin {
  late TabController _tabController;
  late AnimationController _bgAnimController;

  // Estado para Logros
  List<Map<String, dynamic>> _userProgress = [];
  bool _isLoadingAchievements = true;

  // Estado para Leaderboard
  bool _showTotalRanking = false;

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
    // Si el backend falla, simularemos algo de progreso para que no sea solo estética
    final progress = await AchievementsService().getAchievementsStatus();
    
    // Fallback simulado si viene vacío para que el usuario vea progreso
    if (progress.isEmpty) {
      final int highScore = Provider.of<GameProvider>(context, listen: false).highScore;
      progress.addAll([
        {'group_id': 1, 'level': 1, 'progress': 120, 'is_claimed': false},
        {'group_id': 10, 'level': 1, 'progress': highScore, 'is_claimed': highScore >= 20000},
        {'group_id': 10, 'level': 2, 'progress': highScore, 'is_claimed': highScore >= 40000},
      ]);
    }
    
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
      List<Map<String, dynamic>> realData = [];
      
      if (_showTotalRanking) {
        final response = await Supabase.instance.client
            .from('users')
            .select('id, name, avatar_id, total_score')
            .order('total_score', ascending: false)
            .limit(100);
            
        // Map it to look like the standard leaderboard format
        realData = List<Map<String, dynamic>>.from(response).map((row) => {
          'user_id': row['id'],
          'score': row['total_score'],
          'users': {
            'name': row['name'],
            'avatar_id': row['avatar_id']
          }
        }).toList();
      } else {
        final response = await Supabase.instance.client
            .from('leaderboards')
            .select('user_id, score, users(name, avatar_id)')
            .order('score', ascending: false)
            .limit(100);
        realData = List<Map<String, dynamic>>.from(response);
      }
      
      // DATOS MOCK PARA PREVISUALIZAR EL DISEÑO
      final List<Map<String, dynamic>> mockData = [
        {'user_id': 'mock1', 'score': 150400, 'users': {'name': 'MasterGamer', 'avatar_id': 'personaje_2.jpg'}},
        {'user_id': 'mock2', 'score': 142000, 'users': {'name': 'CristalQueen', 'avatar_id': 'personaje_4.jpg'}},
        {'user_id': 'mock3', 'score': 135500, 'users': {'name': 'ProPlayerX', 'avatar_id': 'personaje_7.jpg'}},
        {'user_id': 'mock4', 'score': 120000, 'users': {'name': 'ShadowNinja', 'avatar_id': 'personaje_8.jpg'}},
        {'user_id': 'mock5', 'score': 115250, 'users': {'name': 'LapisHunter', 'avatar_id': 'personaje_5.jpg'}},
        {'user_id': 'mock6', 'score': 98000, 'users': {'name': 'NoobMaster', 'avatar_id': 'personaje_10.jpg'}},
        {'user_id': 'mock7', 'score': 85000, 'users': {'name': 'GlassWalker', 'avatar_id': 'personaje_13.jpg'}},
        {'user_id': 'mock8', 'score': 72300, 'users': {'name': 'EpicGamer', 'avatar_id': 'personaje_17.jpg'}},
        {'user_id': 'mock9', 'score': 65000, 'users': {'name': 'CrystalBot', 'avatar_id': 'personaje_19.jpg'}},
      ];
      
      // Combinar los reales con los mock y ordenar de mayor a menor score
      final combined = [...realData, ...mockData];
      combined.sort((a, b) => (b['score'] as int).compareTo(a['score'] as int));
      
      return combined;
    } catch (e) {
      debugPrint('Error fetching leaderboard: $e');
      return [];
    }
  }

  Map<String, dynamic>? _extractUserData(dynamic usersData) {
    if (usersData == null) return null;
    if (usersData is List) {
      return usersData.isNotEmpty ? usersData.first as Map<String, dynamic> : null;
    } else if (usersData is Map) {
      return Map<String, dynamic>.from(usersData);
    }
    return null;
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Theme.of(context).scaffoldBackgroundColor,
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'RECORDS',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 3,
            fontSize: 22,
            shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 15)],
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        automaticallyImplyLeading: false,
        bottom: TabBar(
          controller: _tabController,
          indicatorColor: AppColors.lightBlue,
          indicatorWeight: 4,
          labelColor: Colors.white,
          unselectedLabelColor: Colors.white54,
          tabs: [
            Tab(icon: Image.asset('assets/ui/elemento_1.png', width: 26, height: 26), text: 'Logros'),
            Tab(icon: Icon(Icons.leaderboard_rounded), text: 'Ranking'),
            Tab(icon: Icon(Icons.calendar_month_rounded), text: 'Diario'),
          ],
        ),
      ),
      body: Stack(
        children: [
          // Fondo animado unificado
          Container(
            decoration: BoxDecoration(
              gradient: RadialGradient(
                center: Alignment.topCenter,
                radius: 1.5,
                colors: [Theme.of(context).colorScheme.surface, Theme.of(context).scaffoldBackgroundColor],
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
                    child: _buildBlurBlob(color: AppColors.accentPurple, size: 250),
                  ),
                  Positioned(
                    bottom: -50 + (_bgAnimController.value * 20),
                    right: -50 + (_bgAnimController.value * 30),
                    child: _buildBlurBlob(color: AppColors.accentCyan, size: 300),
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
      return const Center(child: CircularProgressIndicator(color: AppColors.lightBlue));
    }
    return ListView(
      physics: const BouncingScrollPhysics(),
      padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 20),
      children: [
        Container(
          padding: const EdgeInsets.all(20),
          decoration: BoxDecoration(
            color: Theme.of(context).colorScheme.surface,
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.orangeAccent.withValues(alpha: 0.3), width: 1),
          ),
          child: Row(
            children: [
              Image.asset('assets/ui/elemento_1.png', width: 40, height: 40),
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
        const Text('OFERTAS ESPECIALES', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold, fontSize: 14, letterSpacing: 2)),
        const SizedBox(height: 15),
        _buildDynamicAchievementCard(7, 1, 'Invitación VIP', 'Comparte el juego con 10 amigos.', 0, 10, Colors.pinkAccent, customRewardText: 'Skin Exclusiva', customIcon: Icons.card_giftcard),
        _buildDynamicAchievementCard(9, 1, 'Creador de Contenido', 'Sube una de tus partidas a TikTok.', 1000, 1, Colors.lightBlueAccent, isTikTok: true),
      ],
    );
  }

  Widget _buildDynamicAchievementCard(int groupId, int level, String title, String desc, int reward, int total, Color color, {String? customRewardText, IconData? customIcon, bool isTikTok = false}) {
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
        color: Theme.of(context).colorScheme.surface,
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: isClaimable ? color : Colors.white12, width: isClaimable ? 2 : 1),
        boxShadow: isClaimable ? [BoxShadow(color: color.withValues(alpha: 0.15), blurRadius: 15, spreadRadius: -2)] : [],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Expanded(child: Text(title, style: TextStyle(color: isClaimable ? Colors.white : Colors.white70, fontSize: 16, fontWeight: FontWeight.bold))),
              if (customIcon != null)
                Icon(customIcon, color: color, size: 20)
              else if (groupId == 9)
                Image.asset('assets/ui/fragments_icon.png', width: 20, height: 20, errorBuilder: (c,e,s) => Icon(Icons.diamond, color: color, size: 20)) // O puedes usar otro icono para fragmentos
              else
                CurrencyIcon(size: 20),
              const SizedBox(width: 4),
              Text(customRewardText ?? '+$reward', style: TextStyle(color: color, fontWeight: FontWeight.w900, fontSize: customRewardText != null ? 12 : 16)),
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
              child: LinearProgressIndicator(value: progressPercent, backgroundColor: Colors.white12, color: isClaimable ? color : AppColors.lightBlue, minHeight: 8),
            ),
            const SizedBox(height: 20),
            if (isTikTok && !isClaimable && currentProgress == 0) ...[
              SizedBox(
                width: double.infinity,
                child: ElevatedButton.icon(
                  onPressed: () => _showTikTokSubmissionDialog(),
                  icon: const Icon(Icons.link, color: Colors.black),
                  label: const Text('ENVIAR LINK', style: TextStyle(fontWeight: FontWeight.w900, color: Colors.black)),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: color,
                    padding: const EdgeInsets.symmetric(vertical: 14),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                ),
              ),
            ] else ...[
              SizedBox(
                width: double.infinity,
                child: ElevatedButton(
                  onPressed: isClaimable ? () async {
                    final rewardType = (groupId == 7) ? 'skin_Metales_Preciosos' : 'crystals';
                    bool success = await AchievementsService().claimReward(groupId, level, total, reward, rewardType);
                    if (success) {
                      _loadAchievements();
                      if (groupId == 7) {
                        if (mounted) {
                          Provider.of<GameProvider>(context, listen: false).fetchSkins();
                        }
                        if (mounted) {
                          ScaffoldMessenger.of(context).showSnackBar(
                            const SnackBar(
                              content: Text('¡Felicidades! Has desbloqueado la skin exclusiva Metales Preciosos.'), 
                              backgroundColor: Colors.pinkAccent,
                            ),
                          );
                        }
                      } else {
                        if (mounted) {
                          ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: const Text('¡Logro Reclamado!'), backgroundColor: color));
                        }
                      }
                    }
                  } : null,
                  style: ElevatedButton.styleFrom(
                    backgroundColor: color,
                    disabledBackgroundColor: Theme.of(context).colorScheme.surface,
                    padding: const EdgeInsets.symmetric(vertical: 14),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                  child: Text(
                    isTikTok && currentProgress > 0 && !isClaimable ? 'EN REVISIÓN' : (isClaimable ? 'RECLAMAR' : 'EN PROGRESO'), 
                    style: const TextStyle(fontWeight: FontWeight.w900, color: Colors.black)
                  ),
                ),
              ),
            ]
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

  Future<void> _showTikTokSubmissionDialog() async {
    final TextEditingController urlController = TextEditingController();
    
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: AppColors.navyBlue,
        shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20), side: BorderSide(color: AppColors.lightBlue)),
        title: const Text('SUBIR A TIKTOK', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1), textAlign: TextAlign.center),
        content: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            const Text('Pega aquí el enlace de tu video de TikTok jugando Glassy. Nuestro equipo lo revisará en menos de 24 horas.', style: TextStyle(color: Colors.white70, fontSize: 13), textAlign: TextAlign.center),
            const SizedBox(height: 20),
            TextField(
              controller: urlController,
              style: const TextStyle(color: Colors.white),
              decoration: InputDecoration(
                hintText: 'https://vm.tiktok.com/...',
                hintStyle: TextStyle(color: Colors.white.withValues(alpha: 0.3)),
                filled: true,
                fillColor: Colors.black26,
                border: OutlineInputBorder(borderRadius: BorderRadius.circular(10), borderSide: BorderSide.none),
                prefixIcon: const Icon(Icons.link, color: AppColors.lightBlue),
              ),
            ),
          ],
        ),
        actionsAlignment: MainAxisAlignment.spaceEvenly,
        actions: [
          TextButton(
            onPressed: () => Navigator.pop(ctx),
            child: const Text('CANCELAR', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold)),
          ),
          ElevatedButton(
            onPressed: () async {
              if (urlController.text.trim().isEmpty) return;
              Navigator.pop(ctx);
              
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Enviando...'), backgroundColor: Colors.orange));
              
              bool success = await AchievementsService().submitTikTokLink(urlController.text.trim());
              
              if (mounted) {
                if (success) {
                  ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('¡Enlace enviado! En revisión.'), backgroundColor: Colors.green));
                  // Optimistically set progress to 1 to show 'EN REVISIÓN'
                  setState(() {
                    final status = _userProgress.firstWhere((p) => p['group_id'] == 9 && p['level'] == 1, orElse: () {
                      final newStatus = {'group_id': 9, 'level': 1, 'progress': 0, 'is_claimed': false};
                      _userProgress.add(newStatus);
                      return newStatus;
                    });
                    status['progress'] = 1;
                  });
                } else {
                  ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Error al enviar. Intenta de nuevo.'), backgroundColor: Colors.red));
                }
              }
            },
            style: ElevatedButton.styleFrom(
              backgroundColor: AppColors.lightBlue,
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10)),
            ),
            child: const Text('ENVIAR', style: TextStyle(color: Colors.black, fontWeight: FontWeight.w900)),
          ),
        ],
      ),
    );
  }

  // ==========================================
  // TAB 2: LEADERBOARD (MIGRADO AL DISEÑO PREMIUM)
  // ==========================================

  Widget _buildAvatar(String? avatarId, double radius, Color borderColor, double borderWidth, bool glow) {
    return Container(
      width: radius * 2,
      height: radius * 2,
      decoration: BoxDecoration(
        shape: BoxShape.circle,
        border: Border.all(color: borderColor, width: borderWidth),
        boxShadow: glow ? [
          BoxShadow(color: borderColor.withValues(alpha: 0.6), blurRadius: 20, spreadRadius: 2),
          BoxShadow(color: borderColor.withValues(alpha: 0.2), blurRadius: 40, spreadRadius: 10)
        ] : [],
        color: Theme.of(context).colorScheme.surface,
      ),
      child: ClipOval(
        child: avatarId != null && avatarId.isNotEmpty
            ? Image.asset(
                'assets/avatar/perfiles/$avatarId',
                fit: BoxFit.cover,
                errorBuilder: (context, error, stackTrace) => Icon(Icons.person, color: borderColor, size: radius),
              )
            : Icon(Icons.person, color: borderColor, size: radius),
      ),
    );
  }

  Widget _buildPodium(List<Map<String, dynamic>> leaders) {
    if (leaders.isEmpty) return const SizedBox.shrink();
    
    // Preparar jugadores
    final p1 = leaders.isNotEmpty ? leaders[0] : null;
    final p2 = leaders.length > 1 ? leaders[1] : null;
    final p3 = leaders.length > 2 ? leaders[2] : null;

    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 10),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.end,
        children: [
          if (p2 != null) _buildPodiumItem(p2, 2, 90, AppColors.silver),
          const SizedBox(width: 8),
          if (p1 != null) _buildPodiumItem(p1, 1, 120, AppColors.gold),
          const SizedBox(width: 8),
          if (p3 != null) _buildPodiumItem(p3, 3, 70, AppColors.bronze),
        ],
      ),
    );
  }

  Widget _buildPodiumItem(Map<String, dynamic> player, int rank, double pedestalHeight, Color color) {
    final userData = _extractUserData(player['users']);
    final String name = userData?['name'] ?? 'Desconocido';
    final String? avatarId = userData?['avatar_id'];
    
    final bool isFirst = rank == 1;
    final double avatarSize = isFirst ? 32 : 26;
    
    return Column(
      mainAxisAlignment: MainAxisAlignment.end,
      children: [
        if (isFirst)
          Padding(
            padding: const EdgeInsets.only(bottom: 4.0),
            child: Icon(Icons.workspace_premium, color: color, size: 35, shadows: [Shadow(color: color.withValues(alpha: 0.8), blurRadius: 20)]),
          ),
        
        _buildAvatar(avatarId, avatarSize, color, isFirst ? 3 : 2, true),
        
        const SizedBox(height: 12),
        SizedBox(
          width: 80,
          child: Text(
            name,
            style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w800, fontSize: 11, letterSpacing: 0.5),
            overflow: TextOverflow.ellipsis,
            textAlign: TextAlign.center,
          ),
        ),
        const SizedBox(height: 4),
        Text(
          '${player['score']}',
          style: TextStyle(
            color: color, 
            fontWeight: FontWeight.w900, 
            fontSize: isFirst ? 16 : 13,
            shadows: [Shadow(color: color.withValues(alpha: 0.6), blurRadius: 10)],
          ),
        ),
        const SizedBox(height: 12),
        
        // Pedestal de cristal
        ClipRRect(
          borderRadius: const BorderRadius.only(
            topLeft: Radius.circular(16),
            topRight: Radius.circular(16),
          ),
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 15, sigmaY: 15),
            child: Container(
              width: isFirst ? 85 : 70,
              height: pedestalHeight,
              decoration: BoxDecoration(
                gradient: LinearGradient(
                  begin: Alignment.topCenter,
                  end: Alignment.bottomCenter,
                  colors: [
                    color.withValues(alpha: 0.25),
                    color.withValues(alpha: 0.05),
                    Colors.transparent,
                  ],
                ),
                borderRadius: const BorderRadius.only(
                  topLeft: Radius.circular(16),
                  topRight: Radius.circular(16),
                ),
                border: Border(
                  top: BorderSide(color: color.withValues(alpha: 0.8), width: 2),
                  left: BorderSide(color: color.withValues(alpha: 0.3), width: 1),
                  right: BorderSide(color: color.withValues(alpha: 0.3), width: 1),
                ),
              ),
              child: Stack(
                alignment: Alignment.topCenter,
                children: [
                  Positioned(
                    top: -10,
                    child: Container(
                      width: 50,
                      height: 20,
                      decoration: BoxDecoration(
                        shape: BoxShape.circle,
                        boxShadow: [BoxShadow(color: color.withValues(alpha: 0.5), blurRadius: 20)],
                      ),
                    ),
                  ),
                  Padding(
                    padding: const EdgeInsets.only(top: 20),
                    child: Text(
                      '$rank',
                      style: TextStyle(
                        color: color.withValues(alpha: 0.9),
                        fontSize: isFirst ? 45 : 32,
                        fontWeight: FontWeight.w900,
                        fontStyle: FontStyle.italic,
                        shadows: const [Shadow(color: Colors.black87, blurRadius: 10)],
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
        ),
      ],
    );
  }

  Widget _buildListTile(Map<String, dynamic> player, int rank) {
    final userData = _extractUserData(player['users']);
    final String name = userData?['name'] ?? 'Desconocido';
    final String? avatarId = userData?['avatar_id'];
    
    return GlassCard(
      margin: const EdgeInsets.only(bottom: 12),
      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
      backgroundColor: Colors.white.withValues(alpha: 0.04),
      borderColor: Colors.white.withValues(alpha: 0.08),
      borderRadius: BorderRadius.circular(20),
      child: Row(
        children: [
          // Número
          SizedBox(
            width: 35,
            child: Text(
              '#$rank',
              style: TextStyle(
                color: Colors.white.withValues(alpha: 0.6),
                fontSize: 16,
                fontWeight: FontWeight.w900,
                fontStyle: FontStyle.italic,
              ),
            ),
          ),
          
          // Avatar
          _buildAvatar(avatarId, 22, AppColors.lightBlue.withValues(alpha: 0.7), 1.5, false),
          
          const SizedBox(width: 16),
          
          // Nombre
          Expanded(
            child: Text(
              name,
              style: const TextStyle(
                color: Colors.white,
                fontSize: 16,
                fontWeight: FontWeight.w600,
                letterSpacing: 0.5,
              ),
            ),
          ),
          
          // Score
          Column(
            crossAxisAlignment: CrossAxisAlignment.end,
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text(
                '${player['score']}',
                style: const TextStyle(
                  color: AppColors.lightBlue,
                  fontSize: 18,
                  fontWeight: FontWeight.w900,
                  shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 8)],
                ),
              ),
              const Text(
                'PTS',
                style: TextStyle(
                  color: Colors.white54,
                  fontSize: 9,
                  fontWeight: FontWeight.bold,
                  letterSpacing: 1,
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildLeaderboardTab() {
    return FutureBuilder<List<Map<String, dynamic>>>(
      future: _fetchLeaderboard(),
      builder: (context, snapshot) {
        if (snapshot.connectionState == ConnectionState.waiting) {
          return const Center(child: CircularProgressIndicator(color: AppColors.lightBlue));
        }
        
        final leaders = snapshot.data ?? [];
        
        if (leaders.isEmpty) {
          return const Center(
            child: Text('No hay puntajes aún. ¡Sé el primero!', style: TextStyle(color: Colors.white70, fontSize: 16)),
          );
        }

        return Column(
          children: [
            const SizedBox(height: 10),
            
            // Selector de Ranking
            Container(
              margin: const EdgeInsets.symmetric(horizontal: 20),
              padding: const EdgeInsets.all(4),
              decoration: BoxDecoration(
                color: Colors.black26,
                borderRadius: BorderRadius.circular(15),
                border: Border.all(color: Colors.white12),
              ),
              child: Row(
                children: [
                  Expanded(
                    child: GestureDetector(
                      onTap: () => setState(() => _showTotalRanking = false),
                      child: Container(
                        padding: const EdgeInsets.symmetric(vertical: 10),
                        decoration: BoxDecoration(
                          color: !_showTotalRanking ? AppColors.lightBlue : Colors.transparent,
                          borderRadius: BorderRadius.circular(12),
                        ),
                        child: Text(
                          'Mejor Partida',
                          textAlign: TextAlign.center,
                          style: TextStyle(
                            color: !_showTotalRanking ? Colors.black : Colors.white54,
                            fontWeight: FontWeight.bold,
                            fontSize: 13,
                          ),
                        ),
                      ),
                    ),
                  ),
                  Expanded(
                    child: GestureDetector(
                      onTap: () => setState(() => _showTotalRanking = true),
                      child: Container(
                        padding: const EdgeInsets.symmetric(vertical: 10),
                        decoration: BoxDecoration(
                          color: _showTotalRanking ? AppColors.accentPurple : Colors.transparent,
                          borderRadius: BorderRadius.circular(12),
                        ),
                        child: Text(
                          'Puntaje Total',
                          textAlign: TextAlign.center,
                          style: TextStyle(
                            color: _showTotalRanking ? Colors.white : Colors.white54,
                            fontWeight: FontWeight.bold,
                            fontSize: 13,
                          ),
                        ),
                      ),
                    ),
                  ),
                ],
              ),
            ),
            
            const SizedBox(height: 15),
            
            // Podium Top 3
            if (leaders.isNotEmpty) _buildPodium(leaders),
            
            // Resto de la lista
            Expanded(
              child: Container(
                width: double.infinity,
                margin: const EdgeInsets.only(top: 10),
                decoration: BoxDecoration(
                  color: Theme.of(context).colorScheme.surface.withValues(alpha: 0.6),
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(40),
                    topRight: Radius.circular(40),
                  ),
                  border: Border.all(color: Colors.white.withValues(alpha: 0.05), width: 1),
                  boxShadow: [
                    BoxShadow(color: Colors.black.withValues(alpha: 0.4), blurRadius: 30, offset: const Offset(0, -10))
                  ],
                ),
                child: ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(40),
                    topRight: Radius.circular(40),
                  ),
                  child: BackdropFilter(
                    filter: ImageFilter.blur(sigmaX: 20, sigmaY: 20),
                    child: ListView.builder(
                      padding: const EdgeInsets.only(top: 25, left: 24, right: 24, bottom: 15),
                      physics: const BouncingScrollPhysics(),
                      itemCount: leaders.length > 3 ? leaders.length - 3 : 0,
                      itemBuilder: (context, index) {
                        final actualIndex = index + 3;
                        final player = leaders[actualIndex];
                        return _buildListTile(player, actualIndex + 1);
                      },
                    ),
                  ),
                ),
              ),
            ),
            
            // Tarjeta del usuario actual estática al fondo
            _buildCurrentUserCard(leaders),
          ],
        );
      }
    );
  }

  Widget _buildCurrentUserCard(List<Map<String, dynamic>> leaders) {
    final user = Supabase.instance.client.auth.currentUser;
    if (user == null) return const SizedBox.shrink();

    return FutureBuilder<Map<String, dynamic>?>(
      future: Supabase.instance.client
          .from('users')
          .select('name, avatar_id')
          .eq('id', user.id)
          .maybeSingle(),
      builder: (context, snapshot) {
        String name = snapshot.data?['name'] ?? 'Cargando...';
        String? avatarId = snapshot.data?['avatar_id'];
        
        int score = Provider.of<GameProvider>(context, listen: false).highScore;
        
        // Encontrar rank real
        int rank = 0;
        for (int i = 0; i < leaders.length; i++) {
          if (leaders[i]['user_id'] == user.id) {
            rank = i + 1;
            // actualizamos el score con el del leaderboard por si difiere de lo local
            score = (leaders[i]['score'] ?? 0) as int;
            break;
          }
        }
        
        String rankStr = rank > 0 ? '#$rank' : '#+100';

        return Container(
          margin: const EdgeInsets.fromLTRB(20, 10, 20, 24),
          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 14),
          decoration: BoxDecoration(
            color: Theme.of(context).primaryColorDark.withValues(alpha: 0.85), // Azul vibrante/oscuro
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: AppColors.lightBlue, width: 2),
            boxShadow: [
              BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.3), blurRadius: 15, spreadRadius: 2),
              BoxShadow(color: Colors.black.withValues(alpha: 0.5), blurRadius: 10, offset: const Offset(0, 5))
            ]
          ),
          child: Row(
            children: [
              // Número
              SizedBox(
                width: 45,
                child: Text(
                  rankStr,
                  style: TextStyle(
                    color: Colors.white.withValues(alpha: 0.9),
                    fontSize: 14,
                    fontWeight: FontWeight.w900,
                    fontStyle: FontStyle.italic,
                  ),
                ),
              ),
              
              // Avatar
              _buildAvatar(avatarId, 22, Colors.white, 2, true),
              
              const SizedBox(width: 12),
              
              // Nombre
              Expanded(
                child: Text(
                  name,
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 16,
                    fontWeight: FontWeight.w800,
                    letterSpacing: 0.5,
                  ),
                  overflow: TextOverflow.ellipsis,
                ),
              ),
              
              // Score
              Column(
                crossAxisAlignment: CrossAxisAlignment.end,
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Text(
                    '$score',
                    style: const TextStyle(
                      color: Colors.white,
                      fontSize: 18,
                      fontWeight: FontWeight.w900,
                      shadows: [Shadow(color: Colors.white54, blurRadius: 8)],
                    ),
                  ),
                  const Text(
                    'PTS',
                    style: TextStyle(
                      color: Colors.white70,
                      fontSize: 9,
                      fontWeight: FontWeight.bold,
                      letterSpacing: 1,
                    ),
                  ),
                ],
              ),
            ],
          ),
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
                  color: Theme.of(context).colorScheme.surface,
                  borderRadius: BorderRadius.circular(20),
                  border: Border.all(color: Colors.orangeAccent.withValues(alpha: 0.5), width: 2),
                  boxShadow: [BoxShadow(color: Colors.orangeAccent.withValues(alpha: 0.1), blurRadius: 30)],
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
                            color: isToday ? Colors.orangeAccent.withValues(alpha: 0.2) : (isPast ? Colors.green.withValues(alpha: 0.1) : Theme.of(context).colorScheme.surface),
                            borderRadius: BorderRadius.circular(12),
                            border: Border.all(color: isToday ? Colors.orangeAccent : (isPast ? Colors.green : Colors.white12), width: isToday ? 2 : 1),
                          ),
                          child: Column(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Text('Día $day', style: TextStyle(color: isToday ? Colors.white : Colors.white54, fontSize: 12, fontWeight: FontWeight.bold)),
                              const SizedBox(height: 8),
                              isPast ? const Icon(Icons.check_circle, color: Colors.green, size: 24) : CurrencyIcon(size: 24),
                              const SizedBox(height: 8),
                              Text('+$day', style: TextStyle(color: isToday ? Colors.orangeAccent : AppColors.lightBlue, fontWeight: FontWeight.w900, fontSize: 14)),
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
                          disabledBackgroundColor: Theme.of(context).colorScheme.surface,
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
        color: color.withValues(alpha: 0.2),
        boxShadow: [BoxShadow(color: color.withValues(alpha: 0.25), blurRadius: 100, spreadRadius: 50)],
      ),
    );
  }
}
