using System;

namespace FlutterUnityBridge.Models
{
    // ==========================================
    // PAYLOADS: FLUTTER -> UNITY
    // ==========================================

    [Serializable]
    public class PauseGamePayload
    {
        public bool isPaused;
    }

    [Serializable]
    public class AudioSettingsPayload
    {
        public bool volumeEnabled;
        public bool effectsEnabled;
        public float musicVolume = 1f;
    }

    [Serializable]
    public class PowerUpPayload
    {
        public string powerUpType;
    }

    [Serializable]
    public class AuthTokenPayload
    {
        public string token;
    }

    [Serializable]
    public class SetSkinPayload
    {
        public string skin_id;
    }

    // ==========================================
    // PAYLOADS: UNITY -> FLUTTER
    // ==========================================

    [Serializable]
    public class ScoreUpdatePayload
    {
        public int currentScore;
    }

    [Serializable]
    public class CrystalsUpdatePayload
    {
        public int currentCrystals;
    }

    [Serializable]
    public class GameOverPayload
    {
        public int finalScore;
        public bool highScoreBroken;
    }

    [Serializable]
    public class ComboBonusPayload
    {
        public int bonus;
        public int combo;
    }

    [Serializable]
    public class EpicSavePayload
    {
        public int bonus;
    }

    [Serializable]
    public class DangerZonePayload
    {
        public bool isDanger;
    }

    [Serializable]
    public class MissionStartedPayload
    {
        public string text;
        public int timeLimitSeconds;
    }

    [Serializable]
    public class MissionUpdatedPayload
    {
        public int currentProgress;
        public int targetProgress;
    }

    [Serializable]
    public class MissionCompletedPayload
    {
        public int bonusPoints;
    }
}
