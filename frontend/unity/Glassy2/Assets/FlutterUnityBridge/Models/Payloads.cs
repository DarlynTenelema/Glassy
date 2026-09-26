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
}
