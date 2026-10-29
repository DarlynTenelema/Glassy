using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// TikTokRelaxUIController — Administrador de Interfaz Visual para la versión Relajada de TikTok Live (Beta.md).
/// 
/// Organización de Pantalla:
/// - Columna Izquierda: Cronómetro de Spawn de Perlas (1 min) + Cola FIFO de donantes + Lista de Recompensas de Gemas + Tiempos Activos.
/// - Columna Central: HUD de Score & Combos Relajados.
/// - Columna Derecha (2 Partes según Beta.md):
///   * Parte Superior: Salón de Donaciones (Top 5 en base a quién dona más).
///   * Parte Inferior: Salón de la Fama de Likes (Top 5 con más likes).
///   * Centro/Inferior: Alerta animada de eventos en vivo.
/// </summary>
public class TikTokRelaxUIController : MonoBehaviour
{
    public static TikTokRelaxUIController Instance { get; private set; }

    [Header("Columna Izquierda: Retos de Likes")]
    public Slider likesSlider;
    public TMP_Text likesProgressText;
    public TMP_Text nextRewardText;
    public TMP_Text rewardsListText;
    public TMP_Text activeTiersText;

    [Header("Columna Izquierda: Filas de Recompensas de Gemas")]
    public TMP_Text rowPerlaText;
    public TMP_Text rowEsmeraldaText;
    public TMP_Text rowAmatistaText;
    public TMP_Text rowTopacioText;
    public TMP_Text rowPeridotoText;
    public TMP_Text rowZafiroText;
    public TMP_Text rowRubiText;
    public TMP_Text rowDiamanteText;

    [Header("Banner Destacado: 1 Moneda = Foto en la Perla")]
    public GameObject pearlCTACard;
    public TMP_Text pearlCTAText;

    [Header("Columna Central: HUD Score & Combo")]
    public TMP_Text liveScoreText;
    public TMP_Text liveComboText;
    public GameObject comboContainer;

    [Header("Columna Derecha: Rankings Top 5 (Beta.md)")]
    [Tooltip("Panel superior: Salón de Donaciones Top 5")]
    public TMP_Text topDonorsTitleText;
    public TMP_Text topDonorsText;

    [Tooltip("Panel inferior: Salón de la Fama de Likes Top 5")]
    public TMP_Text topLikesTitleText;
    public TMP_Text topLikesText;

    [Tooltip("Alerta central de eventos en vivo")]
    public TMP_Text lastEventAlertText;

    // Estado interno
    private int _currentLikes = 0;
    private int _currentMilestoneIndex = 0;
    private readonly int[] _milestones = { 100, 250, 500, 1000, 2500, 5000, 10000 };
    private readonly string[] _milestoneRewards = {
        "Esmeralda", "Amatista", "Topacio", "Zafiro", "Rubí", "Diamante", "Lluvia de Gemas"
    };

