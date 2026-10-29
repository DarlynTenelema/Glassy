using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// TikTokUIController — Administra la interfaz visual de 3 columnas para la versión de TikTok Live en PC.
/// 
/// Columnas:
/// [ Panel Izquierdo: Retos & Likes | Centro: HUD de Score & Combo | Panel Derecho: Muro de la Fama & Eventos ]
/// </summary>
public class TikTokUIController : MonoBehaviour
{
    public static TikTokUIController Instance { get; private set; }

    [Header("Columna Izquierda: Retos & Likes")]
    public Slider likesSlider;
    public TMP_Text likesProgressText;
    public TMP_Text nextRewardText;

    [Header("Columna Central: HUD")]
    public TMP_Text liveScoreText;
    public TMP_Text liveComboText;
    public GameObject comboContainer;

    [Header("Micro-Misiones Dinámicas (60s)")]
    public GameObject missionContainer;
    public TMP_Text missionTitleText;
    public TMP_Text missionTimerText;
    public TMP_Text missionProgressText;
    public Slider missionProgressSlider;

    [Header("Columna Derecha: Donadores & Alertas")]
    public TMP_Text topDonorsText;
    public TMP_Text lastEventAlertText;
    public TMP_Text superFansText;

    // Estado interno
    private int _currentLikes = 0;
    private int _currentMilestoneIndex = 0;
    private readonly int[] _milestones = { 100, 200, 400, 800, 1000, 1200 };
    private readonly string[] _milestoneRewards = { "Esmeralda", "Amatista", "Topacio", "Peridoto", "Zafiro", "Rubí" };

    // Ranking de donadores de la sesión
    private readonly Dictionary<string, float> _donorTotals = new Dictionary<string, float>();
    private readonly HashSet<string> _superFans = new HashSet<string>();

    private int _lastDisplayedScore = -1;
    private int _lastDisplayedCombo = -1;
    private Coroutine _alertPulseCoroutine;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    private void Start()
    {
        UpdateLikesDisplay();
        UpdateScoreDisplay(0);
        UpdateComboDisplay(0);
        UpdateTopDonorsDisplay();
        
        // Donadores simulados iniciales de ejemplo
        RegisterDonation("GamerPro", 15.00f, "León");
        RegisterDonation("Ana_Stream", 8.50f, "Rosa x100");
        RegisterDonation("Troll99", 5.00f, "Piedras x5");

        RegisterSuperFan("Kike_Master", "15,000 Likes");
        RegisterSuperFan("Sofi_Diamond", "1,200 Chats");
    }

    private void Update()
    {
        if (GameManager.Instance == null) return;

        // Sincronizar puntuación
        int score = GameManager.Instance.CurrentScore;
        if (score != _lastDisplayedScore)
        {
            UpdateScoreDisplay(score);
        }

        // Sincronizar combo
        int combo = GameManager.Instance.CurrentComboMultiplier;
        if (combo != _lastDisplayedCombo)
        {
            UpdateComboDisplay(combo);
        }
    }

    // =========================================================================
    // LIKES & METAS
    // =========================================================================

    public void AddLikes(int count)
    {
        _currentLikes += count;
        int target = _milestones[_currentMilestoneIndex];

        if (_currentLikes >= target)
        {
            string reward = _milestoneRewards[_currentMilestoneIndex];
            ShowEventAlert($"🎉 ¡META DE {target:N0} LIKES ALCANZADA! Cae {reward}");

            // Avanzar al siguiente escalón
            if (_currentMilestoneIndex < _milestones.Length - 1)
            {
                _currentMilestoneIndex++;
            }
            else
            {
                // Si superó todas las metas, aumentamos en bloques de 500
                _milestones[_currentMilestoneIndex] += 500;
            }
        }

        UpdateLikesDisplay();
    }

    private void UpdateLikesDisplay()
    {
        int target = _milestones[_currentMilestoneIndex];
        string reward = _milestoneRewards[Mathf.Min(_currentMilestoneIndex, _milestoneRewards.Length - 1)];

        if (likesSlider != null)
        {
            likesSlider.maxValue = target;
            likesSlider.value = Mathf.Clamp(_currentLikes, 0, target);
        }

        if (likesProgressText != null)
        {
            likesProgressText.text = $"{_currentLikes:N0} / {target:N0} Likes";
        }

        if (nextRewardText != null)
        {
            nextRewardText.text = $"Meta activa: <color=#00FFAA>{reward}</color>";
        }
    }

    // =========================================================================
    // SCORE & COMBOS
    // =========================================================================

    public void UpdateScoreDisplay(int score)
    {
        _lastDisplayedScore = score;
        if (liveScoreText != null)
        {
            liveScoreText.text = $"SCORE: <color=#00E5FF>{score:N0}</color>";
        }
    }

