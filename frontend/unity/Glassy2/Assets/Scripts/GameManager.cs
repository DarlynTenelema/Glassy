using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;
using FlutterUnityBridge;
using FlutterUnityBridge.Models;

/// <summary>
/// GameManager — Director central de la escena de juego.
/// Controla el estado (jugando/pausado/gameover), el score, los cristales
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
    }

    private void OnEnable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnPauseGameRequested  += HandlePauseRequest;
            FlutterBridgeManager.Instance.OnPowerUpRequested    += HandlePowerUpRequest;
            FlutterBridgeManager.Instance.OnAudioSettingsRequested += HandleAudioSettings;
        }
    }

    private void OnDisable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnPauseGameRequested  -= HandlePauseRequest;
            FlutterBridgeManager.Instance.OnPowerUpRequested    -= HandlePowerUpRequest;
            FlutterBridgeManager.Instance.OnAudioSettingsRequested -= HandleAudioSettings;
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

    private void HandlePowerUpRequest(PowerUpPayload payload)
    {
        switch (payload.powerUpType)
        {
            case "UsePowerUpPearl": UsePowerUpPearl(); break;
            case "UsePowerUpEmerald": UsePowerUpEmerald(); break;
            case "UsePowerUpAll": UsePowerUpAll(); break;
            default: UsePowerUpHighlighted(); break;
        }
    }

    private void Start()
    {
        // Instanciar el script que controla el fondo dinámicamente
        gameObject.AddComponent<BackgroundManager>();

        // Cargar cristales guardados localmente (se sincroniza con el servidor al entrar)
        LocalCrystals = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 100);

        // Sincronizar cristales con el servidor si hay conexión
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            ApiManager.Instance?.GetWallet(crystals =>
            {
                if (crystals >= 0)
                {
                    LocalCrystals = crystals;
                    PlayerPrefs.SetInt(GameConfig.KeyCrystals, crystals);
                    PlayerPrefs.Save();
                }
                UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
            });
        }

        UIManager.Instance?.UpdateScoreDisplay(0);
        UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
        
        // Enviar estado inicial a Flutter
        SincronizarScore();
        SincronizarCristales();
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendReady();
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

    // =========================================================================
    // CRISTALES (balance local, sincronizado con servidor en tiempo real)
    // =========================================================================

    public void AddCrystals(int amount)
    {
        if (amount == 0) return;
        LocalCrystals += amount;
        PlayerPrefs.SetInt(GameConfig.KeyCrystals, LocalCrystals);
        PlayerPrefs.Save();
        UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
        
        // Sincronizar cristales con Flutter solo si cambiaron
        SincronizarCristales();
    }

    public bool SpendCrystalsToRemoveGems(GemType type)
    {
        // Permitimos Pearl y Emerald libremente, O la gema que esté resaltada en rojo por peligro
        bool isHighlighted = GemHighlightManager.Instance != null && GemHighlightManager.Instance.HighlightedType == type;

        if (type != GemType.Pearl && type != GemType.Emerald && !isHighlighted)
        {
            Debug.LogWarning($"[GameManager] No se permite eliminar {type} a menos que esté resaltada.");
            return false;
        }

        int cost = GameConfig.GemCrystalCosts[(int)type];
        if (LocalCrystals < cost) return false;

        // Si el usuario elige Perlas, pausamos el spawner por 5 segundos
        // y dejamos que el código de abajo destruya las perlas existentes.
        if (type == GemType.Pearl)
        {
            GemSpawner spawner = FindAnyObjectByType<GemSpawner>();
            if (spawner != null)
            {
                spawner.PauseSpawningFor(5f);
            }
            Debug.Log($"[GameManager] Spawner de perlas pausado por 5 segundos.");
        }

        // Eliminar todas las gemas de ese tipo que existan en la escena
        Gem[] allGems = FindObjectsByType<Gem>(FindObjectsInactive.Exclude);
        int removed = 0;
        int pointsToAdd = 0;
        foreach (Gem gem in allGems)
        {
            if (gem.gemType == type)
            {
                pointsToAdd += gem.ScoreValue;
                Destroy(gem.gameObject);
                removed++;
            }
        }

        if (removed > 0 || type == GemType.Pearl)
        {
            LocalCrystals -= cost;
            PlayerPrefs.SetInt(GameConfig.KeyCrystals, LocalCrystals);
            PlayerPrefs.Save();
            UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
            SincronizarCristales();
            
            // Sumar al score los puntos de las gemas eliminadas
            if (pointsToAdd > 0)
            {
                AddScore(pointsToAdd);
            }

            Debug.Log($"[GameManager] Eliminadas {removed} gemas de tipo {type}. Puntos sumados: {pointsToAdd}. Cristales restantes: {LocalCrystals}");
        }

        return true;
    }

    public bool SpendCrystalsToRemoveAllGems()
    {
        int cost = GameConfig.ClearAllCrystalCost;
        if (LocalCrystals < cost) return false;

        Gem[] allGems = FindObjectsByType<Gem>(FindObjectsInactive.Exclude);
        int removed = 0;
        int pointsToAdd = 0;
        foreach (Gem gem in allGems)
        {
            pointsToAdd += gem.ScoreValue;
            Destroy(gem.gameObject);
            removed++;
        }

        if (removed > 0)
        {
            GemSpawner spawner = FindAnyObjectByType<GemSpawner>();
            if (spawner != null)
            {
                spawner.PauseSpawningFor(1f);
            }

            LocalCrystals -= cost;
            PlayerPrefs.SetInt(GameConfig.KeyCrystals, LocalCrystals);
            PlayerPrefs.Save();
            UIManager.Instance?.UpdateCrystalDisplay(LocalCrystals);
            SincronizarCristales();
            
            if (pointsToAdd > 0)
            {
                AddScore(pointsToAdd);
            }

            Debug.Log($"[GameManager] Eliminadas TODAS las {removed} gemas. Puntos sumados: {pointsToAdd}. Cristales restantes: {LocalCrystals}");
        }

        return true;
    }

    // =========================================================================
    // WRAPPERS PARA FLUTTER
    // =========================================================================

    public void UsePowerUpPearl(string args = "")
    {
        SpendCrystalsToRemoveGems(GemType.Pearl);
    }

    public void UsePowerUpEmerald(string args = "")
    {
        SpendCrystalsToRemoveGems(GemType.Emerald);
    }

    public void UsePowerUpHighlighted(string args = "")
    {
        if (GemHighlightManager.Instance != null && GemHighlightManager.Instance.HighlightedType.HasValue)
        {
            SpendCrystalsToRemoveGems(GemHighlightManager.Instance.HighlightedType.Value);
        }
        else
        {
            Debug.Log("[GameManager] No hay gemas resaltadas para eliminar.");
        }
    }

    public void UsePowerUpAll(string args = "")
    {
        SpendCrystalsToRemoveAllGems();
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
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            ApiManager.Instance?.SubmitScore(CurrentScore);
        }
        
        // Notificar a Flutter que el juego terminó
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

    private void SincronizarCristales()
    {
        if (FlutterBridgeManager.Instance != null && LocalCrystals != _lastSentCrystals)
        {
            FlutterBridgeManager.Instance.SendCrystalsUpdate(LocalCrystals);
            _lastSentCrystals = LocalCrystals;
        }
    }

    /// <summary>
    /// Suma los puntos de todas las gemas que permanecen en el tablero al terminar.
    /// </summary>
    private int CalculateFinalBonus()
    {
        int bonus = 0;
        Gem[] remaining = FindObjectsByType<Gem>(FindObjectsInactive.Exclude);
        foreach (Gem gem in remaining)
        {
            bonus += gem.ScoreValue;
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