    private int _lastDisplayedScore = -1;
    private int _lastDisplayedCombo = -1;
    private Coroutine _alertPulseCoroutine;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        FindRowTextsIfNull();
    }

    private void FindRowTextsIfNull()
    {
        if (rowPerlaText == null) rowPerlaText = FindRowTextByName("Row_Chat_Blanco");
        if (rowEsmeraldaText == null) rowEsmeraldaText = FindRowTextByName("Row_Chat_Negro");
        if (rowAmatistaText == null) rowAmatistaText = FindRowTextByName("Row_Chat_Verde");
        if (rowTopacioText == null) rowTopacioText = FindRowTextByName("Row_Gift_Rosa");
        if (rowPeridotoText == null) rowPeridotoText = FindRowTextByName("Row_Gift_Pesa");
        if (rowZafiroText == null) rowZafiroText = FindRowTextByName("Row_Gift_PackFans");
        if (rowRubiText == null) rowRubiText = FindRowTextByName("Row_Gift_PackTrolls");
        if (rowDiamanteText == null) rowDiamanteText = FindRowTextByName("Row_Gift_VIP");
    }

    private TMP_Text FindRowTextByName(string parentRowName)
    {
        GameObject parent = GameObject.Find(parentRowName);
        if (parent != null)
        {
            Transform rowTextT = parent.transform.Find("RowText");
            if (rowTextT != null)
            {
                return rowTextT.GetComponent<TMP_Text>();
            }
        }
        return null;
    }

    private void Start()
    {
        InitializeUIHeaders();
        UpdateScoreDisplay(0);
        UpdateComboDisplay(0);
        UpdateTopRankings();
        UpdateActiveTiersDisplay();
        UpdatePearlCTADisplay();
        UpdateLikesDisplay();

        ShowEventAlert("<color=#00FFAA>[EN VIVO]</color> <b>Glassy Relaxed Live</b> iniciado. ¡Bienvenidos!");
    }

    private void InitializeUIHeaders()
    {
        if (topDonorsTitleText != null)
        {
            topDonorsTitleText.text = "SALÓN DE LA FAMA (TOP 3 VIP)";
        }

        if (topLikesTitleText != null)
        {
            topLikesTitleText.text = "";
        }

        if (rewardsListText != null)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("<color=#FFD700><b>STATUS VIP: TU FOTO EN EL MATRAZ</b></color>");
            sb.AppendLine("<color=#FF80BF>[1 Moneda]</color> Perla (Foto Próxima)");
            sb.AppendLine("<color=#00FFAA>[5 Monedas]</color> Esmeralda (1 min)");
            sb.AppendLine("<color=#D466FF>[10 Monedas]</color> Amatista (2 min)");
            sb.AppendLine("<color=#FFD700>[15 Monedas]</color> Topacio (3 min)");
            sb.AppendLine("<color=#50E3C2>[20 Monedas]</color> Peridoto (5 min)");
            sb.AppendLine("<color=#00BFFF>[25 Monedas]</color> Zafiro (8 min) / Música");
            sb.AppendLine("<color=#FF4444>[30 Monedas]</color> Rubí (10 min)");
            sb.AppendLine("<color=#00FFFF>[50 Monedas]</color> Diamante (15 min)");
            rewardsListText.text = sb.ToString().TrimEnd();
        }
    }

    private bool _isVerticalApplied = false;
    private bool _hasInitializedLayout = false;

    private void Update()
    {
        // 1. Detección y adaptación automática de orientación (Vertical 9:16 vs Horizontal 16:9)
        bool isVertical = Screen.width < Screen.height;
        if (!_hasInitializedLayout || isVertical != _isVerticalApplied)
        {
            _hasInitializedLayout = true;
            ApplyLayout(isVertical);
        }

        // 2. Sincronizar Puntuacion y Combos
        if (GameManager.Instance != null)
        {
            int score = GameManager.Instance.CurrentScore;
            if (score != _lastDisplayedScore) UpdateScoreDisplay(score);

            int combo = GameManager.Instance.CurrentComboMultiplier;
            if (combo != _lastDisplayedCombo) UpdateComboDisplay(combo);
        }

        // 3. Actualizar conteo regresivo de gemas con fotos activas
        UpdateActiveTiersDisplay();

        // 4. Reinicio Automático de Emergencia si ocurre Game Over (Para streams 24/7 desatendidos)
        if (GameManager.Instance != null && GameManager.Instance.IsGameOver)
        {
            if (!_isRestartingAfterGameOver)
            {
                _isRestartingAfterGameOver = true;
                StartCoroutine(AutoRestartAfterGameOverRoutine(4.0f));
            }
        }
    }

    /// <summary>
    /// Reorganiza dinámicamente toda la interfaz para streaming vertical en TikTok (9:16).
    /// El frasco y las perlas quedan 100% despejados y visibles.
    /// - Superior Izquierdo: Banner Principal de 1 Moneda = Tu Foto en la Perla.
    /// - Superior Derecho: Salón de la Fama / Top 3 Donantes reducido y compacto.
    /// - Superior Centro: HUD de Score & Combo sutil sobre la boca.
    /// - Inferior: Catálogo y estado reducidos a barras sutiles debajo del frasco.
    /// </summary>
    public void ApplyLayout(bool isVertical)
    {
        _isVerticalApplied = isVertical;

        CanvasScaler scaler = GetComponentInParent<CanvasScaler>();
        if (scaler == null) scaler = GetComponent<CanvasScaler>();

        if (isVertical)
        {
            // 1. Escalar Canvas a 1080 x 1920 (Vertical Móvil HD)
            if (scaler != null)
            {
                scaler.referenceResolution = new Vector2(1080, 1920);
                scaler.matchWidthOrHeight = 0.5f;
            }

            // 2. Banner Destacado: 1 Moneda = Tu Foto en la Perla (SUPERIOR IZQUIERDA - A un lado del cuello)
            GameObject pearlCard = EnsurePearlCTACardExists();
            if (pearlCard != null)
            {
                pearlCard.SetActive(true);
                RectTransform rt = pearlCard.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(0f, 1f);
                rt.anchorMax = new Vector2(0f, 1f);
                rt.pivot = new Vector2(0f, 1f);
                rt.anchoredPosition = new Vector2(25, -20);
                rt.sizeDelta = new Vector2(430, 195);
            }
            UpdatePearlCTADisplay();

            // 3. Card Superior: Salón de la Fama / Top 3 Donantes (SUPERIOR DERECHA - Compacto)
            GameObject topCard = GameObject.Find("Card_Top3_TopRight");
            if (topCard != null)
            {
                RectTransform rt = topCard.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(1f, 1f);
                rt.anchorMax = new Vector2(1f, 1f);
                rt.pivot = new Vector2(1f, 1f);
                rt.anchoredPosition = new Vector2(-25, -20);
                rt.sizeDelta = new Vector2(430, 195);

                Transform tituloT = topCard.transform.Find("Titulo_Fama");
                if (tituloT != null)
                {
                    RectTransform trt = tituloT.GetComponent<RectTransform>();
                    trt.anchoredPosition = new Vector2(0, -12);
                    trt.sizeDelta = new Vector2(390, 24);
                    TMP_Text tmp = tituloT.GetComponent<TMP_Text>();
                    if (tmp != null) tmp.fontSize = 17;
                }

                Transform subT = topCard.transform.Find("Sub_TopDonors");
                if (subT != null)
                {
                    RectTransform srt = subT.GetComponent<RectTransform>();
                    srt.anchoredPosition = new Vector2(0, -32);
                    srt.sizeDelta = new Vector2(390, 18);
                    TMP_Text tmp = subT.GetComponent<TMP_Text>();
                    if (tmp != null) tmp.fontSize = 11;
                }

                Transform divT = topCard.transform.Find("Div_Top3");
                if (divT != null)
                {
                    RectTransform drt = divT.GetComponent<RectTransform>();
                    drt.anchoredPosition = new Vector2(0, -48);
                    drt.sizeDelta = new Vector2(380, 2);
                }

                Transform listT = topCard.transform.Find("Txt_TopDonorsList");
                if (listT != null)
                {
                    RectTransform lrt = listT.GetComponent<RectTransform>();
                    lrt.anchoredPosition = new Vector2(0, -55);
                    lrt.sizeDelta = new Vector2(390, 130);
                    TMP_Text tmp = listT.GetComponent<TMP_Text>();
                    if (tmp != null)
                    {
                        tmp.fontSize = 13.5f;
                        tmp.lineSpacing = -5;
                    }
                }
            }

            // 4. HUD Score y Combo (Centrado Arriba, sobre la boca del frasco, sin taparlo)
            GameObject scoreHud = GameObject.Find("HUD_Score_Center");
            if (scoreHud != null)
            {
                RectTransform rt = scoreHud.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(0.5f, 1f);
                rt.anchorMax = new Vector2(0.5f, 1f);
                rt.pivot = new Vector2(0.5f, 1f);
                rt.anchoredPosition = new Vector2(0, -15);
                rt.sizeDelta = new Vector2(170, 50);

                Transform scoreT = scoreHud.transform.Find("Txt_LiveScore");
                if (scoreT != null)
                {
                    RectTransform trt = scoreT.GetComponent<RectTransform>();
                    trt.anchoredPosition = new Vector2(0, 0);
                    trt.sizeDelta = new Vector2(160, 30);
                    TMP_Text tmp = scoreT.GetComponent<TMP_Text>();
                    if (tmp != null) tmp.fontSize = 19;
                }
            }

            // 5. Card de Gemas Activas (Barra de estado sutil en la parte inferior, debajo del frasco)
            GameObject activeCard = GameObject.Find("Card_ActiveTiers_MidRight");
            if (activeCard != null)
            {
                RectTransform rt = activeCard.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(0.5f, 0f);
                rt.anchorMax = new Vector2(0.5f, 0f);
                rt.pivot = new Vector2(0.5f, 0f);
                rt.anchoredPosition = new Vector2(0, 95);
                rt.sizeDelta = new Vector2(850, 36);

                Transform tituloA = activeCard.transform.Find("Titulo_Activas");
                if (tituloA != null) tituloA.gameObject.SetActive(false);

                Transform subA = activeCard.transform.Find("Sub_Activas");
                if (subA != null) subA.gameObject.SetActive(false);

                Transform divA = activeCard.transform.Find("Div_Activas");
                if (divA != null) divA.gameObject.SetActive(false);

                Transform listA = activeCard.transform.Find("Txt_ActiveTiersList");
                if (listA != null)
                {
                    RectTransform lrt = listA.GetComponent<RectTransform>();
                    lrt.anchorMin = Vector2.zero;
                    lrt.anchorMax = Vector2.one;
                    lrt.pivot = new Vector2(0.5f, 0.5f);
                    lrt.offsetMin = new Vector2(10, 0);
                    lrt.offsetMax = new Vector2(-10, 0);
                    lrt.anchoredPosition = Vector2.zero;
                    TMP_Text tmp = listA.GetComponent<TMP_Text>();
                    if (tmp != null)
                    {
                        tmp.fontSize = 14f;
                        tmp.alignment = TextAlignmentOptions.Center;
                    }
                }
            }

            // 6. Card Inferior: Catálogo Reducido a barra compacta (Bajo la botella, despejando la animación)
            GameObject catalogCard = GameObject.Find("Card_VIPCatalog_Left");
            if (catalogCard != null)
            {
                RectTransform rt = catalogCard.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(0.5f, 0f);
                rt.anchorMax = new Vector2(0.5f, 0f);
                rt.pivot = new Vector2(0.5f, 0f);
                rt.anchoredPosition = new Vector2(0, 15);
                rt.sizeDelta = new Vector2(1040, 72);

                // Título y Subtítulo compactos de una línea
                Transform tituloT = catalogCard.transform.Find("Titulo_VIP");
                if (tituloT != null)
                {
                    RectTransform trt = tituloT.GetComponent<RectTransform>();
                    trt.anchoredPosition = new Vector2(0, 12);
                    trt.sizeDelta = new Vector2(1000, 26);
                    TMP_Text tmp = tituloT.GetComponent<TMP_Text>();
                    if (tmp != null)
                    {
                        tmp.fontSize = 18;
                        tmp.text = "💎 <color=#FFD700>OTROS REGALOS VIP:</color> 5🪙 Esmeralda • 10🪙 Amatista • 25🪙 DJ Música 🎵 • 50🪙 Diamante";
                    }
                }

                Transform subT = catalogCard.transform.Find("Sub_VIP");
                if (subT != null)
                {
                    RectTransform srt = subT.GetComponent<RectTransform>();
                    srt.anchoredPosition = new Vector2(0, -14);
                    srt.sizeDelta = new Vector2(1000, 20);
                    TMP_Text tmp = subT.GetComponent<TMP_Text>();
                    if (tmp != null)
                    {
                        tmp.fontSize = 12.5f;
                        tmp.text = "<color=#80A0C0><i>(Dona estos regalos para activar tu foto en gemas de mayor duración o cambiar la música en vivo)</i></color>";
                    }
                }

                // Ocultar divisores y cajas secundarias que estorbaban
                Transform divTop = catalogCard.transform.Find("Div_VIP_Top");
                if (divTop != null) divTop.gameObject.SetActive(false);

                Transform divBottom = catalogCard.transform.Find("Div_VIP_Bottom");
                if (divBottom != null) divBottom.gameObject.SetActive(false);

                Transform tipMusic = catalogCard.transform.Find("Box_TipMusic");
                if (tipMusic != null) tipMusic.gameObject.SetActive(false);

                // Ocultar las 8 filas grandes para no tapar la botella (se mantienen en memoria para que sigan actualizándose)
                string[] allRows = { "Row_Perla", "Row_Esmeralda", "Row_Amatista", "Row_Topacio", "Row_Peridoto", "Row_Zafiro", "Row_Rubi", "Row_Diamante" };
                foreach (string rowName in allRows)
                {
                    Transform rowT = catalogCard.transform.Find(rowName);
                    if (rowT != null)
                    {
                        rowT.gameObject.SetActive(false);
                    }
                }
            }
        }
        else
        {
            // Restaurar Canvas a 1920 x 1080 (Modo Horizontal Original)
            if (scaler != null)
            {
                scaler.referenceResolution = new Vector2(1920, 1080);
                scaler.matchWidthOrHeight = 0.5f;
            }
        }
    }

    /// <summary>
    /// Asegura que el GameObject del banner de la Perla exista y esté configurado.
    /// </summary>
    private GameObject EnsurePearlCTACardExists()
    {
        if (pearlCTACard != null)
        {
            if (pearlCTAText == null) pearlCTAText = pearlCTACard.GetComponentInChildren<TMP_Text>();
            return pearlCTACard;
        }

        GameObject found = GameObject.Find("Card_PearlCTA");
        if (found != null)
        {
            pearlCTACard = found;
            if (pearlCTAText == null) pearlCTAText = found.GetComponentInChildren<TMP_Text>();
            return pearlCTACard;
        }

        // Crear dinámicamente si no existe
        Transform canvasT = transform;
        Canvas parentCanvas = GetComponentInParent<Canvas>();
        if (parentCanvas != null) canvasT = parentCanvas.transform;

        GameObject card = new GameObject("Card_PearlCTA");
        card.transform.SetParent(canvasT, false);

        RectTransform rt = card.AddComponent<RectTransform>();
        rt.anchorMin = new Vector2(0f, 1f);
        rt.anchorMax = new Vector2(0f, 1f);
        rt.pivot = new Vector2(0f, 1f);
        rt.anchoredPosition = new Vector2(25, -20);
        rt.sizeDelta = new Vector2(430, 195);

        Image img = card.AddComponent<Image>();
        GameObject topCard = GameObject.Find("Card_Top3_TopRight");
        if (topCard != null)
        {
            Image topImg = topCard.GetComponent<Image>();
            if (topImg != null)
            {
                img.sprite = topImg.sprite;
                img.type = topImg.type;
            }
        }
        img.color = new Color(0.04f, 0.08f, 0.18f, 0.92f);

        Outline outline = card.AddComponent<Outline>();
        outline.effectColor = new Color(1.0f, 0.45f, 0.75f, 0.65f);
        outline.effectDistance = new Vector2(2f, -2f);

        GameObject textObj = new GameObject("Txt_PearlCTA");
        textObj.transform.SetParent(card.transform, false);
        TMP_Text tmp = textObj.AddComponent<TextMeshProUGUI>();
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.textWrappingMode = TextWrappingModes.Normal;
        tmp.richText = true;

        RectTransform trt = textObj.GetComponent<RectTransform>();
        trt.anchorMin = Vector2.zero;
        trt.anchorMax = Vector2.one;
        trt.pivot = new Vector2(0.5f, 0.5f);
        trt.offsetMin = new Vector2(14, 10);
        trt.offsetMax = new Vector2(-14, -10);

        pearlCTACard = card;
        pearlCTAText = tmp;

        return card;
    }

    /// <summary>
    /// Actualiza el texto visual del banner de la Perla (1 Moneda = Tu Foto).
    /// Muestra en tiempo real la cola de donadores y disponibilidad.
    /// </summary>
    public void UpdatePearlCTADisplay()
    {
        if (pearlCTAText == null)
        {
            EnsurePearlCTACardExists();
        }

        if (pearlCTAText == null) return;

        int q = TikTokRelaxDonorManager.Instance != null ? TikTokRelaxDonorManager.Instance.QueuedPearlsCount : 0;
        string nextUser = TikTokRelaxDonorManager.Instance != null ? TikTokRelaxDonorManager.Instance.NextQueuedDonorName : "";

        string statusLine;
        if (q == 0)
        {
            statusLine = "<color=#00FFAA>🟢 <b>DISPONIBLE AHORA</b> (¡Sé el primero!)</color>";
        }
        else
        {
            string cleanUser = !string.IsNullOrEmpty(nextUser) ? (nextUser.StartsWith("@") ? nextUser : "@" + nextUser) : "donador";
            statusLine = $"<color=#FFD700>⏳ <b>En cola: {q}</b></color> <color=#E0E0E0>(Sig: {cleanUser})</color>";
        }

        pearlCTAText.text =
            "<size=21>🌹 <color=#FF80BF><b>1 MONEDA</b></color> = <color=#FFD700><b>TU FOTO EN LA PERLA</b></color> ⚪</size>\n" +
            "<size=14.5><color=#D0E8FF>Dona 1 Rosa o Moneda y tu perfil cae al frasco en vivo</color></size>\n" +
            $"<size=13.5>{statusLine}</size>";
    }

    private bool _isRestartingAfterGameOver = false;

    private IEnumerator AutoRestartAfterGameOverRoutine(float delaySeconds)
    {
        ShowEventAlert($"<color=#FF4444>[GAME OVER]</color> Reiniciando ronda automática en {delaySeconds:F0}s...");
        yield return new WaitForSecondsRealtime(delaySeconds);
        _isRestartingAfterGameOver = false;

        if (GameManager.Instance != null)
        {
            GameManager.Instance.RestartGame();
            ShowEventAlert("<color=#00FFAA>[EN VIVO]</color> ¡Nueva ronda iniciada automáticamente!");
        }
    }

    // =========================================================================
    // RETOS DE LIKES (COMUNIDAD)
    // =========================================================================

    public void AddLikes(int count)
    {
        _currentLikes += count;
        int target = _milestones[_currentMilestoneIndex];

        if (_currentLikes >= target)
        {
            string reward = _milestoneRewards[_currentMilestoneIndex];
            ShowEventAlert($"🎉 ¡META DE {target:N0} LIKES ALCANZADA! Cae {reward}");

            if (_currentMilestoneIndex < _milestones.Length - 1)
            {
                _currentMilestoneIndex++;
            }
            else
            {
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

    public void UpdatePearlQueueStatus(int queuedCount, string nextDonor)
    {
        UpdatePearlCTADisplay();
    }

    public void NotifyPearlSpawnedWithDonor(string donorUsername)
    {
        ShowEventAlert($"<color=#FF80BF>[PERLA]</color> ¡Una perla ha caído con la foto de <b>@{donorUsername}</b>!");
        UpdatePearlCTADisplay();
    }

    // =========================================================================
    // TIEMPOS DE GEMAS ACTIVAS (Con Animales y Regalos de TikTok)
    // =========================================================================

    public void UpdateActiveTiersDisplay()
    {
        // Actualizar banner principal de la perla
        UpdatePearlCTADisplay();

        // 1. Fila de Perla (1 moneda - Rosa)
        if (rowPerlaText != null)
        {
            int q = TikTokRelaxDonorManager.Instance != null ? TikTokRelaxDonorManager.Instance.QueuedPearlsCount : 0;
            string nextUser = TikTokRelaxDonorManager.Instance != null ? TikTokRelaxDonorManager.Instance.NextQueuedDonorName : "";
            if (q == 0)
            {
                rowPerlaText.text = "<color=#FF80BF><b>🌹 Rosa (1 🪙)</b></color>\n<size=18><color=#E0E0E0>Perla</color> | <color=#00FFAA>🟢 DISPONIBLE (1 Vez)</color></size>";
            }
            else
            {
                string nextInfo = !string.IsNullOrEmpty(nextUser) ? $" | Sig: {nextUser}" : "";
                rowPerlaText.text = $"<color=#FF80BF><b>🌹 Rosa (1 🪙)</b></color>\n<size=18><color=#FFD700>⏳ Cola: {q} donador{(q > 1 ? "es" : "")}{nextInfo}</color></size>";
            }
        }

        // 2. Filas de Gemas Temporales con Nombres y Emojis de Regalos de TikTok
        UpdateTimedGemRow(rowEsmeraldaText, GemType.Emerald, "Esmeralda", 5, "🐼 Panda / 🐥 Patito", "1 min", "#00FFAA");
        UpdateTimedGemRow(rowAmatistaText, GemType.Amethyst, "Amatista", 10, "🪄 Varita / 🏋️ Pesa", "2 min", "#B388FF");
        UpdateTimedGemRow(rowTopacioText, GemType.Topaz, "Topacio", 15, "🍩 Dona / 🕶️ Gafas", "3 min", "#FFE082");
        UpdateTimedGemRow(rowPeridotoText, GemType.GreenRuby, "Peridoto", 20, "🎉 Confeti / 🧴 Perfume", "5 min", "#69F0AE");
        UpdateTimedGemRow(rowZafiroText, GemType.Sapphire, "Zafiro", 25, "🥊 Box / 🎧 DJ Música", "8 min", "#40C4FF");
        UpdateTimedGemRow(rowRubiText, GemType.RedRuby, "Rubí", 30, "👑 Corona / 🐕 Corgi", "10 min", "#FF5252");
        UpdateTimedGemRow(rowDiamanteText, GemType.Diamond, "Diamante", 50, "🦁 León / ✈️ Avión", "15 min", "#00E5FF");

        // 3. Panel adicional de fotos en enfriamiento si existe en pantalla (Formato sutil de una línea)
        if (activeTiersText != null && TikTokRelaxDonorManager.Instance != null)
        {
            var tiers = TikTokRelaxDonorManager.Instance.ActiveTiers;
            if (tiers.Count == 0)
            {
                activeTiersText.text = "<color=#00FFAA>🟢 <i>Todas las gemas libres. ¡Dona un regalo para poner tu foto!</i></color>";
                return;
            }

            StringBuilder sb = new StringBuilder();
            sb.Append("<color=#00E5FF><b>FOTOS ACTIVAS: </b></color>");

            string[] spinFrames = { "◐", "◓", "◑", "◒" };
            int spinIdx = Mathf.FloorToInt(Time.time * 2.5f) % spinFrames.Length;
            string spinner = spinFrames[spinIdx];

            bool first = true;
            foreach (var kvp in tiers)
            {
                ActiveGemTier tier = kvp.Value;
                float leftSecs = Mathf.Max(0f, tier.ExpireTime - Time.time);
                int m = Mathf.FloorToInt(leftSecs / 60f);
                int s = Mathf.FloorToInt(leftSecs % 60f);

                string gemName = TikTokRelaxDonorManager.GetGemDisplayName(tier.GemType);
                string cleanUser = tier.Username.StartsWith("@") ? tier.Username : "@" + tier.Username;
                if (!first) sb.Append(" • ");
                sb.Append($"<color=#FF4488>{spinner}</color> <b>{gemName}:</b> {cleanUser} (<color=#00FFAA>{m:D2}:{s:D2}</color>)");
                first = false;
            }

            activeTiersText.text = sb.ToString().TrimEnd();
        }
    }

    private void UpdateTimedGemRow(TMP_Text rowText, GemType type, string gemName, int coins, string giftName, string durationText, string titleColorHex)
    {
        if (rowText == null) return;

        var donorMgr = TikTokRelaxDonorManager.Instance;
        float remainingSeconds = 0f;
        float progressRatio = 0f;
        string owner = "";
        bool inUse = donorMgr != null && donorMgr.IsTierInCooldown(type, out remainingSeconds, out progressRatio, out owner);

        if (!inUse)
        {
            rowText.text = $"<color={titleColorHex}><b>{giftName} ({coins} 🪙)</b></color>\n<size=18><color=#E0E0E0>{gemName}</color> | <color=#00FFAA>🟢 DISPONIBLE ({durationText})</color></size>";
        }
        else
        {
            int m = Mathf.FloorToInt(remainingSeconds / 60f);
            int s = Mathf.FloorToInt(remainingSeconds % 60f);
            string timeStr = $"{m:D2}:{s:D2}";

            string[] spinFrames = { "◐", "◓", "◑", "◒" };
            int spinIdx = Mathf.FloorToInt(Time.time * 2.5f) % spinFrames.Length;
            string spinner = spinFrames[spinIdx];

            rowText.text = $"<color={titleColorHex}><b>{giftName} ({coins} 🪙)</b></color>\n<size=18><color=#FF4444>🔴 OCUPADA: {owner} ({spinner} {timeStr})</color></size>";
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

    // ======    // RANKINGS TOP 3 VIP (COLUMNA DERECHA)
    // =========================================================================

    public void UpdateTopRankings()
    {
        if (TikTokRelaxDonorManager.Instance == null) return;

        // Arriba: Salón de la Fama (Top 3 Donantes VIP en monedas)
        if (topDonorsText != null)
        {
            var topDonors = TikTokRelaxDonorManager.Instance.GetTopDonors(3);
            string[] medals = { "<color=#FFD700><b>#1</b></color>", "<color=#E0E0E0><b>#2</b></color>", "<color=#CD7F32><b>#3</b></color>" };

            if (topDonors.Count == 0)
            {
                topDonorsText.text = "<color=#80A0C0><i>Sé el primer donador de la sesión...</i></color>\n" +
                                     "<color=#FFD700>#1</color> <color=#405870>Disponible</color>\n" +
                                     "<color=#E0E0E0>#2</color> <color=#405870>Disponible</color>\n" +
                                     "<color=#CD7F32>#3</color> <color=#405870>Disponible</color>";
            }
            else
            {
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < 3; i++)
                {
                    if (i < topDonors.Count)
                    {
                        string cleanName = topDonors[i].Key.StartsWith("@") ? topDonors[i].Key : "@" + topDonors[i].Key;
                        sb.AppendLine($"{medals[i]} <b>{cleanName}</b> — <color=#FFD700>{topDonors[i].Value} Monedas</color>");
                    }
                    else
                    {
                        sb.AppendLine($"{medals[i]} <color=#405870><i>Disponible...</i></color>");
                    }
                }
                topDonorsText.text = sb.ToString().TrimEnd();
            }
        }

        // Likes: Silenciado porque ahora se gestiona directamente en TikTok Studio
        if (topLikesText != null)
        {
            topLikesText.text = "";
        }
    }

    // =========================================================================
    // ALERTAS DE EVENTOS EN VIVO
    // =========================================================================

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

        for (float f = 0; f < 1f; f += Time.unscaledDeltaTime * 4f)
        {
            float s = 1f + Mathf.Sin(f * Mathf.PI) * 0.15f;
            t.localScale = origScale * s;
            yield return null;
        }
        t.localScale = origScale;
    }
}
