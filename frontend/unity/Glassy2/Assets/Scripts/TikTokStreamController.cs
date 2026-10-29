using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Text;
using System.Threading;
using UnityEngine;

/// <summary>
/// ViewerStats — Registro acumulado por espectador para desbloqueo de logros en vivo.
/// </summary>
[System.Serializable]
public class ViewerStats
{
    public string Username;
    public int LikesCount;
    public int CommentsCount;
    public float TotalSpentUSD;
    public bool SuperFanUnlocked;
}

/// <summary>
/// TikTokStreamController — Controlador oficial del Sistema Base para TikTok Live en PC.
/// 
/// IMPLEMENTACIÓN SEGÚN ESPECIFICACIÓN:
/// 1. Interacciones Gratuitas (Crecimiento y Algoritmo):
///    - Metas de Likes: 100->Esmeralda, 200->Amatista, 400->Topacio, 800->Peridoto, 1200->Rubí
///    - Comentarios con Emojis acumulativos:
///      * 🤍 (Corazón blanco) 5 veces acumuladas  -> 1 Cuarzo
///      * 🖤 (Corazón negro) 10 veces acumuladas -> 1 Piedra
///      * 💚 (Corazón verde) 10 veces acumuladas -> 10 Esmeraldas
///      * 💜 (Corazón morado) 20 veces acumuladas -> 10 Amatistas
///    - Nuevo Follower: Spawnea 1 Rubí + 1 Zafiro + 1 Topacio con sonido y alerta en pantalla
/// 
/// 2. De Pago (Regalos de TikTok Live en USD):
///    - Regalo $0.05 USD -> 1 Cuarzo
///    - Regalo $0.10 USD -> 1 Piedra
///    - Regalo $0.25 USD -> 10 Esmeraldas
///    - Regalo $0.50 USD -> 10 Cuarzos
///    - Regalo $1.00 USD -> 10 Piedras (escala proporcional si es mayor)
/// 
/// 3. Logro Especial (Muro de Donadores / Super Fans):
///    - Si un espectador acumula >1,000 likes, 500 comentarios y $1.00 USD donado:
///      Aparece permanentemente en el muro de donadores / Super Fans.
/// 
/// 4. Servidor HTTP Embebido (localhost:8085):
///    Endpoints: /likes, /comment, /gift, /follower, /spawn, /status
/// </summary>
public class TikTokStreamController : MonoBehaviour
{
    public static TikTokStreamController Instance { get; private set; }

    [Header("Configuración de Servidor Local")]
    [Tooltip("Habilitar listener HTTP para conectar con el script conector de TikTok Live")]
    public bool enableHttpListener = true;
    public int httpPort = 8085;

    [Header("Atajos de Teclado (Testing / Control Manual)")]
    public bool enableKeyboardHotkeys = true;

    // Acumuladores globales de emojis en comentarios
    private int _whiteHeartAccumulator = 0; // 5x -> 1 Cuarzo
    private int _blackHeartAccumulator = 0; // 10x -> 1 Piedra
    private int _greenHeartAccumulator = 0; // 10x -> 10 Esmeraldas
    private int _purpleHeartAccumulator = 0; // 20x -> 10 Amatistas

    // Estadísticas acumuladas por espectador (para el Logro Especial)
    private readonly Dictionary<string, ViewerStats> _viewers = new Dictionary<string, ViewerStats>(StringComparer.OrdinalIgnoreCase);

    // Cola de acciones para despachar llamadas al hilo principal de Unity
    private readonly ConcurrentQueue<Action> _mainThreadQueue = new ConcurrentQueue<Action>();
    private HttpListener _httpListener;
    private Thread _listenerThread;
    private bool _isRunning = false;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    private void Start()
    {
        if (enableHttpListener)
        {
            StartHttpServer();
        }
    }

    private void Update()
    {
        // 1. Despachar acciones al hilo principal de Unity
        while (_mainThreadQueue.TryDequeue(out Action action))
        {
            try
            {
                action?.Invoke();
            }
            catch (Exception ex)
            {
                Debug.LogError($"[TikTokStreamController] Error ejecutando acción en hilo principal: {ex.Message}");
            }
        }

        // 2. Hotkeys para streamers y pruebas
        if (enableKeyboardHotkeys)
        {
            HandleKeyboardHotkeys();
        }
    }

