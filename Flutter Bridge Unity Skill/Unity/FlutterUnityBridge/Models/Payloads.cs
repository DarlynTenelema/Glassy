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
    public class SkinPayload
    {
        public string skinId;
    }

    [Serializable]
    public class GameModePayload
    {
        public string mode; // ej. "SOLO", "VERSUS_LOCAL"
    }

    // ==========================================
    // PAYLOADS: UNITY -> FLUTTER
    // ==========================================

    [Serializable]
    public class ScoreUpdatePayload
    {
        public int currentScore;
        public string playerId; // Nullable (opcional) en C# usando string normal
    }

    [Serializable]
    public class CrystalsUpdatePayload
    {
        public int currentCrystals;
        public string playerId;
    }

    [Serializable]
    public class GameOverPayload
    {
        public int finalScore;
        public bool highScoreBroken;
        public string playerId;
    }

    [Serializable]
    public class AchievementProgressPayload
    {
        public int groupId;
        public int level;
        public int progressAdded;
    }
}
