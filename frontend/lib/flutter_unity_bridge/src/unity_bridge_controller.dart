import 'dart:async';
import 'dart:convert';
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
  final _achievementProgressController = StreamController<AchievementProgressPayload>.broadcast();
  final _comboBonusController = StreamController<ComboBonusPayload>.broadcast();
  final _epicSaveController = StreamController<EpicSavePayload>.broadcast();
  final _dangerZoneController = StreamController<DangerZonePayload>.broadcast();
  final _missionStartedController = StreamController<MissionStartedPayload>.broadcast();
  final _missionUpdatedController = StreamController<MissionUpdatedPayload>.broadcast();
  final _missionCompletedController = StreamController<MissionCompletedPayload>.broadcast();

  Stream<void> get onReady => _readyController.stream;
  Stream<ScoreUpdatePayload> get onScoreUpdated => _scoreController.stream;
  Stream<CrystalsUpdatePayload> get onCrystalsUpdated => _crystalsController.stream;
  Stream<GameOverPayload> get onGameOver => _gameOverController.stream;
  Stream<AchievementProgressPayload> get onAchievementProgress => _achievementProgressController.stream;
  Stream<ComboBonusPayload> get onComboBonus => _comboBonusController.stream;
  Stream<EpicSavePayload> get onEpicSave => _epicSaveController.stream;
  Stream<DangerZonePayload> get onDangerZone => _dangerZoneController.stream;
  Stream<MissionStartedPayload> get onMissionStarted => _missionStartedController.stream;
  Stream<MissionUpdatedPayload> get onMissionUpdated => _missionUpdatedController.stream;
  Stream<MissionCompletedPayload> get onMissionCompleted => _missionCompletedController.stream;

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
        case 'ACHIEVEMENT_PROGRESS':
          _achievementProgressController.add(AchievementProgressPayload.fromJson(payloadJson));
          break;
        case 'COMBO_BONUS':
          _comboBonusController.add(ComboBonusPayload.fromJson(payloadJson));
          break;
        case 'EPIC_SAVE':
          _epicSaveController.add(EpicSavePayload.fromJson(payloadJson));
          break;
        case 'DANGER_ZONE':
          _dangerZoneController.add(DangerZonePayload.fromJson(payloadJson));
          break;
        case 'MISSION_STARTED':
          _missionStartedController.add(MissionStartedPayload.fromJson(payloadJson));
          break;
        case 'MISSION_UPDATED':
          _missionUpdatedController.add(MissionUpdatedPayload.fromJson(payloadJson));
          break;
        case 'MISSION_COMPLETED':
          _missionCompletedController.add(MissionCompletedPayload.fromJson(payloadJson));
          break;
        default:
          print('[UnityBridgeController] Evento no reconocido: ${bridgeMsg.eventName}');
      }
    } catch (e) {
      print('[UnityBridgeController] Error parseando mensaje de Unity: $e\nMensaje crudo: $message');
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

  void updateAudioSettings(bool volume, bool effects, double musicVolume) {
    _sendToUnity('AUDIO_SETTINGS', AudioSettingsPayload(volumeEnabled: volume, effectsEnabled: effects, musicVolume: musicVolume).toJsonString());
  }

  void usePowerUp(String type) {
    _sendToUnity('USE_POWERUP', PowerUpPayload(powerUpType: type).toJsonString());
  }

  void sendAuthToken(String token) {
    _sendToUnity('AUTH_TOKEN', AuthTokenPayload(token: token).toJsonString());
  }

  void setSkin(String skinId) {
    _sendToUnity('SET_SKIN', SetSkinPayload(skin_id: skinId).toJsonString());
  }

  void dispose() {
    _readyController.close();
    _scoreController.close();
    _crystalsController.close();
    _gameOverController.close();
    _achievementProgressController.close();
    _comboBonusController.close();
    _epicSaveController.close();
    _dangerZoneController.close();
    _missionStartedController.close();
    _missionUpdatedController.close();
    _missionCompletedController.close();
  }
}
