using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// TikTokRelaxAutoPlayer — Sistema Autónomo de Bots ("Ghost Players") para TikTok Live.
/// 
/// SOLUCIÓN A LOS 2 PROBLEMAS CLAVE:
/// 1. MOVIMIENTOS SUAVES (Cero violencia en físicas):
///    - Rebote de físicas amortiguado (bounciness = 0.05).
///    - Desactivación instantánea de colisionadores antes de la fusión para eliminar
///      las explosiones por solapamiento de Box2D.
///    - Nacimiento suave de gemas evolucionadas con expansión gradual (0.4x -> 1.0x).
///    - Cero teletransportaciones al rebotar contra las paredes del matraz.
/// 
/// 2. VELOCIDAD ADAPTATIVA (Anti-Game Over):
///    - Calentamiento inicial ágil (3s en lugar de 20s para no dejar que las perlas colapsen el cuello).
///    - Cadencia adaptativa: si el matraz tiene muchas gemas (>= 8) o peligro inminente (y > 0.85),
///      los bots aceleran el ritmo inmediatamente para despejar el tablero y salvar la partida.
///    - Relevo de 4 Bots Gamers (Arco Suave, Arco Elevado, Despejador Veloz, Especialista en Diamante).
/// </summary>
public class TikTokRelaxAutoPlayer : MonoBehaviour
{
    public static TikTokRelaxAutoPlayer Instance { get; private set; }

    [Header("Control General")]
    public bool enableAutoPlayer = true;
    public KeyCode toggleKey = KeyCode.B;
    public KeyCode forcePlayKey = KeyCode.Space;

    [Header("Cadencia y Tiempos")]
    [Tooltip("Tiempo de espera inicial (3s recomendado para evitar saturación de perlas al inicio)")]
    public float initialWarmupDelay = 3.0f;

    [Tooltip("Duración normal del vuelo visual de la gema (0.45s = ágil y fluido)")]
    [Range(0.2f, 1.5f)]
    public float normalGlideDuration = 0.45f;

    [Tooltip("Duración rápida en modo emergencia/despeje")]
    public float fastGlideDuration = 0.28f;

    [Tooltip("Pausa entre tiros en ritmo tranquilo (segundos)")]
    public float normalPause = 0.20f;

    [Tooltip("Pausa entre tiros en ritmo acelerado de despeje")]
    public float fastPause = 0.05f;

    [Tooltip("Altura máxima del arco visual")]
    public float maxArcHeight = 0.35f;

    [Tooltip("Límite en Y para intervenir con máxima prioridad de Game Over")]
    public float dangerThresholdY = 0.85f;

    // Estado interno
    private int _activeBotIndex = 0;
    private Coroutine _botLoopCoroutine;
    private Coroutine _activeGlideCoroutine;

