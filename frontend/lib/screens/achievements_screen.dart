import 'package:flutter/material.dart';
import '../theme/app_theme.dart';
import '../services/achievements_service.dart';

class AchievementsScreen extends StatefulWidget {
  const AchievementsScreen({Key? key}) : super(key: key);

  @override
  State<AchievementsScreen> createState() => _AchievementsScreenState();
}

class _AchievementsScreenState extends State<AchievementsScreen> {
  List<Map<String, dynamic>> _userProgress = [];
  bool _isLoading = true;

  @override
  void initState() {
    super.initState();
    _loadProgress();
  }

  Future<void> _loadProgress() async {
    final progress = await AchievementsService().getAchievementsStatus();
    if (mounted) {
      setState(() {
        _userProgress = progress;
        _isLoading = false;
      });
    }
  }

  Map<String, dynamic>? _getProgressFor(int groupId, int level) {
    try {
      return _userProgress.firstWhere(
        (p) => p['group_id'] == groupId && p['level'] == level,
      );
    } catch (e) {
      return null;
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF0D0D12),
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'LOGROS',
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
            child: _isLoading 
              ? const Center(child: CircularProgressIndicator(color: AppTheme.crystalBlue))
              : ListView(
              physics: const BouncingScrollPhysics(),
              padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 20),
              children: [
                _buildHeader(),
                const SizedBox(height: 30),
                
                const Text(
                  'FUSIÓN DE GEMAS (GRUPO 1)',
                  style: TextStyle(
                    color: Colors.white54,
                    fontWeight: FontWeight.bold,
                    fontSize: 14,
                    letterSpacing: 2,
                  ),
                ),
                const SizedBox(height: 15),
                _buildDynamicCard(
                  groupId: 1,
                  level: 1,
                  title: 'Nivel 1: Fusiona Esmeraldas',
                  description: 'Logra fusionar 5,000 esmeraldas en total.',
                  reward: 50,
                  rewardType: 'fragments',
                  total: 5000,
                  accentColor: Colors.greenAccent,
                ),
                
                const SizedBox(height: 30),
                const Text(
                  'REDES SOCIALES (GRUPO 9)',
                  style: TextStyle(
                    color: Colors.white54,
                    fontWeight: FontWeight.bold,
                    fontSize: 14,
                    letterSpacing: 2,
                  ),
                ),
                const SizedBox(height: 15),
                _buildTikTokCard(context),

                const SizedBox(height: 30),
                const Text(
                  'PUNTUACIÓN HISTÓRICA (GRUPO 10)',
                  style: TextStyle(
                    color: Colors.white54,
                    fontWeight: FontWeight.bold,
                    fontSize: 14,
                    letterSpacing: 2,
                  ),
                ),
                const SizedBox(height: 15),
                _buildDynamicCard(
                  groupId: 10,
                  level: 1,
                  title: 'Nivel 1: Principiante',
                  description: 'Consigue 20,000 puntos en una partida.',
                  reward: 10,
                  total: 20000,
                  accentColor: Colors.purpleAccent,
                ),
                _buildDynamicCard(
                  groupId: 10,
                  level: 2,
                  title: 'Nivel 2: Promesa',
                  description: 'Consigue 40,000 puntos en una partida.',
                  reward: 20,
                  total: 40000,
                  accentColor: Colors.purpleAccent,
                ),
                const SizedBox(height: 40),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildHeader() {
    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: const Color(0xFF161622),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: Colors.orangeAccent.withOpacity(0.3), width: 1),
      ),
      child: Row(
        children: [
          ClipRRect(
            borderRadius: BorderRadius.circular(12),
            child: Image.asset(
              'assets/images/glassy_reward.png',
              width: 60,
              height: 60,
              fit: BoxFit.cover,
              errorBuilder: (context, error, stackTrace) => Container(
                padding: const EdgeInsets.all(12),
                decoration: BoxDecoration(
                  color: Colors.orangeAccent.withOpacity(0.1),
                  shape: BoxShape.circle,
                ),
                child: const Icon(Icons.emoji_events_rounded, color: Colors.orangeAccent, size: 36),
              ),
            ),
          ),
          const SizedBox(width: 16),
          const Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  'SISTEMA DE LOGROS',
                  style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                ),
                SizedBox(height: 8),
                Text(
                  'Completa retos históricos de fusión, puntuación y redes sociales para ganar Lapislázulis gratis.',
                  style: TextStyle(color: Colors.white70, fontSize: 13, height: 1.4),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildTikTokCard(BuildContext context) {
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: const Color(0xFF161622),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: Colors.pinkAccent.withOpacity(0.5), width: 1),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              const Icon(Icons.tiktok, color: Colors.white, size: 28),
              const SizedBox(width: 12),
              const Expanded(
                child: Text(
                  'Sube 1 partida a TikTok al día',
                  style: TextStyle(color: Colors.white, fontSize: 16, fontWeight: FontWeight.bold),
                ),
              ),
              const SizedBox(width: 8),
              Row(
                children: [
                  Image.asset(
                    'assets/images/lapislazuli.png',
                    width: 20,
                    height: 20,
                    errorBuilder: (context, error, stackTrace) => const Icon(Icons.diamond, color: AppTheme.crystalBlue, size: 20),
                  ),
                  const SizedBox(width: 4),
                  const Text(
                    '+1',
                    style: TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 16),
                  ),
                ],
              ),
            ],
          ),
          const SizedBox(height: 12),
          const Text(
            'Pega el link de tu video aquí. Revisaremos tu video y enviaremos tu recompensa en 24 horas.',
            style: TextStyle(color: Colors.white54, fontSize: 13),
          ),
          const SizedBox(height: 16),
          TextField(
            style: const TextStyle(color: Colors.white, fontSize: 14),
            decoration: InputDecoration(
              filled: true,
              fillColor: Colors.black.withOpacity(0.3),
              hintText: 'https://tiktok.com/@tu_usuario/video/...',
              hintStyle: const TextStyle(color: Colors.white38),
              border: OutlineInputBorder(borderRadius: BorderRadius.circular(12), borderSide: BorderSide.none),
              contentPadding: const EdgeInsets.symmetric(horizontal: 16, vertical: 14),
            ),
          ),
          const SizedBox(height: 16),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () {
                ScaffoldMessenger.of(context).showSnackBar(
                  const SnackBar(content: Text('Enviado a revisión. ¡Gracias por compartir!')),
                );
              },
              style: ElevatedButton.styleFrom(
                backgroundColor: Colors.pinkAccent,
                foregroundColor: Colors.white,
                padding: const EdgeInsets.symmetric(vertical: 14),
                shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
              ),
              child: const Text('ENVIAR LINK', style: TextStyle(fontWeight: FontWeight.bold)),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildDynamicCard({
    required int groupId,
    required int level,
    required String title,
    required String description,
    required int reward,
    String rewardType = 'lapis',
    required int total,
    required Color accentColor,
  }) {
    final status = _getProgressFor(groupId, level);
    final currentProgress = status?['progress'] ?? 0;
    final isClaimed = status?['is_claimed'] ?? false;
    
    bool isCompleted = isClaimed;
    bool isClaimable = !isClaimed && currentProgress >= total;

    return _buildAchievementCard(
      context,
      groupId: groupId,
      level: level,
      title: title,
      description: description,
      reward: reward,
      rewardType: rewardType,
      progress: currentProgress,
      total: total,
      isClaimable: isClaimable,
      isCompleted: isCompleted,
      accentColor: accentColor,
    );
  }