    public void UpdateComboDisplay(int combo)
    {
        _lastDisplayedCombo = combo;
        if (comboContainer != null)
        {
            comboContainer.SetActive(combo > 1);
        }

        if (liveComboText != null)
        {
            liveComboText.text = combo > 1 ? $"¡COMBO X{combo}!" : "";
        }
    }

    // =========================================================================
    // DONADORES Y ALERTAS EN TIEMPO REAL
    // =========================================================================

    public void RegisterDonation(string username, float usdAmount, string giftName)
    {
        if (string.IsNullOrEmpty(username)) username = "Anónimo";

        if (_donorTotals.ContainsKey(username))
            _donorTotals[username] += usdAmount;
        else
            _donorTotals[username] = usdAmount;

        ShowEventAlert($"⭐ <b>@{username}</b> donó {giftName} (${usdAmount:F2})");
        UpdateTopDonorsDisplay();

        if (usdAmount >= 1.0f)
        {
            RegisterSuperFan(username, $"Donación ${usdAmount:F2}");
        }
    }

    public void RegisterEmojiAction(string username, string emoji, string actionName)
    {
        ShowEventAlert($"💬 <b>@{username}</b> usó {emoji} ➔ {actionName}");
    }

    public void ShowEventAlert(string alertText)
    {
        if (lastEventAlertText == null) return;

        lastEventAlertText.text = alertText;

        if (_alertPulseCoroutine != null) StopCoroutine(_alertPulseCoroutine);
        _alertPulseCoroutine = StartCoroutine(PulseAlertRoutine());
    }

    private IEnumerator PulseAlertRoutine()
    {
        if (lastEventAlertText == null) yield break;

        Transform t = lastEventAlertText.transform;
        Vector3 origScale = Vector3.one;

        // Punch scale animado
        for (float f = 0; f < 1f; f += Time.unscaledDeltaTime * 4f)
        {
            float s = 1f + Mathf.Sin(f * Mathf.PI) * 0.15f;
            t.localScale = origScale * s;
            yield return null;
        }
        t.localScale = origScale;
    }

    private void UpdateTopDonorsDisplay()
    {
        if (topDonorsText == null) return;

        var top3 = _donorTotals.OrderByDescending(x => x.Value).Take(3).ToList();
        string[] medals = { "<color=#FFD700>[#1]</color>", "<color=#E0E0E0>[#2]</color>", "<color=#CD7F32>[#3]</color>" };

        System.Text.StringBuilder sb = new System.Text.StringBuilder();

        for (int i = 0; i < 3; i++)
        {
            if (i < top3.Count)
            {
                sb.AppendLine($"{medals[i]} <b>@{top3[i].Key}</b> — <color=#FFD700>${top3[i].Value:F2}</color>");
            }
            else
            {
                sb.AppendLine($"{medals[i]} <i>Disponible...</i>");
            }
        }

        topDonorsText.text = sb.ToString().TrimEnd();
    }

    public void RegisterSuperFan(string username, string reason)
    {
        if (_superFans.Contains(username)) return;
        _superFans.Add(username);

        if (superFansText != null)
        {
            string listStr = string.Join("\n", _superFans.Take(4).Select(u => $"★ <b>@{u}</b>"));
            superFansText.text = listStr;
        }
    }

    // =========================================================================
    // MICRO-MISIONES HUD
    // =========================================================================

    public void UpdateMissionHUD(string title, float timeRemaining, int current, int target, bool isPanic)
    {
        if (missionContainer != null) missionContainer.SetActive(true);

        if (missionTitleText != null)
        {
            missionTitleText.text = $"🎯 <b>MISIÓN:</b> {title}";
        }

        if (missionTimerText != null)
        {
            int secs = Mathf.Max(0, Mathf.CeilToInt(timeRemaining));
            if (isPanic)
            {
                missionTimerText.text = $"<color=#FF2222>⏱️ {secs}s ¡PELIGRO!</color>";
            }
            else
            {
                missionTimerText.text = $"<color=#00FFAA>⏱️ {secs}s</color>";
            }
        }

        if (missionProgressText != null)
        {
            if (target > 0)
                missionProgressText.text = $"{Mathf.Min(current, target)} / {target}";
            else
                missionProgressText.text = $"{current}";
        }

        if (missionProgressSlider != null && target > 0)
        {
            missionProgressSlider.maxValue = target;
            missionProgressSlider.value = Mathf.Clamp(current, 0, target);
        }
    }

    public void HideMissionHUD()
    {
        if (missionContainer != null) missionContainer.SetActive(false);
    }
}
