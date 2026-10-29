using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// DonorPearlRequest — Petición en cola FIFO para asignar la foto del donante a la próxima perla.
/// Garantiza que nunca se sobreescriba una donación anterior si varios donan al mismo tiempo.
/// </summary>
[System.Serializable]
public class DonorPearlRequest
{
    public string Username;
    public Sprite DonorSprite;
    public string AvatarUrl;
    public float Timestamp;
}

/// <summary>
/// ActiveGemTier — Representa una gema que tiene activa la foto de un donante durante un tiempo determinado.
/// </summary>
[System.Serializable]
public class ActiveGemTier
{
    public GemType GemType;
    public string Username;
    public Sprite DonorSprite;
    public string AvatarUrl;
    public float ExpireTime;
    public float TotalDuration;
}

/// <summary>
/// TikTokRelaxDonorManager — Gestor Oficial de Recompensas de Donación, Fotos y Rankings
/// para la versión tranquila / relajada de TikTok Live (Beta.md).
/// 
/// Totalmente desacoplado de las escenas Móvil (GameScene) y TikTok Original (TikTokScene).
/// </summary>
public class TikTokRelaxDonorManager : MonoBehaviour
{
    public static TikTokRelaxDonorManager Instance { get; private set; }

    [Header("Configuración de Recompensas (Beta.md)")]
    public float emeraldDuration = 60f;     // 5 monedas -> 1 min
    public float amethystDuration = 120f;   // 10 monedas -> 2 min
    public float topazDuration = 180f;      // 15 monedas -> 3 min
    public float peridotDuration = 300f;    // 20 monedas -> 5 min (GreenRuby)
    public float sapphireDuration = 480f;   // 25 monedas -> 8 min
    public float rubyDuration = 600f;       // 30 monedas -> 10 min (RedRuby)
    public float diamondDuration = 900f;    // 50 monedas -> 15 min

    // Cola FIFO estricta para perlas (1 moneda: Rosa / Quiéreme)
    private readonly Queue<DonorPearlRequest> _pearlQueue = new Queue<DonorPearlRequest>();

    // Asignaciones persistentes por instancia de perla instanciada en el tablero con nombre de donante
    private readonly Dictionary<Gem, (string username, Sprite sprite)> _assignedPearlInfo = new Dictionary<Gem, (string username, Sprite sprite)>();

    // Tiers temporales activos por tipo de gema
    private readonly Dictionary<GemType, ActiveGemTier> _activeTimedTiers = new Dictionary<GemType, ActiveGemTier>();

    // Rankings acumulados de la sesión
    private readonly Dictionary<string, int> _donorCoins = new Dictionary<string, int>(StringComparer.OrdinalIgnoreCase);
    private readonly Dictionary<string, int> _viewerLikes = new Dictionary<string, int>(StringComparer.OrdinalIgnoreCase);

    // Cache de sprites generados / descargados por usuario y url
    private readonly Dictionary<string, Sprite> _avatarCache = new Dictionary<string, Sprite>(StringComparer.OrdinalIgnoreCase);
    private readonly HashSet<Sprite> _proceduralSprites = new HashSet<Sprite>();

    // Cache de sprites escalados al diámetro exacto de cada gema
    private readonly Dictionary<(Sprite, GemType), Sprite> _sizedSpriteCache = new Dictionary<(Sprite, GemType), Sprite>();

