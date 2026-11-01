import 'dart:async';
import 'dart:convert';
import 'dart:math' as math;
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../widgets/glassy_game_view.dart';
import '../widgets/ui/glass_card.dart';
import '../widgets/gaming_button.dart';
import '../services/audio_service.dart';

/// Modo 2v2 Exclusivo para Computadoras (Pantalla Panorámica / Monitor Ancho).
/// 4 Frascos simultáneos divididos en 2 Equipos:
/// - Equipo Azul (Aliados): Jugador 1 + Jugador 2
/// - Equipo Rojo (Enemigos): Jugador 3 + Jugador 4
///
/// Mecánica de combate 2v2:
/// Los combos de un equipo lanzan ataques repartidos entre los frascos del equipo rival.
class TeamVersusScreen extends StatefulWidget {
  const TeamVersusScreen({super.key});

  @override
  State<TeamVersusScreen> createState() => _TeamVersusScreenState();
}

enum TeamScreenState {
  lobby,
  playing,
  finished,
}

class _TeamVersusScreenState extends State<TeamVersusScreen> {
  TeamScreenState _state = TeamScreenState.lobby;

  // Controladores de los 4 frascos
  GlassyGameController? _controllerBlue1;
  GlassyGameController? _controllerBlue2;
  GlassyGameController? _controllerRed1;
  GlassyGameController? _controllerRed2;

  // Puntuaciones
  int _scoreBlue1 = 0;
  int _scoreBlue2 = 0;
  int _scoreRed1 = 0;
  int _scoreRed2 = 0;

  // Estado de peligro de cada jugador
  bool _dangerBlue1 = false;
  bool _dangerBlue2 = false;
  bool _dangerRed1 = false;
  bool _dangerRed2 = false;

  // Eliminaciones
  bool _deadBlue1 = false;
  bool _deadBlue2 = false;
  bool _deadRed1 = false;
  bool _deadRed2 = false;

  // Asignación de bandos en el Lobby
  int _mySlot = 1; // 1 o 2 = Azul (Aliados), 3 o 4 = Rojo (Enemigos)
  String _roomCode = '2V2-7492';

  // Banner de ataque en tiempo real
  String? _attackBannerText;
  Color _attackBannerColor = const Color(0xFF00E5FF);
  Timer? _attackBannerTimer;

  String _winningTeam = '';
  final AudioService _audio = AudioService();

