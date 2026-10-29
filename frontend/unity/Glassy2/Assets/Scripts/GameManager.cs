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
    [Tooltip("[0]Pearl [1]Emerald [2]Amethyst [3]Topaz [4]GreenRuby [5]Sapphire [6]RedRuby [7]Diamond [8]Quartz [9]Stone")]
    public GameObject[] gemPrefabs = new GameObject[10];

    [Header("Punto de spawn (cuello de la botella)")]
    public Transform spawnPoint;

    [Header("TikTok Live — Spawn dentro del Frasco")]
    [Tooltip("Centro de spawn dentro del frasco (debajo del cuello)")]
    public Vector2 flaskSpawnCenter = new Vector2(0f, -0.5f);
    [Tooltip("Área máxima aleatoria para dispersar las gemas generadas por TikTok")]
    public Vector2 flaskSpawnArea = new Vector2(1.5f, 1.2f);

    [Header("VFX Opcional")]
    public GameObject diamondExplosionVFX; // Particle System que explota al obtener diamante

    // =========================================================================
    // ESTADO DEL JUEGO
    // =========================================================================

    public int  CurrentScore  { get; private set; } = 0;
    public int  LocalCrystals { get; private set; } = 0;
    public bool IsPaused      { get; private set; } = false;
    public bool IsGameOver    { get; private set; } = false;
    public bool HasUsedReviveThisMatch { get; private set; } = false;

    // Track active gems for performance (O(1) add/remove avoids FindObjectsByType)
    [System.NonSerialized]
    public HashSet<Gem> activeGems = new HashSet<Gem>();

    // =========================================================================
    // MECÁNICAS DE COMBO CLÁSICO
    // =========================================================================
    public int CurrentComboMultiplier => _comboMultiplier;
    public GemType? ActiveComboGemType => _activeComboGemType;
    private int _comboMultiplier = 0;
    private float _comboTimer = 0f;
    private GemType? _activeComboGemType = null;
    public const float COMBO_TIME_LIMIT = GameConfig.ComboTimeLimit;

    private int _lastSentScore = -1;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        Time.timeScale = 1f;

        // Mantener ejecución fluida en segundo plano para streams desatendidos y monitoreo de chat
        Application.runInBackground = true;

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

        // Asegurar que la música de fondo siempre comience al iniciar cada partida
        AudioManager.Instance?.PlayMusic();

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
        if (_comboTimer > 0f)
        {
            _comboTimer -= Time.deltaTime;
            if (_comboTimer <= 0f)
            {
                ResetCombo();
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

        GameObject obj = Instantiate(gemPrefabs[index], position, Quaternion.identity);
        Rigidbody2D rb = obj.GetComponent<Rigidbody2D>();
        if (rb != null)
        {
            rb.linearVelocity = Vector2.zero;
            rb.angularVelocity = 0f;
        }

        StartCoroutine(SmoothEvolvedGemSpawn(obj.transform));
    }

    private System.Collections.IEnumerator SmoothEvolvedGemSpawn(Transform t)
    {
        if (t == null) yield break;
        Vector3 finalScale = t.localScale;
        t.localScale = finalScale * 0.4f;
        float elapsed = 0f;
        float duration = 0.18f;
        while (elapsed < duration)
        {
            if (t == null) yield break;
            elapsed += Time.deltaTime;
            float factor = Mathf.SmoothStep(0f, 1f, elapsed / duration);
            t.localScale = Vector3.Lerp(finalScale * 0.4f, finalScale, factor);
            yield return null;
        }
        if (t != null) t.localScale = finalScale;
    }

    /// <summary>
    /// Instancia una perla en el punto de spawn (llamado por GemSpawner).
    /// </summary>
    public void SpawnPearl()
    {
        if (gemPrefabs[0] == null) return;
        Instantiate(gemPrefabs[0], spawnPoint.position, Quaternion.identity);
    }

    /// <summary>
    /// Spawnea elementos directamente dentro del frasco (llamado por eventos de TikTok Live).
    /// Evita pasar por el cuello/tubo para no congestionar las perlas.
    /// </summary>
    public void SpawnInFlask(GemType type, int count = 1)
    {
        StartCoroutine(SpawnInFlaskRoutine(type, count));
    }

    private System.Collections.IEnumerator SpawnInFlaskRoutine(GemType type, int count)
    {
        int index = (int)type;
        if (index < 0 || index >= gemPrefabs.Length || gemPrefabs[index] == null)
        {
            Debug.LogWarning($"[TikTok Live] Prefab no asignado en gemPrefabs para {type} (índice {index})");
            yield break;
        }

        for (int i = 0; i < count; i++)
        {
            Vector2 offset = new Vector2(
                Random.Range(-flaskSpawnArea.x * 0.5f, flaskSpawnArea.x * 0.5f),
                Random.Range(-flaskSpawnArea.y * 0.5f, flaskSpawnArea.y * 0.5f)
            );
            Vector2 pos = flaskSpawnCenter + offset;

            GameObject obj = Instantiate(gemPrefabs[index], pos, Quaternion.identity);

            // Impulso suave aleatorio para que se dispersen naturalmente
            Rigidbody2D rb = obj.GetComponent<Rigidbody2D>();
            if (rb != null)
            {
                rb.linearVelocity = new Vector2(Random.Range(-1.2f, 1.2f), Random.Range(-0.5f, 1.2f));
            }

            if (count > 1)
            {
                yield return new WaitForSeconds(0.06f); // Efecto cascada/avalancha
            }
        }
    }

    /// <summary>
    /// Registra la fusión de dos cuarzos: otorga 20 puntos y reproduce sonido.
    /// </summary>
    public void RegisterQuartzMerge(Vector2 position)
    {
        int points = GameConfig.GemScoreValues[(int)GemType.Quartz];
        AddScore(points);
        AudioManager.Instance?.PlayGemMerge(GemType.Quartz);
        Debug.Log($"[CUARZO] ¡Fusión de Cuarzos en {position}! +{points} puntos y espacio liberado.");
    }

    /// <summary>
    /// Destruye piedras cercanas dentro de un radio cuando ocurre una fusión de gemas adyacente.
    /// Otorga 30 puntos por cada piedra eliminada.
    /// </summary>
    public void DestroyNearbyStones(Vector2 blastCenter, float radius = 1.8f)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(blastCenter, radius);
        int stonePoints = GameConfig.GemScoreValues[(int)GemType.Stone];

        foreach (var col in colliders)
        {
            Gem gem = col.GetComponent<Gem>();
            if (gem != null && gem.gemType == GemType.Stone && !gem.CompareTag("Finish"))
            {
                gem.tag = "Finish"; // Marcador para evitar procesar dos veces en el mismo frame
                activeGems.Remove(gem);
                AddScore(stonePoints);
                AudioManager.Instance?.PlayGemMerge(GemType.Stone);
                Destroy(gem.gameObject);
                Debug.Log($"[PIEDRA] ¡Piedra eliminada por fusión cercana en {blastCenter}! +{stonePoints} puntos.");
            }
        }
    }

    // =========================================================================
    // SCORE Y BONUS
    // =========================================================================

    public void AddScore(int amount)
    {
        if (IsGameOver || amount <= 0) return;
        CurrentScore += amount;
        UIManager.Instance?.UpdateScoreDisplay(CurrentScore);
        
        // Notificar a micro-misiones de TikTok
        TikTokMissionManager.Instance?.OnScoreAdded(amount);

        // Enviar nuevo score a Flutter solo si cambió
        SincronizarScore();
    }

    public void ResetCombo()
    {
        if (_comboMultiplier > 0)
        {
            Debug.Log($"[COMBO] Ventana de combo expirada ({_activeComboGemType}). Multiplicador reiniciado.");
        }
        _comboMultiplier = 0;
        _comboTimer = 0f;
        _activeComboGemType = null;
        AudioManager.Instance?.ResetPitch();
    }

    /// <summary>
    /// Maneja el sistema clásico de combos y puntuación de Glassy:
    /// - Cada vez que 2 gemas del mismo tipo se unen:
    ///   * 1a unión de un tipo (ej. Esmeralda): X1 (iniciador / alerta al sistema, ventana de tiempo abierta sin popup de combo).
    ///   * 2a unión consecutiva DEL MISMO ELEMENTO dentro del tiempo límite: Comienza el combo real (¡X2!).
    ///   * 3a unión consecutiva DEL MISMO ELEMENTO dentro del tiempo límite: ¡X3!
    ///   * Si se fusiona un elemento DIFERENTE antes de que expire el tiempo:
    ///     Se cancela el combo anterior y este nuevo elemento inicia una nueva racha en X1 (preparatorio).
    ///   * Si pasan más de 3 segundos sin fusiones del mismo elemento:
    ///     El combo expira y se reinicia por completo.
    /// - Las perlas son iniciadores automáticos sin intervención humana: crean esmeraldas
    ///   y otorgan sus puntos base, pero NO inician ni avanzan combos para evitar farming pasivo.
    /// </summary>
    public void RegisterMerge(GemType mergedType, GemType resultType, bool isUserInteraction)
    {
        int basePoints = GameConfig.GemScoreValues[(int)resultType];

        // 1. PERLAS (Iniciador automático / Generador de gemas base)
        // Las perlas caen continuamente y se unen de forma natural para crear esmeraldas.
        // Otorgan sus puntos base pero NO alteran el multiplicador de combo del jugador.
        if (mergedType == GemType.Pearl)
        {
            AddScore(basePoints);
            AudioManager.Instance?.PlayGemMerge(resultType);
            MissionManager.Instance?.RegisterGemCreated(resultType);
            TikTokMissionManager.Instance?.OnGemMerged(mergedType, resultType);
            return;
        }

        // 2. ELEMENTOS JUGABLES (Esmeralda, Amatista, Topacio, Rubí Verde, Zafiro, Rubí Rojo)
        // Verificamos si hay un combo activo dentro de la ventana de tiempo Y si es EXACTAMENTE DEL MISMO TIPO
        if (_comboTimer > 0f && _comboMultiplier >= 1 && _activeComboGemType.HasValue && _activeComboGemType.Value == mergedType)
        {
            // Siguiente unión consecutiva del MISMO elemento dentro de la ventana -> Sube el multiplicador (X2, X3, X4...)
            _comboMultiplier++;
            _comboTimer = COMBO_TIME_LIMIT; // Reiniciar ventana de tiempo
            AudioManager.Instance?.IncreasePitch();

            // Puntos escalados por el multiplicador
            int totalPoints = basePoints * _comboMultiplier;
            AddScore(totalPoints);

            Debug.Log($"[COMBO] ¡COMBO X{_comboMultiplier} ({mergedType})! Puntos sumados: {totalPoints}");

            // Notificar a Flutter para mostrar overlay animado en tiempo real: "¡COMBO X{n}!\n+{puntos}"
            if (FlutterBridgeManager.Instance != null)
            {
                FlutterBridgeManager.Instance.SendComboBonus(totalPoints, _comboMultiplier);
            }
        }
        else
        {
            // CASO NUEVO ELEMENTO O COMBO EXPIRADO:
            if (_comboMultiplier > 1 && _activeComboGemType.HasValue && _activeComboGemType.Value != mergedType)
            {
                Debug.Log($"[COMBO] Combo previo de {_activeComboGemType.Value} (X{_comboMultiplier}) cancelado por cambio a {mergedType}.");
            }

            // Primer merge: X1
            // Sirve como preparatorio para decirle al sistema "atento a la próxima fusión del mismo tipo"
            _activeComboGemType = mergedType;
            _comboMultiplier = 1;
            _comboTimer = COMBO_TIME_LIMIT;
            AudioManager.Instance?.ResetPitch();

            AddScore(basePoints);
            Debug.Log($"[COMBO] Primer merge registrado ({mergedType} -> X1). Combo preparado ({COMBO_TIME_LIMIT}s). Puntos: {basePoints}");
        }

        // 3. SALVADA ÉPICA (Near Miss)
        // Si estamos en zona de peligro (90% lleno) y hacemos una fusión grande (Rubí Verde o mayor)
        if (GameOverZone.IsInDanger && resultType >= GemType.GreenRuby) 
        {
             int survivalBonus = 100;
             AddScore(survivalBonus);
             Debug.Log($"[SALVADA ÉPICA] Supervivencia al límite: +{survivalBonus} puntos!");
             
             if (FlutterBridgeManager.Instance != null) {
                 FlutterBridgeManager.Instance.SendEpicSave(survivalBonus);
             }
        }

        // 4. SONIDO DE FUSIÓN (aplica la escala musical actual del combo)
        AudioManager.Instance?.PlayGemMerge(resultType);

        // 5. MICRO-MISIONES EXPRESS (Móvil)
        if (MissionManager.Instance != null)
        {
            MissionManager.Instance.RegisterGemCreated(resultType);
        }

        // 6. MICRO-MISIONES DINÁMICAS (TikTok Live)
        if (TikTokMissionManager.Instance != null)
        {
            TikTokMissionManager.Instance.OnGemMerged(mergedType, resultType);
            TikTokMissionManager.Instance.OnComboUpdated(mergedType, _comboMultiplier);
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
    // GAME OVER & REVIVE (APPODEAL MONETIZATION)
    // =========================================================================

    /// <summary>
    /// Alias para terminar la partida forzosamente desde Flutter al abandonar o rendirse.
    /// </summary>
    public void ForceGameOver(string args = "")
    {
        ProcessFinalGameOver();
    }

    /// <summary>
    /// Dispara la oportunidad de salvar partida (Appodeal) o el Game Over.
    /// Llamado por GameOverZone cuando las gemas desbordan la botella.
    /// </summary>
    public void TriggerGameOver(string args = "")
    {
        if (IsGameOver) return;

        // Skill 4: Comprobar si el Escudo Salvavidas del Streamer está activo
        if (TikTokSkillsManager.Instance != null && TikTokSkillsManager.Instance.TryConsumeLifeShield())
        {
            return;
        }

        // Si es forzado (ej: abandonar partida) o ya utilizó su salvación en esta partida: Game Over definitivo
        if (args == "force" || HasUsedReviveThisMatch)
        {
            ProcessFinalGameOver();
            return;
        }

        // Oportunidad de Revivir (Appodeal Rewarded Ad)
        Debug.Log("[GameManager] Oportunidad de Revivir activada. Congelando física y notificando a Flutter...");
        Time.timeScale = 0f; // Congelar física inmediatamente

        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendReviveOpportunity(CurrentScore);
        }
        else
        {
            ProcessFinalGameOver();
        }
    }

    /// <summary>
    /// Revive la partida tras ver un video recompensado. Destruye gemas en peligro y reanuda física.
    /// </summary>
    public void ReviveGame(string args = "")
    {
        if (HasUsedReviveThisMatch || IsGameOver) return;
        HasUsedReviveThisMatch = true;

        Debug.Log("[GameManager] ¡Partida Revivida! Limpiando gemas en zona de peligro...");
        ClearDangerZoneGems();

        // Sonido de feedback positivo
        AudioManager.Instance?.PlayDiamondSequence();

        // Resetear la zona de peligro
        GameOverZone.Instance?.ResetZone();

        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendDangerZone(false);
        }

        // Reanudar el tiempo y la física
        Time.timeScale = 1f;
    }

    /// <summary>
    /// El usuario o el temporizador rechazó la oportunidad de revivir.
    /// </summary>
    public void DeclineRevive(string args = "")
    {
        ProcessFinalGameOver();
    }

    /// <summary>
    /// Procesa el Game Over definitivo (cálculo de bonus, UI y notificación al puente).
    /// </summary>
    public void ProcessFinalGameOver()
    {
        if (IsGameOver) return;
        IsGameOver = true;

        ResetCombo();
        Time.timeScale = 0f; // Congelar física

        // Calcular bonus final: sumar puntos de todas las gemas que quedan en pantalla
        int bonusScore = CalculateFinalBonus();
        CurrentScore  += bonusScore;

        Debug.Log($"[GameManager] Game Over Definitivo! Score final: {CurrentScore} (bonus: {bonusScore})");

        // Reproducir sonido de game over
        AudioManager.Instance?.PlayGameOver();

        // Mostrar UI de Game Over
        UIManager.Instance?.ShowGameOver(CurrentScore);

        // Notificar a TikTok Live si estamos en la escena de stream
        TikTokUIController.Instance?.ShowEventAlert($"💥 ¡GAME OVER! Score: {CurrentScore:N0} — Presiona [Espacio] para reiniciar");

        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendGameOver(CurrentScore, false);
        }
    }

    /// <summary>
    /// Destruye las gemas situadas en la parte superior (zona de peligro) para dar espacio libre al revivir.
    /// </summary>
    private void ClearDangerZoneGems()
    {
        var gemsList = new System.Collections.Generic.List<Gem>(activeGems);
        if (gemsList.Count == 0) return;

        // Ordenar por coordenada Y descendente (las gemas que están más arriba primero)
        gemsList.Sort((a, b) => b.transform.position.y.CompareTo(a.transform.position.y));

        // Destruir el 35% de las gemas más altas (mínimo 3, máximo 8)
        int countToDestroy = Mathf.Clamp(Mathf.CeilToInt(gemsList.Count * 0.35f), 3, Mathf.Min(8, gemsList.Count));

        int rescuedPoints = 0;
        for (int i = 0; i < countToDestroy; i++)
        {
            Gem gem = gemsList[i];
            if (gem != null)
            {
                rescuedPoints += gem.ScoreValue;
                activeGems.Remove(gem);
                Destroy(gem.gameObject);
            }
        }

        if (rescuedPoints > 0)
        {
            AddScore(rescuedPoints);
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
    /// Elimina gemas en un rango de tipos y acredita todos sus puntos acumulados al jugador.
    /// Usado por el regalo de $0.05 de TikTok Live (Topacio a Rubí).
    /// </summary>
    public int ClearGemsInRange(GemType minType, GemType maxType)
    {
        int totalPoints = 0;
        var toDestroy = new System.Collections.Generic.List<Gem>();

        foreach (Gem gem in activeGems)
        {
            if (gem != null && gem.gemType >= minType && gem.gemType <= maxType)
            {
                toDestroy.Add(gem);
            }
        }

        foreach (Gem gem in toDestroy)
        {
            totalPoints += gem.ScoreValue;
            activeGems.Remove(gem);
            Destroy(gem.gameObject);
        }

        if (totalPoints > 0)
        {
            AddScore(totalPoints);
        }

        Debug.Log($"[GameManager] ClearGemsInRange ({minType}..{maxType}): {toDestroy.Count} gemas eliminadas, +{totalPoints} puntos.");
        return totalPoints;
    }

    /// <summary>
    /// Elimina todas las gemas del tablero y acredita todos sus puntos acumulados al jugador.
    /// Usado por el regalo de $0.10 de TikTok Live (Limpieza total).
    /// </summary>
    public int ClearAllGemsWithPoints()
    {
        int totalPoints = 0;
        var toDestroy = new System.Collections.Generic.List<Gem>(activeGems);

        foreach (Gem gem in toDestroy)
        {
            if (gem != null)
            {
                totalPoints += gem.ScoreValue;
                activeGems.Remove(gem);
                Destroy(gem.gameObject);
            }
        }

        if (totalPoints > 0)
        {
            AddScore(totalPoints);
        }

        Debug.Log($"[GameManager] ClearAllGemsWithPoints: {toDestroy.Count} gemas eliminadas, +{totalPoints} puntos.");
        return totalPoints;
    }

    /// <summary>
    /// Reinicia la escena de juego activa (soporta GameScene y TikTokScene).
    /// </summary>
    public void RestartGame(string args = "")
    {
        Time.timeScale = 1f;
        AudioManager.Instance?.PlayMusic();
        string currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
        if (string.IsNullOrEmpty(currentScene)) currentScene = GameConfig.SceneGame;
        UnityEngine.SceneManagement.SceneManager.LoadScene(currentScene);
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
