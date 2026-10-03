using UnityEngine;
using FlutterUnityBridge;

/// <summary>
/// Gestiona las Micro-misiones Dinámicas Express durante la partida.
/// Asigna pequeños retos (ej. "Fusiona 3 Topacios") con límite de tiempo.
/// </summary>
public class MissionManager : MonoBehaviour
{
    public static MissionManager Instance { get; private set; }

    [Header("Mission Config")]
    public float minDelayBetweenMissions = 45f;
    public float maxDelayBetweenMissions = 90f;
    public float baseTimeLimit = 60f; // 1 min for missions
    
    private bool _isMissionActive = false;
    private GemType _targetGemType;
    private int _targetAmount;
    private int _currentAmount;
    private float _timeRemaining;
    private float _nextMissionTimer;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }

    private void Start()
    {
        ScheduleNextMission();
    }

    private void Update()
    {
        if (GameManager.Instance == null || GameManager.Instance.IsGameOver || GameManager.Instance.IsPaused)
            return;

        if (_isMissionActive)
        {
            _timeRemaining -= Time.deltaTime;
            if (_timeRemaining <= 0)
            {
                // Misión Fallida por tiempo
                Debug.Log("[MISION] Fallida por límite de tiempo.");
                _isMissionActive = false;
                ScheduleNextMission();
            }
        }
        else
        {
            _nextMissionTimer -= Time.deltaTime;
            if (_nextMissionTimer <= 0)
            {
                StartNewMission();
            }
        }
    }

    private void ScheduleNextMission()
    {
        _nextMissionTimer = Random.Range(minDelayBetweenMissions, maxDelayBetweenMissions);
    }

    private void StartNewMission()
    {
        _isMissionActive = true;
        
        // Elegir una gema aleatoria entre Amethyst (2) y Sapphire (5)
        _targetGemType = (GemType)Random.Range((int)GemType.Amethyst, (int)GemType.Sapphire + 1);
        _targetAmount = Random.Range(2, 5); // 2 a 4 cantidad
        _currentAmount = 0;
        _timeRemaining = baseTimeLimit;

        string gemName = GetGemName(_targetGemType);
        string missionText = $"Crea {_targetAmount} {gemName}";

        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.SendMissionStarted(missionText, (int)_timeRemaining);
        }
        Debug.Log($"[MISION] Nueva misión iniciada: {missionText} en {_timeRemaining}s");
    }

    /// <summary>
    /// Se llama cada vez que se crea una nueva gema por fusión.
    /// </summary>
    public void RegisterGemCreated(GemType newType)
    {
        if (!_isMissionActive) return;

        if (newType == _targetGemType)
        {
            _currentAmount++;
            
            if (_currentAmount >= _targetAmount)
            {
                // Misión completada
                // BALANCE: Puntos de la gema * Cantidad * 3 (Ej. 3 Topacios = 4 * 3 * 3 = 36 pts extra)
                int baseGemPoints = GameConfig.GemScoreValues[(int)_targetGemType];
                int bonus = baseGemPoints * _targetAmount * 3; 
                
                GameManager.Instance?.AddScore(bonus);
                
                if (FlutterBridgeManager.Instance != null)
                {
                    FlutterBridgeManager.Instance.SendMissionCompleted(bonus);
                }
                
                Debug.Log($"[MISION] ¡Completada! +{bonus} puntos");
                _isMissionActive = false;
                ScheduleNextMission();
            }
            else
            {
                // Progreso actualizado
                if (FlutterBridgeManager.Instance != null)
                {
                    FlutterBridgeManager.Instance.SendMissionUpdated(_currentAmount, _targetAmount);
                }
            }
        }
    }

    private string GetGemName(GemType type)
    {
        switch (type)
        {
            case GemType.Pearl: return "Perlas";
            case GemType.Emerald: return "Esmeraldas";
            case GemType.Amethyst: return "Amatistas";
            case GemType.Topaz: return "Topacios";
            case GemType.GreenRuby: return "Rubíes Verdes";
            case GemType.Sapphire: return "Zafiros";
            case GemType.RedRuby: return "Rubíes";
            case GemType.Diamond: return "Diamantes";
            default: return "Gemas";
        }
    }
}
