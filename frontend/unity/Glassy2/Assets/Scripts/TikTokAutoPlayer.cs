using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Estilos de movimiento del bot emulando interacción humana en pantalla.
/// </summary>
public enum BotMovementStyle
{
    DirectClose = 0,
    ParabolicArc = 1,
    HeavyPush = 2,
    WallBounce = 3
}

/// <summary>
/// TikTokAutoPlayer — Jugador Autónomo Indetectable ("Ghost Player") para TikTok Live PC.
///
/// LÓGICA BASE RESPETADA AL 100%:
/// 1. Las perlas caen solas, tocan el fondo/suelo y se fusionan automáticamente entre sí al chocar.
/// 2. El bot NO toca las perlas. Solo juega con las gemas creadas (Esmeralda, Amatista, Topacio, etc.).
/// 3. El bot emula el dedo de un jugador: selecciona una gema y la arrastra hacia su pareja más cercana.
/// 4. Al impactar, se dispara la fusión natural con su sonido, partículas y combos originales.
/// 5. MODO CREADOR: 100% gratuito y desbloqueado de por vida para el dueño del juego.
/// </summary>
public class TikTokAutoPlayer : MonoBehaviour
{
    public static TikTokAutoPlayer Instance { get; private set; }

    [Header("👑 Modo Creador (Acceso Gratuito de por Vida)")]
    public bool isCreatorMode = true;

    [Header("Control General")]
    public bool enableAutoPlayer = true;
    public bool isSkillUnlocked = true;
    public KeyCode toggleKey = KeyCode.B;
    public KeyCode forcePlayKey = KeyCode.Space;

    [Header("Tiempos Humanos (Cadencia)")]
    [Tooltip("Espera inicial para que caigan las primeras perlas y formen esmeraldas en la base (calibrado en 10s)")]
    public float initialWarmupDelay = 10.0f;

    [Tooltip("Intervalo normal entre jugadas de los bots (calibrado a 5.0s)")]
    public float moveInterval = 5.0f;

    [Tooltip("Fuerza base de impulso físico aplicada")]
    public float baseImpulseForce = 3.0f;

    [Tooltip("Altura límite en Y para detectar riesgo crítico de Game Over")]
    public float dangerThresholdY = 1.15f;

    [Header("🧹 Modo Barredora Universal (Cascada Piramidal hacia Diamante)")]
    [Tooltip("Intervalo de espera entre fusiones en modo racha/barredora (exactamente 1 segundo)")]
    public float sweepMergeInterval = 1.0f;

    // Estado interno
    private int _activeBotIndex = 0;
    private GemType? _activeSweepTier = null;
    private Coroutine _botLoopCoroutine;
    private Coroutine _activeDragCoroutine;

