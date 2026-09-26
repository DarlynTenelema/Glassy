import 'dart:async';
import 'dart:convert';
import 'package:flutter/services.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'models/bridge_message.dart';
import 'models/payloads.dart';

class UnityBridgeController {
  final UnityWidgetController _unityController;

  // Streams para que la UI de Flutter escuche eventos de Unity
  final _readyController = StreamController<void>.broadcast();
  final _scoreController = StreamController<ScoreUpdatePayload>.broadcast();
  final _crystalsController = StreamController<CrystalsUpdatePayload>.broadcast();
  final _gameOverController = StreamController<GameOverPayload>.broadcast();
  final _errorController = StreamController<String>.broadcast();

  Stream<void> get onReady => _readyController.stream;
  Stream<ScoreUpdatePayload> get onScoreUpdated => _scoreController.stream;
  Stream<CrystalsUpdatePayload> get onCrystalsUpdated => _crystalsController.stream;
  Stream<GameOverPayload> get onGameOver => _gameOverController.stream;
  Stream<String> get onError => _errorController.stream;

  UnityBridgeController(this._unityController);

  /// Método principal que debe llamarse cuando `onUnityMessage` se dispara en el UnityWidget.
  void receiveMessageFromUnity(dynamic message) {
    try {
      final String jsonMessage = message.toString();
      final Map<String, dynamic> parsedJson = json.decode(jsonMessage);
      final bridgeMsg = BridgeMessage.fromJson(parsedJson);
      
      final payloadJson = bridgeMsg.payload.isNotEmpty ? json.decode(bridgeMsg.payload) : {};

      switch (bridgeMsg.eventName) {
        case 'READY':
          _readyController.add(null);
          break;
        case 'SCORE_UPDATED':
          _scoreController.add(ScoreUpdatePayload.fromJson(payloadJson));
          break;
        case 'CRYSTALS_UPDATED':
          _crystalsController.add(CrystalsUpdatePayload.fromJson(payloadJson));
          break;
        case 'GAME_OVER':
          _gameOverController.add(GameOverPayload.fromJson(payloadJson));
          break;
        default:
          final errMsg = 'Evento no reconocido: ${bridgeMsg.eventName}';
          print('[UnityBridgeController] $errMsg');
          _errorController.add(errMsg);
      }
    } catch (e) {
      final errMsg = 'Error parseando mensaje de Unity: $e\nMensaje crudo: $message';
      print('[UnityBridgeController] $errMsg');
      _errorController.add(errMsg);
    }
  }

  // ==========================================
  // MÉTODOS PARA ENVIAR A UNITY
  // ==========================================

  void _sendToUnity(String eventName, String payloadString) {
    final msg = BridgeMessage(eventName: eventName, payload: payloadString);
    final jsonString = json.encode(msg.toJson());
    // Se asume que Unity tiene un GameObject llamado "FlutterBridgeManager" 
    // y el script asociado tiene un método "ReceiveMessageFromFlutter".
    _unityController.postMessage(
      'FlutterBridgeManager',
      'ReceiveMessageFromFlutter',
      jsonString,
    );
  }

  void pauseGame(bool isPaused) {
    _sendToUnity('PAUSE_GAME', PauseGamePayload(isPaused: isPaused).toJsonString());
  }

  void updateAudioSettings(bool volume, bool effects) {
    _sendToUnity('AUDIO_SETTINGS', AudioSettingsPayload(volumeEnabled: volume, effectsEnabled: effects).toJsonString());
  }

  void usePowerUp(String type) {
    _sendToUnity('USE_POWERUP', PowerUpPayload(powerUpType: type).toJsonString());
  }

  void sendAuthToken(String token) {
    _sendToUnity('AUTH_TOKEN', AuthTokenPayload(token: token).toJsonString());
  }

  void loadSkin(String skinId) {
    _sendToUnity('LOAD_SKIN', SkinPayload(skinId: skinId).toJsonString());
  }

  void setGameMode(String mode) {
    _sendToUnity('SET_GAME_MODE', GameModePayload(mode: mode).toJsonString());
  }

  /// Helper para rotar la pantalla forzosamente, útil al inicializar juegos apaisados (Landscape)
  Future<void> forceOrientation(List<DeviceOrientation> orientations) async {
    await SystemChrome.setPreferredOrientations(orientations);
  }

  void dispose() {
    _readyController.close();
    _scoreController.close();
    _crystalsController.close();
    _gameOverController.close();
    _errorController.close();
  }
}
