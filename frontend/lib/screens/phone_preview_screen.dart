import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../widgets/glassy_game_view.dart';
import '../services/audio_service.dart';

/// Modo de Prueba: 1v1 Multijugador Directo.
/// Ingresa de inmediato al juego sin pedir códigos ni mostrar barras innecesarias,
/// para probar directamente cómo quedó la pantalla en multijugador y verificar que sea 100% jugable.
class PhonePreviewScreen extends StatefulWidget {
  const PhonePreviewScreen({super.key});

  @override
  State<PhonePreviewScreen> createState() => _PhonePreviewScreenState();
}

class _PhonePreviewScreenState extends State<PhonePreviewScreen> {
  final AudioService _audio = AudioService();
  GlassyGameController? _controllerP1;
  GlassyGameController? _controllerP2;

  int _scoreP1 = 0;
  int _scoreP2 = 0;
  bool _dangerP1 = false;
  bool _dangerP2 = false;

  String _skinP1 = 'gemas_clasicas';
  String _skinP2 = 'vida_marina';

  @override
  void initState() {
    super.initState();
    // Rotar automáticamente a pantalla horizontal para probar el 1v1
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeLeft,
      DeviceOrientation.landscapeRight,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.immersiveSticky);
    _audio.playBgMusic();
  }

  @override
  void didChangeDependencies() {
    super.didChangeDependencies();
    final equipped = context.read<GameProvider>().selectedSkinId;
    if (equipped.isNotEmpty) {
      _skinP1 = equipped;
      _skinP2 = (_skinP1 == 'vida_marina') ? 'Dinosaurios' : 'vida_marina';
    }
  }

  @override
  void dispose() {
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.portraitUp,
      DeviceOrientation.portraitDown,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.edgeToEdge);
    super.dispose();
  }

  // Combos de P1 envían ataques a P2
  void _onP1Combo(GemType type, int count) {
    _controllerP2?.spawnAttackGems(type, count);
  }

  // Combos de P2 envían ataques a P1
  void _onP2Combo(GemType type, int count) {
    _controllerP1?.spawnAttackGems(type, count);
  }

  void _handleP1Message(dynamic rawMsg) {
    try {
      final data = json.decode(rawMsg.toString());
      final event = data['eventName'];
      final payload = json.decode(data['payload'] ?? '{}');
      if (event == 'SCORE_UPDATED') {
        setState(() {
          _scoreP1 = (payload['score'] ?? payload['currentScore'] ?? 0) as int;
        });
      } else if (event == 'DANGER_ZONE') {
        setState(() {
          _dangerP1 = payload['isDanger'] == true;
        });
      }
    } catch (_) {}
  }

  void _handleP2Message(dynamic rawMsg) {
    try {
      final data = json.decode(rawMsg.toString());
      final event = data['eventName'];
      final payload = json.decode(data['payload'] ?? '{}');
      if (event == 'SCORE_UPDATED') {
        setState(() {
          _scoreP2 = (payload['score'] ?? payload['currentScore'] ?? 0) as int;
        });
      } else if (event == 'DANGER_ZONE') {
        setState(() {
          _dangerP2 = payload['isDanger'] == true;
        });
      }
    } catch (_) {}
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF030712),
      body: Stack(
        children: [
          // 1. COMBATE 1v1 DIRECTO (SIN MENÚS, SIN BARRAS SUPERIORES)
          SafeArea(
            child: Row(
              children: [
                // Frasco 1 (Izquierda - Jugador 1)
                Expanded(
                  child: Stack(
                    children: [
                      GlassyNativeView(
                        skinId: _skinP1,
                        isVersusMode: true,
                        isOpponentBoard: false,
                        autoPlayBgm: true,
                        onCreated: (c) => _controllerP1 = c,
                        onMessage: _handleP1Message,
                        onComboAttack: _onP1Combo,
                      ),
                      Positioned(
                        top: 10,
                        left: 56, // Espacio para el botón de salida
                        child: _buildBadge(
                          label: 'JUGADOR 1 (PRUEBA)',
                          color: const Color(0xFF00E5FF),
                          score: _scoreP1,
                          isDanger: _dangerP1,
                        ),
                      ),
                    ],
                  ),
                ),

                // Divisor central VS
                Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    Container(width: 2, height: 40, color: Colors.white24),
                    Container(
                      padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 4),
                      decoration: BoxDecoration(
                        color: Colors.black.withValues(alpha: 0.7),
                        borderRadius: BorderRadius.circular(8),
                        border: Border.all(color: Colors.white24),
                      ),
                      child: const Text(
                        'VS',
                        style: TextStyle(
                          color: Colors.white,
                          fontWeight: FontWeight.w900,
                          fontSize: 13,
                          letterSpacing: 1.5,
                        ),
                      ),
                    ),
                    Container(width: 2, height: 40, color: Colors.white24),
                  ],
                ),

                // Frasco 2 (Derecha - Jugador 2)
                Expanded(
                  child: Stack(
                    children: [
                      GlassyNativeView(
                        skinId: _skinP2,
                        isVersusMode: true,
                        isOpponentBoard: false,
                        autoPlayBgm: false,
                        onCreated: (c) => _controllerP2 = c,
                        onMessage: _handleP2Message,
                        onComboAttack: _onP2Combo,
                      ),
                      Positioned(
                        top: 10,
                        right: 16,
                        child: _buildBadge(
                          label: 'JUGADOR 2 (PRUEBA)',
                          color: const Color(0xFF38BDF8),
                          score: _scoreP2,
                          isDanger: _dangerP2,
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),

          // 2. BOTÓN DISCRETO PARA SALIR AL MENÚ PRINCIPAL
          Positioned(
            top: 10,
            left: 10,
            child: Container(
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.6),
                shape: BoxShape.circle,
                border: Border.all(color: const Color(0xFF00E5FF).withValues(alpha: 0.4)),
              ),
              child: IconButton(
                icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 18),
                tooltip: 'Salir al Menú',
                onPressed: () => Navigator.pop(context),
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildBadge({
    required String label,
    required Color color,
    required int score,
    required bool isDanger,
  }) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 6),
      decoration: BoxDecoration(
        color: const Color(0xFF070D1B).withValues(alpha: 0.85),
        borderRadius: BorderRadius.circular(12),
        border: Border.all(
          color: isDanger ? const Color(0xFFEF4444) : color,
          width: 1.5,
        ),
      ),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        children: [
          Container(
            width: 8,
            height: 8,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              color: isDanger ? const Color(0xFFEF4444) : color,
            ),
          ),
          const SizedBox(width: 8),
          Text(
            '$label: $score pts',
            style: TextStyle(
              color: isDanger ? const Color(0xFFEF4444) : Colors.white,
              fontWeight: FontWeight.bold,
              fontSize: 12,
            ),
          ),
        ],
      ),
    );
  }
}