    // Auto-instanciación de respaldo en runtime (Solo para la escena TikTokScene original)
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void EnsureAutoPlayerExists()
    {
        if (UnityEngine.SceneManagement.SceneManager.GetActiveScene().name != "TikTokScene") return;

        if (Instance == null)
        {
            var existing = Object.FindAnyObjectByType<TikTokAutoPlayer>();
            if (existing == null)
            {
                var gm = GameManager.Instance != null ? GameManager.Instance.gameObject : GameObject.Find("GameManager");
                if (gm != null)
                {
                    gm.AddComponent<TikTokAutoPlayer>();
                }
            }
        }
    }

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(this); return; }
        Instance = this;

        Time.timeScale = 1f;
        isSkillUnlocked = true;
        enableAutoPlayer = true;
        isCreatorMode = true;

        if (moveInterval < 3.0f) moveInterval = 5.0f;
        if (initialWarmupDelay <= 1.0f) initialWarmupDelay = 10.0f;
        if (sweepMergeInterval <= 0.1f) sweepMergeInterval = 1.0f;
        if (baseImpulseForce > 3.8f || baseImpulseForce <= 0.5f) baseImpulseForce = 3.0f;
    }

    private void Start()
    {
        Time.timeScale = 1f;
        enableAutoPlayer = true;
        isSkillUnlocked = true;

        StartAgents();
    }

    private void Update()
    {
        // Tecla rápida [B] para alternar el bot en vivo si se desea
        if (Input.GetKeyDown(toggleKey))
        {
            enableAutoPlayer = !enableAutoPlayer;
            string status = enableAutoPlayer ? "<color=#00FFAA>ACTIVADO</color>" : "<color=#FF4444>PAUSADO</color>";
            Debug.Log($"[TikTokAutoPlayer] Estado del Streamer Bot: {status}");

            if (enableAutoPlayer)
                StartAgents();
            else
                StopAgents();
        }

        // Tecla opcional [Espacio] para forzar tiro inmediato de prueba
        if (Input.GetKeyDown(forcePlayKey))
        {
            TriggerImmediateMove();
        }
    }

    public void StartAgents()
    {
        StopAgents();
        _botLoopCoroutine = StartCoroutine(HumanBotLoop());
    }

    public void StopAgents()
    {
        if (_botLoopCoroutine != null)
        {
            StopCoroutine(_botLoopCoroutine);
            _botLoopCoroutine = null;
        }
        if (_activeDragCoroutine != null)
        {
            StopCoroutine(_activeDragCoroutine);
            _activeDragCoroutine = null;
        }
    }

    public void TriggerImmediateMove()
    {
        BotMovementStyle activeStyle = (BotMovementStyle)_activeBotIndex;
        MoveCandidate move = EvaluateMove(activeStyle);
        if (move.IsValid)
        {
            if (_activeDragCoroutine != null) StopCoroutine(_activeDragCoroutine);
            _activeDragCoroutine = StartCoroutine(HumanDragRoutine(move.source, move.target, activeStyle));
            _activeBotIndex = (_activeBotIndex + 1) % 4;
        }
        else
        {
            ExecuteGentleNudge();
        }
    }

    private string GetBotName(BotMovementStyle style)
    {
        switch (style)
        {
            case BotMovementStyle.DirectClose:
                return "Bot 1 (Estratega Directo)";
            case BotMovementStyle.ParabolicArc:
                return "Bot 2 (Acróbata Parábola)";
            case BotMovementStyle.HeavyPush:
                return "Bot 3 (Titán Empujador)";
            case BotMovementStyle.WallBounce:
                return "Bot 4 (Francotirador Rebote)";
            default:
                return "Bot Gamer";
        }
    }

    // =========================================================================
    // BUCLE PRINCIPAL DE JUEGO (Humano, Orgánico y sin alterar la física base)
    // =========================================================================

    private IEnumerator HumanBotLoop()
    {
        // 1. ESPERA INICIAL (Calibrado en 10s para acumular gemas en el frasco)
        Debug.Log($"[TikTokAutoPlayer] ⏳ Calentamiento inicial: esperando {initialWarmupDelay:F0}s para acumular gemas en el frasco antes de comenzar...");

        float elapsed = 0f;
        while (elapsed < initialWarmupDelay)
        {
            // Solo intervenir anticipadamente si el tablero llega a altura crítica de Game Over
            if (IsBoardInCriticalDanger())
            {
                Debug.LogWarning("[TikTokAutoPlayer] ⚠️ Nivel crítico de Game Over alcanzado durante calentamiento. ¡Interviniendo para salvar la partida!");
                break;
            }

            elapsed += 0.5f;
            yield return new WaitForSeconds(0.5f);
        }

        Debug.Log("[TikTokAutoPlayer] 🚀 ¡Bots Gamers activos tras calentamiento! Iniciando rotación de 4 bots en relevos de 5s.");

        // 2. CICLO REGULAR (Relevo de los 4 Bots cada ~5s)
        while (true)
        {
            if (!enableAutoPlayer)
            {
                yield return new WaitForSeconds(0.5f);
                continue;
            }

            if (Time.timeScale < 0.1f && GameManager.Instance != null && !GameManager.Instance.IsGameOver)
            {
                Time.timeScale = 1f;
            }

            EnsureGemsInsideFlask();
            var gems = GetPlayableGems();
            int gemCount = gems.Count;
            bool isEmergency = IsBoardInCriticalDanger();

            // PASO 3: Detección Universal de Saturación (para CUALQUIER nivel de gema)
            GemType? saturatedTier = FindSaturatedTier(gems);
            if (saturatedTier.HasValue)
            {
                if (!_activeSweepTier.HasValue || _activeSweepTier.Value != saturatedTier.Value)
                {
                    _activeSweepTier = saturatedTier.Value;
                    int count = gems.Count(g => g != null && g.gemType == _activeSweepTier.Value);
                    Debug.Log($"[TikTokAutoPlayer] 🧹 ¡MODO BARREDORA UNIVERSAL ({_activeSweepTier.Value})! ({count} acumuladas). Limpiando en ráfaga de {sweepMergeInterval:F1}s...");
                }
            }
            else
            {
                if (_activeSweepTier.HasValue)
                {
                    Debug.Log($"[TikTokAutoPlayer] ✨ ¡Barredora ({_activeSweepTier.Value}) completada! Regresando a ritmo normal de 5s.");
                    _activeSweepTier = null;
                }
            }

            BotMovementStyle currentStyle = (BotMovementStyle)_activeBotIndex;
            string botName = GetBotName(currentStyle);

            // Simular breve tiempo de análisis humano (0.1s en barredora rápida, 0.3s a 0.5s en normal)
            float thinkTime = _activeSweepTier.HasValue ? 0.1f : Random.Range(0.3f, 0.5f);
            yield return new WaitForSeconds(thinkTime);

            MoveCandidate move = EvaluateMove(currentStyle);

            if (move.IsValid)
            {
                string tag = _activeSweepTier.HasValue ? $"🧹 [BARREDORA {_activeSweepTier.Value}]" : "🤖";
                Debug.Log($"[TikTokAutoPlayer] {tag} {botName} juega: {move.source.gemType} hacia {move.target.gemType} (Score: {move.score:F0} | Obstáculos: {move.obstacles})");
                if (_activeDragCoroutine != null) StopCoroutine(_activeDragCoroutine);
                yield return StartCoroutine(HumanDragRoutine(move.source, move.target, currentStyle));
            }
            else
            {
                // PASO 11: Desatasco por Impares
                ExecuteGentleNudge();
                yield return new WaitForSeconds(0.3f);
            }

            // Pasar el turno al siguiente bot del equipo (Relevo de 4)
            _activeBotIndex = (_activeBotIndex + 1) % 4;

            // CADENCIA DE RESPUESTA:
            // - Si está en modo barredora de cualquier nivel: exactamente 1 segundo entre fusiones
            // - Si hay peligro crítico o frasco lleno (>=14 gemas): ~2.0s a 2.6s para descongestionar rápido.
            // - Si hay muchas gemas (>=9 gemas): ~3.0s a 3.6s.
            // - Tablero normal: ~3.8s a 4.4s (completando los ~5s totales por turno con el drag y pensamiento).
            float waitTime;
            if (_activeSweepTier.HasValue)
            {
                waitTime = sweepMergeInterval; // 1.0 segundo entre fusiones
            }
            else if (isEmergency || gemCount >= 14)
            {
                waitTime = Random.Range(2.0f, 2.6f);
                Debug.Log($"[TikTokAutoPlayer] ⚡ Alerta de congestión ({gemCount} gemas): ritmo acelerado a {waitTime:F1}s");
            }
            else if (gemCount >= 9)
            {
                waitTime = Random.Range(3.0f, 3.6f);
            }
            else
            {
                waitTime = Random.Range(3.8f, 4.4f);
            }

            yield return new WaitForSeconds(waitTime);
        }
    }

    private bool IsBoardInCriticalDanger()
    {
        if (GameOverZone.IsInDanger) return true;
        var gems = GetPlayableGems();
        if (gems.Count >= 16) return true;

        for (int i = 0; i < gems.Count; i++)
        {
            Gem g = gems[i];
            if (g != null && g.transform.position.y > dangerThresholdY)
            {
                return true;
            }
        }
        return false;
    }

    // =========================================================================
    // EVALUACIÓN DE JUGADAS (Puntuación Inteligente hasta Diamante + Evasión de Bloqueos)
    // =========================================================================

    private struct MoveCandidate
    {
        public Gem source;
        public Gem target;
        public float score;
        public int obstacles;
        public bool IsValid => source != null && target != null;
    }

    private MoveCandidate EvaluateMove(BotMovementStyle activeStyle)
    {
        MoveCandidate best = default;
        List<Gem> gems = GetPlayableGems();
        if (gems.Count < 2) return best;

        // PASO 1: PRIORIDAD CERO - SALVAMENTO DE GAME OVER
        Gem dangerGem = gems
            .Where(g => g != null && g.transform.position.y > dangerThresholdY)
            .OrderByDescending(g => g.transform.position.y)
            .FirstOrDefault();

        if (dangerGem != null)
        {
            var partners = gems.Where(g => g != null && g != dangerGem && g.gemType == dangerGem.gemType).ToList();
            if (partners.Count > 0)
            {
                var closest = partners.OrderBy(p => Vector2.Distance(dangerGem.transform.position, p.transform.position)).First();
                return new MoveCandidate { source = dangerGem, target = closest, score = 99999f, obstacles = 0 };
            }
        }

        // PASO 2: PRIORIDAD SUPREMA - RADAR DEL DIAMANTE (2 Rubíes Rojos)
        var redRubies = gems.Where(g => g != null && g.gemType == GemType.RedRuby).ToList();
        if (redRubies.Count >= 2)
        {
            MoveCandidate diamondMove = FindBestPairOfType(redRubies, activeStyle, 10000f);
            if (diamondMove.IsValid)
            {
                Debug.Log("💎 [TikTokAutoPlayer] ¡¡RADAR DEL DIAMANTE ACTIVADO!! Fusionando Rubíes Rojos para crear el Diamante...");
                return diamondMove;
            }
        }

        // PASO 3: MODO BARREDORA UNIVERSAL (Si un nivel específico superó su saturación)
        if (_activeSweepTier.HasValue)
        {
            var sweepGems = gems.Where(g => g != null && g.gemType == _activeSweepTier.Value).ToList();
            if (sweepGems.Count >= 2)
            {
                MoveCandidate sweepMove = FindBestPairOfType(sweepGems, activeStyle, 5000f);
                if (sweepMove.IsValid)
                {
                    return sweepMove;
                }
            }
        }

        int totalGems = gems.Count;
        float congestion = Mathf.Clamp01((totalGems - 6f) / 10f); // 0 (calma) a 1 (congestión alta)

        // MATRIZ DE GEMAS EVALUADAS HASTA EL DIAMANTE
        GemType[] playableTypes = {
            GemType.Emerald,
            GemType.Amethyst,
            GemType.Topaz,
            GemType.GreenRuby,
            GemType.Sapphire,
            GemType.RedRuby,
            GemType.Quartz
        };

        float bestScore = float.MinValue;

        foreach (GemType type in playableTypes)
        {
            var ofType = gems.Where(g => g != null && g.gemType == type).ToList();
            if (ofType.Count < 2) continue;

            // PASO 5: Despeje Volumétrico y Puntuación Base por Jerarquía
            float baseTierScore = 0f;
            switch (type)
            {
                case GemType.RedRuby:
                    baseTierScore = 120f;
                    break;
                case GemType.Sapphire:
                    baseTierScore = 80f + (congestion * 35f);
                    break;
                case GemType.GreenRuby:
                    baseTierScore = 65f + (congestion * 40f);
                    break;
                case GemType.Topaz:
                    baseTierScore = 50f + (congestion * 50f);
                    break;
                case GemType.Quartz:
                    baseTierScore = 40f + (congestion * 30f);
                    break;
                case GemType.Amethyst:
                    int amCount = ofType.Count;
                    baseTierScore = 30f + ((1f - congestion) * 20f) + (amCount >= 4 ? (amCount * 6f) : 0f);
                    break;
                case GemType.Emerald:
                    int emCount = ofType.Count;
                    baseTierScore = 20f + ((1f - congestion) * 20f) + (emCount >= 5 ? (emCount * 5f) : 0f);
                    break;
            }

            for (int i = 0; i < ofType.Count; i++)
            {
                for (int j = i + 1; j < ofType.Count; j++)
                {
                    Gem gA = ofType[i];
                    Gem gB = ofType[j];
                    if (gA == null || gB == null) continue;

                    Vector2 posA = gA.transform.position;
                    Vector2 posB = gB.transform.position;
                    float dist = Vector2.Distance(posA, posB);

                    // PASO 7: Bono de proximidad física
                    float proxScore = Mathf.Clamp(4.0f - dist, 0f, 4.0f) * 12f;

                    // PASO 1: Altura / prevención de desborde hacia el cuello
                    float maxY = Mathf.Max(posA.y, posB.y);
                    float heightScore = (maxY > 0f) ? (maxY * 35f) : 0f;
                    if (maxY > dangerThresholdY * 0.75f) heightScore += 90f;

                    // PASO 4: Detector de Reacciones en Cadena (Combos 2-en-1)
                    Vector2 midPoint = (posA + posB) * 0.5f;
                    float comboBonus = WouldTriggerChainReaction(type, midPoint, gems) ? 65f : 0f;

                    // PASO 8: Evasión de Bloqueos según el estilo del bot
                    int obstacles = CountObstaclesBetween(posA, posB, gA, gB);
                    float blockagePenalty = 0f;

                    if (obstacles > 0)
                    {
                        if (activeStyle == BotMovementStyle.DirectClose)
                            blockagePenalty = (obstacles >= 2) ? 75f : 30f;
                        else if (activeStyle == BotMovementStyle.ParabolicArc)
                            blockagePenalty = (obstacles > 2) ? 25f : 0f;
                        else if (activeStyle == BotMovementStyle.HeavyPush)
                            blockagePenalty = (obstacles > 3) ? 30f : 8f;
                        else if (activeStyle == BotMovementStyle.WallBounce)
                            blockagePenalty = (obstacles > 2) ? 35f : 12f;
                    }

                    float totalScore = baseTierScore + proxScore + heightScore + comboBonus - blockagePenalty;

                    if (totalScore > bestScore)
                    {
                        bestScore = totalScore;
                        // PASO 7 (Evitar Efecto Sándwich): Siempre arrastrar la gema superior hacia la inferior
                        Gem src = (posA.y >= posB.y) ? gA : gB;
                        Gem dst = (src == gA) ? gB : gA;
                        best = new MoveCandidate
                        {
                            source = src,
                            target = dst,
                            score = totalScore,
                            obstacles = obstacles
                        };
                    }
                }
            }
        }

        return best;
    }

    /// <summary>
    /// PASO 3 & 7: Encuentra el mejor par de un tipo específico (para modo barredora o diamante).
    /// </summary>
    private MoveCandidate FindBestPairOfType(List<Gem> gemsOfType, BotMovementStyle activeStyle, float baseScore)
    {
        MoveCandidate best = default;
        float bestScore = float.MinValue;

        for (int i = 0; i < gemsOfType.Count; i++)
        {
            for (int j = i + 1; j < gemsOfType.Count; j++)
            {
                Gem gA = gemsOfType[i];
                Gem gB = gemsOfType[j];
                if (gA == null || gB == null) continue;

                Vector2 posA = gA.transform.position;
                Vector2 posB = gB.transform.position;
                float dist = Vector2.Distance(posA, posB);

                float proxScore = Mathf.Clamp(4.0f - dist, 0f, 4.0f) * 20f;
                int obstacles = CountObstaclesBetween(posA, posB, gA, gB);
                float penalty = obstacles * 12f;

                float score = baseScore + proxScore - penalty;
                if (score > bestScore)
                {
                    bestScore = score;
                    // PASO 7: Arrastrar gema superior hacia la inferior
                    Gem src = (posA.y >= posB.y) ? gA : gB;
                    Gem dst = (src == gA) ? gB : gA;
                    best = new MoveCandidate
                    {
                        source = src,
                        target = dst,
                        score = score,
                        obstacles = obstacles
                    };
                }
            }
        }
        return best;
    }

    /// <summary>
    /// PASO 4: Detecta si al fusionar este par se generará una gema adyacente a otra de nivel superior para encadenar combos.
    /// </summary>
    private bool WouldTriggerChainReaction(GemType currentType, Vector2 midPoint, List<Gem> gems)
    {
        GemType nextType = (GemType)((int)currentType + 1);
        if ((int)nextType > (int)GemType.RedRuby) return false;

        for (int i = 0; i < gems.Count; i++)
        {
            Gem g = gems[i];
            if (g != null && g.gemType == nextType)
            {
                if (Vector2.Distance(g.transform.position, midPoint) < 1.15f)
                {
                    return true;
                }
            }
        }
        return false;
    }

    /// <summary>
    /// PASO 3: Umbrales de saturación según el tamaño y volumen de cada gema en el frasco.
    /// </summary>
    private int GetSaturationThreshold(GemType type)
    {
        switch (type)
        {
            case GemType.RedRuby:   return 2; // Rubi = 2 (¡DIAMANTE!)
            case GemType.Sapphire:  return 2; // Zafiro = 2
            case GemType.GreenRuby: return 3; // Peridoto = 3
            case GemType.Topaz:     return 3; // Topacios = 3
            case GemType.Amethyst:  return 3; // Amatistas = 3
            case GemType.Emerald:   return 4; // Esmeralda = 4
            case GemType.Quartz:    return 2; // Cuarzos = 2
            default:                return 3;
        }
    }

    /// <summary>
    /// PASO 3: Identifica si algún nivel de la pirámide está saturado para activar el modo barredora en ese nivel.
    /// </summary>
    private GemType? FindSaturatedTier(List<Gem> gems)
    {
        GemType[] checkOrder = {
            GemType.RedRuby,   // Prioridad máxima: ¡HACER EL DIAMANTE!
            GemType.Sapphire,
            GemType.GreenRuby,
            GemType.Topaz,
            GemType.Amethyst,
            GemType.Emerald,
            GemType.Quartz
        };

        foreach (GemType type in checkOrder)
        {
            int count = 0;
            for (int i = 0; i < gems.Count; i++)
            {
                if (gems[i] != null && gems[i].gemType == type) count++;
            }

            if (count >= GetSaturationThreshold(type))
            {
                return type;
            }
        }
        return null;
    }

    /// <summary>
    /// Cuenta cuántas gemas intermedias se interponen en línea directa entre dos gemas (Regla 2 de bloqueo).
    /// </summary>
    private int CountObstaclesBetween(Vector2 a, Vector2 b, Gem gA, Gem gB)
    {
        Vector2 dir = b - a;
        float dist = dir.magnitude;
        if (dist < 0.25f) return 0;

        RaycastHit2D[] hits = Physics2D.CircleCastAll(a, 0.16f, dir.normalized, dist);
        int count = 0;
        for (int k = 0; k < hits.Length; k++)
        {
            var col = hits[k].collider;
            if (col == null) continue;
            if (col.gameObject == gA.gameObject || col.gameObject == gB.gameObject) continue;

            Gem otherGem = col.GetComponent<Gem>();
            if (otherGem != null && otherGem.gemType != GemType.Pearl)
            {
                count++;
            }
        }
        return count;
    }

    /// <summary>
    /// Retorna solo gemas jugables reales. EXCLUYE PERLAS (las perlas son automáticas) y PIEDRAS.
    /// </summary>
    private List<Gem> GetPlayableGems()
    {
        var list = new List<Gem>();
        Gem[] all = Object.FindObjectsByType<Gem>();
        for (int i = 0; i < all.Length; i++)
        {
            Gem g = all[i];
            if (g == null || !g.gameObject.activeInHierarchy || !g.enabled) continue;
            if (g.gemType == GemType.Pearl || g.gemType == GemType.Stone) continue; // Las perlas y piedras no son manipulables por el bot
            list.Add(g);
        }
        return list;
    }

    // =========================================================================
    // ARRASTRE FÍSICO HUMANO (Emula el dedo del jugador con los 4 estilos)
    // =========================================================================

    private IEnumerator HumanDragRoutine(Gem src, Gem dst, BotMovementStyle style)
    {
        if (src == null || dst == null) yield break;

        Rigidbody2D rbSrc = src.GetComponent<Rigidbody2D>();
        if (rbSrc == null) yield break;

        // 1. Activar interacción del jugador (habilita la regla de fusión humana en Gem.cs)
        src.SetPlayerInteraction(true);
        if (dst != null) dst.SetPlayerInteraction(true);

        Vector2 startPos = src.transform.position;
        Vector2 targetPos = dst.transform.position;
        float dist = Vector2.Distance(startPos, targetPos);

        // Duración proporcional y suave: 0.32s a 0.55s según distancia (evita tirones violentos que expulsan gemas)
        float duration = Mathf.Clamp(0.32f + (dist * 0.10f), 0.32f, 0.55f);
        float elapsed = 0f;

        Debug.Log($"[TikTokAutoPlayer] 🎮 Tiro [{style}]: {src.gemType} hacia {dst.gemType} ({dist:F2}m)");

        rbSrc.bodyType = RigidbodyType2D.Kinematic;
        rbSrc.useFullKinematicContacts = true;

        while (elapsed < duration)
        {
            if (src == null || dst == null || rbSrc == null) break;

            elapsed += Time.fixedDeltaTime;
            float t = Mathf.Clamp01(elapsed / duration);
            float smoothT = Mathf.SmoothStep(0f, 1f, t);

            Vector2 currentDest = dst.transform.position;
            Vector2 desiredPos = Vector2.Lerp(startPos, currentDest, smoothT);

            if (style == BotMovementStyle.ParabolicArc)
            {
                // Arco suave y seguro: máximo 0.20m (evita tocar el techo o salir del frasco)
                float arc = Mathf.Sin(t * Mathf.PI) * 0.20f;
                desiredPos += Vector2.up * arc;
            }
            else if (style == BotMovementStyle.HeavyPush)
            {
                // Presión descendente muy leve para empujar por peso
                float dip = -Mathf.Sin(t * Mathf.PI) * 0.08f;
                desiredPos += Vector2.up * dip;
            }
            else if (style == BotMovementStyle.WallBounce)
            {
                // Rebote moderado hacia la pared: máximo 0.16m
                float wallSign = (startPos.x < 0) ? -1f : 1f;
                float bounce = Mathf.Sin(t * Mathf.PI) * 0.16f * wallSign;
                desiredPos += Vector2.right * bounce;
            }

            // SEGURIDAD CRÍTICA: Clampear desiredPos estrictamente dentro de los límites interiores del frasco
            desiredPos.x = Mathf.Clamp(desiredPos.x, -1.05f, 1.05f);
            desiredPos.y = Mathf.Clamp(desiredPos.y, -1.80f, 0.90f);

            rbSrc.MovePosition(desiredPos);
            yield return new WaitForFixedUpdate();
        }

        // 2. Restaurar a Dynamic con inercia controlada hacia el objetivo
        if (src != null && rbSrc != null)
        {
            rbSrc.bodyType = RigidbodyType2D.Dynamic;
            if (dst != null)
            {
                Vector2 impactDir = ((Vector2)dst.transform.position - (Vector2)src.transform.position).normalized;
                float forceMultiplier = (style == BotMovementStyle.HeavyPush) ? 1.15f : 0.85f;
                float safeSpeed = Mathf.Clamp(baseImpulseForce * forceMultiplier, 1.2f, 3.0f);

                rbSrc.linearVelocity = impactDir * safeSpeed;
            }
        }

        yield return new WaitForSeconds(0.20f);

        if (src != null) src.SetPlayerInteraction(false);
        if (dst != null) dst.SetPlayerInteraction(false);

        // Guardián de seguridad: si alguna gema fue empujada fuera del frasco, rescatarla de inmediato
        EnsureGemsInsideFlask();
    }

    /// <summary>
    /// Guardián de seguridad: asegura que ninguna gema quede fuera de las paredes de cristal del frasco.
    /// Si la física de Unity llega a proyectar una gema al exterior, la devuelve suavemente al interior.
    /// </summary>
    private void EnsureGemsInsideFlask()
    {
        Gem[] all = Object.FindObjectsByType<Gem>();
        for (int i = 0; i < all.Length; i++)
        {
            Gem g = all[i];
            if (g == null || !g.gameObject.activeInHierarchy || !g.enabled) continue;
            if (g.gemType == GemType.Pearl) continue; // Las perlas caen solas por el tubo

            Vector3 pos = g.transform.position;
            // Si la gema se salió horizontalmente de las paredes del frasco (|X| > 1.18m) o cayó al vacío (Y < -2.05m)
            if (Mathf.Abs(pos.x) > 1.18f || pos.y < -2.05f)
            {
                Rigidbody2D rb = g.GetComponent<Rigidbody2D>();
                if (rb != null)
                {
                    rb.linearVelocity = Vector2.zero;
                    rb.angularVelocity = 0f;
                }
                float clampedX = Mathf.Clamp(pos.x, -0.85f, 0.85f);
                float clampedY = Mathf.Clamp(pos.y, -1.2f, 0.25f);
                g.transform.position = new Vector3(clampedX, clampedY, pos.z);
                Debug.LogWarning($"[TikTokAutoPlayer] 🛡️ Gema rescatada al interior del frasco: {g.gemType} (estaba en X:{pos.x:F2}, Y:{pos.y:F2})");
            }
        }
    }

    private void ExecuteGentleNudge()
    {
        EnsureGemsInsideFlask();
        var gems = GetPlayableGems();
        if (gems.Count == 0) return;

        Gem gem = gems.OrderByDescending(g => g.transform.position.y).FirstOrDefault();
        if (gem == null) return;

        Rigidbody2D rb = gem.GetComponent<Rigidbody2D>();
        if (rb != null)
        {
            gem.SetPlayerInteraction(true);
            float nudgeX = gem.transform.position.x > 0 ? -1.0f : 1.0f;
            Vector2 nudgeDir = new Vector2(nudgeX, -0.6f).normalized;
            rb.linearVelocity = nudgeDir * Mathf.Clamp(baseImpulseForce, 1.5f, 3.0f);
            StartCoroutine(ReleaseInteractionDelayed(gem, 0.35f));
            Debug.Log($"[TikTokAutoPlayer] 💨 Reacomodo suave sobre {gem.gemType}");
        }
    }

    private IEnumerator ReleaseInteractionDelayed(Gem gem, float delay)
    {
        yield return new WaitForSeconds(delay);
        if (gem != null)
        {
            gem.SetPlayerInteraction(false);
        }
    }

    private void OnDestroy()
    {
        StopAgents();
    }
}
