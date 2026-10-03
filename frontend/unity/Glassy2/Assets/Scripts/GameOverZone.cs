using System.Collections;
using UnityEngine;
using FlutterUnityBridge;

/// <summary>
/// GameOverZone — Zona de peligro en la boca de la botella.
/// Si una gema (que no sea perla) entra y permanece aquí por más de
/// GameConfig.GameOverGraceSecs segundos, se dispara el Game Over.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear un GameObject vacío llamado "GameOverZone" en GameScene.
/// 2. Posicionarlo en la entrada del cuello de la botella (justo antes del tubo).
/// 3. Añadir un BoxCollider2D:
///    - IsTrigger: TRUE
///    - Ancho: debe cubrir todo el ancho del cuello de la botella.
///    - Alto: ~0.5 unidades (zona delgada de detección).
/// 4. Añadir este script.
/// </summary>
public class GameOverZone : MonoBehaviour
{
    public static bool IsInDanger { get; private set; } = false;
    private int     _gemsInZone = 0;  // Contador de gemas no-perla dentro de la zona
    private Coroutine _gameOverCoroutine;

    private void OnTriggerEnter2D(Collider2D other)
    {
        Gem gem = other.GetComponent<Gem>();
        if (gem == null || gem.gemType == GemType.Pearl) return;
        if (GameManager.Instance == null || GameManager.Instance.IsGameOver) return;

        _gemsInZone++;
        bool wasInDanger = IsInDanger;
        IsInDanger = _gemsInZone > 0;

        if (IsInDanger != wasInDanger && FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendDangerZone(IsInDanger);
        }

        // Iniciar countdown de Game Over si no está ya corriendo
        if (_gameOverCoroutine == null)
        {
            _gameOverCoroutine = StartCoroutine(GameOverCountdown());
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        Gem gem = other.GetComponent<Gem>();
        if (gem == null || gem.gemType == GemType.Pearl) return;

        _gemsInZone = Mathf.Max(0, _gemsInZone - 1);
        bool wasInDanger = IsInDanger;
        IsInDanger = _gemsInZone > 0;

        if (IsInDanger != wasInDanger && FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendDangerZone(IsInDanger);
        }

        // Si la zona quedó vacía, cancelar el countdown
        if (_gemsInZone == 0 && _gameOverCoroutine != null)
        {
            StopCoroutine(_gameOverCoroutine);
            _gameOverCoroutine = null;
        }
    }

    /// <summary>
    /// Espera GameOverGraceSecs antes de disparar el Game Over.
    /// El jugador puede salvar la situación moviendo las gemas antes de que expire.
    /// </summary>
    private IEnumerator GameOverCountdown()
    {
        yield return new WaitForSeconds(GameConfig.GameOverGraceSecs);

        // Verificar que aún haya gemas en la zona
        if (_gemsInZone > 0 && GameManager.Instance != null)
        {
            GameManager.Instance.TriggerGameOver();
        }

        _gameOverCoroutine = null;
    }
}
