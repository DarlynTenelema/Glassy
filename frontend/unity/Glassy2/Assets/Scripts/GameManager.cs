using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;
using FlutterUnityBridge;
using FlutterUnityBridge.Models;

/// <summary>
/// GameManager — Director central de la escena de juego.
/// Controla el estado (jugando/pausado/gameover), el score, los lapislázulis
/// y la instanciación de gemas.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear un GameObject vacío "GameManager" en GameScene.
/// 2. Asignar este script.
/// 3. Asignar los 8 prefabs de gemas en gemPrefabs[], en ORDEN EXACTO del enum GemType:
///    [0] Pearl, [1] Emerald, [2] Amethyst, [3] Topaz,
///    [4] GreenRuby, [5] Sapphire, [6] RedRuby, [7] Diamond
/// 4. Asignar el spawnPoint (Transform vacío en la boca del cuello de la botella).
/// 5. OPCIONAL: Asignar diamondExplosionVFX (Particle System prefab).
/// </summary>
public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    // =========================================================================
    // INSPECTOR FIELDS
    // =========================================================================

    [Header("Prefabs de Gemas (índice = GemType)")]
    public GameObject[] gemPrefabs = new GameObject[8];

    [Header("Punto de spawn (cuello de la botella)")]
    public Transform spawnPoint;

    [Header("VFX Opcional")]
    public GameObject diamondExplosionVFX; // Particle System que explota al obtener diamante

    // =========================================================================
    // ESTADO DEL JUEGO
    // =========================================================================

    public int  CurrentScore  { get; private set; } = 0;
    public int  LocalCrystals { get; private set; } = 0;
    public bool IsPaused      { get; private set; } = false;
    public bool IsGameOver    { get; private set; } = false;

    // Track active gems for performance (O(1) add/remove avoids FindObjectsByType)
    [System.NonSerialized]
    public HashSet<Gem> activeGems = new HashSet<Gem>();

    // =========================================================================
    // MECÁNICAS DE COMBO Y ADICCIÓN
    // =========================================================================
    private GemType? _currentComboType = null;
    private int _comboMultiplier = 1;
    private int _accumulatedComboScore = 0;
    private int _chainReactionMultiplier = 1;

    // Combo timer
    private float _comboTimer = 0f;
    private const float COMBO_TIME_LIMIT = 3f;

    private int _lastSentScore = -1;
    private int _lastSentCrystals = -1;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;

        // Asegurar que el FlutterBridgeManager exista en la escena
        if (FlutterBridgeManager.Instance == null)
        {
            GameObject bridgeObj = new GameObject("FlutterBridgeManager");
            bridgeObj.AddComponent<FlutterBridgeManager>();
            Debug.Log("[GameManager] FlutterBridgeManager instanciado dinámicamente.");
        }

        if (ApiManager.Instance == null)
        {
            GameObject apiObj = new GameObject("ApiManager");
            apiObj.AddComponent<ApiManager>();
            Debug.Log("[GameManager] ApiManager instanciado dinámicamente.");
        }

        if (AuthManager.Instance == null)
        {
            GameObject authObj = new GameObject("AuthManager");
            authObj.AddComponent<AuthManager>();
            Debug.Log("[GameManager] AuthManager instanciado dinámicamente.");
        }

        if (MissionManager.Instance == null)
        {
            gameObject.AddComponent<MissionManager>();
            Debug.Log("[GameManager] MissionManager instanciado dinámicamente.");
        }

        if (SkinManager.Instance == null)
        {
            GameObject skinObj = new GameObject("SkinManager");
            skinObj.AddComponent<SkinManager>();
            Debug.Log("[GameManager] SkinManager instanciado dinámicamente.");
        }
    }

    private void OnEnable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnPauseGameRequested  += HandlePauseRequest;
            FlutterBridgeManager.Instance.OnAudioSettingsRequested += HandleAudioSettings;
            FlutterBridgeManager.Instance.OnAuthTokenReceived   += HandleAuthToken;
            FlutterBridgeManager.Instance.OnCrystalsUpdateReceived += HandleCrystalsUpdate;
        }
    }

    private void OnDisable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnPauseGameRequested  -= HandlePauseRequest;
            FlutterBridgeManager.Instance.OnAudioSettingsRequested -= HandleAudioSettings;
            FlutterBridgeManager.Instance.OnAuthTokenReceived   -= HandleAuthToken;
            FlutterBridgeManager.Instance.OnCrystalsUpdateReceived -= HandleCrystalsUpdate;
        }
    }

    private void HandlePauseRequest(PauseGamePayload payload)
    {
        if (payload.isPaused) PauseGame();
        else ResumeGame();
    }

    private void HandleAudioSettings(AudioSettingsPayload payload)
    {
        AudioManager.Instance?.SetVolume(payload.volumeEnabled);
        AudioManager.Instance?.SetEffects(payload.effectsEnabled);
        AudioManager.Instance?.SetMusicVolume(payload.musicVolume);
    }

    private void HandleAuthToken(AuthTokenPayload payload)
    {
        if (AuthManager.Instance != null)
        {
            AuthManager.Instance.SetTokenFromFlutter(payload.token);
        }
    }

    private void HandleCrystalsUpdate(CrystalsUpdatePayload payload)
    {
        LocalCrystals = payload.currentCrystals;
        PlayerPrefs.SetInt(GameConfig.KeyCrystals, LocalCrystals);
        PlayerPrefs.Save();
        UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
        Debug.Log($"[GameManager] Cristales sincronizados desde backend: {LocalCrystals}");
    }



    private void Start()
    {
        // Instanciar el script que controla el fondo dinámicamente
        gameObject.AddComponent<BackgroundManager>();

        // Cargar lapislázulis guardados localmente (se sincroniza con el servidor al entrar)
        LocalCrystals = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 100);

        UIManager.Instance?.UpdateScoreDisplay(0);
        UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
        
        // Enviar estado inicial a Flutter
        SincronizarScore();
        // NO sincronizamos cristales aquí porque Unity tiene un valor local desactualizado
        // y Flutter es la fuente de la verdad inicial. Flutter enviará UPDATE_CRYSTALS al recibir READY.
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendReady();
        }
    }

    private void Update()
    {
        if (_currentComboType != null)
        {
            _comboTimer -= Time.deltaTime;
            if (_comboTimer <= 0f)
            {
                BreakCombo();
            }
        }
    }

    // =========================================================================
    // SPAWN DE GEMAS
    // =========================================================================

    /// <summary>
    /// Instancia una gema evolucionada en la posición indicada.
    /// Llamado por Gem.cs al fusionarse dos gemas.
    /// </summary>
    public void SpawnEvolvedGem(GemType type, Vector2 position)
    {
        int index = (int)type;
        if (index < 0 || index >= gemPrefabs.Length || gemPrefabs[index] == null)
        {
            Debug.LogWarning($"[GameManager] Prefab no asignado para GemType {type}");
            return;
        }

        Instantiate(gemPrefabs[index], position, Quaternion.identity);
    }

    /// <summary>
    /// Instancia una perla en el punto de spawn (llamado por GemSpawner).
    /// </summary>
    public void SpawnPearl()
    {
        if (gemPrefabs[0] == null) return;
        Instantiate(gemPrefabs[0], spawnPoint.position, Quaternion.identity);
    }

    // =========================================================================
    // SCORE Y BONUS
    // =========================================================================

    public void AddScore(int amount)
    {
        if (IsGameOver || amount <= 0) return;
        CurrentScore += amount;
        UIManager.Instance?.UpdateScoreDisplay(CurrentScore);
        
        // Enviar nuevo score a Flutter solo si cambió
        SincronizarScore();
    }

    private void BreakCombo()
    {
        if (_currentComboType == null) return;

        int bonus = _accumulatedComboScore * _comboMultiplier;
        if (bonus > 0 && _comboMultiplier > 1) 
        {
            AddScore(bonus);
            Debug.Log($"[COMBO] Racha finalizada! Cobrando bono: {bonus} puntos");
            if (FlutterBridgeManager.Instance != null) {
                FlutterBridgeManager.Instance.SendComboBonus(bonus, _comboMultiplier);
            }
        }

        _currentComboType = null;
        _comboMultiplier = 1;
        _accumulatedComboScore = 0;
        AudioManager.Instance?.ResetPitch();
    }

    /// <summary>
    /// Maneja toda la lógica de puntuación adictiva: Combos, Reacciones en Cadena y Salvadas Épicas.
    /// Llamado desde Gem.cs cuando dos gemas se fusionan.
    /// </summary>
    public void RegisterMerge(GemType mergedType, GemType resultType, bool isUserInteraction)
    {
        int basePoints = GameConfig.GemScoreValues[(int)resultType];

        // 1. REACCIONES EN CADENA (Efecto Dominó)
        if (!isUserInteraction)
        {
            // Fue automático (Física pura)
            _chainReactionMultiplier *= 2; 
        }
        else
        {
            // Fusión manual resetea la reacción en cadena
            _chainReactionMultiplier = 1; 
        }

        // 2. COMBOS POR RACHA (Solo para interacciones manuales)
        if (isUserInteraction)
        {
            if (_currentComboType == null)
            {
                _currentComboType = mergedType;
                _comboMultiplier = 1;
                _accumulatedComboScore = basePoints;
                _comboTimer = COMBO_TIME_LIMIT;
                AudioManager.Instance?.ResetPitch();
            }
            else if (_currentComboType == mergedType)
            {
                // Continúa la racha de la misma gema
                _comboMultiplier++;
                _accumulatedComboScore += basePoints;
                _comboTimer = COMBO_TIME_LIMIT; // Reset timer
                AudioManager.Instance?.IncreasePitch();
                
                // NOTIFICAR EN TIEMPO REAL (Feedback visual interactivo)
                if (FlutterBridgeManager.Instance != null) {
                    FlutterBridgeManager.Instance.SendComboBonus(_accumulatedComboScore * _comboMultiplier, _comboMultiplier);
                }
            }
            else
            {
                // SE CORTA LA RACHA -> COBRAR BONO MASIVO
                BreakCombo();

                // Iniciar nueva racha con la nueva gema
                _currentComboType = mergedType;
                _comboMultiplier = 1;
                _accumulatedComboScore = basePoints;
                _comboTimer = COMBO_TIME_LIMIT;
                AudioManager.Instance?.ResetPitch();
            }
        }

        // 3. PUNTOS DEL MERGE ACTUAL (Se multiplican si hay reacción en cadena)
        int totalPoints = basePoints * _chainReactionMultiplier;
        
        AddScore(totalPoints);

        // 4. SALVADA ÉPICA (Near Miss)
        // Si estamos en zona de peligro (90% lleno) y hacemos una fusión grande (Rubí Verde o mayor)
        if (GameOverZone.IsInDanger && resultType >= GemType.GreenRuby) 
        {
             // BALANCE: Un diamante vale 64, así que 100 es una recompensa justa pero no exagerada
             int survivalBonus = 100;
             AddScore(survivalBonus);
             Debug.Log($"[SALVADA ÉPICA] Supervivencia al límite: +{survivalBonus} puntos!");
             
             if (FlutterBridgeManager.Instance != null) {
                 FlutterBridgeManager.Instance.SendEpicSave(survivalBonus);
             }
        }

        // 5. SONIDO DE FUSIÓN (El pitch ya fue ajustado arriba en la racha)
        AudioManager.Instance?.PlayGemMerge(resultType);

        // 6. MICRO-MISIONES EXPRESS
        if (MissionManager.Instance != null)
        {
            MissionManager.Instance.RegisterGemCreated(resultType);
        }
    }



    // =========================================================================
    // PAUSA
    // =========================================================================

    public void PauseGame(string args = "")
    {
        IsPaused = true;
        Time.timeScale = 0f;
        UIManager.Instance?.ShowPausePanel(true);
    }

    public void ResumeGame(string args = "")
    {
        IsPaused = false;
        Time.timeScale = 1f;
        UIManager.Instance?.ShowPausePanel(false);
    }

    public void TogglePause(string args = "")
    {
        if (IsPaused) ResumeGame();
        else PauseGame();
    }

    // =========================================================================
    // GAME OVER
    // =========================================================================

    /// <summary>
    /// Dispara el Game Over. Llamado por GameOverZone cuando las gemas se desbordan.
    /// </summary>
    public void TriggerGameOver(string args = "")
    {
        if (IsGameOver) return;
        IsGameOver = true;

        Time.timeScale = 0f; // Congelar física

        // Calcular bonus final: sumar puntos de todas las gemas que quedan en pantalla
        int bonusScore = CalculateFinalBonus();
        CurrentScore  += bonusScore;

        Debug.Log($"[GameManager] Game Over! Score final: {CurrentScore} (bonus: {bonusScore})");

        // Reproducir sonido de game over
        AudioManager.Instance?.PlayGameOver();

        // Mostrar UI de Game Over
        UIManager.Instance?.ShowGameOver(CurrentScore);

        // Enviar score al servidor (no bloquea la UI)
        /*
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            ApiManager.Instance?.SubmitScore(CurrentScore);
            
            // Enviamos un "+1 partida jugada" para avanzar la misión diaria en el servidor
            // El servidor validará si cumple la meta (ej. meta de 3 partidas en el Día 3)
            ApiManager.Instance?.UpdateMissionProgress(1, 3, success => 
            {
                if (success) Debug.Log("[GameManager] Progreso de misión enviado al servidor.");
            });
        }
        */
        
        if (FlutterBridgeManager.Instance != null)
        {
            // Opcional: calcular si hay un high score. Por ahora pasamos false o implementamos la lógica.
            FlutterBridgeManager.Instance.SendGameOver(CurrentScore, false);
        }
    }

    private void SincronizarScore()
    {
        if (FlutterBridgeManager.Instance != null && CurrentScore != _lastSentScore)
        {
            FlutterBridgeManager.Instance.SendScoreUpdate(CurrentScore);
            _lastSentScore = CurrentScore;
        }
    }



    /// <summary>
    /// Suma los puntos de todas las gemas que permanecen en el tablero al terminar.
    /// </summary>
    private int CalculateFinalBonus()
    {
        int bonus = 0;
        foreach (Gem gem in activeGems)
        {
            if (gem != null)
            {
                bonus += gem.ScoreValue;
            }
        }
        return bonus;
    }

    /// <summary>
    /// Reinicia la escena de juego.
    /// </summary>
    public void RestartGame(string args = "")
    {
        Time.timeScale = 1f;
        UnityEngine.SceneManagement.SceneManager.LoadScene(GameConfig.SceneGame);
    }

    /// <summary>
    /// Vuelve al menú principal.
    /// </summary>
    public void GoToMainMenu(string args = "")
    {
        Time.timeScale = 1f;
        UnityEngine.SceneManagement.SceneManager.LoadScene(GameConfig.SceneMainMenu);
    }
}
