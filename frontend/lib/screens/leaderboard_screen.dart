import 'package:flutter/material.dart';
import '../theme/app_theme.dart';

class LeaderboardScreen extends StatelessWidget {
  const LeaderboardScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // Datos Dummy simulados
    final List<Map<String, dynamic>> dummyLeaders = [
      {"name": "Darlyn", "score": 150000},
      {"name": "GlassyMaster", "score": 85000},
      {"name": "Player 3", "score": 64000},
      {"name": "User999", "score": 32000},
    ];

    return Scaffold(
      appBar: AppBar(
        title: const Text('Leaderboard'),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
      ),
      backgroundColor: AppTheme.darkBackground,
      body: Column(
        children: [
          Padding(
            padding: const EdgeInsets.symmetric(vertical: 20),
            child: Text(
              '200 TOP GLOBALES',
              style: Theme.of(context).textTheme.titleLarge?.copyWith(
                color: AppTheme.neonBlue,
                fontWeight: FontWeight.bold,
                letterSpacing: 1.5,
              ),
            ),
          ),
          Expanded(
            child: ListView.builder(
              padding: const EdgeInsets.symmetric(horizontal: 20),
              itemCount: dummyLeaders.length,
              itemBuilder: (context, index) {
                final player = dummyLeaders[index];
                final isTop3 = index < 3;
                
                return Container(
                  margin: const EdgeInsets.only(bottom: 12),
                  child: GlassContainer(
                    padding: const EdgeInsets.all(15),
                    child: Row(
                      children: [
                        // Rango
                        Text(
                          '${index + 1}',
                          style: TextStyle(
                            color: isTop3 ? AppTheme.neonPink : Colors.white70,
                            fontSize: 22,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                        const SizedBox(width: 15),
                        // Avatar (Placeholder)
                        const CircleAvatar(
                          backgroundColor: Colors.white24,
                          child: Icon(Icons.person, color: Colors.white),
                        ),
                        const SizedBox(width: 15),
                        // Nombre
                        Expanded(
                          child: Text(
                            player['name'],
                            style: const TextStyle(
                              color: Colors.white,
                              fontSize: 18,
                              fontWeight: FontWeight.w500,
                            ),
                          ),
                        ),
                        // Puntaje
                        Text(
                          '${player['score']}',
                          style: const TextStyle(
                            color: AppTheme.neonBlue,
                            fontSize: 18,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ],
                    ),
                  ),
                );
              },
            ),
          ),
        ],
      ),
    );
  }
}
