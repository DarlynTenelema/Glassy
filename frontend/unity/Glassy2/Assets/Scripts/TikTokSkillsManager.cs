using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// Modelos de datos para la configuración de Skills recibida de Golang (Railway).
/// </summary>
[Serializable]
public class SkillState
{
    public bool unlocked = false; // Si el streamer pagó la suscripción
    public bool enabled = false;  // Si el streamer la tiene encendida en la web
}

[Serializable]
public class StreamSkillsConfigResponse
{
    public string status;
    public string partner_code;
    public SkillState auto_player;
    public SkillState avatar_gem;
    public SkillState challenge_roulette;
    public SkillState emergency_shield;
    public SkillState voice_assistant;
}

/// <summary>
/// TikTokSkillsManager — Coordinador Central de las 5 Skills Oficiales en Unity.
/// Conecta (JS: Web) -> (Golang: Railway) -> (C#: Unity).
/// </summary>
public class TikTokSkillsManager : MonoBehaviour
{
    public static TikTokSkillsManager Instance { get; private set; }

    [Header("👑 Modo Creador / Propietario (Acceso Gratuito de por Vida)")]
    [Tooltip("El dueño de Glassy tiene acceso VIP ilimitado y gratuito a todas las skills sin pagar.")]
    public bool isCreatorMode = true;

    [Tooltip("Código oficial del creador que siempre tiene acceso total")]
    public string creatorMasterCode = "DARLYN";

    [Header("Identificación del Creador")]
    [Tooltip("Código único de partner del streamer (ej. STREAMER77)")]
    public string partnerCode = "DARLYN";

    [Tooltip("URL base de la API de Golang en Railway")]
    public string backendBaseUrl = "https://tu-backend.up.railway.app";

    [Tooltip("Intervalo en segundos para refrescar las licencias desde la nube")]
    public float syncIntervalSeconds = 30f;

    [Header("Estado de las 5 Skills Oficiales")]
    public bool skillAutoPlayerActive = true;
    public bool skillAvatarGemActive = true;
    public bool skillRouletteActive = false;
    public bool skillShieldActive = true;
    public bool skillVoiceAssistantActive = false;

    [Header("Configuración de Escudo (Skill 4)")]
    public int shieldChargesRemaining = 1;

    private Coroutine _syncCoroutine;

