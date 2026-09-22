using System.Collections;
using UnityEngine;

/// <summary>
/// GemSpawner — Maneja el spawn automático de perlas en la boca de la botella.
/// Separado de GameManager para mantener las responsabilidades claras.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Añadir este script al mismo GameObject que GameManager (o a uno separado en GameScene).
/// 2. Asegurarse de que GameManager.spawnPoint esté asignado.
///
/// LÓGICA:
/// - Las perlas caen cada spawnInterval segundos.
/// - Si el juego está pausado o ha terminado, el spawn se detiene.
/// - El primer spawn ocurre después de un breve delay para que el jugador se oriente.
/// </summary>
public class GemSpawner : MonoBehaviour
{
    [Header("Configuración")]
    [Tooltip("Segundos entre cada perla. Puede reducirse con el tiempo para aumentar dificultad.")]
    public float spawnInterval = GameConfig.SpawnInterval;

    [Tooltip("Delay antes de la primera perla (para que el jugador vea el tablero).")]
    public float initialDelay = 1.0f;

    private Coroutine _spawnCoroutine;
    private float _pauseUntilTime = 0f;

    private void Start()
    {
        _spawnCoroutine = StartCoroutine(SpawnRoutine());
    }

    public void PauseSpawningFor(float duration)
    {
        _pauseUntilTime = Time.time + duration;
    }

    private IEnumerator SpawnRoutine()
    {
        yield return new WaitForSeconds(initialDelay);

        while (true)
        {
            // Esperar si el juego está pausado (Time.timeScale = 0 detiene WaitForSeconds)
            // WaitForSecondsRealtime para no verse afectado por la pausa
            if (GameManager.Instance != null && !GameManager.Instance.IsGameOver)
            {
                if (!GameManager.Instance.IsPaused && Time.time >= _pauseUntilTime)
                {
                    GameManager.Instance.SpawnPearl();
                }
            }
            else if (GameManager.Instance != null && GameManager.Instance.IsGameOver)
            {
                yield break; // Salir del loop si el juego terminó
            }

            // Usamos WaitForSecondsRealtime para que la pausa no retrase el contador
            yield return new WaitForSecondsRealtime(spawnInterval);
        }
    }

    private void OnDestroy()
    {
        if (_spawnCoroutine != null)
            StopCoroutine(_spawnCoroutine);
    }
}