    private void HandleKeyboardHotkeys()
    {
        if (GameManager.Instance == null) return;

        // Metas de likes progresivas
        if (Input.GetKeyDown(KeyCode.Alpha1)) TriggerLikesMilestone(100, "Tester");
        if (Input.GetKeyDown(KeyCode.Alpha2)) TriggerLikesMilestone(200, "Tester");
        if (Input.GetKeyDown(KeyCode.Alpha3)) TriggerLikesMilestone(400, "Tester");
        if (Input.GetKeyDown(KeyCode.Alpha4)) TriggerLikesMilestone(800, "Tester");
        if (Input.GetKeyDown(KeyCode.Alpha5)) TriggerLikesMilestone(1000, "Tester");
        if (Input.GetKeyDown(KeyCode.Alpha6)) TriggerLikesMilestone(1200, "Tester");

        // Cuarzo y Piedra individuales
        if (Input.GetKeyDown(KeyCode.Q)) TriggerCuarzoSingle("Tester");
        if (Input.GetKeyDown(KeyCode.P)) TriggerPiedraSingle("Tester");

        // Paquetes especiales
        if (Input.GetKeyDown(KeyCode.E)) TriggerEsmeraldasPack("Tester");
        if (Input.GetKeyDown(KeyCode.C)) TriggerCuarzosPack("Tester");
        if (Input.GetKeyDown(KeyCode.R)) TriggerPiedrasPack("Tester");
        if (Input.GetKeyDown(KeyCode.M)) TriggerAmatistasPack("Tester");

        // Follower
        if (Input.GetKeyDown(KeyCode.F)) TriggerNewFollower("NuevoSeguidor");

        // Pruebas de Regalos Especiales y Monetización
        if (Input.GetKeyDown(KeyCode.J)) ProcessGift("Tester", "Rosa $0.05", 0.05f);   // $0.05 (1 Cuarzo / Limpia Topacio..Rubí)
        if (Input.GetKeyDown(KeyCode.H)) ProcessGift("Tester", "Pesa $0.10", 0.10f);   // $0.10 (1 Piedra / Limpia TODO)
        if (Input.GetKeyDown(KeyCode.K)) ProcessGift("Tester", "Rayo $0.15", 0.15f);   // $0.15 (10 Esmeraldas / Corta combo a 0)
        if (Input.GetKeyDown(KeyCode.T)) ProcessGift("Tester", "Reloj $0.20", 0.20f);  // $0.20 (10 Cuarzos / +30s a Misión)
        if (Input.GetKeyDown(KeyCode.Y)) ProcessGift("Tester", "Corona $0.25", 0.25f); // $0.25 (10 Piedras / Auto-completa Misión)

        // Simular Logro Especial (5k likes, 500 coms, $1 donado)
        if (Input.GetKeyDown(KeyCode.L)) SimulateSpecialAchievementTest();

        // Reiniciar partida (en cualquier momento o tras Game Over)
        if (Input.GetKeyDown(KeyCode.Space)) GameManager.Instance?.RestartGame();

        // Control de Audio (Mute / Unmute música de fondo para streamers que usan Spotify)
        if (Input.GetKeyDown(KeyCode.U) && AudioManager.Instance != null)
        {
            bool newVolume = !AudioManager.Instance.IsVolumeOn;
            AudioManager.Instance.SetVolume(newVolume);
            TikTokUIController.Instance?.ShowEventAlert(newVolume ? "🔊 Música activada" : "🔇 Música silenciada [U]");
        }

        // Pantalla completa / Ventana (F11)
        if (Input.GetKeyDown(KeyCode.F11))
        {
            Screen.fullScreen = !Screen.fullScreen;
        }

        // Salir del juego
        if (Input.GetKeyDown(KeyCode.Escape))
        {
#if !UNITY_EDITOR
            Application.Quit();
#endif
        }
    }

    // =========================================================================
    // LÓGICA DE GESTIÓN DE ESPECTADORES Y LOGRO ESPECIAL
    // =========================================================================

    private ViewerStats GetOrCreateViewer(string username)
    {
        if (string.IsNullOrEmpty(username)) username = "Espectador";
        if (!_viewers.TryGetValue(username, out ViewerStats stats))
        {
            stats = new ViewerStats { Username = username };
            _viewers[username] = stats;
        }
        return stats;
    }

