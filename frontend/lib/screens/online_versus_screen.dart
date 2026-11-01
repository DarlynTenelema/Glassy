import 'dart:async';
import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../widgets/glassy_game_view.dart';
import '../widgets/ui/glass_card.dart';
import '../widgets/gaming_button.dart';
import '../services/audio_service.dart';
import '../services/multiplayer_service.dart';

/// Modo Online 100% Automático.
/// - Fondo: Wallpaper de la skin activa del jugador.
/// - Paleta de colores: Azules (#00E5FF, #0284C7, #38BDF8), Blanco y Negro.
/// - Al entrar busca inmediatamente un oponente en cola y los conecta al combate 1v1 horizontal con Surrender.
class OnlineVersusScreen extends StatefulWidget {
  const OnlineVersusScreen({super.key});

  @override
  State<OnlineVersusScreen> createState() => _OnlineVersusScreenState();
}

enum OnlineState {
  searching,
  playing,
  finished,
}

class _OnlineVersusScreenState extends State<OnlineVersusScreen> {
  final MultiplayerService _ws = MultiplayerService();
  final AudioService _audio = AudioService();

  OnlineState _state = OnlineState.searching;
  String _statusMessage = 'Buscando oponente 1v1...';
  String? _roomCode;
  String _mySlot = 'P1';

  GlassyGameController? _controller;
  GlassyGameController? _opponentController;
  int _myScore = 0;
  bool _myDanger = false;

  int _opponentScore = 0;
  bool _opponentDanger = false;
  final String _opponentSkin = 'vida_marina';

  bool _isVictory = false;
  String _finishTitle = '';
  String _finishSubtitle = '';

  @override
  void initState() {
    super.initState();
    // Forzar pantalla horizontal para combate panorámico de ambos frascos
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeLeft,
      DeviceOrientation.landscapeRight,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.immersiveSticky);

