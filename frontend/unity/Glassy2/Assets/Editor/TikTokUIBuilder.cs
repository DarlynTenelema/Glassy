using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// TikTokUIBuilder — Herramienta de Editor para generar la interfaz profesional
/// de Tarjetas de Cristal Flotantes (Glassmorphic Floating Cards) para TikTok Live en Unity.
/// Incluye filas visuales con iconos oficiales de regalos de TikTok y gemas.
/// </summary>
public class TikTokUIBuilder : EditorWindow
{
    [MenuItem("Glassy/Versión Relax/1. Abrir Escena Relax (TikTok)")]
    public static void OpenTikTokRelaxScene()
    {
        string scenePath = "Assets/Scenes/TikTokRelaxScene.unity";
        if (System.IO.File.Exists(scenePath))
        {
            UnityEditor.SceneManagement.EditorSceneManager.OpenScene(scenePath);
            Debug.Log("[Glassy] Escena TikTokRelaxScene abierta correctamente.");
        }
        else
        {
            EditorUtility.DisplayDialog("Error", "No se encontró Assets/Scenes/TikTokRelaxScene.unity", "Aceptar");
        }
    }

    [MenuItem("Glassy/Versión Relax/2. Generar UI Relax Limpia (TikTok Studio Ready)")]
    public static void BuildTikTokRelaxUI()
    {
        // 1. Abrir escena Relax si no está abierta
        string scenePath = "Assets/Scenes/TikTokRelaxScene.unity";
        if (System.IO.File.Exists(scenePath))
        {
            UnityEditor.SceneManagement.EditorSceneManager.OpenScene(scenePath);
        }

        // 2. Limpiar canvas previo si existe
        GameObject existingCanvas = GameObject.Find("TikTokLiveCanvas");
        if (existingCanvas != null)
        {
            Undo.DestroyObjectImmediate(existingCanvas);
        }

        // 3. Cargar sprites 9-slice y assets gráficos
        Sprite cardSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/rounded_card.png");
        Sprite borderSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/glass_panel_border.png");

        Sprite roseSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/rosa.png");
        Sprite coinSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/moneda.png");
        Sprite weightSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/pesa.png");

        Sprite pearlSprite    = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/perla.png");
        Sprite emeraldSprite  = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/esmeralda.png");
        Sprite amethystSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/amatista.png");
        Sprite topazSprite    = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/topacio.png");
        Sprite peridotSprite  = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/peridoto.png");
        Sprite sapphireSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/zafiro.png");
        Sprite rubySprite     = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/rubi.png");
        Sprite diamondSprite  = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/diamante.png");

        // 4. Crear Canvas 1080x1920 (Vertical Móvil HD)
        GameObject canvasObj = new GameObject("TikTokLiveCanvas");
        Undo.RegisterCreatedObjectUndo(canvasObj, "Crear TikTok Live Relax UI");

        Canvas canvas = canvasObj.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 100;

        CanvasScaler scaler = canvasObj.AddComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1080, 1920);
        scaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
        scaler.matchWidthOrHeight = 0.5f;

        canvasObj.AddComponent<GraphicRaycaster>();

        TikTokRelaxUIController controller = canvasObj.AddComponent<TikTokRelaxUIController>();

        // Paleta Glassmorphic
        Color glassBg    = new Color(0.04f, 0.08f, 0.18f, 0.92f);
        Color accentCyan = new Color(0.0f, 0.95f, 1.0f, 1.0f);
        Color accentGold = new Color(1.0f, 0.82f, 0.2f, 1.0f);
        Color rowBgColor = new Color(0.08f, 0.14f, 0.26f, 0.75f);

        // =====================================================================
        // 1. BANNER DESTACADO: 1 MONEDA = TU FOTO EN LA PERLA (SUPERIOR IZQUIERDA)
        // =====================================================================
        GameObject cardPearl = CreateFloatingCard("Card_PearlCTA", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(430f, 195f), new Vector2(25f, -20f));

        Outline outlinePearl = cardPearl.AddComponent<Outline>();
        outlinePearl.effectColor = new Color(1.0f, 0.45f, 0.75f, 0.65f);
        outlinePearl.effectDistance = new Vector2(2f, -2f);

        TMP_Text txtPearlCTA = CreateText("Txt_PearlCTA", cardPearl.transform,
            "<size=21>🌹 <color=#FF80BF><b>1 MONEDA</b></color> = <color=#FFD700><b>TU FOTO EN LA PERLA</b></color> ⚪</size>\n" +
            "<size=14.5><color=#D0E8FF>Dona 1 Rosa o Moneda y tu perfil cae al frasco en vivo</color></size>\n" +
            "<size=13.5><color=#00FFAA>🟢 <b>DISPONIBLE AHORA</b> (¡Sé el primero!)</color></size>",
            15, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(400f, 165f), Vector2.zero, TextAlignmentOptions.Center);
        controller.pearlCTACard = cardPearl;
        controller.pearlCTAText = txtPearlCTA;

