using System;
using System.Collections.Concurrent;
using System.IO;
using System.Net;
using System.Text;
using System.Threading;
using UnityEngine;

/// <summary>
/// TikTokRelaxStreamController — Conector Oficial y Servidor HTTP para TikTok Live en versión Relajada (Beta.md).
/// 
/// Escucha en localhost:8086 para recibir donaciones, likes y selección musical desde scripts de TikTok Live.
/// Incluye atajos de teclado completos para pruebas directas en Unity Editor sin necesidad de iniciar live stream.
/// </summary>
public class TikTokRelaxStreamController : MonoBehaviour
{
    public static TikTokRelaxStreamController Instance { get; private set; }

    [Header("Configuración de Servidor Local")]
    public bool enableHttpListener = true;
    public int httpPort = 8086;

    [Header("Atajos de Teclado (Testing en Unity Editor)")]
    public bool enableKeyboardHotkeys = true;

    private readonly ConcurrentQueue<Action> _mainThreadQueue = new ConcurrentQueue<Action>();
    private HttpListener _httpListener;
    private Thread _listenerThread;
    private bool _isRunning = false;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;

        // CRÍTICO PARA STREAMING: Evita que el juego se congele cuando el streamer cambia a TikTok Studio
        Application.runInBackground = true;
    }

    private void Start()
    {
        // En PC standalone, iniciar automáticamente en Formato Vertical 9:16 (576 x 1024)
        // para que TikTok LIVE Studio lo capture en pantalla completa vertical sin barras negras.
        #if UNITY_STANDALONE_WIN && !UNITY_EDITOR
        Screen.SetResolution(576, 1024, FullScreenMode.Windowed);
        #endif

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
                Debug.LogError($"[TikTokRelaxStreamController] Error en acción de hilo principal: {ex.Message}");
            }
        }

        // 2. Hotkeys para pruebas rápidas
        if (enableKeyboardHotkeys)
        {
            HandleTestingHotkeys();
        }
    }

    private void HandleTestingHotkeys()
    {
        if (TikTokRelaxDonorManager.Instance == null) return;

        // Pruebas de donaciones por monedas (Beta.md)
        if (Input.GetKeyDown(KeyCode.Alpha1)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@RosaFan", 1, "Rosa");
        if (Input.GetKeyDown(KeyCode.Alpha2)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@GamerVerde", 5, "Esmeralda (1 min)");
        if (Input.GetKeyDown(KeyCode.Alpha3)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@MoraLover", 10, "Amatista (3 min)");
        if (Input.GetKeyDown(KeyCode.Alpha4)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@SolDorado", 15, "Topacio (5 min)");
        if (Input.GetKeyDown(KeyCode.Alpha5)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@SelvaVerde", 20, "Peridoto (7 min)");
        if (Input.GetKeyDown(KeyCode.Alpha6)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@OceanBlue", 25, "Zafiro (10 min)");
        if (Input.GetKeyDown(KeyCode.Alpha7)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@FuegoRojo", 30, "Rubí (15 min)");
        if (Input.GetKeyDown(KeyCode.Alpha8)) TikTokRelaxDonorManager.Instance.ProcessGiftDonation("@ReyDiamante", 50, "Diamante (30 min)");

        // Prueba de cambio de música (25 monedas)
        if (Input.GetKeyDown(KeyCode.M)) TikTokRelaxDonorManager.Instance.ProcessMusicDonation("@DJ_Stream");

        // Prueba de likes (+50 likes para salón de la fama)
        if (Input.GetKeyDown(KeyCode.L)) TikTokRelaxDonorManager.Instance.ProcessLikes("@SuperLiker", 50);

        // Tecla [P]: Forzar caída de perla inmediata para verificar la foto sin esperar los 60s
        if (Input.GetKeyDown(KeyCode.P) && GameManager.Instance != null)
        {
            GameManager.Instance.SpawnPearl();
            TikTokRelaxUIController.Instance?.ShowEventAlert("🧪 [TEST] Perla forzada manualmente.");
        }

        // Tecla [V]: Alternar entre Modo Vertical (9:16 - 576x1024) y Modo Horizontal (16:9 - 1280x720)
        if (Input.GetKeyDown(KeyCode.V))
        {
            ToggleOrientation();
        }

        // Reinicio con Espacio
        if (Input.GetKeyDown(KeyCode.Space) && GameManager.Instance != null && GameManager.Instance.IsGameOver)
        {
            GameManager.Instance.RestartGame();
        }

        // Pantalla completa (F11)
        if (Input.GetKeyDown(KeyCode.F11))
        {
            Screen.fullScreen = !Screen.fullScreen;
        }
    }

    private void ToggleOrientation()
    {
        if (Screen.width >= Screen.height)
        {
            // Cambiar a Vertical 9:16
            Screen.SetResolution(576, 1024, FullScreenMode.Windowed);
            TikTokRelaxUIController.Instance?.ApplyLayout(true);
            TikTokRelaxUIController.Instance?.ShowEventAlert("📱 <color=#00FFAA>[MODO VERTICAL]</color> 9:16 activado para TikTok Live.");
        }
        else
        {
            // Cambiar a Horizontal 16:9
            Screen.SetResolution(1280, 720, FullScreenMode.Windowed);
            TikTokRelaxUIController.Instance?.ApplyLayout(false);
            TikTokRelaxUIController.Instance?.ShowEventAlert("🖥️ <color=#FFD700>[MODO HORIZONTAL]</color> 16:9 activado.");
        }
    }

    // =========================================================================
    // SERVIDOR HTTP EMBEBIDO (localhost:8086)
    // =========================================================================

    private void StartHttpServer()
    {
        try
        {
            _httpListener = new HttpListener();
            _httpListener.Prefixes.Add($"http://localhost:{httpPort}/");
            _httpListener.Prefixes.Add($"http://127.0.0.1:{httpPort}/");
            _httpListener.Start();
            _isRunning = true;

            _listenerThread = new Thread(ListenLoop) { IsBackground = true };
            _listenerThread.Start();

            Debug.Log($"[TikTokRelaxStreamController] 🌐 Servidor HTTP iniciado en http://localhost:{httpPort}/");
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"[TikTokRelaxStreamController] No se pudo iniciar el listener HTTP: {ex.Message}");
        }
    }

    private void ListenLoop()
    {
        while (_isRunning && _httpListener != null && _httpListener.IsListening)
        {
            try
            {
                HttpListenerContext ctx = _httpListener.GetContext();
                ThreadPool.QueueUserWorkItem(_ => HandleHttpRequest(ctx));
            }
            catch (HttpListenerException) { break; }
            catch (Exception ex)
            {
                Debug.LogError($"[TikTokRelaxStreamController] Error en ListenLoop: {ex.Message}");
            }
        }
    }

    private void HandleHttpRequest(HttpListenerContext ctx)
    {
        HttpListenerRequest req = ctx.Request;
        HttpListenerResponse res = ctx.Response;

        res.Headers.Add("Access-Control-Allow-Origin", "*");
        res.Headers.Add("Access-Control-Allow-Methods", "GET, POST, OPTIONS");
        res.Headers.Add("Access-Control-Allow-Headers", "Content-Type");

        if (req.HttpMethod == "OPTIONS")
        {
            res.StatusCode = 200;
            res.Close();
            return;
        }

        string rawUrl = req.RawUrl.ToLowerInvariant();
        string responseText = "{\"status\":\"ok\"}";
        int statusCode = 200;

        try
        {
            string body = "";
            if (req.HasEntityBody)
            {
                using (var reader = new StreamReader(req.InputStream, req.ContentEncoding))
                {
                    body = reader.ReadToEnd();
                }
            }

            // Endpoints:
            // 1. /relax/gift -> Recibe regalo con monedas y avatar
            if (rawUrl.StartsWith("/relax/gift") || rawUrl.StartsWith("/gift"))
            {
                ParseGiftRequest(req, body, out string user, out int coins, out string gift, out string avatar, out string localPath);
                _mainThreadQueue.Enqueue(() =>
                {
                    TikTokRelaxDonorManager.Instance?.ProcessGiftDonation(user, coins, gift, avatar, localPath);
                });
            }
            // 2. /relax/avatar -> Actualiza foto de usuario una vez descargada
            else if (rawUrl.StartsWith("/relax/avatar") || rawUrl.StartsWith("/avatar"))
            {
                ParseAvatarRequest(req, body, out string user, out string avatar, out string localPath);
                _mainThreadQueue.Enqueue(() =>
                {
                    TikTokRelaxDonorManager.Instance?.LoadAvatarForUser(user, avatar, localPath);
                });
            }
            // 3. /relax/like -> Recibe likes
            else if (rawUrl.StartsWith("/relax/like") || rawUrl.StartsWith("/likes"))
            {
                ParseLikeRequest(req, body, out string user, out int count);
                _mainThreadQueue.Enqueue(() =>
                {
                    TikTokRelaxDonorManager.Instance?.ProcessLikes(user, count);
                });
            }
            // 4. /relax/music -> Recibe donación musical
            else if (rawUrl.StartsWith("/relax/music") || rawUrl.StartsWith("/music"))
            {
                ParseUserRequest(req, body, out string user);
                _mainThreadQueue.Enqueue(() =>
                {
                    TikTokRelaxDonorManager.Instance?.ProcessMusicDonation(user);
                });
            }
            // 5. /relax/status -> Estado actual
            else if (rawUrl.StartsWith("/relax/status") || rawUrl.StartsWith("/status"))
            {
                int score = GameManager.Instance != null ? GameManager.Instance.CurrentScore : 0;
                int q = TikTokRelaxDonorManager.Instance != null ? TikTokRelaxDonorManager.Instance.QueuedPearlsCount : 0;
                responseText = $"{{\"status\":\"running\",\"score\":{score},\"queuedPearls\":{q}}}";
            }
            else
            {
                statusCode = 404;
                responseText = "{\"error\":\"endpoint_not_found\"}";
            }
        }
        catch (Exception ex)
        {
            statusCode = 500;
            responseText = $"{{\"error\":\"{ex.Message}\"}}";
        }

        try
        {
            res.StatusCode = statusCode;
            res.ContentType = "application/json";
            byte[] buf = Encoding.UTF8.GetBytes(responseText);
            res.ContentLength64 = buf.Length;
            res.OutputStream.Write(buf, 0, buf.Length);
            res.Close();
        }
        catch { }
    }

    private void ParseGiftRequest(HttpListenerRequest req, string json, out string username, out int coins, out string gift, out string avatar, out string localPath)
    {
        var q = req.QueryString;
        username = !string.IsNullOrEmpty(q["user"]) ? q["user"] : (!string.IsNullOrEmpty(q["username"]) ? q["username"] : ExtractJsonValue(json, "username", "Donante"));
        if (string.IsNullOrEmpty(username) || username == "Donante")
        {
            username = ExtractJsonValue(json, "user", "Donante");
        }

        string coinStr = !string.IsNullOrEmpty(q["coins"]) ? q["coins"] : (!string.IsNullOrEmpty(q["repeat"]) ? q["repeat"] : ExtractJsonValue(json, "coins", "1"));
        coins = int.TryParse(coinStr, out int c) ? c : 1;

        gift = !string.IsNullOrEmpty(q["giftName"]) ? q["giftName"] : (!string.IsNullOrEmpty(q["gift"]) ? q["gift"] : ExtractJsonValue(json, "giftName", "Regalo"));
        avatar = !string.IsNullOrEmpty(q["avatarUrl"]) ? q["avatarUrl"] : (!string.IsNullOrEmpty(q["avatar"]) ? q["avatar"] : ExtractJsonValue(json, "avatarUrl", ""));
        localPath = !string.IsNullOrEmpty(q["localPath"]) ? q["localPath"] : (!string.IsNullOrEmpty(q["avatarPath"]) ? q["avatarPath"] : ExtractJsonValue(json, "localPath", ""));
    }

    private void ParseAvatarRequest(HttpListenerRequest req, string json, out string username, out string avatar, out string localPath)
    {
        var q = req.QueryString;
        username = !string.IsNullOrEmpty(q["user"]) ? q["user"] : (!string.IsNullOrEmpty(q["username"]) ? q["username"] : ExtractJsonValue(json, "username", "Donante"));
        avatar = !string.IsNullOrEmpty(q["avatarUrl"]) ? q["avatarUrl"] : (!string.IsNullOrEmpty(q["avatar"]) ? q["avatar"] : ExtractJsonValue(json, "avatarUrl", ""));
        localPath = !string.IsNullOrEmpty(q["localPath"]) ? q["localPath"] : (!string.IsNullOrEmpty(q["avatarPath"]) ? q["avatarPath"] : ExtractJsonValue(json, "localPath", ""));
    }

    private void ParseLikeRequest(HttpListenerRequest req, string json, out string username, out int count)
    {
        var q = req.QueryString;
        username = !string.IsNullOrEmpty(q["user"]) ? q["user"] : (!string.IsNullOrEmpty(q["username"]) ? q["username"] : ExtractJsonValue(json, "username", "Fan"));
        string countStr = !string.IsNullOrEmpty(q["count"]) ? q["count"] : ExtractJsonValue(json, "count", "10");
        count = int.TryParse(countStr, out int c) ? c : 10;
    }

    private void ParseUserRequest(HttpListenerRequest req, string json, out string username)
    {
        var q = req.QueryString;
        username = !string.IsNullOrEmpty(q["user"]) ? q["user"] : (!string.IsNullOrEmpty(q["username"]) ? q["username"] : ExtractJsonValue(json, "username", "Espectador"));
    }

    private string ExtractJsonValue(string json, string key, string fallback)
    {
        if (string.IsNullOrEmpty(json)) return fallback;
        string pattern = $"\"{key}\"";
        int idx = json.IndexOf(pattern, StringComparison.OrdinalIgnoreCase);
        if (idx < 0) return fallback;

        int colon = json.IndexOf(':', idx + pattern.Length);
        if (colon < 0) return fallback;

        int valStart = colon + 1;
        while (valStart < json.Length && (json[valStart] == ' ' || json[valStart] == '\"')) valStart++;

        int valEnd = valStart;
        while (valEnd < json.Length && json[valEnd] != '\"' && json[valEnd] != ',' && json[valEnd] != '}' && json[valEnd] != '\n' && json[valEnd] != '\r') valEnd++;

        if (valEnd > valStart)
        {
            return json.Substring(valStart, valEnd - valStart).Trim();
        }
        return fallback;
    }

    private void OnDestroy()
    {
        _isRunning = false;
        try
        {
            if (_httpListener != null && _httpListener.IsListening)
            {
                _httpListener.Stop();
                _httpListener.Close();
            }
        }
        catch { }

        if (_listenerThread != null && _listenerThread.IsAlive)
        {
            _listenerThread.Abort();
        }
    }
}
