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
  AudioSettingsPayload({required this.volumeEnabled, required this.effectsEnabled});
  String toJsonString() => json.encode({'volumeEnabled': volumeEnabled, 'effectsEnabled': effectsEnabled});
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

class SkinPayload {
  final String skinId;
  SkinPayload({required this.skinId});
  String toJsonString() => json.encode({'skinId': skinId});
}

class GameModePayload {
  final String mode; // ej. "SOLO", "VERSUS_LOCAL"
  GameModePayload({required this.mode});
  String toJsonString() => json.encode({'mode': mode});
}

// ==========================================
// PAYLOADS: UNITY -> FLUTTER
// ==========================================

class ScoreUpdatePayload {
  final int currentScore;
  final String? playerId; // Nullable para singleplayer
  ScoreUpdatePayload({required this.currentScore, this.playerId});
  factory ScoreUpdatePayload.fromJson(Map<String, dynamic> json) {
    return ScoreUpdatePayload(
      currentScore: json['currentScore'] as int? ?? 0,
      playerId: json['playerId'] as String?,
    );
  }
}

class CrystalsUpdatePayload {
  final int currentCrystals;
  final String? playerId;
  CrystalsUpdatePayload({required this.currentCrystals, this.playerId});
  factory CrystalsUpdatePayload.fromJson(Map<String, dynamic> json) {
    return CrystalsUpdatePayload(
      currentCrystals: json['currentCrystals'] as int? ?? 0,
      playerId: json['playerId'] as String?,
    );
  }
}

class GameOverPayload {
  final int finalScore;
  final bool highScoreBroken;
  final String? playerId;
  GameOverPayload({required this.finalScore, required this.highScoreBroken, this.playerId});
  factory GameOverPayload.fromJson(Map<String, dynamic> json) {
    return GameOverPayload(
      finalScore: json['finalScore'] as int? ?? 0,
      highScoreBroken: json['highScoreBroken'] as bool? ?? false,
      playerId: json['playerId'] as String?,
    );
  }
}
