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

/// Modo Local / Amigos Sincronizado por Código.
/// - Fondo: Wallpaper de la skin activa del jugador.
/// - Paleta de colores: Azules (#00E5FF, #0284C7, #38BDF8), Blanco y Negro.
/// - Modal simple y limpio:
///   * Campo de texto para pegar código + Botón "Sincronizar".
///   * Botón "Invitar" (genera código y espera sincronización).
/// - Al sincronizar con el mismo código, valida y arranca el 1v1 horizontal con Surrender.
class LocalVersusScreen extends StatefulWidget {
  const LocalVersusScreen({super.key});

  @override
  State<LocalVersusScreen> createState() => _LocalVersusScreenState();
}

enum LocalScreenMode {
  lobby,
  waitingFriend,
  playing,
  finished,
}

class _LocalVersusScreenState extends State<LocalVersusScreen> {
  final MultiplayerService _ws = MultiplayerService();
  final AudioService _audio = AudioService();
  final TextEditingController _codeController = TextEditingController();

  LocalScreenMode _mode = LocalScreenMode.lobby;
  String? _roomCode;
  String _statusMessage = '';

  GlassyGameController? _controllerP1;
  GlassyGameController? _controllerP2;

  int _scoreP1 = 0;
  int _scoreP2 = 0;
  bool _dangerP1 = false;
  bool _dangerP2 = false;

  bool _isVictory = false;
  String _finishTitle = '';
  String _finishSubtitle = '';

  String _skinP1 = 'gemas_clasicas';
  String _skinP2 = 'vida_marina';