    private readonly string[] _botNames = {
        "Bot 1 (Arco Suave)",
        "Bot 2 (Arco Elevado)",
        "Bot 3 (Despejador Rápido)",
        "Bot 4 (Radar de Diamante)"
    };

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
            return;
        }
        Instance = this;

        if (initialWarmupDelay <= 0f) initialWarmupDelay = 3.0f;
        if (normalGlideDuration <= 0f) normalGlideDuration = 0.45f;
        if (fastGlideDuration <= 0f) fastGlideDuration = 0.28f;
        if (dangerThresholdY <= 0f) dangerThresholdY = 0.85f;
    }

    private void Start()
    {
        if (enableAutoPlayer)
        {
            StartAgents();
        }
    }

    private void Update()
    {
        // Tecla rápida [B] para pausar/reanudar el bot
        if (Input.GetKeyDown(toggleKey))
        {
            enableAutoPlayer = !enableAutoPlayer;
            string status = enableAutoPlayer ? "<color=#00FFAA>ACTIVO</color>" : "<color=#FF4444>PAUSADO</color>";
            Debug.Log($"[TikTokRelaxAutoPlayer] Estado: {status}");

            if (enableAutoPlayer) StartAgents();
            else StopAgents();
        }

        // Tecla [Espacio] para forzar tiro inmediato de prueba
        if (Input.GetKeyDown(forcePlayKey))
        {
            TriggerImmediateMove();
        }
    }

    public void StartAgents()
    {
        StopAgents();
        _botLoopCoroutine = StartCoroutine(AutoBotLoop());
    }

    public void StopAgents()
    {
        if (_botLoopCoroutine != null)
        {
            StopCoroutine(_botLoopCoroutine);
            _botLoopCoroutine = null;
        }
        if (_activeGlideCoroutine != null)
        {
            StopCoroutine(_activeGlideCoroutine);
            _activeGlideCoroutine = null;
        }
    }

    public void TriggerImmediateMove()
    {
        MoveCandidate move = EvaluateMove();
        if (move.IsValid)
        {
            if (_activeGlideCoroutine != null) StopCoroutine(_activeGlideCoroutine);
            _activeGlideCoroutine = StartCoroutine(SmoothParabolicGlideRoutine(move.source, move.target, normalGlideDuration, 0.30f));
        }
    }

    // =========================================================================
    // BUCLE PRINCIPAL (Cadencia Adaptativa Anti-Saturación)
    // =========================================================================

    private IEnumerator AutoBotLoop()
    {
        Debug.Log($"[TikTokRelaxAutoPlayer] 🍃 Calentamiento inicial de {initialWarmupDelay}s. Esperando primeras perlas...");

        float elapsedWarmup = 0f;
        while (elapsedWarmup < initialWarmupDelay)
        {
            // Si el frasco se llena rápido o hay peligro, romper el calentamiento e intervenir de inmediato
            if (IsBoardInCriticalDanger() || GetPlayableGems().Count >= 6) break;
            elapsedWarmup += 0.5f;
            yield return new WaitForSeconds(0.5f);
        }

        Debug.Log("[TikTokRelaxAutoPlayer] 🚀 ¡Bots activos! Iniciando ciclo dinámico anti-saturación hacia el Diamante.");

        while (true)
        {
            if (!enableAutoPlayer)
            {
                yield return new WaitForSeconds(0.5f);
                continue;
            }

            SoftContainGemsInFlask();

            List<Gem> currentGems = GetPlayableGems();
            int gemCount = currentGems.Count;
            bool isHighPressure = gemCount >= 8 || IsBoardInCriticalDanger();

            // Ajustar velocidad: si hay muchas gemas, acelerar para evitar Game Over
            float currentFlightDuration = isHighPressure ? fastGlideDuration : normalGlideDuration;
            float currentPause = isHighPressure ? fastPause : normalPause;

            // Altura de arco según el bot en turno
            float botArcMultiplier = (_activeBotIndex == 1) ? 1.35f : ((_activeBotIndex == 2) ? 0.75f : 1.0f);
            float currentArcHeight = Mathf.Min(maxArcHeight * botArcMultiplier, 0.40f);

            MoveCandidate move = EvaluateMove();

            if (move.IsValid)
            {
                string botTag = _botNames[_activeBotIndex];
                if (move.score >= 90000f)
                {
                    Debug.LogWarning($"⚠️ [TikTokRelaxAutoPlayer] ¡SALVAMENTO DE EMERGENCIA! {botTag} rescata gema en peligro ({move.source.gemType})");
                }

                if (_activeGlideCoroutine != null) StopCoroutine(_activeGlideCoroutine);
                yield return StartCoroutine(SmoothParabolicGlideRoutine(move.source, move.target, currentFlightDuration, currentArcHeight));

                // Rotar al siguiente bot
                _activeBotIndex = (_activeBotIndex + 1) % _botNames.Length;

                // Breve pausa antes de la siguiente jugada
                yield return new WaitForSeconds(currentPause);
            }
            else
            {
                // Si no hay parejas idénticas listas, esperar muy poco (0.15s) para atrapar perlas frescas
                yield return new WaitForSeconds(0.15f);
            }
        }
    }

    private bool IsBoardInCriticalDanger()
    {
        if (GameOverZone.IsInDanger) return true;
        var gems = GetPlayableGems();
        if (gems.Count >= 14) return true;

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
    // EVALUACIÓN DE JUGADAS (Prioridad Anti-Saturación + Diamante)
    // =========================================================================

    private struct MoveCandidate
    {
        public Gem source;
        public Gem target;
        public float score;
        public bool IsValid => source != null && target != null;
    }

    private MoveCandidate EvaluateMove()
    {
        MoveCandidate best = default;
        List<Gem> gems = GetPlayableGems();
        if (gems.Count < 2) return best;

        // 1. MÁXIMA PRIORIDAD ABSOLUTA: Salvar gemas que estén en el cuello del matraz (y > dangerThresholdY)
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
                return new MoveCandidate { source = dangerGem, target = closest, score = 999999f };
            }
        }

        // 2. RADAR DEL DIAMANTE: Fusión inmediata de 2 Rubíes Rojos
        var redRubies = gems.Where(g => g != null && g.gemType == GemType.RedRuby).ToList();
        if (redRubies.Count >= 2)
        {
            MoveCandidate diamondMove = FindBestPairForTier(redRubies, 10000f);
            if (diamondMove.IsValid)
            {
                Debug.Log("💎 [TikTokRelaxAutoPlayer] ¡¡RADAR DEL DIAMANTE!! Fusionando Rubíes Rojos para crear el Diamante...");
                return diamondMove;
            }
        }

        // 3. MATRIZ DE ESCALADO PIRAMIDAL CON REGULADOR DE PRESIÓN
        GemType[] evaluationTiers = {
            GemType.RedRuby,   // Prioridad alta (450)
            GemType.Sapphire,  // 320
            GemType.GreenRuby, // 240
            GemType.Topaz,     // 180
            GemType.Quartz,    // 160 (limpiador de espacio)
            GemType.Amethyst,  // 120
            GemType.Emerald    // Base: 90
        };

        float bestScore = float.MinValue;

        foreach (GemType type in evaluationTiers)
        {
            var ofType = gems.Where(g => g != null && g.gemType == type).ToList();
            int count = ofType.Count;
            if (count < 2) continue;

            float baseTierScore = 0f;
            switch (type)
            {
                case GemType.RedRuby:   baseTierScore = 450f; break;
                case GemType.Sapphire:  baseTierScore = 320f; break;
                case GemType.GreenRuby: baseTierScore = 240f; break;
                case GemType.Topaz:     baseTierScore = 180f; break;
                case GemType.Quartz:    baseTierScore = 160f; break;
                case GemType.Amethyst:  baseTierScore = 120f; break;
                case GemType.Emerald:   baseTierScore = 90f;  break;
            }

            // REGULADOR DE CONGESTIÓN AGRESIVO:
            // Si hay 3 o más gemas de cualquier tipo, sumar +80 pts por gema acumulada.
            // Esto garantiza que el bot limpie ráfagas de Esmeraldas y Amatistas
            // antes de que bloqueen el frasco.
            if (count >= 3)
            {
                baseTierScore += (count - 2) * 80f;
            }

            for (int i = 0; i < count; i++)
            {
                for (int j = i + 1; j < count; j++)
                {
                    Gem gA = ofType[i];
                    Gem gB = ofType[j];
                    if (gA == null || gB == null) continue;

                    Vector2 posA = gA.transform.position;
                    Vector2 posB = gB.transform.position;
                    float dist = Vector2.Distance(posA, posB);

                    // Bono de proximidad física
                    float proxBonus = Mathf.Clamp(3.5f - dist, 0f, 3.5f) * 12f;

                    // Bono de altura: resolver primero las gemas más altas para destapar el cuello
                    float heightBonus = Mathf.Max(posA.y, posB.y) * 25f;

                    // Penalización de obstáculos muy suave
                    int obstacles = CountObstaclesBetween(posA, posB, gA, gB);
                    float obstaclePenalty = obstacles * 8f;

                    float totalScore = baseTierScore + proxBonus + heightBonus - obstaclePenalty;

                    if (totalScore > bestScore)
                    {
                        bestScore = totalScore;
                        Gem src = (posA.y >= posB.y) ? gA : gB;
                        Gem dst = (src == gA) ? gB : gA;

                        best = new MoveCandidate
                        {
                            source = src,
                            target = dst,
                            score = totalScore
                        };
                    }
                }
            }
        }

        return best;
    }

    private MoveCandidate FindBestPairForTier(List<Gem> gemsOfTier, float priorityScore)
    {
        MoveCandidate best = default;
        float bestDist = float.MaxValue;

        for (int i = 0; i < gemsOfTier.Count; i++)
        {
            for (int j = i + 1; j < gemsOfTier.Count; j++)
            {
                Gem gA = gemsOfTier[i];
                Gem gB = gemsOfTier[j];
                if (gA == null || gB == null) continue;

                float dist = Vector2.Distance(gA.transform.position, gB.transform.position);
                if (dist < bestDist)
                {
                    bestDist = dist;
                    Gem src = (gA.transform.position.y >= gB.transform.position.y) ? gA : gB;
                    Gem dst = (src == gA) ? gB : gA;
                    best = new MoveCandidate
                    {
                        source = src,
                        target = dst,
                        score = priorityScore - dist * 10f
                    };
                }
            }
        }
        return best;
    }

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

            Gem other = col.GetComponent<Gem>();
            if (other != null && other.gemType != GemType.Pearl)
            {
                count++;
            }
        }
        return count;
    }

    private List<Gem> GetPlayableGems()
    {
        var list = new List<Gem>();
        Gem[] all = Object.FindObjectsByType<Gem>();
        for (int i = 0; i < all.Length; i++)
        {
            Gem g = all[i];
            if (g == null || !g.gameObject.activeInHierarchy || !g.enabled) continue;
            if (g.gemType == GemType.Pearl || g.gemType == GemType.Stone) continue;
            list.Add(g);
        }
        return list;
    }

    // =========================================================================
    // VUELO SUAVE Y FUSIÓN SIN IMPACTO EXPLOSIVO (Anti-Violencia de Físicas)
    // =========================================================================

    private IEnumerator SmoothParabolicGlideRoutine(Gem src, Gem dst, float duration, float arcHeight)
    {
        if (src == null || dst == null) yield break;

        Rigidbody2D rbSrc = src.GetComponent<Rigidbody2D>();
        Collider2D colSrc = src.GetComponent<Collider2D>();
        SpriteRenderer srSrc = src.GetComponent<SpriteRenderer>();

        if (rbSrc == null) yield break;

        // 1. ELEVACIÓN VISUAL LIMPIA:
        // Convertimos el colisionador en Trigger para que vuele con total suavidad
        // por encima de las demás gemas sin empujar ni colisionar bruscamente con nada.
        if (colSrc != null) colSrc.isTrigger = true;

        int origSortOrder = srSrc != null ? srSrc.sortingOrder : 0;
        if (srSrc != null) srSrc.sortingOrder = origSortOrder + 15;

        Vector3 origLocalScale = src.transform.localScale;

        src.IsMergeLocked = true;
        if (dst != null) dst.IsMergeLocked = true;

        Vector2 startPos = src.transform.position;
        Vector2 targetPos = dst.transform.position;
        float dist = Vector2.Distance(startPos, targetPos);

        float currentArcHeight = Mathf.Max(0.15f, Mathf.Min(arcHeight, dist * 0.45f + 0.12f));

        RigidbodyInterpolation2D origInterp = rbSrc.interpolation;
        rbSrc.interpolation = RigidbodyInterpolation2D.Interpolate;
        rbSrc.bodyType = RigidbodyType2D.Kinematic;
        rbSrc.linearVelocity = Vector2.zero;
        rbSrc.angularVelocity = 0f;

        float elapsed = 0f;
        while (elapsed < duration)
        {
            if (src == null || rbSrc == null) break;

            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / duration);

            Vector2 currentDest = (dst != null) ? (Vector2)dst.transform.position : targetPos;

            // Movimiento suave con curva SmoothStep
            float smoothT = Mathf.SmoothStep(0f, 1f, t);
            Vector2 basePos = Vector2.Lerp(startPos, currentDest, smoothT);
            float arcY = Mathf.Sin(t * Mathf.PI) * currentArcHeight;
            Vector2 desiredPos = basePos + Vector2.up * arcY;

            // Mantener dentro del matraz
            desiredPos.x = Mathf.Clamp(desiredPos.x, -1.05f, 1.05f);
            desiredPos.y = Mathf.Clamp(desiredPos.y, -1.75f, 0.90f);

            // Perspectiva visual suave (+10% en el aire)
            float scalePulse = 1.0f + 0.10f * Mathf.Sin(t * Mathf.PI);
            src.transform.localScale = new Vector3(origLocalScale.x * scalePulse, origLocalScale.y * scalePulse, origLocalScale.z);

            src.transform.position = new Vector3(desiredPos.x, desiredPos.y, src.transform.position.z);
            rbSrc.position = desiredPos;

            yield return null;
        }

        // 2. FUSIÓN LIMPIA INMEDIATA:
        if (src != null && dst != null)
        {
            // Ejecutar la fusión limpia directamente sin choque físico
            src.DirectMerge(dst, true);
        }
        else
        {
            // En caso de que se haya cancelado dst antes de llegar
            if (src != null)
            {
                src.transform.localScale = origLocalScale;
                if (srSrc != null) srSrc.sortingOrder = origSortOrder;
                if (colSrc != null) colSrc.isTrigger = false;
                src.IsMergeLocked = false;
                if (rbSrc != null)
                {
                    rbSrc.bodyType = RigidbodyType2D.Dynamic;
                    rbSrc.interpolation = origInterp;
                }
            }
        }

        SoftContainGemsInFlask();
    }

    private void SoftContainGemsInFlask()
    {
        Gem[] all = Object.FindObjectsByType<Gem>();
        for (int i = 0; i < all.Length; i++)
        {
            Gem g = all[i];
            if (g == null || !g.gameObject.activeInHierarchy || !g.enabled) continue;
            if (g.gemType == GemType.Pearl) continue;

            Vector3 pos = g.transform.position;
            // Si una gema intenta salir por las paredes laterales o fondo, aplicar impulso suave hacia el centro
            if (Mathf.Abs(pos.x) > 1.15f || pos.y < -1.90f)
            {
                Rigidbody2D rb = g.GetComponent<Rigidbody2D>();
                if (rb != null && rb.bodyType == RigidbodyType2D.Dynamic)
                {
                    Vector2 nudge = new Vector2(-Mathf.Sign(pos.x) * 0.8f, (pos.y < -1.90f) ? 0.8f : 0f);
                    rb.linearVelocity = Vector2.Lerp(rb.linearVelocity, nudge, 0.4f);
                }
            }
        }
    }
}
