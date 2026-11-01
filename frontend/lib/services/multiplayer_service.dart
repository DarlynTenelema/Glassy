import 'dart:async';
import 'dart:convert';
import 'package:web_socket_channel/web_socket_channel.dart';
import '../config/env.dart';

class MultiplayerService {
  WebSocketChannel? _channel;
  StreamSubscription? _subscription;
  bool _isConnected = false;

  bool get isConnected => _isConnected;

  // Callbacks de eventos en tiempo real
  void Function(String roomCode, String playerSlot)? onMatchFound;
  void Function(String roomCode)? onRoomCreated;
  void Function(int gemType, int count)? onIncomingAttack;
  void Function(int score, bool isDanger)? onOpponentStatus;
  void Function(String result)? onMatchResult; // "VICTORY" o "DEFEAT"
  void Function(String message)? onOpponentDisconnected;
  void Function(String error)? onError;
  void Function(String status)? onStatusUpdate;

  Future<bool> connect() async {
    if (_isConnected && _channel != null) return true;

    try {
      final wsUrl = Env.wsMultiplayerUrl;
      onStatusUpdate?.call('Conectando al servidor...');
      final uri = Uri.parse(wsUrl);

      _channel = WebSocketChannel.connect(uri);
      await _channel!.ready;

      _isConnected = true;
      onStatusUpdate?.call('Conectado al servidor multijugador');

      _subscription = _channel!.stream.listen(
        _handleIncomingMessage,
        onError: (err) {
          _isConnected = false;
          onError?.call('Error de conexión: $err');
        },
        onDone: () {
          _isConnected = false;
          onStatusUpdate?.call('Desconectado del servidor');
        },
      );
      return true;
    } catch (e) {
      _isConnected = false;
      onError?.call('No se pudo conectar al servidor: $e');
      return false;
    }
  }

  void _handleIncomingMessage(dynamic data) {
    try {
      final Map<String, dynamic> jsonMsg = json.decode(data.toString());
      final action = jsonMsg['action'] as String?;

      switch (action) {
        case 'SEARCHING_OPPONENT':
          onStatusUpdate?.call(jsonMsg['message'] ?? 'Buscando oponente...');
          break;

        case 'MATCH_FOUND':
          final roomCode = jsonMsg['roomCode'] as String? ?? '';
          final slot = jsonMsg['winner'] as String? ?? 'P1';
          onMatchFound?.call(roomCode, slot);
          break;

        case 'ROOM_CREATED':
          final roomCode = jsonMsg['roomCode'] as String? ?? '';
          onRoomCreated?.call(roomCode);
          break;

        case 'INCOMING_ATTACK':
          final gemType = (jsonMsg['gemType'] as int?) ?? 1;
          final count = (jsonMsg['count'] as int?) ?? 1;
          onIncomingAttack?.call(gemType, count);
          break;

        case 'OPPONENT_STATUS':
          final score = (jsonMsg['score'] as int?) ?? 0;
          final isDanger = jsonMsg['isDanger'] == true;
          onOpponentStatus?.call(score, isDanger);
          break;

        case 'MATCH_RESULT':
          final result = jsonMsg['winner'] as String? ?? 'DEFEAT';
          onMatchResult?.call(result);
          break;

        case 'OPPONENT_DISCONNECTED':
          final msg = jsonMsg['message'] as String? ?? 'Tu rival se ha desconectado.';
          onOpponentDisconnected?.call(msg);
          break;

        case 'JOIN_ERROR':
          onError?.call(jsonMsg['message'] ?? 'Error al unirse a la sala.');
          break;
      }
    } catch (e) {
      onError?.call('Error procesando mensaje del servidor: $e');
    }
  }

  void send(Map<String, dynamic> payload) {
    if (_channel != null && _isConnected) {
      try {
        _channel!.sink.add(json.encode(payload));
      } catch (e) {
        onError?.call('Error al enviar datos: $e');
      }
    }
  }

  void startMatchmaking() {
    send({'action': 'MATCHMAKING'});
  }

  void createRoom() {
    send({'action': 'CREATE_ROOM'});
  }

  void joinRoom(String roomCode) {
    send({'action': 'JOIN_ROOM', 'roomCode': roomCode.trim().toUpperCase()});
  }

  void sendAttack(int gemType, int count) {
    send({
      'action': 'ATTACK',
      'gemType': gemType,
      'count': count,
    });
  }

  void sendStatus(int score, bool isDanger) {
    send({
      'action': 'STATUS',
      'score': score,
      'isDanger': isDanger,
    });
  }

  void sendGameOver() {
    send({'action': 'GAME_OVER'});
  }

  void sendSurrender() {
    send({'action': 'SURRENDER'});
  }

  void disconnect() {
    _isConnected = false;
    _subscription?.cancel();
    _channel?.sink.close();
    _channel = null;
  }
}
