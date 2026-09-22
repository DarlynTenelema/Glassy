using System.Collections;
using UnityEngine;

/// <summary>
/// GemHighlightManager — Implementa la logica de alerta visual de la doc v1 (punto 8):
///
/// "Si el usuario se esta quedando sin espacio el sistema identifica que objetos
///  del mismo valor tienen mayor cantidad y los pinta de rojo."
///
/// FUNCIONAMIENTO:
/// - Cada HighlightCheckInterval segundos, cuenta cuantas gemas hay de cada tipo.
/// - Si hay un tipo con >= HighlightMinCount gemas (el mas numeroso), las pinta de rojo.
/// - Si el tablero esta despejado, quita el highlight de todas.
/// - Al fusionarse dos gemas, llama a ForceRefresh() para actualizar de inmediato.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Anadir este script al mismo GameObject que GameManager en GameScene.
/// 2. No requiere referencias en el Inspector — usa FindObjectsByType internamente.
/// </summary>
public class GemHighlightManager : MonoBehaviour
{
    public static GemHighlightManager Instance { get; private set; }

    private GemType _highlightedType;
    private bool    _hasHighlight = false;
    private Coroutine _checkCoroutine;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    private void Start()
    {
        _checkCoroutine = StartCoroutine(HighlightCheckLoop());
    }

    private void OnDestroy()
    {
        if (_checkCoroutine != null) StopCoroutine(_checkCoroutine);
    }

    // =========================================================================
    // LOOP PERIODICO
    // =========================================================================

    private IEnumerator HighlightCheckLoop()
    {
        yield return new WaitForSeconds(GameConfig.HighlightCheckInterval);

        while (true)
        {
            if (GameManager.Instance != null &&
                !GameManager.Instance.IsGameOver &&
                !GameManager.Instance.IsPaused)
            {
                EvaluateHighlight();
            }
            yield return new WaitForSeconds(GameConfig.HighlightCheckInterval);
        }
    }

    // =========================================================================
    // LOGICA DE EVALUACION
    // =========================================================================

    /// <summary>
    /// Fuerza una reevaluacion inmediata del highlight.
    /// Llamar desde Gem.MergeWith() tras una fusion.
    /// </summary>
    public void ForceRefresh()
    {
        EvaluateHighlight();
    }

    private void EvaluateHighlight()
    {
        Gem[] allGems = FindObjectsByType<Gem>(FindObjectsInactive.Exclude);

        // Si no hay peligro de quedarse sin espacio, limpiar y salir
        if (!GameOverZone.IsInDanger)
        {
            if (_hasHighlight)
            {
                ClearAllHighlights(allGems);
                _hasHighlight = false;
                Debug.Log("[GemHighlightManager] Highlight rojo desactivado (espacio seguro).");
            }
            return;
        }

        // Contar gemas por tipo (excluir perlas y diamantes)
        int[] counts = new int[System.Enum.GetValues(typeof(GemType)).Length];
        foreach (Gem gem in allGems)
        {
            if (gem.gemType == GemType.Pearl || gem.gemType == GemType.Diamond) continue;
            counts[(int)gem.gemType]++;
        }

        // Encontrar el tipo con mas gemas
        int maxCount   = 0;
        int maxTypeIdx = -1;
        for (int i = 0; i < counts.Length; i++)
        {
            if (counts[i] > maxCount)
            {
                maxCount   = counts[i];
                maxTypeIdx = i;
            }
        }

        // Aplicar highlight solo si supera el minimo configurado
        if (maxTypeIdx >= 0 && maxCount >= GameConfig.HighlightMinCount)
        {
            GemType newHighlight = (GemType)maxTypeIdx;

            // Evitar trabajo redundante si el tipo no cambio
            if (_hasHighlight && _highlightedType == newHighlight) return;

            ClearAllHighlights(allGems);

            _highlightedType = newHighlight;
            _hasHighlight    = true;

            foreach (Gem gem in allGems)
            {
                if (gem.gemType == _highlightedType)
                    gem.SetHighlight(true);
            }

            Debug.Log($"[GemHighlightManager] Highlight rojo -> {_highlightedType} ({maxCount} gemas).");
        }
        else
        {
            if (_hasHighlight)
            {
                ClearAllHighlights(allGems);
                _hasHighlight = false;
                Debug.Log("[GemHighlightManager] Highlight rojo desactivado.");
            }
        }
    }

    // =========================================================================
    // UTILIDADES
    // =========================================================================

    private void ClearAllHighlights(Gem[] gems)
    {
        foreach (Gem gem in gems)
            gem.SetHighlight(false);
    }

    public void ClearHighlightFor(Gem gem)
    {
        gem.SetHighlight(false);
    }
}
