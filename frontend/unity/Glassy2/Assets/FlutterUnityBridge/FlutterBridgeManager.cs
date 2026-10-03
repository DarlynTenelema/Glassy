using System;
using UnityEngine;
using FlutterUnityIntegration; // Asume que la librería base está instalada
using FlutterUnityBridge.Models;

namespace FlutterUnityBridge
{
    /// <summary>
    /// El manager central que se encarga de recibir, parsear y rutear todos los mensajes desde Flutter,
    /// así como empaquetar y enviar mensajes hacia Flutter.
    /// </summary>
    public class FlutterBridgeManager : MonoBehaviour
    {
        public static FlutterBridgeManager Instance { get; private set; }

        // =========================================================
        // EVENTOS (Suscripción para otros scripts en Unity)
        // =========================================================

        public event Action<PauseGamePayload> OnPauseGameRequested;
        public event Action<AudioSettingsPayload> OnAudioSettingsRequested;
        public event Action<PowerUpPayload> OnPowerUpRequested;
        public event Action<AuthTokenPayload> OnAuthTokenReceived;
        public event Action<SetSkinPayload> OnSkinRequested;

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }

        // =========================================================
        // RECEPCIÓN DE MENSAJES DESDE FLUTTER
        // =========================================================

        /// <summary>
        /// Este método debe ser llamado por UnityMessageManager (o configurado en el GameObject
        /// para recibir directamente los PostMessage de Flutter).
        /// </summary>
        public void ReceiveMessageFromFlutter(string jsonMessage)
        {
            if (string.IsNullOrEmpty(jsonMessage)) return;

            try
            {
                // 1. Parsear el envoltorio principal
                BridgeMessage bridgeMsg = JsonUtility.FromJson<BridgeMessage>(jsonMessage);

                // 2. Rutear según el nombre del evento
                switch (bridgeMsg.eventName)
                {
                    case "PAUSE_GAME":
                        var pausePayload = JsonUtility.FromJson<PauseGamePayload>(bridgeMsg.payload);
                        OnPauseGameRequested?.Invoke(pausePayload);
                        break;

                    case "AUDIO_SETTINGS":
                        var audioPayload = JsonUtility.FromJson<AudioSettingsPayload>(bridgeMsg.payload);
                        OnAudioSettingsRequested?.Invoke(audioPayload);
                        break;

                    case "USE_POWERUP":
                        var powerUpPayload = JsonUtility.FromJson<PowerUpPayload>(bridgeMsg.payload);
                        OnPowerUpRequested?.Invoke(powerUpPayload);
                        break;

                    case "AUTH_TOKEN":
                        var authPayload = JsonUtility.FromJson<AuthTokenPayload>(bridgeMsg.payload);
                        OnAuthTokenReceived?.Invoke(authPayload);
                        break;

                    case "SET_SKIN":
                        var skinPayload = JsonUtility.FromJson<SetSkinPayload>(bridgeMsg.payload);
                        OnSkinRequested?.Invoke(skinPayload);
                        break;

                    default:
                        Debug.LogWarning($"[FlutterBridgeManager] Evento no reconocido: {bridgeMsg.eventName}");
                        break;
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"[FlutterBridgeManager] Error parseando mensaje de Flutter: {ex.Message}. Mensaje crudo: {jsonMessage}");
            }
        }

        // =========================================================
        // ENVÍO DE MENSAJES HACIA FLUTTER
        // =========================================================

        private void SendToFlutter(string eventName, object payloadObj = null)
        {
            BridgeMessage msg = new BridgeMessage
            {
                eventName = eventName,
                payload = payloadObj != null ? JsonUtility.ToJson(payloadObj) : "{}"
            };

            string finalJson = JsonUtility.ToJson(msg);
            
            // Usamos la librería base para enviar el mensaje real
            if (UnityMessageManager.Instance != null)
            {
                UnityMessageManager.Instance.SendMessageToFlutter(finalJson);
            }
            else
            {
                Debug.LogWarning("[FlutterBridgeManager] UnityMessageManager no está instanciado. Mensaje no enviado: " + finalJson);
            }
        }

        public void SendReady()
        {
            SendToFlutter("READY");
        }

        public void SendScoreUpdate(int newScore)
        {
            SendToFlutter("SCORE_UPDATED", new ScoreUpdatePayload { currentScore = newScore });
        }

        public void SendCrystalsUpdate(int newCrystals)
        {
            SendToFlutter("CRYSTALS_UPDATED", new CrystalsUpdatePayload { currentCrystals = newCrystals });
        }

        public void SendGameOver(int score, bool newHighScore)
        {
            SendToFlutter("GAME_OVER", new GameOverPayload { finalScore = score, highScoreBroken = newHighScore });
        }

        public void SendComboBonus(int bonus, int combo)
        {
            SendToFlutter("COMBO_BONUS", new ComboBonusPayload { bonus = bonus, combo = combo });
        }

        public void SendEpicSave(int bonus)
        {
            SendToFlutter("EPIC_SAVE", new EpicSavePayload { bonus = bonus });
        }

        public void SendDangerZone(bool isDanger)
        {
            SendToFlutter("DANGER_ZONE", new DangerZonePayload { isDanger = isDanger });
        }

        public void SendMissionStarted(string text, int timeLimitSeconds)
        {
            SendToFlutter("MISSION_STARTED", new MissionStartedPayload { text = text, timeLimitSeconds = timeLimitSeconds });
        }

        public void SendMissionUpdated(int current, int target)
        {
            SendToFlutter("MISSION_UPDATED", new MissionUpdatedPayload { currentProgress = current, targetProgress = target });
        }

        public void SendMissionCompleted(int bonus)
        {
            SendToFlutter("MISSION_COMPLETED", new MissionCompletedPayload { bonusPoints = bonus });
        }
    }
}
