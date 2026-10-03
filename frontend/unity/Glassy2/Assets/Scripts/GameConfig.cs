/// <summary>
/// GameConfig — Constantes globales del proyecto Glassy.
/// Edita este archivo para cambiar URLs, keys, valores del juego, etc.
/// ¡Nunca pongas credenciales sensibles aquí! Solo datos públicos del cliente.
/// </summary>
public static class GameConfig
{
    // =========================================================================
    // SUPABASE — URL pública del proyecto (no sensible)
    // =========================================================================
    public const string SupabaseUrl     = "https://mstunvdiaqttvfefncbt.supabase.co";

    /// <summary>
    /// Supabase Anon Key (clave pública del cliente).
    /// Obtenla en: Supabase Dashboard → Project Settings → API → anon / public
    /// Es seguro incluirla en el cliente. Row Level Security la protege.
    /// </summary>
    public const string SupabaseAnonKey = "sb_publishable_okNqQmjW3g9MYiUoo8rfBg_iygTmuFg"; // ← reemplaza este valor

    // =========================================================================
    // BACKEND — URL del servidor Golang en Railway
    // =========================================================================
    public const string BackendUrl = "https://glassy-production.up.railway.app/api";

    // =========================================================================
    // DEEP LINK — Scheme del app para capturar el callback de OAuth
    // El AndroidManifest.xml debe tener un Intent Filter para "glassy"
    // =========================================================================
    public const string DeepLinkScheme   = "glassy";
    public const string DeepLinkCallback = "glassy://callback";

    // =========================================================================
    // NOMBRES DE ESCENAS — Deben coincidir EXACTAMENTE con el nombre en Build Settings
    // =========================================================================
    public const string SceneLogin       = "LoginScene";
    public const string SceneMainMenu    = "MainMenuScene";
    public const string SceneGame        = "GameScene";
    public const string SceneLeaderboard = "LeaderboardScene";
    public const string SceneStore       = "StoreScene";
    public const string SceneSettings    = "SettingsScene";

    // =========================================================================
    // PLAYERPREFS KEYS — Claves para almacenamiento local
    // =========================================================================
    public const string KeyAuthToken  = "glassy_auth_token";
    public const string KeyUserName   = "glassy_user_name";
    public const string KeyUserAvatar = "glassy_user_avatar";
    public const string KeyCrystals   = "glassy_crystals";
    public const string KeyVolumeOn   = "glassy_volume_on";
    public const string KeyEffectsOn  = "glassy_effects_on";
    public const string KeyDarkMode   = "glassy_dark_mode";

    // =========================================================================
    // GOOGLE PLAY BILLING — IDs de producto (deben coincidir con Play Console)
    // =========================================================================
    public const string PackId100  = "glass_pack_100";
    public const string PackId600  = "glass_pack_600";
    public const string PackId1500 = "glass_pack_1500";
    public const string PackId5000 = "glass_pack_5000";

    // =========================================================================
    // ADMOB — IDs de anuncio
    // Obtén los IDs en: Google AdMob → Apps → Tu app → Ad units
    // =========================================================================
    public const string AdMobAppId        = "ca-app-pub-6984024121811101~2309173911";
    public const string RewardedAdUnitId  = "ca-app-pub-6984024121811101/6599772715";

    // =========================================================================
    // VALORES DEL JUEGO
    // =========================================================================
    public const int   MaxLeaderboardEntries = 200;
    public const int   AdRewardCrystals      = 5;
    public const int   MaxScore              = 100_000;
    public const float SpawnInterval         = 0.12f; // Súper rápido, como una manguera de agua
    public const float GameOverGraceSecs     = 1.5f;  // Tiempo en zona de peligro antes de Game Over

    // =========================================================================
    // SISTEMA DE PESOS (según documentación v1)
    // =========================================================================
    /// <summary>
    /// Masa base de cada gema según su tipo.
    /// Pearl = 0 (ignorada por física de gemas), Diamond = 0 (explota al aparecer).
    /// Las gemas intermedias tienen masas 1.1–1.6 para simular tamaño relativo.
    /// Índice coincide con GemType enum:
    ///   [0] Pearl=0.1  [1] Emerald=1.1  [2] Amethyst=1.2  [3] Topaz=1.3
    ///   [4] GreenRuby=1.4  [5] Sapphire=1.5  [6] RedRuby=1.6  [7] Diamond=0.1
    /// </summary>
    public static readonly float[] GemBaseMasses =
    {
        0.1f,  // Pearl     — sin interacción con gemas
        1.0f,  // Emerald   — valor 1
        1.2f,  // Amethyst  — valor 2
        1.6f,  // Topaz     — valor 4
        2.2f,  // GreenRuby — valor 8
        3.0f,  // Sapphire  — valor 16
        4.0f,  // RedRuby   — valor 32
        0.1f,  // Diamond   — explota, no necesita masa real
        5.0f,  // Stone     — pesado obstáculo
        1.0f   // Quartz    — peso normal
    };

    /// <summary>
    /// Bonus de masa que se aplica temporalmente cuando el jugador agarra una gema.
    /// Se aumenta para que a pesar de que las gemas grandes son más pesadas, el jugador 
    /// aún pueda moverlas moderadamente sin romper la física.
    /// </summary>
    public const float PlayerMassBonus = 1.5f;

    // =========================================================================
    // SISTEMA DE HIGHLIGHT ROJO
    // =========================================================================
    /// <summary>
    /// Intervalo (en segundos) con el que GemHighlightManager reevalúa
    /// qué tipo de gema es el más numeroso en el tablero.
    /// </summary>
    public const float HighlightCheckInterval = 2.0f;

    /// <summary>
    /// Mínimo de gemas del mismo tipo para que el sistema active el highlight rojo.
    /// Si hay menos de este número, no se considera peligroso.
    /// </summary>
    public const int HighlightMinCount = 3;

    // =========================================================================
    // PUNTOS Y COSTOS
    // =========================================================================
    /// <summary>
    /// Puntos de cada gema. El índice es el valor del enum GemType.
    /// Pearl=0, Emerald=1, Amethyst=2, Topaz=3, GreenRuby=4, Sapphire=5, RedRuby=6, Diamond=7, Stone=8, Quartz=9
    /// </summary>
    public static readonly int[] GemScoreValues = { 0, 1, 2, 4, 8, 16, 32, 64, 0, 0 };

    /// <summary>
    /// Costo en lapislázulis para eliminar todas las gemas de ese tipo del tablero.
    /// El diamante (índice 7) no se puede comprar porque explota solo.
    /// Stone y Quartz no se pueden comprar.
    /// </summary>
    public static readonly int[] GemCrystalCosts = { 1, 2, 4, 8, 16, 32, 64, 0, 0, 0 };

    /// <summary>
    /// Costo en lapislázulis para eliminar TODAS las gemas del tablero.
    /// </summary>
    public const int ClearAllCrystalCost = 5;
}
