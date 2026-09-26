import 'package:flutter/material.dart';
import 'dart:ui';
import '../theme/app_theme.dart';
import '../services/audio_service.dart';

import 'package:supabase_flutter/supabase_flutter.dart';

class LeaderboardScreen extends StatefulWidget {
  const LeaderboardScreen({Key? key}) : super(key: key);

  @override
  State<LeaderboardScreen> createState() => _LeaderboardScreenState();
}

class _LeaderboardScreenState extends State<LeaderboardScreen> with SingleTickerProviderStateMixin {
  late AnimationController _animController;

  @override
  void initState() {
    super.initState();
    AudioService().playBgMusic();
    _animController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 10),
    )..repeat(reverse: true);
  }

  @override
  void dispose() {
    _animController.dispose();
    super.dispose();
  }

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
      backgroundColor: AppTheme.darkBackground,
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text(
          'LEADERBOARDS',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 3,
            shadows: [Shadow(color: AppTheme.neonCyan, blurRadius: 15)],
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back_ios, color: Colors.white),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: Stack(
        children: [
          // Fondo base
          Container(
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                colors: [AppTheme.darkBackground, Color(0xFF101828)],
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
                    top: -50 + (_animController.value * 40),
                    left: -50 - (_animController.value * 20),
                    child: _buildBlurBlob(color: const Color(0xFF651FFF), size: 250), // Morado
                  ),
                  Positioned(
                    top: 200 - (_animController.value * 30),
                    right: -100 + (_animController.value * 40),
                    child: _buildBlurBlob(color: const Color(0xFF00E5FF), size: 300), // Cyan
                  ),
                  Positioned(
                    bottom: -50 + (_animController.value * 20),
                    left: 50 - (_animController.value * 30),
                    child: _buildBlurBlob(color: const Color(0xFF1E40AF), size: 250), // Azul profundo
                  ),
                ],
              );
            },
          ),
          
          SafeArea(
            child: FutureBuilder<List<Map<String, dynamic>>>(
              future: _fetchLeaderboard(),
              builder: (context, snapshot) {
                if (snapshot.connectionState == ConnectionState.waiting) {
                  return const Center(
                    child: CircularProgressIndicator(color: AppTheme.neonCyan),
                  );
                }
                
                final leaders = snapshot.data ?? [];
                
                if (leaders.isEmpty) {
                  return const Center(
                    child: Text('No hay puntajes aún. ¡Sé el primero!', style: TextStyle(color: Colors.white70)),
                  );
                }

                return Column(
                  children: [
                    const SizedBox(height: 20),
                    // Top 3 Podium
                    if (leaders.length >= 3)
                      Padding(
                        padding: const EdgeInsets.symmetric(horizontal: 10),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          crossAxisAlignment: CrossAxisAlignment.end,
                          children: [
                            _buildPodiumItem(leaders[1], 2, 130, const Color(0xFFE0E0E0)), // Plata
                            const SizedBox(width: 15),
                            _buildPodiumItem(leaders[0], 1, 170, const Color(0xFFFFD700)), // Oro
                            const SizedBox(width: 15),
                            _buildPodiumItem(leaders[2], 3, 100, const Color(0xFFCD7F32)), // Bronce
                          ],
                        ),
                      ),
                    
                    const SizedBox(height: 30),
                    
                    // Rest of the list
                    Expanded(
                      child: Container(
                        decoration: BoxDecoration(
                          color: Colors.white.withOpacity(0.02),
                          borderRadius: const BorderRadius.only(
                            topLeft: Radius.circular(40),
                            topRight: Radius.circular(40),
                          ),
                          border: Border.all(
                            color: Colors.white.withOpacity(0.1),
                            width: 1.5,
                          ),
                          boxShadow: [
                            BoxShadow(
                              color: AppTheme.neonCyan.withOpacity(0.05),
                              blurRadius: 30,
                              spreadRadius: 5,
                            )
                          ],
                        ),
                        child: ClipRRect(
                          borderRadius: const BorderRadius.only(
                            topLeft: Radius.circular(40),
                            topRight: Radius.circular(40),
                          ),
                          child: BackdropFilter(
                            filter: ImageFilter.blur(sigmaX: 15, sigmaY: 15),
                            child: ListView.builder(
                              padding: const EdgeInsets.only(top: 25, left: 20, right: 20, bottom: 20),
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
                  ],
                );
              }
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
        color: color.withOpacity(0.2),
        boxShadow: [
          BoxShadow(
            color: color.withOpacity(0.25),
            blurRadius: 100,
            spreadRadius: 50,
          ),
        ],
      ),
    );
  }

  Widget _buildPodiumItem(Map<String, dynamic> player, int rank, double height, Color color) {
    String name = player['users']?['name'] ?? 'Desconocido';
    return Column(
      mainAxisAlignment: MainAxisAlignment.end,
      children: [
        if (rank == 1)
          Padding(
            padding: const EdgeInsets.only(bottom: 10.0),
            child: Icon(Icons.workspace_premium, color: color, size: 45, shadows: [Shadow(color: color, blurRadius: 15)]),
          ),
        Container(
          decoration: BoxDecoration(
            shape: BoxShape.circle,
            boxShadow: [
              BoxShadow(color: color.withOpacity(0.3), blurRadius: 15, spreadRadius: 2)
            ],
          ),
          child: CircleAvatar(
            radius: rank == 1 ? 40 : 30,
            backgroundColor: color.withOpacity(0.2),
            child: CircleAvatar(
              radius: rank == 1 ? 36 : 27,
              backgroundColor: const Color(0xFF1A1A2E),
              child: Icon(Icons.person, color: color, size: rank == 1 ? 40 : 30),
            ),
          ),
        ),
        const SizedBox(height: 12),
        SizedBox(
          width: 90,
          child: Text(
            name,
            style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 13),
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
            fontSize: 18,
            shadows: [Shadow(color: color.withOpacity(0.5), blurRadius: 10)],
          ),
        ),
        const SizedBox(height: 10),
        ClipRRect(
          borderRadius: const BorderRadius.only(
            topLeft: Radius.circular(20),
            topRight: Radius.circular(20),
          ),
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
            child: Container(
              width: rank == 1 ? 90 : 80,
              height: height,
              decoration: BoxDecoration(
                color: color.withOpacity(0.15),
                borderRadius: const BorderRadius.only(
                  topLeft: Radius.circular(20),
                  topRight: Radius.circular(20),
                ),
                border: Border(
                  top: BorderSide(color: color.withOpacity(0.8), width: 3),
                  left: BorderSide(color: color.withOpacity(0.3), width: 1),
                  right: BorderSide(color: color.withOpacity(0.3), width: 1),
                ),
              ),
              child: Center(
                child: Text(
                  '$rank',
                  style: TextStyle(
                    color: color,
                    fontSize: 45,
                    fontWeight: FontWeight.w900,
                    shadows: const [Shadow(color: Colors.black54, blurRadius: 5)],
                  ),
                ),
              ),
            ),
          ),
        ),
      ],
    );
  }

  Widget _buildListTile(Map<String, dynamic> player, int rank) {
    String name = player['users']?['name'] ?? 'Desconocido';
    return Container(
      margin: const EdgeInsets.only(bottom: 15),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: Colors.white.withOpacity(0.03),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: Colors.white.withOpacity(0.15), width: 1),
      ),
      child: Row(
        children: [
          Container(
            width: 35,
            height: 35,
            decoration: BoxDecoration(
              color: Colors.white.withOpacity(0.1),
              shape: BoxShape.circle,
            ),
            child: Center(
              child: Text(
                '$rank',
                style: const TextStyle(
                  color: Colors.white70,
                  fontSize: 16,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
          ),
          const SizedBox(width: 15),
          Container(
            padding: const EdgeInsets.all(2),
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              border: Border.all(color: AppTheme.neonCyan.withOpacity(0.5), width: 1),
            ),
            child: const CircleAvatar(
              backgroundColor: Colors.transparent,
              radius: 18,
              child: Icon(Icons.person, color: AppTheme.neonCyan, size: 22),
            ),
          ),
          const SizedBox(width: 15),
          Expanded(
            child: Text(
              name,
              style: const TextStyle(
                color: Colors.white,
                fontSize: 16,
                fontWeight: FontWeight.w600,
              ),
            ),
          ),
          Text(
            '${player['score']}',
            style: const TextStyle(
              color: AppTheme.tealGlass,
              fontSize: 18,
              fontWeight: FontWeight.w900,
              letterSpacing: 1,
            ),
          ),
        ],
      ),
    );
  }
}