  Widget _buildAchievementCard(
    BuildContext context, {
    required int groupId,
    required int level,
    required String title,
    required String description,
    required int reward,
    required String rewardType,
    required int progress,
    required int total,
    required bool isClaimable,
    required bool isCompleted,
    required Color accentColor,
  }) {
    double progressPercent = progress / total;
    if (progressPercent > 1.0) progressPercent = 1.0;

    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: const Color(0xFF161622),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(
          color: isClaimable ? accentColor : const Color(0xFF2A2A3A),
          width: isClaimable ? 2 : 1,
        ),
        boxShadow: isClaimable ? [
          BoxShadow(
            color: accentColor.withOpacity(0.15),
            blurRadius: 15,
            spreadRadius: -2,
          )
        ] : [],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Expanded(
                child: Text(
                  title,
                  style: TextStyle(
                    color: isClaimable ? Colors.white : Colors.white70,
                    fontSize: 16,
                    fontWeight: FontWeight.bold,
                  ),
                ),
              ),
              const SizedBox(width: 12),
              // Recompensa visual
              Row(
                children: [
                  Image.asset(
                    rewardType == 'fragments' ? 'assets/images/lapis_fragments.png' : 'assets/images/lapislazuli.png',
                    width: 20,
                    height: 20,
                    errorBuilder: (context, error, stackTrace) => Icon(rewardType == 'fragments' ? Icons.extension : Icons.diamond, color: AppTheme.crystalBlue, size: 20),
                  ),
                  const SizedBox(width: 4),
                  Text(
                    '+$reward',
                    style: const TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 16),
                  ),
                ],
              ),
            ],
          ),
          const SizedBox(height: 8),
          Text(
            description,
            style: const TextStyle(color: Colors.white54, fontSize: 13),
          ),
          const SizedBox(height: 16),
          
          if (!isCompleted) ...[
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                const Text(
                  'Progreso',
                  style: TextStyle(color: Colors.white54, fontSize: 12),
                ),
                Text(
                  '$progress / $total',
                  style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 12),
                ),
              ],
            ),
            const SizedBox(height: 8),
            ClipRRect(
              borderRadius: BorderRadius.circular(10),
              child: LinearProgressIndicator(
                value: progressPercent,
                backgroundColor: const Color(0xFF2A2A3A),
                color: isClaimable ? accentColor : AppTheme.crystalBlue,
                minHeight: 8,
              ),
            ),
            const SizedBox(height: 20),
            SizedBox(
              width: double.infinity,
              child: ElevatedButton(
                onPressed: isClaimable ? () async {
                  bool success = await AchievementsService().claimReward(groupId, level, total, reward, rewardType);
                  if (success) {
                    _loadProgress(); // Recargar datos reales
                    if (context.mounted) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        SnackBar(content: const Text('¡Logro Reclamado!'), backgroundColor: accentColor),
                      );
                    }
                  } else {
                    if (context.mounted) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        const SnackBar(content: Text('Error al reclamar el logro.'), backgroundColor: Colors.red),
                      );
                    }
                  }
                } : null,
                style: ElevatedButton.styleFrom(
                  backgroundColor: accentColor,
                  foregroundColor: Colors.black,
                  disabledBackgroundColor: const Color(0xFF232332),
                  disabledForegroundColor: Colors.white38,
                  padding: const EdgeInsets.symmetric(vertical: 14),
                  shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  elevation: isClaimable ? 10 : 0,
                  shadowColor: accentColor.withOpacity(0.5),
                ),
                child: Text(
                  isClaimable ? 'RECLAMAR' : 'EN PROGRESO',
                  style: const TextStyle(fontWeight: FontWeight.w900, letterSpacing: 1),
                ),
              ),
            ),
          ] else ...[
             // Vista de misiones completadas
             Row(
               mainAxisAlignment: MainAxisAlignment.center,
               children: [
                 Icon(Icons.check_circle, color: accentColor, size: 20),
                 const SizedBox(width: 8),
                 const Text('COMPLETADO', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1)),
               ],
             )
          ]
        ],
      ),
    );
  }
}
