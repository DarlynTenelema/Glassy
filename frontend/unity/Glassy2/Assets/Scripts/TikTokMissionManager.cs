using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Tipos de micro-misiones dinámicas oficiales de Glassy para TikTok Live.
/// </summary>
public enum TikTokMissionType
{
    MergeGems = 0,     // Fusionar X cantidad de gema Y (Límite de 5; Rubí/Zafiro máx 2)
    ReachCombo = 1,    // Llegar a un combo de X5 con gema Y
    EarnPoints = 2,    // Reunir X puntos (Límite 300)
    ClearGems = 3,     // Eliminar todas las gemas de tipo X (Tiempo 30s)
    MaintainGems = 4   // Mantener X cantidad de gema Y (Tiempo 40s)
}

/// <summary>
/// TikTokMissionManager — Administra las Micro-misiones Dinámicas con cronómetro y Game Over por tiempo.
/// </summary>
public class TikTokMissionManager : MonoBehaviour
{
    public static TikTokMissionManager Instance { get; private set; }

    [Header("Configuración de Misiones")]
    public float defaultTimeLimit = 60f;
    public float minDelayBetweenMissions = 15f;
    public float maxDelayBetweenMissions = 25f;

    [Header("Estado de Misión Activa")]
    public bool isMissionActive = false;
    public TikTokMissionType currentType;
    public GemType targetGemType;
    public int targetProgress;
    public int currentProgress;
    public float timeRemaining;
    public string missionTitle = "";