  @override
  void initState() {
    super.initState();
    _roomCode = '2V2-${math.Random().nextInt(9000) + 1000}';
    // Forzar pantalla horizontal para monitores de PC
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeLeft,
      DeviceOrientation.landscapeRight,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.immersiveSticky);
    _audio.playBgMusic();
  }

  @override
  void dispose() {
    _attackBannerTimer?.cancel();
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.portraitUp,
      DeviceOrientation.portraitDown,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.edgeToEdge);
    super.dispose();
  }

  // Ataques del Equipo Azul al Equipo Rojo
  void _onBlueTeamCombo(String playerLabel, GemType type, int count) {
    if (_state != TeamScreenState.playing) return;

    // Repartir el ataque entre los rivales vivos del equipo Rojo
    final redTargets = <GlassyGameController>[];
    if (!_deadRed1 && _controllerRed1 != null) redTargets.add(_controllerRed1!);
    if (!_deadRed2 && _controllerRed2 != null) redTargets.add(_controllerRed2!);

    if (redTargets.isEmpty) return;

    final gemsPerTarget = math.max(1, (count / redTargets.length).ceil());
    for (var target in redTargets) {
      target.spawnAttackGems(type, gemsPerTarget);
    }

    _showAttackNotification(
      text: '⚡ ¡$playerLabel (EQUIPO AZUL) HIZO COMBO x$count!\nLanzó $count ${_getGemDisplayName(type)} al Equipo Rojo',
      color: const Color(0xFF00E5FF),
    );
  }

  // Ataques del Equipo Rojo al Equipo Azul
  void _onRedTeamCombo(String playerLabel, GemType type, int count) {
    if (_state != TeamScreenState.playing) return;

    // Repartir el ataque entre los rivales vivos del equipo Azul
    final blueTargets = <GlassyGameController>[];
    if (!_deadBlue1 && _controllerBlue1 != null) blueTargets.add(_controllerBlue1!);
    if (!_deadBlue2 && _controllerBlue2 != null) blueTargets.add(_controllerBlue2!);

    if (blueTargets.isEmpty) return;

    final gemsPerTarget = math.max(1, (count / blueTargets.length).ceil());
    for (var target in blueTargets) {
      target.spawnAttackGems(type, gemsPerTarget);
    }

    _showAttackNotification(
      text: '🔥 ¡$playerLabel (EQUIPO ROJO) HIZO COMBO x$count!\nLanzó $count ${_getGemDisplayName(type)} al Equipo Azul',
      color: const Color(0xFFEF4444),
    );
  }

  void _showAttackNotification({required String text, required Color color}) {
    _attackBannerTimer?.cancel();
    setState(() {
      _attackBannerText = text;
      _attackBannerColor = color;
    });

    _attackBannerTimer = Timer(const Duration(milliseconds: 2500), () {
      if (mounted) {
        setState(() => _attackBannerText = null);
      }
    });
  }

  String _getGemDisplayName(GemType type) {
    switch (type) {
      case GemType.emerald: return 'Esmeraldas';
      case GemType.amethyst: return 'Amatistas';
      case GemType.topaz: return 'Topacios';
      case GemType.greenRuby: return 'Peridotos';
      case GemType.sapphire: return 'Zafiros';
      case GemType.redRuby: return 'Rubíes';
      case GemType.diamond: return 'Diamantes';
      default: return 'Gemas';
    }
  }

  void _handleGameMessage(int playerIdx, dynamic rawMsg) {
    try {
      final data = json.decode(rawMsg.toString());
      final event = data['eventName'];
      final payload = json.decode(data['payload'] ?? '{}');

      if (event == 'SCORE_UPDATED') {
        final score = (payload['score'] ?? payload['currentScore'] ?? 0) as int;
        setState(() {
          if (playerIdx == 1) _scoreBlue1 = score;
          if (playerIdx == 2) _scoreBlue2 = score;
          if (playerIdx == 3) _scoreRed1 = score;
          if (playerIdx == 4) _scoreRed2 = score;
        });
      } else if (event == 'DANGER_ZONE') {
        final danger = payload['isDanger'] == true;
        setState(() {
          if (playerIdx == 1) _dangerBlue1 = danger;
          if (playerIdx == 2) _dangerBlue2 = danger;
          if (playerIdx == 3) _dangerRed1 = danger;
          if (playerIdx == 4) _dangerRed2 = danger;
        });
      } else if (event == 'GAME_OVER') {
        _handlePlayerElimination(playerIdx);
      }
    } catch (_) {}
  }

  void _handlePlayerElimination(int playerIdx) {
    setState(() {
      if (playerIdx == 1) _deadBlue1 = true;
      if (playerIdx == 2) _deadBlue2 = true;
      if (playerIdx == 3) _deadRed1 = true;
      if (playerIdx == 4) _deadRed2 = true;

      // Verificar si un equipo completo fue eliminado
      if (_deadBlue1 && _deadBlue2 && _state == TeamScreenState.playing) {
        _state = TeamScreenState.finished;
        _winningTeam = 'EQUIPO ROJO';
        _audio.playGameOver();
      } else if (_deadRed1 && _deadRed2 && _state == TeamScreenState.playing) {
        _state = TeamScreenState.finished;
        _winningTeam = 'EQUIPO AZUL';
        _audio.playDiamondExplosion();
      }
    });
  }

  void _confirmSurrender() {
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: const Color(0xFF0F172A),
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(16),
          side: const BorderSide(color: Color(0xFFEF4444), width: 1.5),
        ),
        title: const Row(
          children: [
            Icon(Icons.flag_rounded, color: Color(0xFFEF4444)),
            SizedBox(width: 8),
            Text('¿RENDIRSE?', style: TextStyle(color: Color(0xFFEF4444), fontWeight: FontWeight.w900)),
          ],
        ),
        content: const Text(
          'Si tu equipo se rinde, la partida finalizará de inmediato y se otorgará la victoria al equipo rival.',
          style: TextStyle(color: Colors.white70, fontSize: 14),
        ),
        actions: [
          TextButton(
            onPressed: () => Navigator.pop(ctx),
            child: const Text('CONTINUAR', style: TextStyle(color: Colors.white60)),
          ),
          ElevatedButton(
            style: ElevatedButton.styleFrom(backgroundColor: const Color(0xFFEF4444)),
            onPressed: () {
              Navigator.pop(ctx);
              setState(() {
                _state = TeamScreenState.finished;
                _winningTeam = (_mySlot == 1 || _mySlot == 2) ? 'EQUIPO ROJO' : 'EQUIPO AZUL';
              });
              _audio.playGameOver();
            },
            child: const Text('RENDIRSE', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold)),
          ),
        ],
      ),
    );
  }

  void _startMatch() {
    setState(() {
      _state = TeamScreenState.playing;
      _scoreBlue1 = 0;
      _scoreBlue2 = 0;
      _scoreRed1 = 0;
      _scoreRed2 = 0;
      _deadBlue1 = false;
      _deadBlue2 = false;
      _deadRed1 = false;
      _deadRed2 = false;
      _dangerBlue1 = false;
      _dangerBlue2 = false;
      _dangerRed1 = false;
      _dangerRed2 = false;
      _attackBannerText = null;
    });
    _audio.playStartGame();
  }

  @override
  Widget build(BuildContext context) {
    final totalBlueScore = _scoreBlue1 + _scoreBlue2;
    final totalRedScore = _scoreRed1 + _scoreRed2;

    return Scaffold(
      backgroundColor: const Color(0xFF030712),
      body: Stack(
        children: [
          // 1. ÁREA DE COMBATE 2v2 (PANTALLA PANORÁMICA DE PC: 4 FRASCOS)
          if (_state == TeamScreenState.playing || _state == TeamScreenState.finished)
            SafeArea(
              child: Column(
                children: [
                  // Marcador Superior de Equipos
                  Container(
                    height: 54,
                    padding: const EdgeInsets.symmetric(horizontal: 24),
                    decoration: BoxDecoration(
                      color: const Color(0xFF0F172A).withValues(alpha: 0.90),
                      border: const Border(bottom: BorderSide(color: Colors.white12)),
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        // Marcador Equipo Azul (Aliados)
                        Row(
                          children: [
                            Container(
                              width: 12,
                              height: 12,
                              decoration: const BoxDecoration(
                                shape: BoxShape.circle,
                                color: Color(0xFF00E5FF),
                              ),
                            ),
                            const SizedBox(width: 8),
                            const Text(
                              'EQUIPO AZUL (ALIADOS)',
                              style: TextStyle(
                                color: Color(0xFF00E5FF),
                                fontWeight: FontWeight.w900,
                                fontSize: 14,
                                letterSpacing: 1.5,
                              ),
                            ),
                            const SizedBox(width: 14),
                            Text(
                              '$totalBlueScore pts',
                              style: const TextStyle(
                                color: Colors.white,
                                fontWeight: FontWeight.w900,
                                fontSize: 16,
                              ),
                            ),
                          ],
                        ),

                        // Badge Central VS y Botón de Rendición
                        Row(
                          mainAxisSize: MainAxisSize.min,
                          children: [
                            Container(
                              padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 4),
                              decoration: BoxDecoration(
                                color: Colors.black.withValues(alpha: 0.8),
                                borderRadius: BorderRadius.circular(10),
                                border: Border.all(color: Colors.white24),
                              ),
                              child: const Text(
                                '2 VS 2',
                                style: TextStyle(
                                  color: Color(0xFFFDE047),
                                  fontWeight: FontWeight.w900,
                                  fontSize: 13,
                                  letterSpacing: 2,
                                ),
                              ),
                            ),
                            const SizedBox(width: 8),
                            IconButton(
                              tooltip: 'Rendirse',
                              icon: const Icon(Icons.flag_rounded, color: Color(0xFFEF4444), size: 20),
                              onPressed: _confirmSurrender,
                            ),
                          ],
                        ),

                        // Marcador Equipo Rojo (Enemigos)
                        Row(
                          children: [
                            Text(
                              '$totalRedScore pts',
                              style: const TextStyle(
                                color: Colors.white,
                                fontWeight: FontWeight.w900,
                                fontSize: 16,
                              ),
                            ),
                            const SizedBox(width: 14),
                            const Text(
                              'EQUIPO ROJO (ENEMIGOS)',
                              style: TextStyle(
                                color: Color(0xFFEF4444),
                                fontWeight: FontWeight.w900,
                                fontSize: 14,
                                letterSpacing: 1.5,
                              ),
                            ),
                            const SizedBox(width: 8),
                            Container(
                              width: 12,
                              height: 12,
                              decoration: const BoxDecoration(
                                shape: BoxShape.circle,
                                color: Color(0xFFEF4444),
                              ),
                            ),
                          ],
                        ),
                      ],
                    ),
                  ),

                  // Los 4 Frascos en Pantalla Panorámica
                  Expanded(
                    child: Row(
                      children: [
                        // Frasco Azul 1
                        Expanded(
                          child: _buildFlaskContainer(
                            playerLabel: 'ALIADO 1',
                            color: const Color(0xFF00E5FF),
                            score: _scoreBlue1,
                            isDanger: _dangerBlue1,
                            isDead: _deadBlue1,
                            skinId: 'Galaxia_Cosmica',
                            onCreated: (c) => _controllerBlue1 = c,
                            onMessage: (m) => _handleGameMessage(1, m),
                            onComboAttack: (t, c) => _onBlueTeamCombo('ALIADO 1', t, c),
                          ),
                        ),

                        // Frasco Azul 2
                        Expanded(
                          child: _buildFlaskContainer(
                            playerLabel: 'ALIADO 2',
                            color: const Color(0xFF38BDF8),
                            score: _scoreBlue2,
                            isDanger: _dangerBlue2,
                            isDead: _deadBlue2,
                            skinId: 'gemas_clasicas',
                            onCreated: (c) => _controllerBlue2 = c,
                            onMessage: (m) => _handleGameMessage(2, m),
                            onComboAttack: (t, c) => _onBlueTeamCombo('ALIADO 2', t, c),
                          ),
                        ),

                        // Divisoria de Equipos
                        Container(
                          width: 3,
                          color: Colors.white.withValues(alpha: 0.2),
                        ),

                        // Frasco Rojo 1
                        Expanded(
                          child: _buildFlaskContainer(
                            playerLabel: 'RIVAL 1',
                            color: const Color(0xFFEF4444),
                            score: _scoreRed1,
                            isDanger: _dangerRed1,
                            isDead: _deadRed1,
                            skinId: 'vida_marina',
                            onCreated: (c) => _controllerRed1 = c,
                            onMessage: (m) => _handleGameMessage(3, m),
                            onComboAttack: (t, c) => _onRedTeamCombo('RIVAL 1', t, c),
                          ),
                        ),

                        // Frasco Rojo 2
                        Expanded(
                          child: _buildFlaskContainer(
                            playerLabel: 'RIVAL 2',
                            color: const Color(0xFFF97316),
                            score: _scoreRed2,
                            isDanger: _dangerRed2,
                            isDead: _deadRed2,
                            skinId: 'Dinosaurios',
                            onCreated: (c) => _controllerRed2 = c,
                            onMessage: (m) => _handleGameMessage(4, m),
                            onComboAttack: (t, c) => _onRedTeamCombo('RIVAL 2', t, c),
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),

          // 2. BANNER DE ATAQUE EN TIEMPO REAL
          if (_attackBannerText != null)
            Align(
              alignment: Alignment.center,
              child: Container(
                margin: const EdgeInsets.symmetric(horizontal: 40),
                padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 14),
                decoration: BoxDecoration(
                  color: const Color(0xFF0F172A).withValues(alpha: 0.95),
                  borderRadius: BorderRadius.circular(16),
                  border: Border.all(color: _attackBannerColor, width: 2),
                  boxShadow: [
                    BoxShadow(
                      color: _attackBannerColor.withValues(alpha: 0.6),
                      blurRadius: 24,
                      spreadRadius: 3,
                    ),
                  ],
                ),
                child: Text(
                  _attackBannerText!,
                  textAlign: TextAlign.center,
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 16,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 1.2,
                  ),
                ),
              ),
            ),

          // 3. LOBBY Y ELECCIÓN DE BANDO (ALIADO VS ENEMIGO)
          if (_state == TeamScreenState.lobby)
            SafeArea(
              child: Center(
                child: SingleChildScrollView(
                  padding: const EdgeInsets.symmetric(horizontal: 32),
                  child: GlassCard(
                    width: 680,
                    padding: const EdgeInsets.all(32),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        const Text(
                          'MODO 2 VS 2 (EXCLUSIVO PARA PC)',
                          style: TextStyle(
                            color: Color(0xFFF59E0B),
                            fontSize: 24,
                            fontWeight: FontWeight.w900,
                            letterSpacing: 3,
                          ),
                        ),
                        const SizedBox(height: 8),
                        const Text(
                          'Invita a tus amigos y elijan su bando antes de comenzar la partida.',
                          textAlign: TextAlign.center,
                          style: TextStyle(color: Colors.white70, fontSize: 14),
                        ),
                        const SizedBox(height: 14),
                        Container(
                          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 6),
                          decoration: BoxDecoration(
                            color: Colors.white.withValues(alpha: 0.08),
                            borderRadius: BorderRadius.circular(12),
                            border: Border.all(color: Colors.white24),
                          ),
                          child: Row(
                            mainAxisSize: MainAxisSize.min,
                            children: [
                              const Icon(Icons.key, color: Color(0xFFF59E0B), size: 18),
                              const SizedBox(width: 8),
                              Text(
                                'CÓDIGO DE SALA: $_roomCode',
                                style: const TextStyle(
                                  color: Colors.white,
                                  fontWeight: FontWeight.bold,
                                  letterSpacing: 1.5,
                                  fontSize: 14,
                                ),
                              ),
                              const SizedBox(width: 8),
                              IconButton(
                                icon: const Icon(Icons.copy, color: Colors.white70, size: 18),
                                tooltip: 'Copiar código',
                                onPressed: () {
                                  Clipboard.setData(ClipboardData(text: _roomCode));
                                  ScaffoldMessenger.of(context).showSnackBar(
                                    const SnackBar(content: Text('¡Código copiado al portapapeles!')),
                                  );
                                },
                              ),
                            ],
                          ),
                        ),
                        const SizedBox(height: 20),

                        // Selector de Lados: Equipo Azul vs Equipo Rojo
                        Row(
                          children: [
                            // EQUIPO AZUL (ALIADOS)
                            Expanded(
                              child: Container(
                                padding: const EdgeInsets.all(16),
                                decoration: BoxDecoration(
                                  color: const Color(0xFF00E5FF).withValues(alpha: 0.1),
                                  borderRadius: BorderRadius.circular(16),
                                  border: Border.all(
                                    color: (_mySlot == 1 || _mySlot == 2)
                                        ? const Color(0xFF00E5FF)
                                        : Colors.white24,
                                    width: 2,
                                  ),
                                ),
                                child: Column(
                                  children: [
                                    const Text(
                                      'EQUIPO AZUL\n(ALIADOS)',
                                      textAlign: TextAlign.center,
                                      style: TextStyle(
                                        color: Color(0xFF00E5FF),
                                        fontWeight: FontWeight.w900,
                                        fontSize: 16,
                                        letterSpacing: 1.5,
                                      ),
                                    ),
                                    const SizedBox(height: 16),
                                    _buildSlotTile(slot: 1, name: 'Aliado 1 (Tú)', isMe: _mySlot == 1),
                                    const SizedBox(height: 8),
                                    _buildSlotTile(slot: 2, name: 'Aliado 2 (Amigo)', isMe: _mySlot == 2),
                                    const SizedBox(height: 16),
                                    GamingButton(
                                      text: 'SER ALIADO',
                                      glowColor: const Color(0xFF00E5FF),
                                      onPressed: () => setState(() => _mySlot = 1),
                                    ),
                                  ],
                                ),
                              ),
                            ),

                            const Padding(
                              padding: EdgeInsets.symmetric(horizontal: 16),
                              child: Text(
                                'VS',
                                style: TextStyle(
                                  color: Color(0xFFFDE047),
                                  fontSize: 22,
                                  fontWeight: FontWeight.w900,
                                ),
                              ),
                            ),

                            // EQUIPO ROJO (ENEMIGOS)
                            Expanded(
                              child: Container(
                                padding: const EdgeInsets.all(16),
                                decoration: BoxDecoration(
                                  color: const Color(0xFFEF4444).withValues(alpha: 0.1),
                                  borderRadius: BorderRadius.circular(16),
                                  border: Border.all(
                                    color: (_mySlot == 3 || _mySlot == 4)
                                        ? const Color(0xFFEF4444)
                                        : Colors.white24,
                                    width: 2,
                                  ),
                                ),
                                child: Column(
                                  children: [
                                    const Text(
                                      'EQUIPO ROJO\n(ENEMIGOS)',
                                      textAlign: TextAlign.center,
                                      style: TextStyle(
                                        color: Color(0xFFEF4444),
                                        fontWeight: FontWeight.w900,
                                        fontSize: 16,
                                        letterSpacing: 1.5,
                                      ),
                                    ),
                                    const SizedBox(height: 16),
                                    _buildSlotTile(slot: 3, name: 'Rival 1', isMe: _mySlot == 3),
                                    const SizedBox(height: 8),
                                    _buildSlotTile(slot: 4, name: 'Rival 2', isMe: _mySlot == 4),
                                    const SizedBox(height: 16),
                                    GamingButton(
                                      text: 'SER ENEMIGO',
                                      glowColor: const Color(0xFFEF4444),
                                      onPressed: () => setState(() => _mySlot = 3),
                                    ),
                                  ],
                                ),
                              ),
                            ),
                          ],
                        ),

                        const SizedBox(height: 32),

                        GamingButton(
                          text: '¡INICIAR COMBATE 2 VS 2!',
                          glowColor: const Color(0xFFF59E0B),
                          onPressed: _startMatch,
                        ),
                      ],
                    ),
                  ),
                ),
              ),
            ),

          // 4. MODAL DE VICTORIA DE EQUIPO
          if (_state == TeamScreenState.finished)
            Container(
              color: Colors.black.withValues(alpha: 0.88),
              child: Center(
                child: GlassCard(
                  width: 420,
                  padding: const EdgeInsets.all(32),
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const Text(
                        '🏆 FIN DE LA GUERRA 2v2 🏆',
                        style: TextStyle(
                          color: Color(0xFFFDE047),
                          fontSize: 20,
                          fontWeight: FontWeight.w900,
                          letterSpacing: 2,
                        ),
                      ),
                      const SizedBox(height: 16),
                      Text(
                        '¡$_winningTeam VICTORIOSO!',
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          color: _winningTeam == 'EQUIPO AZUL' ? const Color(0xFF00E5FF) : const Color(0xFFEF4444),
                          fontSize: 26,
                          fontWeight: FontWeight.w900,
                          shadows: [
                            Shadow(
                              color: (_winningTeam == 'EQUIPO AZUL' ? const Color(0xFF00E5FF) : const Color(0xFFEF4444))
                                  .withValues(alpha: 0.8),
                              blurRadius: 18,
                            ),
                          ],
                        ),
                      ),
                      const SizedBox(height: 20),
                      Text(
                        'Marcador Final:\nEquipo Azul: $totalBlueScore pts\nEquipo Rojo: $totalRedScore pts',
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                          color: Colors.white,
                          fontSize: 15,
                          height: 1.5,
                          fontWeight: FontWeight.w700,
                        ),
                      ),
                      const SizedBox(height: 28),
                      GamingButton(
                        text: 'REVANCHA 2v2',
                        glowColor: const Color(0xFFF59E0B),
                        onPressed: _startMatch,
                      ),
                      const SizedBox(height: 12),
                      GamingButton(
                        text: 'CAMBIAR EQUIPOS',
                        glowColor: Colors.white30,
                        onPressed: () => setState(() => _state = TeamScreenState.lobby),
                      ),
                    ],
                  ),
                ),
              ),
            ),

          // Botón de Salir (Atrás)
          if (_state == TeamScreenState.lobby)
            Positioned(
              top: MediaQuery.of(context).padding.top + 10,
              left: 14,
              child: IconButton(
                icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 24),
                onPressed: () => Navigator.pop(context),
              ),
            ),
        ],
      ),
    );
  }

  Widget _buildSlotTile({required int slot, required String name, required bool isMe}) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.5),
        borderRadius: BorderRadius.circular(10),
        border: Border.all(color: isMe ? const Color(0xFFFDE047) : Colors.white12),
      ),
      child: Row(
        children: [
          Icon(
            isMe ? Icons.star : Icons.person,
            color: isMe ? const Color(0xFFFDE047) : Colors.white70,
            size: 16,
          ),
          const SizedBox(width: 8),
          Expanded(
            child: Text(
              name,
              style: TextStyle(
                color: isMe ? const Color(0xFFFDE047) : Colors.white,
                fontWeight: isMe ? FontWeight.w900 : FontWeight.w600,
                fontSize: 13,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildFlaskContainer({
    required String playerLabel,
    required Color color,
    required int score,
    required bool isDanger,
    required bool isDead,
    required String skinId,
    required void Function(GlassyGameController) onCreated,
    required void Function(dynamic) onMessage,
    required void Function(GemType, int) onComboAttack,
  }) {
    return Stack(
      children: [
        // Frasco
        GlassyNativeView(
          skinId: skinId,
          isVersusMode: true,
          autoPlayBgm: false,
          onCreated: onCreated,
          onMessage: onMessage,
          onComboAttack: onComboAttack,
        ),

        // HUD individual de cada frasco
        Positioned(
          top: 6,
          left: 10,
          right: 10,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Row(
                children: [
                  Container(
                    width: 7,
                    height: 7,
                    decoration: BoxDecoration(
                      shape: BoxShape.circle,
                      color: isDead ? Colors.grey : (isDanger ? const Color(0xFFEF4444) : color),
                    ),
                  ),
                  const SizedBox(width: 5),
                  Text(
                    playerLabel,
                    style: TextStyle(
                      color: isDead ? Colors.grey : color,
                      fontSize: 10,
                      fontWeight: FontWeight.w900,
                      letterSpacing: 1,
                    ),
                  ),
                ],
              ),
              Text(
                '$score pts',
                style: const TextStyle(
                  color: Colors.white70,
                  fontSize: 11,
                  fontWeight: FontWeight.w700,
                ),
              ),
            ],
          ),
        ),

        // Filtro si fue eliminado
        if (isDead)
          Container(
            color: Colors.black.withValues(alpha: 0.75),
            child: const Center(
              child: Text(
                'ELIMINADO',
                style: TextStyle(
                  color: Color(0xFFEF4444),
                  fontWeight: FontWeight.w900,
                  fontSize: 18,
                  letterSpacing: 2,
                ),
              ),
            ),
          ),
      ],
    );
  }
}