    _setupWebSocket();
    _startAutoMatchmaking();
    _audio.playBgMusic();
  }

  @override
  void dispose() {
    _ws.disconnect();

    // Restaurar orientación vertical al salir
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.portraitUp,
      DeviceOrientation.portraitDown,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.edgeToEdge);
    super.dispose();
  }

  String _getSkinWallpaper(String skinId) {
    if (skinId.isNotEmpty && skinId != 'gemas_clasicas') {
      return 'assets/skin/$skinId/wallpaper.jpg';
    }
    return 'assets/images/fondo.jpg';
  }

  void _setupWebSocket() {
    _ws.onStatusUpdate = (msg) {
      if (mounted) {
        setState(() => _statusMessage = msg);
      }
    };

    _ws.onError = (err) {
      if (mounted) {
        setState(() => _statusMessage = err);
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(content: Text(err), backgroundColor: const Color(0xFF0284C7)),
        );
      }
    };

    _ws.onMatchFound = (roomCode, slot) {
      if (mounted) {
        setState(() {
          _roomCode = roomCode;
          _mySlot = slot;
          _state = OnlineState.playing;
          _statusMessage = '¡Partida en curso!';
          _myScore = 0;
          _opponentScore = 0;
          _myDanger = false;
          _opponentDanger = false;
        });
        _audio.playStartGame();
      }
    };

    _ws.onIncomingAttack = (gemTypeIdx, count) {
      if (_state != OnlineState.playing) return;
      final type = (gemTypeIdx >= 0 && gemTypeIdx < GemType.values.length)
          ? GemType.values[gemTypeIdx]
          : GemType.emerald;
      // Las gemas de ataque caen fluidamente al frasco del jugador
      _controller?.spawnAttackGems(type, count);
    };

    _ws.onOpponentStatus = (score, isDanger) {
      if (mounted && _state == OnlineState.playing) {
        setState(() {
          _opponentScore = score;
          _opponentDanger = isDanger;
        });
      }
    };

    _ws.onMatchResult = (result) {
      if (mounted) {
        final win = result == 'VICTORY';
        setState(() {
          _state = OnlineState.finished;
          _isVictory = win;
          _finishTitle = win ? '🏆 ¡VICTORIA! 🏆' : '💀 DERROTA 💀';
          _finishSubtitle = win
              ? '¡Tu rival sucumbió ante tus combos de gemas!'
              : 'Tu frasco se desbordó ante los combos de tu rival.';
        });
        if (win) {
          _audio.playDiamondExplosion();
        } else {
          _audio.playGameOver();
        }
      }
    };

    _ws.onOpponentDisconnected = (msg) {
      if (mounted) {
        setState(() {
          _state = OnlineState.finished;
          _isVictory = true;
          _finishTitle = '🏆 ¡VICTORIA POR ABANDONO! 🏆';
          _finishSubtitle = msg;
        });
        _audio.playDiamondExplosion();
      }
    };
  }

  Future<void> _startAutoMatchmaking() async {
    setState(() {
      _state = OnlineState.searching;
      _statusMessage = 'Buscando oponente 1v1...';
    });

    final ok = await _ws.connect();
    if (ok) {
      _ws.startMatchmaking();
    } else {
      setState(() => _statusMessage = 'No se pudo conectar al servidor multijugador.');
    }
  }

  void _onComboAttack(GemType type, int count) {
    if (_state != OnlineState.playing) return;
    // Enviar ataque al rival por WebSocket
    _ws.sendAttack(type.index, count);
    // Visualmente spawnear gemas en el frasco del rival de la derecha
    _opponentController?.spawnAttackGems(type, count);
  }

  void _handleGameMessage(dynamic rawMsg) {
    try {
      final data = json.decode(rawMsg.toString());
      final event = data['eventName'];
      final payload = json.decode(data['payload'] ?? '{}');

      if (event == 'SCORE_UPDATED') {
        final score = (payload['score'] ?? payload['currentScore'] ?? 0) as int;
        _myScore = score;
        _ws.sendStatus(_myScore, _myDanger);
        setState(() {});
      } else if (event == 'DANGER_ZONE') {
        _myDanger = payload['isDanger'] == true;
        _ws.sendStatus(_myScore, _myDanger);
        setState(() {});
      } else if (event == 'GAME_OVER' && _state == OnlineState.playing) {
        _ws.sendGameOver();
      }
    } catch (_) {}
  }

  // Función de Rendición (Surrender)
  void _confirmSurrender() {
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: const Color(0xFF070D1B),
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(16),
          side: const BorderSide(color: Color(0xFFEF4444)),
        ),
        title: const Text('¿Rendirse?', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold)),
        content: const Text(
          'Si abandonas la partida ahora, se registrará como derrota inmediata.',
          style: TextStyle(color: Colors.white70),
        ),
        actions: [
          TextButton(
            child: const Text('Seguir Jugando', style: TextStyle(color: Colors.white54)),
            onPressed: () => Navigator.pop(ctx),
          ),
          ElevatedButton(
            style: ElevatedButton.styleFrom(backgroundColor: const Color(0xFFEF4444)),
            child: const Text('Rendirse', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold)),
            onPressed: () {
              Navigator.pop(ctx);
              _ws.sendSurrender();
            },
          ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);
    final skinId = gameProvider.selectedSkinId;
    final wallpaperPath = _getSkinWallpaper(skinId);
    final isPlaying = _state == OnlineState.playing;

    return Scaffold(
      backgroundColor: const Color(0xFF030712),
      body: Stack(
        children: [
          // 1. FONDO: WALLPAPER DE LA SKIN ACTIVA DEL JUGADOR
          Positioned.fill(
            child: Image.asset(
              wallpaperPath,
              fit: BoxFit.cover,
              errorBuilder: (_, __, ___) => Image.asset('assets/images/fondo.jpg', fit: BoxFit.cover),
            ),
          ),
          Positioned.fill(
            child: Container(
              color: Colors.black.withValues(alpha: isPlaying ? 0.25 : 0.65),
            ),
          ),

          // 2. VISTA DE JUEGO 1v1 HORIZONTAL (LADO A LADO)
          if (isPlaying || _state == OnlineState.finished)
            SafeArea(
              child: Row(
                children: [
                  // Frasco del Jugador Local (Izquierda)
                  Expanded(
                    child: Stack(
                      children: [
                        GlassyNativeView(
                          skinId: skinId,
                          isVersusMode: true,
                          isOpponentBoard: false,
                          autoPlayBgm: true,
                          onCreated: (c) => _controller = c,
                          onMessage: _handleGameMessage,
                          onComboAttack: _onComboAttack,
                        ),
                        Positioned(
                          top: 10,
                          left: 16,
                          child: _buildBadge(
                            label: 'TÚ',
                            color: const Color(0xFF00E5FF),
                            score: _myScore,
                            isDanger: _myDanger,
                          ),
                        ),
                      ],
                    ),
                  ),

                  // Divisor central VS con Botón de Surrender (Rendirse)
                  Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Container(width: 2, height: 35, color: Colors.white24),
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
                      const SizedBox(height: 8),

                      // Botón de Surrender (Rendirse)
                      IconButton(
                        tooltip: 'Rendirse',
                        icon: const Icon(Icons.flag_rounded, color: Color(0xFFEF4444), size: 24),
                        onPressed: _confirmSurrender,
                      ),

                      Container(width: 2, height: 35, color: Colors.white24),
                    ],
                  ),

                  // Frasco del Oponente Remoto (Derecha)
                  Expanded(
                    child: Stack(
                      children: [
                        GlassyNativeView(
                          skinId: _opponentSkin,
                          isVersusMode: true,
                          isOpponentBoard: true,
                          autoPlayBgm: false,
                          onCreated: (c) => _opponentController = c,
                        ),
                        Positioned(
                          top: 10,
                          right: 16,
                          child: _buildBadge(
                            label: 'RIVAL ONLINE',
                            color: const Color(0xFF38BDF8),
                            score: _opponentScore,
                            isDanger: _opponentDanger,
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),

          // 3. MODAL DE BÚSQUEDA AUTOMÁTICA EN AZUL, BLANCO Y NEGRO
          if (_state == OnlineState.searching)
            SafeArea(
              child: Center(
                child: GlassCard(
                  width: 380,
                  padding: const EdgeInsets.all(30),
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const Text(
                        'MODO ONLINE 1v1',
                        style: TextStyle(
                          color: Color(0xFF00E5FF),
                          fontSize: 22,
                          fontWeight: FontWeight.w900,
                          letterSpacing: 2,
                          shadows: [
                            Shadow(color: Color(0xFF00E5FF), blurRadius: 16),
                          ],
                        ),
                      ),
                      const SizedBox(height: 18),
                      const SizedBox(
                        width: 42,
                        height: 42,
                        child: CircularProgressIndicator(
                          strokeWidth: 3,
                          color: Color(0xFF00E5FF),
                        ),
                      ),
                      const SizedBox(height: 18),
                      Text(
                        _statusMessage,
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                          color: Colors.white,
                          fontSize: 15,
                          fontWeight: FontWeight.w600,
                        ),
                      ),
                      const SizedBox(height: 22),
                      GamingButton(
                        text: 'CANCELAR',
                        glowColor: Colors.white24,
                        onPressed: () => Navigator.pop(context),
                      ),
                    ],
                  ),
                ),
              ),
            ),

          // 4. MODAL DE FIN DE PARTIDA ONLINE
          if (_state == OnlineState.finished)
            Container(
              color: Colors.black.withValues(alpha: 0.85),
              child: Center(
                child: GlassCard(
                  width: 350,
                  padding: const EdgeInsets.all(26),
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      Text(
                        _finishTitle,
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          color: _isVictory ? const Color(0xFF00E5FF) : const Color(0xFFEF4444),
                          fontSize: 22,
                          fontWeight: FontWeight.w900,
                          letterSpacing: 2,
                        ),
                      ),
                      const SizedBox(height: 12),
                      Text(
                        _finishSubtitle,
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                          color: Colors.white70,
                          fontSize: 14,
                        ),
                      ),
                      const SizedBox(height: 16),
                      Text(
                        'Marcador:\nTú: $_myScore pts  |  Rival: $_opponentScore pts',
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                          color: Colors.white,
                          fontSize: 15,
                          fontWeight: FontWeight.w800,
                        ),
                      ),
                      const SizedBox(height: 22),
                      GamingButton(
                        text: 'BUSCAR OTRA PARTIDA',
                        glowColor: const Color(0xFF00E5FF),
                        onPressed: _startAutoMatchmaking,
                      ),
                      const SizedBox(height: 10),
                      GamingButton(
                        text: 'MENÚ PRINCIPAL',
                        glowColor: Colors.white24,
                        onPressed: () => Navigator.pop(context),
                      ),
                    ],
                  ),
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