    private float _nextMissionTimer = 8f;
    private bool _panicAlertTriggered = false;
    private float _maintainElapsedTime = 0f;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
            return;
        }
        Instance = this;
    }

    private void Start()
    {
        _nextMissionTimer = UnityEngine.Random.Range(5f, 10f); // Primera misión arranca rápido
    }

    private void Update()
    {
        if (GameManager.Instance == null || GameManager.Instance.IsGameOver || GameManager.Instance.IsPaused)
            return;

        if (isMissionActive)
        {
            timeRemaining -= Time.deltaTime;

            // Alerta de pánico en los últimos 15 segundos
            if (timeRemaining <= 15f && !_panicAlertTriggered && timeRemaining > 0f)
            {
                _panicAlertTriggered = true;
                string panicMsg = "⚠️ ¡TIEMPO CRÍTICO! Envía un Regalo ($0.20) para +30s o ($0.25) para SALVAR";
                TikTokUIController.Instance?.ShowEventAlert(panicMsg);
                Debug.LogWarning("[TikTokMissionManager] " + panicMsg);
            }

            // Chequeos específicos por frame para misiones pasivas
            if (currentType == TikTokMissionType.ClearGems)
            {
                CheckClearGemsCondition();
            }
            else if (currentType == TikTokMissionType.MaintainGems)
            {
                CheckMaintainGemsCondition();
            }

            // Actualizar visualización en el UI Controller
            TikTokUIController.Instance?.UpdateMissionHUD(missionTitle, timeRemaining, currentProgress, targetProgress, timeRemaining <= 15f);

            // Fracaso por tiempo -> GAME OVER ESTRICTO
            if (timeRemaining <= 0f)
            {
                FailMissionDueToTime();
            }
        }
        else
        {
            _nextMissionTimer -= Time.deltaTime;
            if (_nextMissionTimer <= 0f)
            {
                StartRandomMission();
            }
        }
    }

    // =========================================================================
    // GENERADOR DE MISIONES
    // =========================================================================

    public void StartRandomMission()
    {
        isMissionActive = true;
        _panicAlertTriggered = false;
        _maintainElapsedTime = 0f;
        currentProgress = 0;

        // Elegir aleatoriamente uno de los 5 tipos de misión
        currentType = (TikTokMissionType)UnityEngine.Random.Range(0, 5);

        // Elegir una gema válida para misiones (Emerald a RedRuby, excluye Pearl, Quartz, Diamond, Stone)
        targetGemType = (GemType)UnityEngine.Random.Range((int)GemType.Emerald, (int)GemType.RedRuby + 1);

        switch (currentType)
        {
            case TikTokMissionType.MergeGems:
                timeRemaining = defaultTimeLimit; // 60 segundos
                if (targetGemType == GemType.RedRuby || targetGemType == GemType.Sapphire)
                    targetProgress = UnityEngine.Random.Range(1, 3); // Límite de 2 para gemas grandes
                else
                    targetProgress = UnityEngine.Random.Range(2, 6); // Límite de 5 para gemas medianas/bajas
                missionTitle = $"Fusiona {targetProgress} {GetGemName(targetGemType)}";
                break;

            case TikTokMissionType.ReachCombo:
                timeRemaining = defaultTimeLimit; // 60 segundos
                targetProgress = 5; // Combo X5 estricto
                missionTitle = $"Logra un Combo X5 con {GetGemName(targetGemType)}";
                break;

            case TikTokMissionType.EarnPoints:
                timeRemaining = defaultTimeLimit; // 60 segundos
                targetProgress = UnityEngine.Random.Range(10, 31) * 10; // 100 a 300 puntos
                missionTitle = $"Reúne {targetProgress} Puntos";
                break;

            case TikTokMissionType.ClearGems:
                timeRemaining = 30f; // Límite de 30 segundos
                targetProgress = 0;
                // Intentar seleccionar una gema que realmente esté en el tablero
                targetGemType = GetPrevalentGemInBoard();
                missionTitle = $"Elimina todos los {GetGemName(targetGemType)} ({timeRemaining:0}s)";
                break;

            case TikTokMissionType.MaintainGems:
                timeRemaining = 40f; // Límite de 40 segundos
                if (targetGemType == GemType.Emerald || targetGemType == GemType.Amethyst)
                    targetProgress = 10; // Configuración hard: 10
                else if (targetGemType == GemType.Topaz || targetGemType == GemType.GreenRuby)
                    targetProgress = 6;  // Configuración media: 6
                else
                    targetProgress = 3;  // Gemas altas (Zafiro, Rubí): 3
                missionTitle = $"Mantén {targetProgress} {GetGemName(targetGemType)} en el frasco";
                break;
        }

        Debug.Log($"[TikTokMissionManager] Nueva Misión: {missionTitle} (Tiempo: {timeRemaining}s)");
        TikTokUIController.Instance?.ShowEventAlert($"🎯 NUEVA MISIÓN: {missionTitle} (60s)");
    }

    private GemType GetPrevalentGemInBoard()
    {
        if (GameManager.Instance != null && GameManager.Instance.activeGems != null && GameManager.Instance.activeGems.Count > 0)
        {
            var playableGems = GameManager.Instance.activeGems
                .Where(g => g != null && g.gemType >= GemType.Emerald && g.gemType <= GemType.RedRuby)
                .GroupBy(g => g.gemType)
                .OrderByDescending(grp => grp.Count())
                .FirstOrDefault();

            if (playableGems != null) return playableGems.Key;
        }
        return GemType.Amethyst;
    }

    // =========================================================================
    // EVENTOS DE JUEGO (Llamados desde GameManager)
    // =========================================================================

    public void OnGemMerged(GemType mergedType, GemType resultType)
    {
        if (!isMissionActive) return;

        // Tipo 1: Fusionar X gema
        if (currentType == TikTokMissionType.MergeGems)
        {
            if (mergedType == targetGemType || resultType == targetGemType)
            {
                currentProgress++;
                if (currentProgress >= targetProgress)
                {
                    CompleteMission();
                }
            }
        }
    }

    public void OnComboUpdated(GemType comboGem, int multiplier)
    {
        if (!isMissionActive) return;

        // Tipo 2: Combo X5
        if (currentType == TikTokMissionType.ReachCombo)
        {
            if (comboGem == targetGemType)
            {
                currentProgress = multiplier;
                if (multiplier >= targetProgress)
                {
                    CompleteMission();
                }
            }
        }
    }

    public void OnScoreAdded(int points)
    {
        if (!isMissionActive) return;

        // Tipo 3: Reunir X puntos
        if (currentType == TikTokMissionType.EarnPoints)
        {
            currentProgress += points;
            if (currentProgress >= targetProgress)
            {
                CompleteMission();
            }
        }
    }

    private void CheckClearGemsCondition()
    {
        if (!isMissionActive || currentType != TikTokMissionType.ClearGems) return;

        // Contar cuántas gemas de este tipo quedan en el frasco
        int count = CountGemsOfType(targetGemType);
        currentProgress = count;

        if (count == 0)
        {
            CompleteMission();
        }
    }

    private void CheckMaintainGemsCondition()
    {
        if (!isMissionActive || currentType != TikTokMissionType.MaintainGems) return;

        int count = CountGemsOfType(targetGemType);
        currentProgress = count;

        // Si se mantiene la cantidad solicitada, acumulamos tiempo
        if (count >= targetProgress)
        {
            _maintainElapsedTime += Time.deltaTime;
            if (_maintainElapsedTime >= 40f)
            {
                CompleteMission();
            }
        }
    }

    private int CountGemsOfType(GemType type)
    {
        if (GameManager.Instance == null || GameManager.Instance.activeGems == null) return 0;
        int count = 0;
        foreach (var gem in GameManager.Instance.activeGems)
        {
            if (gem != null && gem.gemType == type) count++;
        }
        return count;
    }

    // =========================================================================
    // INTERVENCIONES DE REGALOS DE LA AUDIENCIA (De Pago)
    // =========================================================================

    /// <summary>
    /// Regalo $0.20: Suma +30 segundos al cronómetro de la misión activa.
    /// </summary>
    public void AddMissionTime(float seconds)
    {
        if (!isMissionActive) return;

        timeRemaining += seconds;
        _panicAlertTriggered = false; // Resetear pánico si el tiempo sube
        TikTokUIController.Instance?.ShowEventAlert($"⏳ ¡REGALO SALVADOR! +{seconds:0}s agregados a la misión.");
        Debug.Log($"[TikTokMissionManager] +{seconds}s agregados. Tiempo restante: {timeRemaining:0}s");
    }

    /// <summary>
    /// Regalo $0.25: Auto-completa la misión de forma instantánea.
    /// </summary>
    public void CompleteMissionInstantly()
    {
        if (!isMissionActive) return;

        Debug.Log("[TikTokMissionManager] ¡Misión auto-completada por regalo de $0.25!");
        CompleteMission(isInstantGift: true);
    }

    // =========================================================================
    // FINALIZACIÓN: ÉXITO O FRACASO
    // =========================================================================

    private void CompleteMission(bool isInstantGift = false)
    {
        if (!isMissionActive) return;

        int bonusPoints = 150;
        if (targetGemType == GemType.RedRuby || targetGemType == GemType.Sapphire) bonusPoints = 300;

        GameManager.Instance?.AddScore(bonusPoints);
        AudioManager.Instance?.PlayDiamondSequence();

        string msg = isInstantGift
            ? $"🎉 ¡MISIÓN SALVADA POR REGALO! +{bonusPoints} pts de recompensa"
            : $"✅ ¡MISIÓN CUMPLIDA: {missionTitle}! +{bonusPoints} pts";

        TikTokUIController.Instance?.ShowEventAlert(msg);
        Debug.Log("[TikTokMissionManager] " + msg);

        isMissionActive = false;
        TikTokUIController.Instance?.HideMissionHUD();
        ScheduleNextMission();
    }

    private void FailMissionDueToTime()
    {
        if (!isMissionActive) return;
        isMissionActive = false;

        Debug.LogWarning("[TikTokMissionManager] 💥 TIEMPO AGOTADO EN LA MISIÓN. DISPARANDO GAME OVER.");
        TikTokUIController.Instance?.ShowEventAlert("💥 ¡TIEMPO AGOTADO! Misión fallida ➔ GAME OVER");
        TikTokUIController.Instance?.HideMissionHUD();

        // Game Over oficial del sistema
        GameManager.Instance?.TriggerGameOver("MissionTimeout");
    }

    private void ScheduleNextMission()
    {
        _nextMissionTimer = UnityEngine.Random.Range(minDelayBetweenMissions, maxDelayBetweenMissions);
    }

    private string GetGemName(GemType type)
    {
        switch (type)
        {
            case GemType.Emerald:   return "Esmeraldas";
            case GemType.Amethyst:  return "Amatistas";
            case GemType.Topaz:     return "Topacios";
            case GemType.GreenRuby: return "Peridotos";
            case GemType.Sapphire:  return "Zafiros";
            case GemType.RedRuby:   return "Rubíes";
            default:                return type.ToString();
        }
    }
}
