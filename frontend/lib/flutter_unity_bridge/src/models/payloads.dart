import 'dart:convert';

// ==========================================
// PAYLOADS: FLUTTER -> UNITY
// ==========================================

class PauseGamePayload {
  final bool isPaused;
  PauseGamePayload({required this.isPaused});
  String toJsonString() => json.encode({'isPaused': isPaused});
}

class AudioSettingsPayload {
  final bool volumeEnabled;
  final bool effectsEnabled;
  final double musicVolume;
  AudioSettingsPayload({required this.volumeEnabled, required this.effectsEnabled, required this.musicVolume});
  String toJsonString() => json.encode({'volumeEnabled': volumeEnabled, 'effectsEnabled': effectsEnabled, 'musicVolume': musicVolume});
}

class PowerUpPayload {
  final String powerUpType;
  PowerUpPayload({required this.powerUpType});
  String toJsonString() => json.encode({'powerUpType': powerUpType});
}

class AuthTokenPayload {
  final String token;
  AuthTokenPayload({required this.token});
  String toJsonString() => json.encode({'token': token});
}

// ==========================================
// PAYLOADS: UNITY -> FLUTTER
// ==========================================

class ScoreUpdatePayload {
  final int currentScore;
  ScoreUpdatePayload({required this.currentScore});
  factory ScoreUpdatePayload.fromJson(Map<String, dynamic> json) {
    return ScoreUpdatePayload(currentScore: json['currentScore'] as int? ?? 0);
  }
}

class CrystalsUpdatePayload {
  final int currentCrystals;
  CrystalsUpdatePayload({required this.currentCrystals});
  factory CrystalsUpdatePayload.fromJson(Map<String, dynamic> json) {
    return CrystalsUpdatePayload(currentCrystals: json['currentCrystals'] as int? ?? 0);
  }
}

class GameOverPayload {
  final int finalScore;
  final bool highScoreBroken;
  GameOverPayload({required this.finalScore, required this.highScoreBroken});
  factory GameOverPayload.fromJson(Map<String, dynamic> json) {
    return GameOverPayload(
      finalScore: json['finalScore'] as int? ?? 0,
      highScoreBroken: json['highScoreBroken'] as bool? ?? false,
    );
  }
}
