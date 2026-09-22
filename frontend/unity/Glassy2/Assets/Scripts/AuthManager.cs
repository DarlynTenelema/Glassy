using System;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

/// <summary>
/// AuthManager — Gestiona la autenticación del usuario con Google OAuth a través de Supabase.
///
/// FLUJO DE AUTENTICACIÓN (sin plugins externos):
/// 1. El usuario toca "Continuar con Google".
/// 2. Application.OpenURL abre la URL de OAuth de Supabase en el navegador del dispositivo.
/// 3. Google autentica al usuario y redirige a "glassy://callback#access_token=JWT".
/// 4. Application.deepLinkActivated captura esa URL y extrae el JWT.
/// 5. El JWT se guarda en PlayerPrefs y se envía a ApiManager para futuros requests.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// - Añadir este GameObject a la escena LoginScene.
/// - Configurar el AndroidManifest.xml con el Intent Filter para el scheme "glassy".
///   (Ver: Assets/Plugins/Android/AndroidManifest.xml)
/// - Configurar el Redirect URL en Supabase Dashboard → Auth → URL Configuration:
///   Site URL: glassy://callback
///   Redirect URLs: glassy://callback
/// </summary>
public class AuthManager : MonoBehaviour
{
    public static AuthManager Instance { get; private set; }

    // Datos del usuario autenticado
    public string AuthToken  { get; private set; } = "";
    public string UserName   { get; private set; } = "";
    public string AvatarUrl  { get; private set; } = "";
    public bool   IsLoggedIn => !string.IsNullOrEmpty(AuthToken);

    // Evento disparado cuando el login se completa (éxito o fallo)
    public event Action<bool> OnLoginComplete;

    private void Awake()
    {
        // Singleton persistente entre escenas
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        // Restaurar sesión guardada localmente
        LoadSavedSession();
    }

    private void OnEnable()
    {
        // Capturar deep link si el app fue abierto desde el navegador
        Application.deepLinkActivated += OnDeepLinkActivated;

        // Si el app fue lanzado directamente desde un deep link (app estaba cerrada)
        if (!string.IsNullOrEmpty(Application.absoluteURL))
        {
            OnDeepLinkActivated(Application.absoluteURL);
        }
    }

    private void OnDisable()
    {
        Application.deepLinkActivated -= OnDeepLinkActivated;
    }

    // =========================================================================
    // LOGIN CON GOOGLE
    // =========================================================================

    /// <summary>
    /// Abre el navegador del dispositivo para iniciar el flujo OAuth de Google via Supabase.
    /// Llama a este método desde el botón "Continuar con Google".
    /// </summary>
    public void LoginWithGoogle()
    {
        string oauthUrl = $"{GameConfig.SupabaseUrl}/auth/v1/authorize" +
                          $"?provider=google" +
                          $"&redirect_to={Uri.EscapeDataString(GameConfig.DeepLinkCallback)}";

        Debug.Log($"[AuthManager] Abriendo OAuth URL: {oauthUrl}");
        Application.OpenURL(oauthUrl);
    }

    /// <summary>
    /// Recibe el deep link de vuelta del navegador tras el login de Google.
    /// URL esperada: glassy://callback#access_token=JWT&token_type=bearer&...
    /// </summary>
    private void OnDeepLinkActivated(string url)
    {
        Debug.Log($"[AuthManager] Deep link recibido: {url}");

        if (!url.StartsWith(GameConfig.DeepLinkScheme + "://")) return;

        // El token viene en el fragment (#) de la URL
        string fragment = "";
        int hashIndex = url.IndexOf('#');
        if (hashIndex >= 0)
            fragment = url.Substring(hashIndex + 1);

        // Parsear el fragment como query string
        string accessToken = ParseUrlParam(fragment, "access_token");
        string refreshToken = ParseUrlParam(fragment, "refresh_token");

        if (!string.IsNullOrEmpty(accessToken))
        {
            StartCoroutine(FetchUserProfile(accessToken, refreshToken));
        }
        else
        {
            Debug.LogError("[AuthManager] No se encontró access_token en el deep link.");
            OnLoginComplete?.Invoke(false);
        }
    }