    public bool IsOwnerOrCreator()
    {
        return isCreatorMode ||
               string.Equals(partnerCode, creatorMasterCode, System.StringComparison.OrdinalIgnoreCase) ||
               string.Equals(partnerCode, "ADMIN", System.StringComparison.OrdinalIgnoreCase) ||
               string.Equals(partnerCode, "CREATOR", System.StringComparison.OrdinalIgnoreCase) ||
               Application.isEditor;
    }

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(this); return; }
        Instance = this;

        // Cargar código de partner guardado si existe
        if (PlayerPrefs.HasKey("Glassy_PartnerCode"))
        {
            partnerCode = PlayerPrefs.GetString("Glassy_PartnerCode");
        }

        if (IsOwnerOrCreator())
        {
            skillAutoPlayerActive = true;
            skillShieldActive = true;
        }
    }

    private void Start()
    {
        if (IsOwnerOrCreator())
        {
            SetSkillAutoPlayer(true);
            Debug.Log($"[TikTokSkillsManager] 👑 Modo Creador Activo para @{partnerCode}. Todas las Skills desbloqueadas gratis de por vida.");
        }

        _syncCoroutine = StartCoroutine(PeriodicSkillSync());
    }

    public void SetPartnerCode(string newCode)
    {
        if (string.IsNullOrEmpty(newCode)) return;
        partnerCode = newCode.Trim().ToUpper();
        PlayerPrefs.SetString("Glassy_PartnerCode", partnerCode);
        PlayerPrefs.Save();

        // Forzar sincronización inmediata
        StartCoroutine(FetchSkillsFromBackend());
    }

    private IEnumerator PeriodicSkillSync()
    {
        while (true)
        {
            yield return StartCoroutine(FetchSkillsFromBackend());
            yield return new WaitForSeconds(syncIntervalSeconds);
        }
    }

    /// <summary>
    /// Consulta el endpoint de Golang en Railway para obtener el estado de las skills del streamer.
    /// </summary>
    public IEnumerator FetchSkillsFromBackend()
    {
        // Si es el creador o dueño, mantener siempre activo y gratis
        if (IsOwnerOrCreator())
        {
            SetSkillAutoPlayer(true);
            yield break;
        }

        if (string.IsNullOrEmpty(partnerCode)) yield break;

        string url = $"{backendBaseUrl}/api/partner/stream-config?code={partnerCode}";
        using (UnityWebRequest req = UnityWebRequest.Get(url))
        {
            req.timeout = 5;
            yield return req.SendWebRequest();

            if (req.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    string json = req.downloadHandler.text;
                    StreamSkillsConfigResponse resp = JsonUtility.FromJson<StreamSkillsConfigResponse>(json);
                    ApplySkillsConfiguration(resp);
                }
                catch (Exception ex)
                {
                    Debug.LogWarning($"[TikTokSkillsManager] Error al parsear JSON de skills: {ex.Message}");
                }
            }
            else
            {
                // En modo sin conexión o desarrollo local, mantener estado actual
                Debug.Log($"[TikTokSkillsManager] Modo offline / desarrollo para @{partnerCode}");
            }
        }
    }

    /// <summary>
    /// Aplica el estado de las 5 skills directamente al juego sin requerir UI adicional.
    /// </summary>
    public void ApplySkillsConfiguration(StreamSkillsConfigResponse config)
    {
        if (config == null) return;

        // Skill 1: Bot IA Streamer Autónomo ("Ghost Player")
        bool autoOn = config.auto_player != null && config.auto_player.unlocked && config.auto_player.enabled;
        SetSkillAutoPlayer(autoOn);

        // Skill 2: Skin de Gema con Foto del Top Donador ("VIP Avatar Gem")
        skillAvatarGemActive = config.avatar_gem != null && config.avatar_gem.unlocked && config.avatar_gem.enabled;

        // Skill 3: Ruleta de Desafíos de TikTok ("Challenge Roulette")
        skillRouletteActive = config.challenge_roulette != null && config.challenge_roulette.unlocked && config.challenge_roulette.enabled;

        // Skill 4: Escudo Anti-GameOver ("Life Shield")
        skillShieldActive = config.emergency_shield != null && config.emergency_shield.unlocked && config.emergency_shield.enabled;

        // Skill 5: Asistente de Voz TTS & Lector de Chat ("Voice AI")
        skillVoiceAssistantActive = config.voice_assistant != null && config.voice_assistant.unlocked && config.voice_assistant.enabled;

        Debug.Log($"[TikTokSkillsManager] Skills actualizadas desde la Web -> Bot: {skillAutoPlayerActive}, Avatar: {skillAvatarGemActive}, Ruleta: {skillRouletteActive}, Escudo: {skillShieldActive}, TTS: {skillVoiceAssistantActive}");
    }

    // =========================================================================
    // APLICACIÓN INDIVIDUAL DE CADA SKILL
    // =========================================================================

    public void SetSkillAutoPlayer(bool active)
    {
        skillAutoPlayerActive = active;
        if (TikTokAutoPlayer.Instance != null)
        {
            TikTokAutoPlayer.Instance.isSkillUnlocked = active;
            TikTokAutoPlayer.Instance.enableAutoPlayer = active;

            if (active)
                TikTokAutoPlayer.Instance.StartAgents();
            else
                TikTokAutoPlayer.Instance.StopAgents();
        }
    }

    /// <summary>
    /// Skill 4: Escudo Anti-GameOver. Verifica si puede absorber un desborde crítico.
    /// Devuelve true si el escudo salvó la partida.
    /// </summary>
    public bool TryConsumeLifeShield()
    {
        if (!skillShieldActive || shieldChargesRemaining <= 0) return false;

        shieldChargesRemaining--;
        // Destruir gemas peligrosas superiores para limpiar el cuello
        GameManager.Instance?.ClearGemsInRange(GemType.Emerald, GemType.Topaz);

        TikTokUIController.Instance?.ShowEventAlert("🛡️ ¡ESCUDO SALVAVIDAS ACTIVADO! Desborde prevenido.");
        AudioManager.Instance?.PlayDiamondSequence();
        return true;
    }

    /// <summary>
    /// Atajo para pruebas locales de desarrollo en Editor: activa o desactiva todas las skills.
    /// </summary>
    public void ToggleAllSkillsLocalTest(bool enable)
    {
        var testConfig = new StreamSkillsConfigResponse
        {
            status = "ok",
            partner_code = partnerCode,
            auto_player = new SkillState { unlocked = enable, enabled = enable },
            avatar_gem = new SkillState { unlocked = enable, enabled = enable },
            challenge_roulette = new SkillState { unlocked = enable, enabled = enable },
            emergency_shield = new SkillState { unlocked = enable, enabled = enable },
            voice_assistant = new SkillState { unlocked = enable, enabled = enable }
        };
        ApplySkillsConfiguration(testConfig);
    }

    private void Update()
    {
        // Tecla F8: Alternar todas las skills en modo prueba local
        if (Input.GetKeyDown(KeyCode.F8))
        {
            bool newState = !skillAutoPlayerActive;
            ToggleAllSkillsLocalTest(newState);
            string msg = newState ? "🟢 TODAS LAS SKILLS ACTIVADAS (Test F8)" : "🔴 TODAS LAS SKILLS PAUSADAS (Test F8)";
            TikTokUIController.Instance?.ShowEventAlert(msg);
        }
    }

    private void OnDestroy()
    {
        if (_syncCoroutine != null)
        {
            StopCoroutine(_syncCoroutine);
            _syncCoroutine = null;
        }
    }
}