        // =====================================================================
        // 2. COLUMNA CENTRAL: HUD SUPERIOR MINIMALISTA (Score & Combo sobre la boca)
        // =====================================================================
        GameObject centerHUD = CreateFloatingCard("HUD_Score_Center", canvasObj.transform, cardSprite, borderSprite, new Color(0.03f, 0.05f, 0.12f, 0.90f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(170f, 50f), new Vector2(0f, -15f));

        TMP_Text txtScore = CreateText("Txt_LiveScore", centerHUD.transform, "SCORE: <color=#00E5FF>0</color>", 19, FontStyles.Bold, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(160f, 30f), Vector2.zero);
        controller.liveScoreText = txtScore;

        GameObject comboObj = CreateUIObject("ComboBadge", centerHUD.transform);
        RectTransform rtCombo = comboObj.GetComponent<RectTransform>();
        SetAnchors(rtCombo, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f));
        rtCombo.sizeDelta = new Vector2(150f, 18f);
        rtCombo.anchoredPosition = new Vector2(0f, -18f);

        TMP_Text txtCombo = CreateText("Txt_LiveCombo", comboObj.transform, "COMBO X1!", 11, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(150f, 18f), Vector2.zero);
        controller.liveComboText = txtCombo;
        controller.comboContainer = comboObj;
        comboObj.SetActive(false);

        // =====================================================================
        // 3. COLUMNA DERECHA: SALÓN DE LA FAMA (TOP 3 VIP COMPACTO)
        // =====================================================================
        GameObject cardTop3 = CreateFloatingCard("Card_Top3_TopRight", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(430f, 195f), new Vector2(-25f, -20f));