    /// <summary>
    /// Obtiene los datos del usuario (nombre, avatar) desde Supabase usando el JWT.
    /// </summary>
    private IEnumerator FetchUserProfile(string accessToken, string refreshToken)
    {
        string url = $"{GameConfig.SupabaseUrl}/auth/v1/user";

        using UnityWebRequest req = UnityWebRequest.Get(url);
        req.SetRequestHeader("Authorization", "Bearer " + accessToken);
        req.SetRequestHeader("apikey", GameConfig.SupabaseAnonKey);

        yield return req.SendWebRequest();

        if (req.result == UnityWebRequest.Result.Success)
        {
            UserProfileResponse profile = JsonUtility.FromJson<UserProfileResponse>(req.downloadHandler.text);

            AuthToken = accessToken;
            UserName  = profile?.user_metadata?.full_name ?? profile?.email ?? "Jugador";
            AvatarUrl = profile?.user_metadata?.avatar_url ?? "";

            SaveSession(accessToken, refreshToken);
            ApiManager.Instance?.SetAuthToken(accessToken);

            Debug.Log($"[AuthManager] Login exitoso. Usuario: {UserName}");
            OnLoginComplete?.Invoke(true);

            // Ir al menú principal
            SceneManager.LoadScene(GameConfig.SceneMainMenu);
        }
        else
        {
            Debug.LogError($"[AuthManager] Error al obtener perfil: {req.error}");
            OnLoginComplete?.Invoke(false);
        }
    }

    // =========================================================================
    // SESIÓN LOCAL
    // =========================================================================

    private void LoadSavedSession()
    {
        AuthToken = PlayerPrefs.GetString(GameConfig.KeyAuthToken, "");
        UserName  = PlayerPrefs.GetString(GameConfig.KeyUserName,  "Jugador");
        AvatarUrl = PlayerPrefs.GetString(GameConfig.KeyUserAvatar, "");

        if (IsLoggedIn)
        {
            Debug.Log($"[AuthManager] Sesión restaurada para: {UserName}");
            ApiManager.Instance?.SetAuthToken(AuthToken);
        }
    }

    private void SaveSession(string token, string refreshToken)
    {
        PlayerPrefs.SetString(GameConfig.KeyAuthToken,  token);
        PlayerPrefs.SetString(GameConfig.KeyUserName,   UserName);
        PlayerPrefs.SetString(GameConfig.KeyUserAvatar, AvatarUrl);
        PlayerPrefs.Save();
    }

    /// <summary>
    /// Cierra la sesión del usuario y vuelve a la pantalla de Login.
    /// </summary>
    public void Logout()
    {
        AuthToken = "";
        UserName  = "Jugador";
        AvatarUrl = "";

        PlayerPrefs.DeleteKey(GameConfig.KeyAuthToken);
        PlayerPrefs.DeleteKey(GameConfig.KeyUserName);
        PlayerPrefs.DeleteKey(GameConfig.KeyUserAvatar);
        PlayerPrefs.Save();

        ApiManager.Instance?.SetAuthToken("");

        Debug.Log("[AuthManager] Sesión cerrada.");
        SceneManager.LoadScene(GameConfig.SceneLogin);
    }

    // =========================================================================
    // UTILIDADES
    // =========================================================================

    private string ParseUrlParam(string query, string key)
    {
        foreach (string param in query.Split('&'))
        {
            string[] parts = param.Split('=');
            if (parts.Length == 2 && parts[0] == key)
                return Uri.UnescapeDataString(parts[1]);
        }
        return "";
    }

    // =========================================================================
    // MODELOS DE RESPUESTA
    // =========================================================================

    [Serializable]
    private class UserProfileResponse
    {
        public string email;
        public UserMetadata user_metadata;
    }

    [Serializable]
    private class UserMetadata
    {
        public string full_name;
        public string avatar_url;
    }
}