    private void CheckSpecialAchievement(ViewerStats stats)
    {
        if (stats == null || stats.SuperFanUnlocked) return;

        // Condición oficial según Glassy_for_tiktok.md: >5,000 likes, 500 comentarios y $1.00 USD donado
        if (stats.LikesCount >= 5000 && stats.CommentsCount >= 500 && stats.TotalSpentUSD >= 1.0f)
        {
            stats.SuperFanUnlocked = true;
            TikTokUIController.Instance?.RegisterSuperFan(stats.Username, "Logro: 5k Likes + 500 Coms + $1");
            TikTokUIController.Instance?.ShowEventAlert($"👑 ¡LOGRO DESBLOQUEADO! <b>@{stats.Username}</b> es SUPER FAN");
            AudioManager.Instance?.PlayDiamondSequence();
            Debug.Log($"[TikTok Event] ¡@{stats.Username} desbloqueó el Logro Especial de Super Fan!");
        }
    }

    private void SimulateSpecialAchievementTest()
    {
        string testUser = "FanDestacado";
        var stats = GetOrCreateViewer(testUser);
        stats.LikesCount = 5005;
        stats.CommentsCount = 502;
        stats.TotalSpentUSD = 1.00f;
        CheckSpecialAchievement(stats);
    }

    // =========================================================================
    // DISPARADORES DE EVENTOS DE TIKTOK LIVE (SISTEMA BASE)
    // =========================================================================

    public void TriggerLikesMilestone(int likes, string username = null)
    {
        if (GameManager.Instance == null) return;

        if (!string.IsNullOrEmpty(username))
        {
            var stats = GetOrCreateViewer(username);
            stats.LikesCount += likes;
            CheckSpecialAchievement(stats);
        }

        GemType gemToSpawn;
        if (likes >= 1200) gemToSpawn = GemType.RedRuby;
        else if (likes >= 1000) gemToSpawn = GemType.Sapphire;
        else if (likes >= 800) gemToSpawn = GemType.GreenRuby;
        else if (likes >= 400) gemToSpawn = GemType.Topaz;
        else if (likes >= 200) gemToSpawn = GemType.Amethyst;
        else gemToSpawn = GemType.Emerald;

        Debug.Log($"[TikTok Event] Meta de {likes} Likes alcanzada -> Spawneando {gemToSpawn}");
        GameManager.Instance.SpawnInFlask(gemToSpawn, 1);
        TikTokUIController.Instance?.AddLikes(likes);
    }

    public void ProcessComment(string username, string text)
    {
        if (string.IsNullOrEmpty(text)) return;

        var stats = GetOrCreateViewer(username);
        stats.CommentsCount++;
        CheckSpecialAchievement(stats);

        string lower = text.ToLowerInvariant();

        // 1. Emoji Corazón Blanco 🤍 (o mención de corazon blanco) -> cada 5x: 1 Cuarzo
        int whiteMatches = CountOccurrences(text, "🤍") + CountOccurrences(lower, "corazon blanco") + CountOccurrences(lower, "corazón blanco");
        if (whiteMatches > 0)
        {
            _whiteHeartAccumulator += whiteMatches;
            while (_whiteHeartAccumulator >= 5)
            {
                _whiteHeartAccumulator -= 5;
                TriggerCuarzoSingle(username);
            }
        }

        // 2. Emoji Corazón Negro 🖤 (o corazon negro) -> cada 10x: 1 Piedra
        int blackMatches = CountOccurrences(text, "🖤") + CountOccurrences(lower, "corazon negro") + CountOccurrences(lower, "corazón negro");
        if (blackMatches > 0)
        {
            _blackHeartAccumulator += blackMatches;
            while (_blackHeartAccumulator >= 10)
            {
                _blackHeartAccumulator -= 10;
                TriggerPiedraSingle(username);
            }
        }

        // 3. Emoji Corazón Verde 💚 (o corazon verde) -> cada 10x: 10 Esmeraldas
        int greenMatches = CountOccurrences(text, "💚") + CountOccurrences(lower, "corazon verde") + CountOccurrences(lower, "corazón verde");
        if (greenMatches > 0)
        {
            _greenHeartAccumulator += greenMatches;
            while (_greenHeartAccumulator >= 10)
            {
                _greenHeartAccumulator -= 10;
                TriggerEsmeraldasPack(username);
            }
        }

        // 4. Emoji Corazón Morado 💜 (o corazon morado) -> cada 20x: 10 Amatistas
        int purpleMatches = CountOccurrences(text, "💜") + CountOccurrences(lower, "corazon morado") + CountOccurrences(lower, "corazón morado");
        if (purpleMatches > 0)
        {
            _purpleHeartAccumulator += purpleMatches;
            while (_purpleHeartAccumulator >= 20)
            {
                _purpleHeartAccumulator -= 20;
                TriggerAmatistasPack(username);
            }
        }
    }