  @override
  void initState() {
    super.initState();
    // Forzar pantalla horizontal para el 1v1
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeLeft,
      DeviceOrientation.landscapeRight,
    ]);
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.immersiveSticky);

    _setupWebSocket();
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
    _codeController.dispose();
    _ws.disconnect();

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
    _ws.onRoomCreated = (code) {
      if (mounted) {
        setState(() {
          _roomCode = code;
          _mode = LocalScreenMode.waitingFriend;
          _statusMessage = 'Comparte este código con tu amigo:';
        });
      }
    };

    _ws.onMatchFound = (roomCode, slot) {
      if (mounted) {
        setState(() {
          _roomCode = roomCode;
          _mode = LocalScreenMode.playing;
          _scoreP1 = 0;
          _scoreP2 = 0;
          _dangerP1 = false;
          _dangerP2 = false;
        });
        _audio.playStartGame();
      }
    };

    _ws.onIncomingAttack = (gemTypeIdx, count) {
      if (_mode != LocalScreenMode.playing) return;
      final type = (gemTypeIdx >= 0 && gemTypeIdx < GemType.values.length)
          ? GemType.values[gemTypeIdx]
          : GemType.emerald;
      _controllerP1?.spawnAttackGems(type, count);
    };

    _ws.onOpponentStatus = (score, isDanger) {
      if (mounted && _mode == LocalScreenMode.playing) {
        setState(() {
          _scoreP2 = score;
          _dangerP2 = isDanger;
        });
      }
    };

    _ws.onMatchResult = (result) {
      if (mounted) {
        final win = result == 'VICTORY';
        setState(() {
          _mode = LocalScreenMode.finished;
          _isVictory = win;
          _finishTitle = win ? '🏆 ¡VICTORIA! 🏆' : '💀 DERROTA 💀';
          _finishSubtitle = win
              ? '¡Tu amigo no pudo contener tus combos!'
              : 'Tu frasco se desbordó ante los combos de tu amigo.';
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
          _mode = LocalScreenMode.finished;
          _isVictory = true;
          _finishTitle = '🏆 ¡VICTORIA POR ABANDONO! 🏆';
          _finishSubtitle = msg;
        });
        _audio.playDiamondExplosion();
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
  }

  // 1. Invitar: Crea la partida y espera
  Future<void> _createFriendRoom() async {
    setState(() => _statusMessage = 'Generando código de partida...');
    final ok = await _ws.connect();
    if (ok) {
      _ws.createRoom();
    }
  }

  // 2. Sincronizar: Valida el código y empieza
  Future<void> _joinFriendRoom() async {
    final code = _codeController.text.trim().toUpperCase();
    if (code.isEmpty) {
      ScaffoldMessenger.of(context).showSnackBar(
        const SnackBar(content: Text('Pega o escribe un código para sincronizar'), backgroundColor: Color(0xFF0284C7)),
      );
      return;
    }

    setState(() => _statusMessage = 'Validando y sincronizando código...');
    final ok = await _ws.connect();
    if (ok) {
      _ws.joinRoom(code);
    }
  }

  // Pegar código desde el portapapeles
  Future<void> _pasteCode() async {
    final data = await Clipboard.getData(Clipboard.kTextPlain);
    if (data != null && data.text != null && data.text!.isNotEmpty) {
      setState(() {
        _codeController.text = data.text!.trim().toUpperCase();
      });
    }
  }

  // Combos envían ataques al amigo
  void _onP1ComboAttack(GemType type, int count) {
    if (_mode != LocalScreenMode.playing) return;
    _ws.sendAttack(type.index, count);
    _controllerP2?.spawnAttackGems(type, count);
  }

  void _handleP1Message(dynamic rawMsg) {
    try {
      final data = json.decode(rawMsg.toString());
      final event = data['eventName'];
      final payload = json.decode(data['payload'] ?? '{}');

      if (event == 'SCORE_UPDATED') {
        _scoreP1 = (payload['score'] ?? payload['currentScore'] ?? 0) as int;
        _ws.sendStatus(_scoreP1, _dangerP1);
        setState(() {});
      } else if (event == 'DANGER_ZONE') {
        _dangerP1 = payload['isDanger'] == true;
        _ws.sendStatus(_scoreP1, _dangerP1);
        setState(() {});
      } else if (event == 'GAME_OVER' && _mode == LocalScreenMode.playing) {
        _ws.sendGameOver();
      }
    } catch (_) {}
  }

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
          'Si abandonas la partida ahora, se registrará como victoria para tu amigo.',
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
    final isPlaying = _mode == LocalScreenMode.playing;
    final wallpaperPath = _getSkinWallpaper(_skinP1);

    return Scaffold(
      backgroundColor: const Color(0xFF030712),
      body: Stack(
        children: [
          // 1. FONDO OFICIAL: WALLPAPER DE LA SKIN ACTIVA DEL USUARIO
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

          // 2. PARTIDA 1v1 EN PANTALLA DIVIDIDA (HORIZONTE LIMPIO)
          if (isPlaying || _mode == LocalScreenMode.finished)
            SafeArea(
              child: Row(
                children: [
                  // Frasco Jugador 1 (Tú)
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
                          onComboAttack: _onP1ComboAttack,
                        ),
                        Positioned(
                          top: 10,
                          left: 16,
                          child: _buildBadge(label: 'TÚ', color: const Color(0xFF00E5FF), score: _scoreP1, isDanger: _dangerP1),
                        ),
                      ],
                    ),
                  ),

                  // Barra Central VS con Botón de Surrender
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
                          style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 13, letterSpacing: 1.5),
                        ),
                      ),
                      const SizedBox(height: 8),
                      // Botón Surrender
                      IconButton(
                        tooltip: 'Rendirse',
                        icon: const Icon(Icons.flag_rounded, color: Color(0xFFEF4444), size: 24),
                        onPressed: _confirmSurrender,
                      ),
                      Container(width: 2, height: 35, color: Colors.white24),
                    ],
                  ),

                  // Frasco Jugador 2 (Tu Amigo)
                  Expanded(
                    child: Stack(
                      children: [
                        GlassyNativeView(
                          skinId: _skinP2,
                          isVersusMode: true,
                          isOpponentBoard: true,
                          autoPlayBgm: false,
                          onCreated: (c) => _controllerP2 = c,
                        ),
                        Positioned(
                          top: 10,
                          right: 16,
                          child: _buildBadge(label: 'TU AMIGO', color: const Color(0xFF38BDF8), score: _scoreP2, isDanger: _dangerP2),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),

          // 3. MODAL SENCILLO Y BONITO EN PALETA AZUL, BLANCO Y NEGRO
          if (_mode == LocalScreenMode.lobby || _mode == LocalScreenMode.waitingFriend)
            SafeArea(
              child: Center(
                child: SingleChildScrollView(
                  padding: const EdgeInsets.symmetric(horizontal: 24),
                  child: GlassCard(
                    width: 420,
                    padding: const EdgeInsets.all(26),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        // TÍTULO AZUL CIAN
                        const Text(
                          'PARTIDA LOCAL',
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
                        const SizedBox(height: 6),
                        const Text(
                          'Sincroniza con tu amigo para jugar 1v1',
                          textAlign: TextAlign.center,
                          style: TextStyle(color: Colors.white70, fontSize: 13),
                        ),
                        const SizedBox(height: 20),

                        if (_mode == LocalScreenMode.lobby) ...[
                          // CAMPO DE TEXTO PARA PEGAR CÓDIGO
                          TextField(
                            controller: _codeController,
                            textCapitalization: TextCapitalization.characters,
                            textAlign: TextAlign.center,
                            style: const TextStyle(
                              color: Colors.white,
                              fontSize: 18,
                              letterSpacing: 3,
                              fontWeight: FontWeight.w800,
                            ),
                            decoration: InputDecoration(
                              hintText: 'PEGA AQUÍ EL CÓDIGO',
                              hintStyle: TextStyle(
                                color: Colors.white.withValues(alpha: 0.35),
                                letterSpacing: 1.5,
                                fontSize: 12,
                              ),
                              filled: true,
                              fillColor: Colors.black.withValues(alpha: 0.55),
                              contentPadding: const EdgeInsets.symmetric(horizontal: 14, vertical: 12),
                              suffixIcon: IconButton(
                                icon: const Icon(Icons.paste_rounded, color: Color(0xFF00E5FF)),
                                tooltip: 'Pegar código',
                                onPressed: _pasteCode,
                              ),
                              border: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(12),
                                borderSide: const BorderSide(color: Color(0xFF00E5FF)),
                              ),
                              enabledBorder: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(12),
                                borderSide: BorderSide(color: const Color(0xFF00E5FF).withValues(alpha: 0.4)),
                              ),
                              focusedBorder: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(12),
                                borderSide: const BorderSide(color: Color(0xFF00E5FF), width: 1.8),
                              ),
                            ),
                          ),
                          const SizedBox(height: 12),

                          // BOTÓN SINCRONIZAR
                          GamingButton(
                            text: 'SINCRONIZAR',
                            glowColor: const Color(0xFF00E5FF),
                            onPressed: _joinFriendRoom,
                          ),

                          const Padding(
                            padding: EdgeInsets.symmetric(vertical: 14),
                            child: Row(
                              children: [
                                Expanded(child: Divider(color: Colors.white24)),
                                Padding(
                                  padding: EdgeInsets.symmetric(horizontal: 12),
                                  child: Text('O', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold)),
                                ),
                                Expanded(child: Divider(color: Colors.white24)),
                              ],
                            ),
                          ),

                          // BOTÓN INVITAR (CREAR SALA)
                          GamingButton(
                            text: 'INVITAR (CREAR PARTIDA)',
                            glowColor: const Color(0xFF0284C7),
                            onPressed: _createFriendRoom,
                          ),
                        ] else if (_mode == LocalScreenMode.waitingFriend) ...[
                          Text(
                            _statusMessage,
                            style: const TextStyle(color: Colors.white70, fontSize: 14),
                          ),
                          const SizedBox(height: 14),
                          Container(
                            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                            decoration: BoxDecoration(
                              color: Colors.black.withValues(alpha: 0.6),
                              borderRadius: BorderRadius.circular(12),
                              border: Border.all(color: const Color(0xFF00E5FF), width: 1.5),
                            ),
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                Text(
                                  _roomCode ?? '',
                                  style: const TextStyle(
                                    color: Color(0xFF00E5FF),
                                    fontSize: 26,
                                    fontWeight: FontWeight.w900,
                                    letterSpacing: 4,
                                    shadows: [
                                      Shadow(color: Color(0xFF00E5FF), blurRadius: 14),
                                    ],
                                  ),
                                ),
                                const SizedBox(width: 12),
                                IconButton(
                                  icon: const Icon(Icons.copy, color: Colors.white),
                                  tooltip: 'Copiar código',
                                  onPressed: () {
                                    if (_roomCode != null) {
                                      Clipboard.setData(ClipboardData(text: _roomCode!));
                                      ScaffoldMessenger.of(context).showSnackBar(
                                        const SnackBar(content: Text('¡Código copiado al portapapeles!')),
                                      );
                                    }
                                  },
                                ),
                              ],
                            ),
                          ),
                          const SizedBox(height: 18),
                          const SizedBox(
                            width: 36,
                            height: 36,
                            child: CircularProgressIndicator(
                              strokeWidth: 3,
                              color: Color(0xFF00E5FF),
                            ),
                          ),
                          const SizedBox(height: 12),
                          const Text(
                            'Esperando a que tu amigo presione Sincronizar...',
                            style: TextStyle(color: Colors.white54, fontSize: 12),
                          ),
                          const SizedBox(height: 18),
                          GamingButton(
                            text: 'CANCELAR',
                            glowColor: Colors.white24,
                            onPressed: () {
                              _ws.disconnect();
                              setState(() => _mode = LocalScreenMode.lobby);
                            },
                          ),
                        ],
                      ],
                    ),
                  ),
                ),
              ),
            ),

          // 4. MODAL DE FIN DE PARTIDA
          if (_mode == LocalScreenMode.finished)
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
                        style: TextStyle(
                          color: _isVictory ? const Color(0xFF00E5FF) : const Color(0xFFEF4444),
                          fontSize: 22,
                          fontWeight: FontWeight.w900,
                          letterSpacing: 2,
                        ),
                      ),
                      const SizedBox(height: 10),
                      Text(
                        _finishSubtitle,
                        textAlign: TextAlign.center,
                        style: const TextStyle(color: Colors.white70, fontSize: 13),
                      ),
                      const SizedBox(height: 16),
                      Text(
                        'Marcador Final:\nP1: $_scoreP1 pts  |  P2: $_scoreP2 pts',
                        textAlign: TextAlign.center,
                        style: const TextStyle(color: Colors.white, fontSize: 16, fontWeight: FontWeight.bold),
                      ),
                      const SizedBox(height: 22),
                      GamingButton(
                        text: 'JUGAR DE NUEVO',
                        glowColor: const Color(0xFF00E5FF),
                        onPressed: () {
                          setState(() {
                            _mode = LocalScreenMode.lobby;
                            _roomCode = null;
                            _codeController.clear();
                          });
                        },
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

          // 5. Botón Salir en el Lobby (Flecha blanca discreta)
          if (!isPlaying && _mode != LocalScreenMode.finished)
            Positioned(
              top: MediaQuery.of(context).padding.top + 8,
              left: 12,
              child: Container(
                decoration: BoxDecoration(
                  color: Colors.black.withValues(alpha: 0.6),
                  shape: BoxShape.circle,
                  border: Border.all(color: Colors.white24),
                ),
                child: IconButton(
                  icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 18),
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