        TMP_Text txtTopTitle = CreateText("Titulo_Fama", cardTop3.transform, "👑 TOP 3 DONANTES VIP", 17, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 24f), new Vector2(0f, -12f));
        controller.topDonorsTitleText = txtTopTitle;

        CreateText("Sub_TopDonors", cardTop3.transform, "Ranking en vivo de monedas", 11f, FontStyles.Normal, accentCyan,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 18f), new Vector2(0f, -32f));

        CreateDivider("Div_Top3", cardTop3.transform, new Vector2(0f, -48f), 380f);

        TMP_Text txtTopDonors = CreateText("Txt_TopDonorsList", cardTop3.transform,
            "<color=#80A0C0><i>Sé el primer donador de la sesión...</i></color>\n<color=#FFD700>#1</color> <color=#405870>Disponible</color>\n<color=#E0E0E0>#2</color> <color=#405870>Disponible</color>\n<color=#CD7F32>#3</color> <color=#405870>Disponible</color>",
            13.5f, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 130f), new Vector2(0f, -55f), TextAlignmentOptions.TopLeft);
        controller.topDonorsText = txtTopDonors;

        // =====================================================================
        // 4. INFERIOR: FOTOS ACTIVAS / ENFRIAMIENTO (TIEMPO SUTIL)
        // =====================================================================
        GameObject cardActiveTiers = CreateFloatingCard("Card_ActiveTiers_MidRight", canvasObj.transform, cardSprite, borderSprite, new Color(0.05f, 0.10f, 0.22f, 0.90f),
            new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(850f, 36f), new Vector2(0f, 95f));

        TMP_Text txtActiveTiers = CreateText("Txt_ActiveTiersList", cardActiveTiers.transform,
            "<color=#00FFAA>🟢 <i>Todas las gemas libres. ¡Dona para colocar tu foto!</i></color>", 14f, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(830f, 32f), Vector2.zero, TextAlignmentOptions.Center);
        controller.activeTiersText = txtActiveTiers;

        // =====================================================================
        // 5. INFERIOR: CATÁLOGO REDUCIDO DE OTRAS GEMAS (DEBAJO DE LA BOTELLA)
        // =====================================================================
        GameObject cardVIP = CreateFloatingCard("Card_VIPCatalog_Left", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(1040f, 72f), new Vector2(0f, 15f));

        CreateText("Titulo_VIP", cardVIP.transform, "💎 <color=#FFD700>OTROS REGALOS VIP:</color> 5🪙 Esmeralda • 10🪙 Amatista • 25🪙 DJ Música 🎵 • 50🪙 Diamante", 18, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(1000f, 26f), new Vector2(0f, 12f));

        CreateText("Sub_VIP", cardVIP.transform, "<color=#80A0C0><i>(Dona estos regalos para activar tu foto en gemas de mayor duración o cambiar la música en vivo)</i></color>", 12.5f, FontStyles.Normal, accentCyan,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(1000f, 20f), new Vector2(0f, -14f));

        // Mantener las 8 filas creadas en jerarquía para no romper referencias (pero ocultas para no tapar el frasco)
        controller.rowPerlaText = CreateStatusRow("Row_Perla", cardVIP.transform, cardSprite, rowBgColor, roseSprite, pearlSprite, Vector2.zero, Vector2.zero);
        controller.rowEsmeraldaText = CreateStatusRow("Row_Esmeralda", cardVIP.transform, cardSprite, rowBgColor, coinSprite, emeraldSprite, Vector2.zero, Vector2.zero);
        controller.rowAmatistaText = CreateStatusRow("Row_Amatista", cardVIP.transform, cardSprite, rowBgColor, coinSprite, amethystSprite, Vector2.zero, Vector2.zero);
        controller.rowTopacioText = CreateStatusRow("Row_Topacio", cardVIP.transform, cardSprite, rowBgColor, coinSprite, topazSprite != null ? topazSprite : emeraldSprite, Vector2.zero, Vector2.zero);
        controller.rowPeridotoText = CreateStatusRow("Row_Peridoto", cardVIP.transform, cardSprite, rowBgColor, weightSprite, peridotSprite != null ? peridotSprite : emeraldSprite, Vector2.zero, Vector2.zero);
        controller.rowZafiroText = CreateStatusRow("Row_Zafiro", cardVIP.transform, cardSprite, rowBgColor, weightSprite, sapphireSprite != null ? sapphireSprite : emeraldSprite, Vector2.zero, Vector2.zero);
        controller.rowRubiText = CreateStatusRow("Row_Rubi", cardVIP.transform, cardSprite, rowBgColor, weightSprite, rubySprite, Vector2.zero, Vector2.zero);
        controller.rowDiamanteText = CreateStatusRow("Row_Diamante", cardVIP.transform, cardSprite, rowBgColor, coinSprite, diamondSprite != null ? diamondSprite : emeraldSprite, Vector2.zero, Vector2.zero);

        string[] rowsToHide = { "Row_Perla", "Row_Esmeralda", "Row_Amatista", "Row_Topacio", "Row_Peridoto", "Row_Zafiro", "Row_Rubi", "Row_Diamante" };
        foreach (string rName in rowsToHide)
        {
            Transform t = cardVIP.transform.Find(rName);
            if (t != null) t.gameObject.SetActive(false);
        }

        // =====================================================================
        // 6. AJUSTAR CÁMARA PARA CENTRAR EL FRASCO EN PANTALLA
        // =====================================================================
        Camera cam = Camera.main;
        if (cam != null)
        {
            cam.transform.position = new Vector3(0f, 0.35f, -10f);
            CameraAspectFitter fitter = cam.GetComponent<CameraAspectFitter>();
            if (fitter != null)
            {
                fitter.targetWidth = 5.2f;
                fitter.targetHalfHeight = 4.8f;
                EditorUtility.SetDirty(fitter);
            }
            EditorUtility.SetDirty(cam);
        }

        Selection.activeGameObject = canvasObj;
        EditorUtility.SetDirty(canvasObj);
        UnityEditor.SceneManagement.EditorSceneManager.MarkSceneDirty(UnityEditor.SceneManagement.EditorSceneManager.GetActiveScene());

        Debug.Log("✅ [TikTokUIBuilder] ¡UI Relax Rediseñada montada con éxito con frasco 100% visible!");
        EditorUtility.DisplayDialog("Éxito",
            "¡UI Relax Rediseñada montada con éxito!\n\n" +
            "• Banner principal '1 Moneda = Tu Foto en la Perla' en la parte superior izquierda.\n" +
            "• Salón de la Fama TOP 3 reducido en la parte superior derecha.\n" +
            "• Score sutil centrado sobre la boca del frasco.\n" +
            "• Frasco y físicas 100% despejados y visibles al centro.\n" +
            "• Catálogo y estado sutiles reducidos abajo.",
            "Aceptar");
    }

    [MenuItem("Glassy/2. Generar UI TikTok (3 Columnas)")]
    public static void BuildTikTokLiveUI()
    {
        // 1. Limpiar canvas previo si existe
        GameObject existingCanvas = GameObject.Find("TikTokLiveCanvas");
        if (existingCanvas != null)
        {
            Undo.DestroyObjectImmediate(existingCanvas);
        }

        // 2. Cargar sprites 9-slice y assets gráficos
        Sprite cardSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/rounded_card.png");
        Sprite borderSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/glass_panel_border.png");

        Sprite roseSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/rosa.png");
        Sprite weightSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/pesa.png");
        Sprite coinSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Sprites/TikTokGifts/moneda.png");

        Sprite quartzSprite  = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/cuarzo.png");
        Sprite stoneSprite   = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/piedra.png");
        Sprite emeraldSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/esmeralda.png");
        Sprite amethystSprite = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/amatista.png");
        Sprite rubySprite    = AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Gemas/rubi.png");

        // 3. Crear Canvas 1920x1080
        GameObject canvasObj = new GameObject("TikTokLiveCanvas");
        Undo.RegisterCreatedObjectUndo(canvasObj, "Crear TikTok Live UI");

        Canvas canvas = canvasObj.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 100;

        CanvasScaler scaler = canvasObj.AddComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920, 1080);
        scaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
        scaler.matchWidthOrHeight = 0.5f;

        canvasObj.AddComponent<GraphicRaycaster>();

        TikTokUIController controller = canvasObj.AddComponent<TikTokUIController>();

        // Paleta de colores Glassmorphic
        Color glassBg      = new Color(0.04f, 0.08f, 0.16f, 0.82f);
        Color accentCyan   = new Color(0.0f, 0.95f, 1.0f, 1.0f);
        Color accentGold   = new Color(1.0f, 0.82f, 0.2f, 1.0f);
        Color accentPink   = new Color(1.0f, 0.25f, 0.5f, 1.0f);
        Color rowBgColor   = new Color(0.08f, 0.14f, 0.26f, 0.70f);

        // =====================================================================
        // COLUMNA IZQUIERDA: TARJETA 1 (SUPERIOR) — META DE LIKES
        // =====================================================================
        GameObject cardLikes = CreateFloatingCard("Card_Likes_TopLeft", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(430f, 200f), new Vector2(30f, -30f));

        CreateText("Titulo_Likes", cardLikes.transform, "RETOS DE LIKES (COMUNIDAD)", 18, FontStyles.Bold, accentCyan,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 30f), new Vector2(0f, -16f));

        GameObject sliderObj = CreateSlider("Slider_Likes", cardLikes.transform, cardSprite, new Vector2(0f, -65f), new Vector2(370f, 22f));
        controller.likesSlider = sliderObj.GetComponent<Slider>();

        TMP_Text txtLikes = CreateText("Txt_LikesCount", cardLikes.transform, "0 / 100 Likes", 16, FontStyles.Bold, Color.white,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(370f, 26f), new Vector2(0f, -102f));
        controller.likesProgressText = txtLikes;

        TMP_Text txtReward = CreateText("Txt_Reward", cardLikes.transform, "Meta activa: <color=#00FFAA>Esmeralda</color>", 15, FontStyles.Normal, accentGold,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(370f, 26f), new Vector2(0f, -140f));
        controller.nextRewardText = txtReward;

        // =====================================================================
        // COLUMNA IZQUIERDA: TARJETA 2 (INFERIOR) — COMANDOS & REGALOS CON ICONOS
        // =====================================================================
        GameObject cardComandos = CreateFloatingCard("Card_Comandos_BottomLeft", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(0f, 0f), new Vector2(0f, 0f), new Vector2(0f, 0f), new Vector2(430f, 790f), new Vector2(30f, 30f));

        CreateText("Titulo_Chat", cardComandos.transform, "COMANDOS DE CHAT (GRATIS)", 18, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 28f), new Vector2(0f, -16f));

        // Filas de Comandos de Chat con icono de gema
        CreateVisualRow("Row_Chat_Blanco", cardComandos.transform, cardSprite, rowBgColor,
            quartzSprite, "<color=#FFFFFF><b>Chat: [BLANCO x5]</b></color>\n<size=11><color=#A8C5E8>Spawnea 1 Cuarzo (Limpia espacio)</color></size>",
            quartzSprite, new Vector2(0f, -50f), new Vector2(390f, 36f), 26f);

        CreateVisualRow("Row_Chat_Negro", cardComandos.transform, cardSprite, rowBgColor,
            stoneSprite, "<color=#B0B0B0><b>Chat: [NEGRO x10]</b></color>\n<size=11><color=#A8C5E8>Spawnea 1 Piedra (Sabotaje troll)</color></size>",
            stoneSprite, new Vector2(0f, -90f), new Vector2(390f, 36f), 26f);

        CreateVisualRow("Row_Chat_Verde", cardComandos.transform, cardSprite, rowBgColor,
            emeraldSprite, "<color=#00FFAA><b>Chat: [VERDE x10]</b></color>\n<size=11><color=#A8C5E8>Avalancha de 10 Esmeraldas</color></size>",
            emeraldSprite, new Vector2(0f, -130f), new Vector2(390f, 36f), 26f);

        CreateVisualRow("Row_Chat_Morado", cardComandos.transform, cardSprite, rowBgColor,
            amethystSprite != null ? amethystSprite : emeraldSprite, "<color=#D946EF><b>Chat: [MORADO x20]</b></color>\n<size=11><color=#A8C5E8>Avalancha de 10 Amatistas</color></size>",
            amethystSprite != null ? amethystSprite : emeraldSprite, new Vector2(0f, -170f), new Vector2(390f, 36f), 26f);

        CreateDivider("Div_Left", cardComandos.transform, new Vector2(0f, -198f), 380f);

        CreateText("Titulo_Gifts", cardComandos.transform, "REGALOS DE TIKTOK (EN VIVO)", 18, FontStyles.Bold, accentPink,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 28f), new Vector2(0f, -220f));

        // Filas Visuales de Regalos de TikTok con Iconos Oficiales
        CreateVisualRow("Row_Gift_005", cardComandos.transform, cardSprite, rowBgColor,
            roseSprite, "<color=#FF4D6D><b>Regalo ($0.05 USD)</b></color>\n<size=11><color=#C2D8F0>Limpia Topacio-Rubí (+pts) / 1 Cuarzo</color></size>",
            quartzSprite, new Vector2(0f, -258f), new Vector2(390f, 44f), 32f);

        CreateVisualRow("Row_Gift_010", cardComandos.transform, cardSprite, rowBgColor,
            weightSprite, "<color=#00E5FF><b>Regalo ($0.10 USD)</b></color>\n<size=11><color=#C2D8F0>Limpia TODO (+pts) / 1 Piedra</color></size>",
            stoneSprite, new Vector2(0f, -308f), new Vector2(390f, 44f), 32f);

        CreateVisualRow("Row_Gift_015", cardComandos.transform, cardSprite, rowBgColor,
            emeraldSprite, "<color=#00FFAA><b>Regalo ($0.15 USD)</b></color>\n<size=11><color=#C2D8F0>Corta Combo a Cero / 10 Esmeraldas</color></size>",
            emeraldSprite, new Vector2(0f, -358f), new Vector2(390f, 44f), 32f);

        CreateVisualRow("Row_Gift_020", cardComandos.transform, cardSprite, rowBgColor,
            coinSprite, "<color=#FFD700><b>Regalo ($0.20 USD)</b></color>\n<size=11><color=#C2D8F0>+30s a Misión / 10 Cuarzos</color></size>",
            quartzSprite, new Vector2(0f, -408f), new Vector2(390f, 44f), 32f);

        CreateVisualRow("Row_Gift_025", cardComandos.transform, cardSprite, rowBgColor,
            rubySprite, "<color=#FF3366><b>Regalo ($0.25 USD)</b></color>\n<size=11><color=#C2D8F0>¡AUTO-COMPLETA MISIÓN! / 10 Piedras</color></size>",
            rubySprite, new Vector2(0f, -458f), new Vector2(390f, 44f), 32f);

        // Tip interactivo al final de la tarjeta
        GameObject tipBox = CreateUIObject("Box_TipLikes", cardComandos.transform);
        RectTransform rtTip = tipBox.GetComponent<RectTransform>();
        SetAnchors(rtTip, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f));
        rtTip.sizeDelta = new Vector2(390f, 36f);
        rtTip.anchoredPosition = new Vector2(0f, 24f);
        Image imgTip = tipBox.AddComponent<Image>();
        if (cardSprite != null) { imgTip.sprite = cardSprite; imgTip.type = Image.Type.Sliced; }
        imgTip.color = new Color(0.04f, 0.20f, 0.35f, 0.85f);

        CreateText("Txt_Tip", tipBox.transform, "<color=#00E5FF><b>TIP:</b> ¡Toca 2 veces la pantalla para enviar Likes!</color>", 13, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(380f, 32f), Vector2.zero);

        // =====================================================================
        // COLUMNA CENTRAL: HUD SUPERIOR FLOTANTE (Score & Combo)
        // =====================================================================
        GameObject centerHUD = CreateFloatingCard("HUD_Score_Center", canvasObj.transform, cardSprite, borderSprite, new Color(0.03f, 0.05f, 0.12f, 0.88f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(440f, 90f), new Vector2(0f, -20f));

        TMP_Text txtScore = CreateText("Txt_LiveScore", centerHUD.transform, "SCORE: <color=#00E5FF>0</color>", 32, FontStyles.Bold, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(400f, 40f), new Vector2(0f, 10f));
        controller.liveScoreText = txtScore;

        GameObject comboObj = CreateUIObject("ComboBadge", centerHUD.transform);
        RectTransform rtCombo = comboObj.GetComponent<RectTransform>();
        SetAnchors(rtCombo, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f));
        rtCombo.sizeDelta = new Vector2(240f, 28f);
        rtCombo.anchoredPosition = new Vector2(0f, 8f);

        TMP_Text txtCombo = CreateText("Txt_LiveCombo", comboObj.transform, "COMBO X1!", 18, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(240f, 28f), Vector2.zero);
        controller.liveComboText = txtCombo;
        controller.comboContainer = comboObj;
        comboObj.SetActive(false);

        // Tarjeta de Micro-Misión Dinámica (debajo del HUD central)
        GameObject cardMission = CreateFloatingCard("Card_MicroMission_Center", canvasObj.transform, cardSprite, borderSprite, new Color(0.04f, 0.08f, 0.20f, 0.92f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(440f, 75f), new Vector2(0f, -125f));

        TMP_Text txtMissionTitle = CreateText("Txt_MissionTitle", cardMission.transform, "🎯 MISIÓN: Conecta 3 pares", 14, FontStyles.Bold, accentGold,
            new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(300f, 26f), new Vector2(16f, -10f), TextAlignmentOptions.Left);
        controller.missionTitleText = txtMissionTitle;

        TMP_Text txtMissionTimer = CreateText("Txt_MissionTimer", cardMission.transform, "⏱️ 60s", 14, FontStyles.Bold, accentCyan,
            new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(110f, 26f), new Vector2(-16f, -10f), TextAlignmentOptions.Right);
        controller.missionTimerText = txtMissionTimer;

        TMP_Text txtMissionProgress = CreateText("Txt_MissionProgress", cardMission.transform, "0 / 3", 13, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(400f, 22f), new Vector2(0f, 10f), TextAlignmentOptions.Center);
        controller.missionProgressText = txtMissionProgress;
        controller.missionContainer = cardMission;
        cardMission.SetActive(false);

        // =====================================================================
        // COLUMNA DERECHA: TARJETA 1 (SUPERIOR) — TOP DONADORES
        // =====================================================================
        GameObject cardTop = CreateFloatingCard("Card_TopDonors_TopRight", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(430f, 270f), new Vector2(-30f, -30f));

        CreateText("Titulo_Fama", cardTop.transform, "MURO DE LA FAMA", 19, FontStyles.Bold, accentGold,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 30f), new Vector2(0f, -16f));

        CreateText("Sub_TopDonors", cardTop.transform, "TOP DONADORES DE LA SESIÓN", 14, FontStyles.Normal, new Color(0.7f, 0.85f, 1.0f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 22f), new Vector2(0f, -50f));

        TMP_Text txtTopDonors = CreateText("Txt_TopDonorsList", cardTop.transform, "Cargando donadores...", 15, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(370f, 130f), new Vector2(0f, -135f), TextAlignmentOptions.TopLeft);
        controller.topDonorsText = txtTopDonors;

        // =====================================================================
        // COLUMNA DERECHA: TARJETA 2 (MEDIO) — ÚLTIMO EVENTO
        // =====================================================================
        GameObject cardEvent = CreateFloatingCard("Card_LastEvent_MidRight", canvasObj.transform, cardSprite, borderSprite, new Color(0.08f, 0.16f, 0.32f, 0.90f),
            new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(430f, 115f), new Vector2(-30f, -320f));

        CreateText("Lbl_LastEvent", cardEvent.transform, "ÚLTIMO EVENTO EN VIVO", 15, FontStyles.Bold, accentCyan,
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 24f), new Vector2(0f, -12f));

        TMP_Text txtAlert = CreateText("Txt_AlertEvent", cardEvent.transform, "Esperando interacción del chat...", 15, FontStyles.Bold, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(390f, 50f), new Vector2(0f, -10f));
        controller.lastEventAlertText = txtAlert;

        // =====================================================================
        // COLUMNA DERECHA: TARJETA 3 (INFERIOR) — SUPER FANS & BANNER
        // =====================================================================
        GameObject cardFans = CreateFloatingCard("Card_SuperFans_BottomRight", canvasObj.transform, cardSprite, borderSprite, glassBg,
            new Vector2(1f, 0f), new Vector2(1f, 0f), new Vector2(1f, 0f), new Vector2(430f, 580f), new Vector2(-30f, 30f));

        CreateText("Lbl_SuperFans", cardFans.transform, "SUPER FANS (>5k likes / $1 VIP)", 18, FontStyles.Bold, new Color(0.4f, 0.85f, 1f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(390f, 30f), new Vector2(0f, -16f));

        TMP_Text txtSuperFans = CreateText("Txt_SuperFansList", cardFans.transform, "Participa para aparecer aquí...", 15, FontStyles.Normal, new Color(0.85f, 0.90f, 0.98f),
            new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(370f, 180f), new Vector2(0f, -130f), TextAlignmentOptions.TopLeft);
        controller.superFansText = txtSuperFans;

        // Banner Google Play dentro de la tarjeta inferior
        GameObject bannerPlay = CreateFloatingCard("Banner_PlayStore", cardFans.transform, cardSprite, borderSprite, new Color(0.06f, 0.30f, 0.18f, 0.95f),
            new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(380f, 75f), new Vector2(0f, 50f));

        CreateText("Txt_Banner", bannerPlay.transform, "<b>JUEGA GLASSY EN TU CELULAR</b>\nDisponible gratis en Google Play Store", 14, FontStyles.Normal, Color.white,
            new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(360f, 55f), Vector2.zero);

        // =====================================================================
        // AUTO-CONFIGURACIÓN DE GAMEMANAGER
        // =====================================================================
        GameManager gm = Object.FindAnyObjectByType<GameManager>();
        if (gm != null)
        {
            if (gm.gemPrefabs == null || gm.gemPrefabs.Length < 10)
            {
                System.Array.Resize(ref gm.gemPrefabs, 10);
            }
            if (gm.gemPrefabs[8] == null)
                gm.gemPrefabs[8] = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/cuarzo.prefab");
            if (gm.gemPrefabs[9] == null)
                gm.gemPrefabs[9] = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/piedra.prefab");

            if (gm.GetComponent<TikTokStreamController>() == null)
            {
                gm.gameObject.AddComponent<TikTokStreamController>();
            }

            if (gm.GetComponent<TikTokMissionManager>() == null)
            {
                gm.gameObject.AddComponent<TikTokMissionManager>();
            }

            if (gm.GetComponent<TikTokSkillsManager>() == null)
            {
                gm.gameObject.AddComponent<TikTokSkillsManager>();
            }

            var autoPlayer = gm.GetComponent<TikTokAutoPlayer>();
            if (autoPlayer == null)
            {
                autoPlayer = gm.gameObject.AddComponent<TikTokAutoPlayer>();
            }
            autoPlayer.enableAutoPlayer = true;
            autoPlayer.isSkillUnlocked = true;
            autoPlayer.isCreatorMode = true;
            autoPlayer.initialWarmupDelay = 10.0f;
            autoPlayer.moveInterval = 5.0f;
            autoPlayer.baseImpulseForce = 3.0f;
            autoPlayer.sweepMergeInterval = 1.0f;

            EditorUtility.SetDirty(gm);
        }

        Selection.activeGameObject = canvasObj;
        EditorUtility.SetDirty(canvasObj);

        Debug.Log("✅ [TikTokUIBuilder] ¡UI Flotante con Iconos Oficiales y Tarjetas de Cristal montada con éxito!");
        EditorUtility.DisplayDialog("Éxito", "¡UI Profesional con Iconos Oficiales de TikTok montada!\n\nDale a Play (▶️) para verla en acción.", "Aceptar");
    }

    [MenuItem("Glassy/Compilar para TikTok (Windows .exe)")]
    public static void BuildStandaloneWindows()
    {
        string buildFolder = "Builds/GlassyRelaxPC";
        if (!System.IO.Directory.Exists(buildFolder))
        {
            System.IO.Directory.CreateDirectory(buildFolder);
        }

        string exePath = $"{buildFolder}/GlassyRelax.exe";
        string[] scenes = new string[] { "Assets/Scenes/TikTokRelaxScene.unity" };

        BuildPlayerOptions options = new BuildPlayerOptions
        {
            scenes = scenes,
            locationPathName = exePath,
            target = BuildTarget.StandaloneWindows64,
            options = BuildOptions.AutoRunPlayer
        };

        UnityEditor.Build.Reporting.BuildReport report = BuildPipeline.BuildPlayer(options);
        UnityEditor.Build.Reporting.BuildSummary summary = report.summary;

        if (summary.result == UnityEditor.Build.Reporting.BuildResult.Succeeded)
        {
            Debug.Log($"[Glassy] ¡Compilación exitosa en: {exePath} ({summary.totalSize / (1024 * 1024)} MB)!");
            EditorUtility.RevealInFinder(exePath);
            EditorUtility.DisplayDialog("¡Juego Compilado!", $"¡Glassy se ha compilado y ejecutado con éxito!\n\nUbicación: {exePath}\n\nAhora en TikTok LIVE Studio selecciona 'Captura de juego' y elige 'GlassyRelax.exe'.", "Aceptar");
        }
        else
        {
            Debug.LogError($"[Glassy] Falló la compilación: {summary.result}");
            EditorUtility.DisplayDialog("Error", "Ocurrió un error al compilar. Revisa la consola de Unity.", "Aceptar");
        }
    }

    // =========================================================================
    // HELPERS DE CONSTRUCCIÓN VISUAL
    // =========================================================================

    private static GameObject CreateFloatingCard(string name, Transform parent, Sprite cardSprite, Sprite borderSprite, Color bgColor,
        Vector2 anchorMin, Vector2 anchorMax, Vector2 pivot, Vector2 size, Vector2 pos)
    {
        GameObject go = CreateUIObject(name, parent);
        RectTransform rt = go.GetComponent<RectTransform>();
        SetAnchors(rt, anchorMin, anchorMax, pivot);
        rt.sizeDelta = size;
        rt.anchoredPosition = pos;

        Image img = go.AddComponent<Image>();
        if (cardSprite != null)
        {
            img.sprite = cardSprite;
            img.type = Image.Type.Sliced;
        }
        img.color = bgColor;

        if (borderSprite != null)
        {
            GameObject border = CreateUIObject("Border", go.transform);
            RectTransform rtBorder = border.GetComponent<RectTransform>();
            rtBorder.anchorMin = Vector2.zero;
            rtBorder.anchorMax = Vector2.one;
            rtBorder.sizeDelta = Vector2.zero;
            Image imgBorder = border.AddComponent<Image>();
            imgBorder.sprite = borderSprite;
            imgBorder.type = Image.Type.Sliced;
            imgBorder.color = new Color(0.20f, 0.45f, 0.85f, 0.35f);
            imgBorder.raycastTarget = false;
        }

        return go;
    }

    private static GameObject CreateVisualRow(string name, Transform parent, Sprite rowBgSprite, Color bgColor,
        Sprite leftIcon, string contentText, Sprite rightIcon, Vector2 pos, Vector2 size, float iconSize = 32f)
    {
        GameObject row = CreateUIObject(name, parent);
        RectTransform rt = row.GetComponent<RectTransform>();
        SetAnchors(rt, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f));
        rt.sizeDelta = size;
        rt.anchoredPosition = pos;

        Image imgBg = row.AddComponent<Image>();
        if (rowBgSprite != null)
        {
            imgBg.sprite = rowBgSprite;
            imgBg.type = Image.Type.Sliced;
        }
        imgBg.color = bgColor;

        // Icono izquierdo (Regalo o disparador)
        if (leftIcon != null)
        {
            GameObject iconLeftObj = CreateUIObject("LeftIcon", row.transform);
            RectTransform rtLeft = iconLeftObj.GetComponent<RectTransform>();
            SetAnchors(rtLeft, new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0.5f));
            rtLeft.sizeDelta = new Vector2(iconSize, iconSize);
            rtLeft.anchoredPosition = new Vector2(24f, 0f);
            Image imgLeft = iconLeftObj.AddComponent<Image>();
            imgLeft.sprite = leftIcon;
            imgLeft.preserveAspect = true;
            imgLeft.raycastTarget = false;
        }

        // Texto descriptivo central
        GameObject txtObj = CreateUIObject("RowText", row.transform);
        RectTransform rtTxt = txtObj.GetComponent<RectTransform>();
        SetAnchors(rtTxt, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f));
        rtTxt.sizeDelta = new Vector2(size.x - (iconSize * 2f + 32f), size.y);
        rtTxt.anchoredPosition = new Vector2(0f, 0f);

        TextMeshProUGUI tmp = txtObj.AddComponent<TextMeshProUGUI>();
        tmp.text = contentText;
        tmp.fontSize = 12.5f;
        tmp.alignment = TextAlignmentOptions.MidlineLeft;
        tmp.textWrappingMode = TextWrappingModes.Normal;
        tmp.raycastTarget = false;

        // Icono derecho (Gema resultante)
        if (rightIcon != null)
        {
            GameObject iconRightObj = CreateUIObject("RightIcon", row.transform);
            RectTransform rtRight = iconRightObj.GetComponent<RectTransform>();
            SetAnchors(rtRight, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f));
            rtRight.sizeDelta = new Vector2(iconSize * 0.9f, iconSize * 0.9f);
            rtRight.anchoredPosition = new Vector2(-22f, 0f);
            Image imgRight = iconRightObj.AddComponent<Image>();
            imgRight.sprite = rightIcon;
            imgRight.preserveAspect = true;
            imgRight.raycastTarget = false;
        }

        return row;
    }

    private static TMP_Text CreateStatusRow(string name, Transform parent, Sprite rowBgSprite, Color bgColor,
        Sprite leftIcon, Sprite rightIcon, Vector2 pos, Vector2 size, float iconSize = 28f)
    {
        GameObject row = CreateUIObject(name, parent);
        RectTransform rt = row.GetComponent<RectTransform>();
        SetAnchors(rt, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f));
        rt.sizeDelta = size;
        rt.anchoredPosition = pos;

        Image imgBg = row.AddComponent<Image>();
        if (rowBgSprite != null)
        {
            imgBg.sprite = rowBgSprite;
            imgBg.type = Image.Type.Sliced;
        }
        imgBg.color = bgColor;

        if (leftIcon != null)
        {
            GameObject iconLeftObj = CreateUIObject("LeftIcon", row.transform);
            RectTransform rtLeft = iconLeftObj.GetComponent<RectTransform>();
            SetAnchors(rtLeft, new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0.5f));
            rtLeft.sizeDelta = new Vector2(iconSize, iconSize);
            rtLeft.anchoredPosition = new Vector2(22f, 0f);
            Image imgLeft = iconLeftObj.AddComponent<Image>();
            imgLeft.sprite = leftIcon;
            imgLeft.preserveAspect = true;
            imgLeft.raycastTarget = false;
        }

        GameObject txtObj = CreateUIObject("RowText", row.transform);
        RectTransform rtTxt = txtObj.GetComponent<RectTransform>();
        SetAnchors(rtTxt, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f));
        rtTxt.sizeDelta = new Vector2(size.x - (iconSize * 2f + 36f), size.y);
        rtTxt.anchoredPosition = new Vector2(0f, 0f);

        TextMeshProUGUI tmp = txtObj.AddComponent<TextMeshProUGUI>();
        tmp.text = "Cargando estado...";
        tmp.fontSize = 12f;
        tmp.alignment = TextAlignmentOptions.MidlineLeft;
        tmp.textWrappingMode = TextWrappingModes.Normal;
        tmp.raycastTarget = false;

        if (rightIcon != null)
        {
            GameObject iconRightObj = CreateUIObject("RightIcon", row.transform);
            RectTransform rtRight = iconRightObj.GetComponent<RectTransform>();
            SetAnchors(rtRight, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f));
            rtRight.sizeDelta = new Vector2(iconSize * 1.1f, iconSize * 1.1f);
            rtRight.anchoredPosition = new Vector2(-22f, 0f);
            Image imgRight = iconRightObj.AddComponent<Image>();
            imgRight.sprite = rightIcon;
            imgRight.preserveAspect = true;
            imgRight.raycastTarget = false;
        }

        return tmp;
    }

    private static GameObject CreateUIObject(string name, Transform parent)
    {
        GameObject go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);
        return go;
    }

    private static void SetAnchors(RectTransform rt, Vector2 min, Vector2 max, Vector2 pivot)
    {
        rt.anchorMin = min;
        rt.anchorMax = max;
        rt.pivot = pivot;
    }

    private static TMP_Text CreateText(string name, Transform parent, string content, float fontSize, FontStyles style, Color color,
        Vector2 anchorMin, Vector2 anchorMax, Vector2 pivot, Vector2 size, Vector2 pos, TextAlignmentOptions align = TextAlignmentOptions.Center)
    {
        GameObject go = CreateUIObject(name, parent);
        RectTransform rt = go.GetComponent<RectTransform>();
        SetAnchors(rt, anchorMin, anchorMax, pivot);
        rt.sizeDelta = size;
        rt.anchoredPosition = pos;

        TextMeshProUGUI tmp = go.AddComponent<TextMeshProUGUI>();
        tmp.text = content;
        tmp.fontSize = fontSize;
        tmp.fontStyle = style;
        tmp.color = color;
        tmp.alignment = align;
        tmp.textWrappingMode = TextWrappingModes.Normal;
        tmp.raycastTarget = false;
        return tmp;
    }

    private static void CreateDivider(string name, Transform parent, Vector2 pos, float width)
    {
        GameObject div = CreateUIObject(name, parent);
        RectTransform rt = div.GetComponent<RectTransform>();
        SetAnchors(rt, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f));
        rt.sizeDelta = new Vector2(width, 2f);
        rt.anchoredPosition = pos;
        Image img = div.AddComponent<Image>();
        img.color = new Color(0.20f, 0.35f, 0.60f, 0.35f);
        img.raycastTarget = false;
    }

    private static GameObject CreateSlider(string name, Transform parent, Sprite cardSprite, Vector2 pos, Vector2 size)
    {
        GameObject sliderObj = CreateUIObject(name, parent);
        RectTransform rt = sliderObj.GetComponent<RectTransform>();
        SetAnchors(rt, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f));
        rt.sizeDelta = size;
        rt.anchoredPosition = pos;

        Slider slider = sliderObj.AddComponent<Slider>();

        // Fondo del slider
        GameObject bg = CreateUIObject("Background", sliderObj.transform);
        RectTransform rtBg = bg.GetComponent<RectTransform>();
        rtBg.anchorMin = Vector2.zero;
        rtBg.anchorMax = Vector2.one;
        rtBg.sizeDelta = Vector2.zero;
        Image imgBg = bg.AddComponent<Image>();
        if (cardSprite != null) { imgBg.sprite = cardSprite; imgBg.type = Image.Type.Sliced; }
        imgBg.color = new Color(0.08f, 0.10f, 0.18f, 1f);

        // Fill Area
        GameObject fillArea = CreateUIObject("Fill Area", sliderObj.transform);
        RectTransform rtFillArea = fillArea.GetComponent<RectTransform>();
        rtFillArea.anchorMin = Vector2.zero;
        rtFillArea.anchorMax = Vector2.one;
        rtFillArea.sizeDelta = Vector2.zero;

        // Fill brillante
        GameObject fill = CreateUIObject("Fill", fillArea.transform);
        RectTransform rtFill = fill.GetComponent<RectTransform>();
        rtFill.anchorMin = Vector2.zero;
        rtFill.anchorMax = Vector2.one;
        rtFill.sizeDelta = Vector2.zero;
        Image imgFill = fill.AddComponent<Image>();
        if (cardSprite != null) { imgFill.sprite = cardSprite; imgFill.type = Image.Type.Sliced; }
        imgFill.color = new Color(1.0f, 0.15f, 0.45f, 1.0f); // Magenta neón brillante

        slider.targetGraphic = imgBg;
        slider.fillRect = rtFill;
        slider.minValue = 0;
        slider.maxValue = 100;
        slider.value = 0;

        return sliderObj;
    }
}