    public void ProcessGift(string username, string giftName, float amountUsd, int repeatCount = 1)
    {
        if (repeatCount <= 0) repeatCount = 1;
        float totalUsd = amountUsd * repeatCount;

        var stats = GetOrCreateViewer(username);
        stats.TotalSpentUSD += totalUsd;
        CheckSpecialAchievement(stats);

        TikTokUIController.Instance?.RegisterDonation(username, totalUsd, giftName);

        // Mapeo oficial de regalos de pago según Glassy_for_tiktok.md:
        // 1. Sin misión activa (Monetización base):
        //    $0.05 -> 1 Cuarzo
        //    $0.10 -> 1 Piedra para complicar al streamer
        //    $0.15 -> Paquete de 10 Esmeraldas
        //    $0.20 -> Paquete de 10 Cuarzos
        //    $0.25 -> Paquete de 10 Piedras
        // 2. Con misión activa (Mecánicas especiales para ayudar o complicar la tarea):
        //    $0.05 -> Se eliminan todas las gemas de Topacio a Rubí acreditando sus puntos (+ 1 Cuarzo)
        //    $0.10 -> Se eliminan todas las gemas acreditando sus puntos (+ 1 Piedra)
        //    $0.15 -> Corta el combo del jugador a CERO de golpe (+ 10 Esmeraldas)
        //    $0.20 -> Aumenta el tiempo de la misión +30s (+ 10 Cuarzos)
        //    $0.25 -> Auto-completa la misión instantáneamente (+ 10 Piedras)
        //    >= $1.00 -> Avalancha de Piedras escalada (Sabotaje masivo)

        bool hasActiveMission = TikTokMissionManager.Instance != null && TikTokMissionManager.Instance.isMissionActive;

        if (totalUsd >= 1.0f)
        {
            int stonePacks = Mathf.FloorToInt(totalUsd);
            GameManager.Instance?.SpawnInFlask(GemType.Stone, Mathf.Min(stonePacks * 10, 30));
            TikTokUIController.Instance?.ShowEventAlert($"💥 ¡SABOTAJE MASIVO! @{username} envió {giftName} ({stonePacks * 10} Piedras)");
        }
        else if (totalUsd >= 0.25f)
        {
            GameManager.Instance?.SpawnInFlask(GemType.Stone, 10);
            if (hasActiveMission)
            {
                TikTokMissionManager.Instance?.CompleteMissionInstantly();
                TikTokUIController.Instance?.ShowEventAlert($"🎉 @{username} donó {giftName} ($0.25) ➔ ¡MISIÓN SALVADA INSTANTÁNEAMENTE!");
            }
            else
            {
                TikTokUIController.Instance?.ShowEventAlert($"💥 @{username} donó {giftName} ($0.25) ➔ ¡Paquete Troll de 10 Piedras!");
            }
        }
        else if (totalUsd >= 0.20f)
        {
            GameManager.Instance?.SpawnInFlask(GemType.Quartz, 10);
            if (hasActiveMission)
            {
                TikTokMissionManager.Instance?.AddMissionTime(30f);
                TikTokUIController.Instance?.ShowEventAlert($"⏳ @{username} donó {giftName} ($0.20) ➔ ¡+30s EXTRA para la misión!");
            }
            else
            {
                TikTokUIController.Instance?.ShowEventAlert($"🤍 @{username} donó {giftName} ($0.20) ➔ ¡Lluvia de 10 Cuarzos salvadores!");
            }
        }
        else if (totalUsd >= 0.15f)
        {
            GameManager.Instance?.SpawnInFlask(GemType.Emerald, 10);
            if (hasActiveMission)
            {
                GameManager.Instance?.ResetCombo();
                TikTokUIController.Instance?.ShowEventAlert($"⚡ @{username} donó {giftName} ($0.15) ➔ ¡COMBO ROTO A CERO DE GOLPE!");
            }
            else
            {
                GameManager.Instance?.ResetCombo();
                TikTokUIController.Instance?.ShowEventAlert($"💚 @{username} donó {giftName} ($0.15) ➔ ¡Paquete de 10 Esmeraldas!");
            }
        }
        else if (totalUsd >= 0.10f)
        {
            if (hasActiveMission)
            {
                int pointsEarned = GameManager.Instance != null ? GameManager.Instance.ClearAllGemsWithPoints() : 0;
                GameManager.Instance?.SpawnInFlask(GemType.Stone, 1);
                TikTokUIController.Instance?.ShowEventAlert($"💥 @{username} donó {giftName} ($0.10) ➔ ¡Tablero Limpiado (+{pointsEarned} pts)!");
            }
            else
            {
                GameManager.Instance?.SpawnInFlask(GemType.Stone, 1);
                TikTokUIController.Instance?.ShowEventAlert($"🖤 @{username} donó {giftName} ($0.10) ➔ ¡1 Piedra Troll para complicar al streamer!");
            }
        }
        else // $0.05
        {
            if (hasActiveMission)
            {
                int pointsEarned = GameManager.Instance != null ? GameManager.Instance.ClearGemsInRange(GemType.Topaz, GemType.RedRuby) : 0;
                GameManager.Instance?.SpawnInFlask(GemType.Quartz, 1);
                TikTokUIController.Instance?.ShowEventAlert($"✨ @{username} donó {giftName} ($0.05) ➔ ¡Limpieza Topacio-Rubí (+{pointsEarned} pts)!");
            }
            else
            {
                GameManager.Instance?.SpawnInFlask(GemType.Quartz, 1);
                TikTokUIController.Instance?.ShowEventAlert($"🤍 @{username} donó {giftName} ($0.05) ➔ ¡Spawneó 1 Cuarzo!");
            }
        }
    }