    // Exposición de lectura para la UI
    public int QueuedPearlsCount => _pearlQueue.Count;
    public string NextQueuedDonorName => _pearlQueue.Count > 0 ? _pearlQueue.Peek().Username : "";
    public IReadOnlyDictionary<GemType, ActiveGemTier> ActiveTiers => _activeTimedTiers;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
            return;
        }
        Instance = this;
    }

    [Header("Pruebas / Demo")]
    [Tooltip("Si está activo, carga donantes y likes ficticios al iniciar. Desactivado para streams reales.")]
    public bool useDemoMockData = false;

    private void Start()
    {
        // Donantes y likes de demostración iniciales solo si está explícitamente activado para pruebas
        if (useDemoMockData)
        {
            RegisterInitialDemoData();
        }
        else
        {
            TikTokRelaxUIController.Instance?.UpdateTopRankings();
        }
    }

    private void Update()
    {
        // Verificar expiración de tiers temporales
        if (_activeTimedTiers.Count > 0)
        {
            List<GemType> expired = null;
            float now = Time.time;

            foreach (var kvp in _activeTimedTiers)
            {
                if (now >= kvp.Value.ExpireTime)
                {
                    if (expired == null) expired = new List<GemType>();
                    expired.Add(kvp.Key);
                }
            }

            if (expired != null)
            {
                foreach (GemType type in expired)
                {
                    ActiveGemTier tier = _activeTimedTiers[type];
                    _activeTimedTiers.Remove(type);
                    Debug.Log($"[TikTokRelaxDonorManager] Tiempo expirado para foto de @{tier.Username} en {type}. Restaurando aspecto original.");

                    TikTokRelaxUIController.Instance?.ShowEventAlert($"<color=#FFD700>[TIEMPO]</color> Concluido para <b>{GetGemDisplayName(type)}</b> de @{tier.Username}");
                    RefreshGemsOfType(type);
                }

                TikTokRelaxUIController.Instance?.UpdateActiveTiersDisplay();
            }
        }
    }

    private void RegisterInitialDemoData()
    {
        _donorCoins["@Sofi_Gamer"] = 55;
        _donorCoins["@Alex_Live"] = 30;
        _donorCoins["@Carlos99"] = 15;
        _donorCoins["@Valen_Stream"] = 10;
        _donorCoins["@Lucas_VIP"] = 5;

        _viewerLikes["@Ana_Fan"] = 1250;
        _viewerLikes["@Mateo_Relax"] = 890;
        _viewerLikes["@Camila_G"] = 620;
        _viewerLikes["@David_Pro"] = 410;
        _viewerLikes["@Elena_Sky"] = 280;

        TikTokRelaxUIController.Instance?.UpdateTopRankings();
    }

    // =========================================================================
    // HOOK PARA GEM.CS (OBTENCIÓN DE SPRITE DE DONANTE)
    // =========================================================================

    public Sprite GetDonorSpriteForGem(Gem gem)
    {
        if (gem == null) return null;

        // 1. CASO PERLA (1 Moneda: Consumible FIFO único)
        if (gem.gemType == GemType.Pearl)
        {
            if (_assignedPearlInfo.TryGetValue(gem, out var info) && info.sprite != null)
            {
                return info.sprite;
            }

            if (_pearlQueue.Count > 0)
            {
                DonorPearlRequest req = _pearlQueue.Dequeue();
                string cleanUser = req.Username;

                // Si ya descargó el avatar real, priorizarlo sobre el procedural
                Sprite targetRaw = req.DonorSprite;
                if (_avatarCache.TryGetValue(cleanUser, out Sprite cached) && cached != null && !_proceduralSprites.Contains(cached))
                {
                    targetRaw = cached;
                }

                Sprite sizedPearl = GetSizedDonorSprite(targetRaw, gem);
                _assignedPearlInfo[gem] = (cleanUser, sizedPearl);

                Debug.Log($"[TikTokRelaxDonorManager] Asignando perla a donante: {cleanUser} (Quedan en cola: {_pearlQueue.Count})");

                TikTokRelaxUIController.Instance?.ShowEventAlert($"<color=#FF80BF>[PERLA]</color> ¡En camino con la foto de <b>{cleanUser}</b>!");
                TikTokRelaxUIController.Instance?.UpdatePearlQueueStatus(_pearlQueue.Count, NextQueuedDonorName);

                return sizedPearl;
            }

            return null; // Perla normal sin foto
        }

        // 2. CASO GEMAS CON TIEMPO ACTIVO (Esmeralda a Diamante)
        if (_activeTimedTiers.TryGetValue(gem.gemType, out ActiveGemTier tier))
        {
            if (Time.time < tier.ExpireTime)
            {
                Sprite targetRaw = tier.DonorSprite;
                if (_avatarCache.TryGetValue(tier.Username, out Sprite cached) && cached != null && !_proceduralSprites.Contains(cached))
                {
                    targetRaw = cached;
                }
                return GetSizedDonorSprite(targetRaw, gem);
            }
        }

        return null; // Skin normal
    }

    public void OnGemDestroyed(Gem gem)
    {
        if (gem != null && _assignedPearlInfo.ContainsKey(gem))
        {
            _assignedPearlInfo.Remove(gem);
        }
    }

    private Sprite GetSizedDonorSprite(Sprite rawSprite, Gem gem)
    {
        if (rawSprite == null || gem == null) return rawSprite;

        Sprite defaultSprite = gem.DefaultSprite;
        if (defaultSprite == null) return rawSprite;

        float targetWorldDiameter = defaultSprite.bounds.size.x;
        if (targetWorldDiameter <= 0.001f) return rawSprite;

        var key = (rawSprite, gem.gemType);
        if (_sizedSpriteCache.TryGetValue(key, out Sprite cached) && cached != null)
        {
            return cached;
        }

        Texture2D tex = rawSprite.texture;
        if (tex == null) return rawSprite;

        // PPU calibrado exactamente para que la foto tenga el mismo diámetro milimétrico que la gema original
        float requiredPpu = tex.width / targetWorldDiameter;

        Sprite sized = Sprite.Create(
            tex,
            new Rect(0, 0, tex.width, tex.height),
            new Vector2(0.5f, 0.5f),
            requiredPpu
        );

        _sizedSpriteCache[key] = sized;
        return sized;
    }

    // =========================================================================
    // PROCESAMIENTO DE REGALOS Y MONEDAS (Beta.md)
    // =========================================================================

    public void ProcessGiftDonation(string username, int coins, string giftName = "Regalo", string avatarUrl = null, string localPath = null)
    {
        if (string.IsNullOrEmpty(username)) username = "@Espectador";
        if (!username.StartsWith("@")) username = "@" + username;
        if (coins <= 0) coins = 1;

        // Registrar acumulado para Ranking Top Donaciones
        if (_donorCoins.ContainsKey(username))
            _donorCoins[username] += coins;
        else
            _donorCoins[username] = coins;

        TikTokRelaxUIController.Instance?.UpdateTopRankings();

        // Obtener o generar Sprite de Avatar
        Sprite avatarSprite = GetOrCreateAvatarSprite(username, avatarUrl, localPath);

        // Disparar lógica de recompensa según la escala de monedas en Beta.md
        if (coins >= 50)
        {
            // Diamante (50 monedas -> 15 minutos)
            ActivateGemTier(GemType.Diamond, username, diamondDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 30)
        {
            // Rubí Rojo (30 monedas -> 10 minutos)
            ActivateGemTier(GemType.RedRuby, username, rubyDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 25)
        {
            // Zafiro (25 monedas -> 8 minutos)
            ActivateGemTier(GemType.Sapphire, username, sapphireDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 20)
        {
            // Peridoto / Rubí Verde (20 monedas -> 5 minutos)
            ActivateGemTier(GemType.GreenRuby, username, peridotDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 15)
        {
            // Topacio (15 monedas -> 3 minutos)
            ActivateGemTier(GemType.Topaz, username, topazDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 10)
        {
            // Amatista (10 monedas -> 2 minutos)
            ActivateGemTier(GemType.Amethyst, username, amethystDuration, avatarSprite, avatarUrl, localPath);
        }
        else if (coins >= 5)
        {
            // Esmeralda (5 monedas -> 1 minuto)
            ActivateGemTier(GemType.Emerald, username, emeraldDuration, avatarSprite, avatarUrl, localPath);
        }
        else
        {
            // Perla: 1 moneda = 1 perla (si donaron racha de 2, 3 o 4 rosas, encola esa cantidad exacta de perlas con su foto)
            for (int i = 0; i < coins; i++)
            {
                EnqueuePearlDonor(username, avatarSprite, avatarUrl, localPath);
            }
        }
    }

    private void EnqueuePearlDonor(string username, Sprite avatarSprite, string avatarUrl, string localPath)
    {
        DonorPearlRequest request = new DonorPearlRequest
        {
            Username = username,
            DonorSprite = avatarSprite,
            AvatarUrl = avatarUrl,
            Timestamp = Time.time
        };

        _pearlQueue.Enqueue(request);

        Debug.Log($"[TikTokRelaxDonorManager] [PERLA] Encolada foto para perla de {username}. Total en cola: {_pearlQueue.Count}");

        TikTokRelaxUIController.Instance?.ShowEventAlert($"<color=#FF80BF>[PERLA]</color> <b>{username}</b> aseguró su foto en la próxima perla (#{_pearlQueue.Count})");
        TikTokRelaxUIController.Instance?.UpdatePearlQueueStatus(_pearlQueue.Count, NextQueuedDonorName);
    }

    private void ActivateGemTier(GemType gemType, string username, float durationSeconds, Sprite avatarSprite, string avatarUrl, string localPath)
    {
        string gemName = GetGemDisplayName(gemType);

        // BLOQUEO ESTRICTO DE ENFRIAMIENTO (Beta.md):
        // Si el tier ya tiene activa la foto de otro donante, se bloquea la sobreescritura.
        // Protege el tiempo completo del donante anterior para que nunca se sienta estafado.
        if (_activeTimedTiers.TryGetValue(gemType, out ActiveGemTier existingTier))
        {
            if (Time.time < existingTier.ExpireTime)
            {
                float rem = existingTier.ExpireTime - Time.time;
                int remM = Mathf.FloorToInt(rem / 60f);
                int remS = Mathf.FloorToInt(rem % 60f);
                string remStr = $"{remM:D2}:{remS:D2}";

                Debug.LogWarning($"[TikTokRelaxDonorManager] ⏳ {gemName} está en uso / enfriamiento por {existingTier.Username} (Restan {remStr}). Monedas acreditadas al ranking para {username}.");

                TikTokRelaxUIController.Instance?.ShowEventAlert($"⏳ <color=#FF4444>[GEMA EN USO]</color> <b>{gemName}</b> ocupada por {existingTier.Username} ({remStr} restan). ¡Tus monedas sumaron al Ranking!");
                return;
            }
        }

        ActiveGemTier tier = new ActiveGemTier
        {
            GemType = gemType,
            Username = username,
            DonorSprite = avatarSprite,
            AvatarUrl = avatarUrl,
            ExpireTime = Time.time + durationSeconds,
            TotalDuration = durationSeconds
        };

        _activeTimedTiers[gemType] = tier;

        string durText = FormatMinutes(durationSeconds);

        Debug.Log($"[TikTokRelaxDonorManager] [GEMA] Activada gema {gemName} con foto de {username} por {durText}");

        TikTokRelaxUIController.Instance?.ShowEventAlert($"✨ <color=#00FFAA>[FOTO ACTIVA]</color> <b>{username}</b> colocó su foto en <b>{gemName}s</b> ({durText})!");
        TikTokRelaxUIController.Instance?.UpdateActiveTiersDisplay();

        // Actualizar al instante todas las gemas de ese tipo que ya están en el frasco
        RefreshGemsOfType(gemType);
    }

    public bool IsTierInCooldown(GemType type, out float remainingSeconds, out float progressRatio, out string owner)
    {
        remainingSeconds = 0f;
        progressRatio = 0f;
        owner = "";

        if (_activeTimedTiers.TryGetValue(type, out ActiveGemTier tier))
        {
            float rem = tier.ExpireTime - Time.time;
            if (rem > 0f)
            {
                remainingSeconds = rem;
                progressRatio = tier.TotalDuration > 0 ? Mathf.Clamp01(rem / tier.TotalDuration) : 0f;
                owner = tier.Username;
                return true;
            }
        }
        return false;
    }

    public void ProcessMusicDonation(string username)
    {
        if (string.IsNullOrEmpty(username)) username = "@Espectador";
        if (!username.StartsWith("@")) username = "@" + username;

        if (_donorCoins.ContainsKey(username))
            _donorCoins[username] += 25;
        else
            _donorCoins[username] = 25;

        TikTokRelaxUIController.Instance?.UpdateTopRankings();

        // Tocar escala o sonido relajante en AudioManager
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.IncreasePitch();
            AudioManager.Instance.PlayDiamondSequence();
        }

        TikTokRelaxUIController.Instance?.ShowEventAlert($"<color=#FF66AA>[MUSICA]</color> <b>{username}</b> donó 25 monedas y cambió la música relajante!");
    }

    public void ProcessLikes(string username, int count)
    {
        if (string.IsNullOrEmpty(username)) username = "@Fan";
        if (!username.StartsWith("@")) username = "@" + username;
        if (count <= 0) count = 1;

        if (_viewerLikes.ContainsKey(username))
            _viewerLikes[username] += count;
        else
            _viewerLikes[username] = count;

        TikTokRelaxUIController.Instance?.AddLikes(count);
        TikTokRelaxUIController.Instance?.UpdateTopRankings();
    }

    // =========================================================================
    // UTILIDADES DE RANKING Y TIEMPO
    // =========================================================================

    public List<KeyValuePair<string, int>> GetTopDonors(int count = 5)
    {
        return _donorCoins.OrderByDescending(x => x.Value).Take(count).ToList();
    }

    public List<KeyValuePair<string, int>> GetTopLikes(int count = 5)
    {
        return _viewerLikes.OrderByDescending(x => x.Value).Take(count).ToList();
    }

    private void RefreshGemsOfType(GemType type)
    {
        if (GameManager.Instance == null) return;

        foreach (Gem gem in GameManager.Instance.activeGems)
        {
            if (gem != null && gem.gemType == type)
            {
                gem.ApplySkin();
            }
        }
    }

    public static string GetGemDisplayName(GemType type)
    {
        switch (type)
        {
            case GemType.Pearl: return "Perla";
            case GemType.Emerald: return "Esmeralda";
            case GemType.Amethyst: return "Amatista";
            case GemType.Topaz: return "Topacio";
            case GemType.GreenRuby: return "Peridoto";
            case GemType.Sapphire: return "Zafiro";
            case GemType.RedRuby: return "Rubí";
            case GemType.Diamond: return "Diamante";
            default: return type.ToString();
        }
    }

    public static string FormatMinutes(float seconds)
    {
        int mins = Mathf.CeilToInt(seconds / 60f);
        return mins == 1 ? "1 minuto" : $"{mins} minutos";
    }

    // =========================================================================
    // GENERACIÓN Y DESCARGA DINÁMICA DE AVATARES
    // =========================================================================

    private Sprite GetOrCreateAvatarSprite(string username, string avatarUrl, string localPath = null)
    {
        // 1. Si ya tenemos en cache un avatar real (no procedural)
        if (_avatarCache.TryGetValue(username, out Sprite cached) && cached != null && !_proceduralSprites.Contains(cached))
        {
            return cached;
        }

        // 2. Si el conector pasó una ruta de archivo local válida
        if (!string.IsNullOrEmpty(localPath) && File.Exists(localPath))
        {
            try
            {
                byte[] bytes = File.ReadAllBytes(localPath);
                if (bytes.Length > 0)
                {
                    Texture2D diskTex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
                    if (diskTex.LoadImage(bytes))
                    {
                        Sprite loadedSprite = ProcessTextureToSprite(diskTex, new Color(0.2f, 0.85f, 1f));
                        ApplyLoadedAvatar(username, avatarUrl, loadedSprite);
                        return loadedSprite;
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogWarning($"[TikTokRelaxDonorManager] Error leyendo archivo de avatar local: {ex.Message}");
            }
        }

        // 3. Fallback procedural inmediato para que el juego nunca espere la red
        Sprite procedural = CreateProceduralAvatarSprite(username);
        _avatarCache[username] = procedural;
        _proceduralSprites.Add(procedural);

        // 4. Si se proporcionó una URL HTTP/HTTPS, descargar en segundo plano
        if (!string.IsNullOrEmpty(avatarUrl) && avatarUrl.StartsWith("http", StringComparison.OrdinalIgnoreCase))
        {
            StartCoroutine(DownloadAvatarRoutine(username, avatarUrl));
        }

        return procedural;
    }

    public void LoadAvatarForUser(string username, string avatarUrl, string localPath = null)
    {
        if (string.IsNullOrEmpty(username)) return;
        if (!username.StartsWith("@")) username = "@" + username;

        // Si ya hay un sprite real, no re-descargar
        if (_avatarCache.TryGetValue(username, out Sprite cached) && cached != null && !_proceduralSprites.Contains(cached))
        {
            return;
        }

        if (!string.IsNullOrEmpty(localPath) && File.Exists(localPath))
        {
            try
            {
                byte[] bytes = File.ReadAllBytes(localPath);
                if (bytes.Length > 0)
                {
                    Texture2D diskTex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
                    if (diskTex.LoadImage(bytes))
                    {
                        Sprite loadedSprite = ProcessTextureToSprite(diskTex, new Color(0.2f, 0.85f, 1f));
                        ApplyLoadedAvatar(username, avatarUrl, loadedSprite);
                        return;
                    }
                }
            }
            catch { }
        }

        if (!string.IsNullOrEmpty(avatarUrl) && avatarUrl.StartsWith("http", StringComparison.OrdinalIgnoreCase))
        {
            StartCoroutine(DownloadAvatarRoutine(username, avatarUrl));
        }
    }

    private IEnumerator DownloadAvatarRoutine(string username, string url)
    {
        // En TikTok CDN, las URLs .webp son convertibles a .jpeg directamente
        string targetUrl = url;
        if (targetUrl.Contains(".webp"))
        {
            targetUrl = Regex.Replace(targetUrl, @"\.webp(\?|$)", ".jpeg$1");
        }

        using (UnityWebRequest uwr = UnityWebRequest.Get(targetUrl))
        {
            uwr.timeout = 7;
            yield return uwr.SendWebRequest();

            if (uwr.result == UnityWebRequest.Result.Success && uwr.downloadHandler != null)
            {
                byte[] rawData = uwr.downloadHandler.data;
                if (rawData != null && rawData.Length > 0)
                {
                    Texture2D downloadedTex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
                    if (downloadedTex.LoadImage(rawData))
                    {
                        Sprite downloadedSprite = ProcessTextureToSprite(downloadedTex, new Color(0.2f, 0.85f, 1f));
                        ApplyLoadedAvatar(username, url, downloadedSprite);
                        yield break;
                    }
                }
            }
            else
            {
                Debug.LogWarning($"[TikTokRelaxDonorManager] Descarga de avatar falló para {username}: {uwr.error}");
            }
        }
    }

    private Sprite ProcessTextureToSprite(Texture2D rawTex, Color ringColor)
    {
        Texture2D circularTex = CropToCircle(rawTex, 256, ringColor);
        return Sprite.Create(
            circularTex,
            new Rect(0, 0, circularTex.width, circularTex.height),
            new Vector2(0.5f, 0.5f),
            100f
        );
    }

    private void ApplyLoadedAvatar(string username, string avatarUrl, Sprite downloadedSprite)
    {
        if (downloadedSprite == null) return;

        // Guardar en cache principal
        _avatarCache[username] = downloadedSprite;
        if (!string.IsNullOrEmpty(avatarUrl))
        {
            _avatarCache[avatarUrl] = downloadedSprite;
        }

        Debug.Log($"[TikTokRelaxDonorManager] 🖼️ Avatar real aplicado exitosamente para {username}!");

        // 1. Actualizar tiers temporales activos (Esmeralda a Diamante)
        foreach (var tier in _activeTimedTiers.Values)
        {
            if (tier.Username.Equals(username, StringComparison.OrdinalIgnoreCase))
            {
                tier.DonorSprite = downloadedSprite;
                RefreshGemsOfType(tier.GemType);
            }
        }

        // 2. Actualizar perlas en cola FIFO
        foreach (var req in _pearlQueue)
        {
            if (req.Username.Equals(username, StringComparison.OrdinalIgnoreCase))
            {
                req.DonorSprite = downloadedSprite;
            }
        }

        // 3. Actualizar perlas que ya cayeron en el tablero
        List<Gem> gemsToUpdate = null;
        foreach (var pair in _assignedPearlInfo)
        {
            if (pair.Value.username.Equals(username, StringComparison.OrdinalIgnoreCase))
            {
                if (gemsToUpdate == null) gemsToUpdate = new List<Gem>();
                gemsToUpdate.Add(pair.Key);
            }
        }

        if (gemsToUpdate != null)
        {
            foreach (var gem in gemsToUpdate)
            {
                if (gem != null)
                {
                    Sprite sized = GetSizedDonorSprite(downloadedSprite, gem);
                    _assignedPearlInfo[gem] = (username, sized);
                    gem.ApplySkin();
                }
            }
        }

        RefreshAllActiveGems();
        TikTokRelaxUIController.Instance?.UpdateActiveTiersDisplay();
    }

    private void RefreshAllActiveGems()
    {
        if (GameManager.Instance == null) return;
        foreach (Gem gem in GameManager.Instance.activeGems)
        {
            if (gem != null) gem.ApplySkin();
        }
    }

    private Sprite CreateProceduralAvatarSprite(string username)
    {
        int size = 128;
        Texture2D tex = new Texture2D(size, size, TextureFormat.RGBA32, false);

        // Elegir color armónico según el hash del username
        int hash = Mathf.Abs(username.GetHashCode());
        Color[] palette = {
            new Color(0.18f, 0.55f, 0.95f), // Azul celestial
            new Color(0.85f, 0.25f, 0.65f), // Magenta brillante
            new Color(0.15f, 0.85f, 0.55f), // Verde esmeralda
            new Color(0.95f, 0.65f, 0.15f), // Dorado cálido
            new Color(0.65f, 0.35f, 0.95f), // Púrpura real
            new Color(0.95f, 0.35f, 0.35f)  // Rubí coral
        };
        Color baseCol = palette[hash % palette.Length];
        Color borderCol = Color.white;

        float center = size * 0.5f;
        float radius = (size * 0.5f) - 3f;
        float innerRadius = radius - 4f;

        Color[] pixels = new Color[size * size];

        for (int y = 0; y < size; y++)
        {
            for (int x = 0; x < size; x++)
            {
                float dist = Vector2.Distance(new Vector2(x, y), new Vector2(center, center));
                int idx = y * size + x;

                if (dist > radius)
                {
                    pixels[idx] = Color.clear;
                }
                else if (dist > innerRadius)
                {
                    pixels[idx] = borderCol; // Borde blanco suave
                }
                else
                {
                    // Gradiente sutil interno con brillo superior
                    float grad = Mathf.Clamp01((y - (center - innerRadius)) / (innerRadius * 2f));
                    Color c = Color.Lerp(baseCol * 0.75f, baseCol * 1.25f, grad);
                    pixels[idx] = c;
                }
            }
        }

        tex.SetPixels(pixels);
        tex.Apply();

        return Sprite.Create(tex, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f), 100f);
    }

    private Texture2D CropToCircle(Texture2D src, int targetSize, Color ringColor)
    {
        RenderTexture rt = RenderTexture.GetTemporary(targetSize, targetSize, 0, RenderTextureFormat.ARGB32);
        Graphics.Blit(src, rt);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = rt;

        Texture2D resized = new Texture2D(targetSize, targetSize, TextureFormat.RGBA32, false);
        resized.ReadPixels(new Rect(0, 0, targetSize, targetSize), 0, 0);
        resized.Apply();

        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(rt);

        float center = targetSize * 0.5f;
        float radius = center - 1f;
        float ringInnerRadius = radius - 4f;

        Color[] pixels = resized.GetPixels();
        for (int y = 0; y < targetSize; y++)
        {
            for (int x = 0; x < targetSize; x++)
            {
                float dist = Vector2.Distance(new Vector2(x + 0.5f, y + 0.5f), new Vector2(center, center));
                int idx = y * targetSize + x;

                if (dist > radius + 1f)
                {
                    pixels[idx] = Color.clear;
                }
                else if (dist > radius)
                {
                    // Suavizado anti-aliasing exterior
                    float alpha = Mathf.Clamp01(radius + 1f - dist);
                    pixels[idx] = new Color(ringColor.r, ringColor.g, ringColor.b, ringColor.a * alpha);
                }
                else if (dist > ringInnerRadius)
                {
                    pixels[idx] = ringColor;
                }
            }
        }

        resized.SetPixels(pixels);
        resized.Apply();
        return resized;
    }
}
