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

class SetSkinPayload {
  final String skin_id;
  SetSkinPayload({required this.skin_id});
  String toJsonString() => json.encode({'skin_id': skin_id});
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

class AchievementProgressPayload {
  final int groupId;
  final int level;
  final int progressAdded;
  
  AchievementProgressPayload({
    required this.groupId,
    required this.level,
    required this.progressAdded,
  });

  factory AchievementProgressPayload.fromJson(Map<String, dynamic> json) {
    return AchievementProgressPayload(
      groupId: json['groupId'] as int? ?? 0,
      level: json['level'] as int? ?? 0,
      progressAdded: json['progressAdded'] as int? ?? 0,
    );
  }
}

class ComboBonusPayload {
  final int combo;
  final int bonus;
  ComboBonusPayload({required this.combo, required this.bonus});
  factory ComboBonusPayload.fromJson(Map<String, dynamic> json) {
    return ComboBonusPayload(
      combo: json['combo'] as int? ?? 0,
      bonus: json['bonus'] as int? ?? 0,
    );
  }
}

class EpicSavePayload {
  final int bonus;
  EpicSavePayload({required this.bonus});
  factory EpicSavePayload.fromJson(Map<String, dynamic> json) {
    return EpicSavePayload(bonus: json['bonus'] as int? ?? 0);
  }
}

class DangerZonePayload {
  final bool isDanger;
  DangerZonePayload({required this.isDanger});
  factory DangerZonePayload.fromJson(Map<String, dynamic> json) {
    return DangerZonePayload(isDanger: json['isDanger'] as bool? ?? false);
  }
}

class MissionStartedPayload {
  final String text;
  final int timeLimitSeconds;
  MissionStartedPayload({required this.text, required this.timeLimitSeconds});
  factory MissionStartedPayload.fromJson(Map<String, dynamic> json) {
    return MissionStartedPayload(
      text: json['text'] as String? ?? '',
      timeLimitSeconds: json['timeLimitSeconds'] as int? ?? 0,
    );
  }
}

class MissionUpdatedPayload {
  final int currentProgress;
  final int targetProgress;
  MissionUpdatedPayload({required this.currentProgress, required this.targetProgress});
  factory MissionUpdatedPayload.fromJson(Map<String, dynamic> json) {
    return MissionUpdatedPayload(
      currentProgress: json['currentProgress'] as int? ?? 0,
      targetProgress: json['targetProgress'] as int? ?? 0,
    );
  }
}

class MissionCompletedPayload {
  final int bonusPoints;
  MissionCompletedPayload({required this.bonusPoints});
  factory MissionCompletedPayload.fromJson(Map<String, dynamic> json) {
    return MissionCompletedPayload(bonusPoints: json['bonusPoints'] as int? ?? 0);
  }
}