    public void TriggerCuarzoSingle(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Quartz, 1);
        TikTokUIController.Instance?.ShowEventAlert($"🤍 5 Emojis Blancos: ¡Spawneó 1 Cuarzo!");
    }

    public void TriggerPiedraSingle(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Stone, 1);
        TikTokUIController.Instance?.ShowEventAlert($"🖤 10 Emojis Negros: ¡Spawneó 1 Piedra!");
    }

    public void TriggerEsmeraldasPack(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Emerald, 10);
        TikTokUIController.Instance?.ShowEventAlert($"💚 10 Emojis Verdes: ¡Avalancha de 10 Esmeraldas!");
    }

    public void TriggerAmatistasPack(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Amethyst, 10);
        TikTokUIController.Instance?.ShowEventAlert($"💜 20 Emojis Morados: ¡Avalancha de 10 Amatistas!");
    }

    public void TriggerCuarzosPack(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Quartz, 10);
        TikTokUIController.Instance?.ShowEventAlert($"✨ Regalo $0.50: ¡Paquete de 10 Cuarzos!");
    }

    public void TriggerPiedrasPack(string username = "Comunidad")
    {
        GameManager.Instance?.SpawnInFlask(GemType.Stone, 10);
        TikTokUIController.Instance?.ShowEventAlert($"💥 Regalo $1.00: ¡Sabotaje de 10 Piedras!");
    }

    public void TriggerNewFollower(string followerName)
    {
        if (string.IsNullOrEmpty(followerName)) followerName = "Amigo";
        Debug.Log($"[TikTok Event] ¡Nuevo Follower! {followerName} -> Spawneando Rubí, Zafiro y Topacio.");
        GameManager.Instance?.SpawnInFlask(GemType.RedRuby, 1);
        GameManager.Instance?.SpawnInFlask(GemType.Sapphire, 1);
        GameManager.Instance?.SpawnInFlask(GemType.Topaz, 1);
        TikTokUIController.Instance?.ShowEventAlert($"🎉 ¡Nuevo Follower: @{followerName}!");
        AudioManager.Instance?.PlayDiamondSequence();
    }

    private int CountOccurrences(string source, string pattern)
    {
        if (string.IsNullOrEmpty(source) || string.IsNullOrEmpty(pattern)) return 0;
        int count = 0;
        int index = 0;
        while ((index = source.IndexOf(pattern, index, StringComparison.OrdinalIgnoreCase)) != -1)
        {
            count++;
            index += pattern.Length;
        }
        return count;
    }

    // =========================================================================
    // SERVIDOR HTTP LOCAL EMBEBIDO (localhost:8085)
    // =========================================================================

    private void StartHttpServer()
    {
        try
        {
            _httpListener = new HttpListener();
            _httpListener.Prefixes.Add($"http://localhost:{httpPort}/");
            _httpListener.Start();
            _isRunning = true;

            _listenerThread = new Thread(ListenLoop)
            {
                IsBackground = true
            };
            _listenerThread.Start();
            Debug.Log($"[TikTokStreamController] Servidor HTTP Base escuchando en http://localhost:{httpPort}/");
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"[TikTokStreamController] No se pudo iniciar el listener HTTP: {ex.Message}");
        }
    }

    private void ListenLoop()
    {
        while (_isRunning && _httpListener != null && _httpListener.IsListening)
        {
            try
            {
                var context = _httpListener.GetContext();
                ThreadPool.QueueUserWorkItem((_) => ProcessHttpRequest(context));
            }
            catch (HttpListenerException)
            {
                break;
            }
            catch (Exception ex)
            {
                Debug.LogError($"[TikTokStreamController] Error en loop HTTP: {ex.Message}");
            }
        }
    }

    private void ProcessHttpRequest(HttpListenerContext context)
    {
        var req = context.Request;
        var res = context.Response;

        string path = req.Url.AbsolutePath.ToLower();
        var query = req.Url.Query;

        string responseText = "{\"status\":\"ok\"}";

        _mainThreadQueue.Enqueue(() =>
        {
            try
            {
                var q = ParseQueryString(query);

                if (path == "/comment")
                {
                    string user = q.ContainsKey("user") ? q["user"] : "Espectador";
                    string text = q.ContainsKey("text") ? q["text"] : "";
                    ProcessComment(user, text);
                }
                else if (path == "/gift")
                {
                    string user = q.ContainsKey("user") ? q["user"] : "Donador";
                    string giftName = q.ContainsKey("giftname") ? q["giftname"] : "Regalo";
                    float amount = 0.05f;
                    if (q.ContainsKey("amount")) float.TryParse(q["amount"], System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out amount);
                    int repeat = 1;
                    if (q.ContainsKey("repeat")) int.TryParse(q["repeat"], out repeat);

                    ProcessGift(user, giftName, amount, repeat);
                }
                else if (path == "/likes")
                {
                    string user = q.ContainsKey("user") ? q["user"] : null;
                    int count = 100;
                    if (q.ContainsKey("count")) int.TryParse(q["count"], out count);
                    TriggerLikesMilestone(count, user);
                }
                else if (path == "/follower")
                {
                    string user = q.ContainsKey("user") ? q["user"] : "Amigo";
                    TriggerNewFollower(user);
                }
                else if (path == "/spawn")
                {
                    string typeStr = q.ContainsKey("type") ? q["type"] : "emerald";
                    int count = 1;
                    if (q.ContainsKey("count")) int.TryParse(q["count"], out count);
                    count = Mathf.Clamp(count, 1, 20);

                    GemType gemType = GemType.Emerald;
                    if (Enum.TryParse(typeStr, true, out GemType parsed))
                    {
                        gemType = parsed;
                    }
                    else if (typeStr == "quartz" || typeStr == "cuarzo") gemType = GemType.Quartz;
                    else if (typeStr == "stone" || typeStr == "piedra") gemType = GemType.Stone;

                    GameManager.Instance?.SpawnInFlask(gemType, count);
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"[TikTokStreamController] Error procesando endpoint {path}: {ex.Message}");
            }
        });

        try
        {
            byte[] buffer = Encoding.UTF8.GetBytes(responseText);
            res.ContentType = "application/json";
            res.ContentLength64 = buffer.Length;
            res.OutputStream.Write(buffer, 0, buffer.Length);
            res.OutputStream.Close();
        }
        catch { }
    }

    private Dictionary<string, string> ParseQueryString(string query)
    {
        var dict = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        if (string.IsNullOrEmpty(query)) return dict;

        string clean = query.StartsWith("?") ? query.Substring(1) : query;
        foreach (var pair in clean.Split('&'))
        {
            var parts = pair.Split('=');
            if (parts.Length == 2)
            {
                dict[parts[0]] = UnityEngine.Networking.UnityWebRequest.UnEscapeURL(parts[1]);
            }
            else if (parts.Length == 1)
            {
                dict[parts[0]] = "";
            }
        }
        return dict;
    }

    private void OnDestroy()
    {
        _isRunning = false;
        try
        {
            _httpListener?.Stop();
            _httpListener?.Close();
        }
        catch { }

        if (_listenerThread != null && _listenerThread.IsAlive)
        {
            _listenerThread.Abort();
        }
    }
}
