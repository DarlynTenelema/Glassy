using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// LoginManager — Controla la pantalla de Login/Register (LoginScene).
///
/// FLUJO:
/// 1. Si ya hay sesion guardada (token en PlayerPrefs), redirige directo al MainMenu.
/// 2. Si no, muestra el boton "Continuar con Google".
/// 3. Al presionar, abre el navegador con OAuth de Supabase.
/// 4. AuthManager.OnDeepLinkActivated() recibe el token y navega al MainMenu.
///
/// SETUP EN UNITY EDITOR:
/// 1. Crear escena "LoginScene" — anadir al Build Settings en indice 0.
/// 2. Crear Canvas con orientacion Portrait.
/// 3. Conectar campos del Inspector:
///    - googleLoginButton -> Button "Continuar con Google"
///    - statusText        -> TMP_Text para mensajes de estado
///    - loadingIndicator  -> GameObject spinner (activar durante espera)
/// 4. Conectar OnClick() del boton -> OnGoogleLoginClicked()
/// </summary>
public class LoginManager : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private Button    googleLoginButton;
    [SerializeField] private TMP_Text  statusText;
    [SerializeField] private GameObject loadingIndicator;

    private void Start()
    {
        // Si ya hay sesion activa -> saltar directo al menu
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            SceneManager.LoadScene(GameConfig.SceneMainMenu);
            return;
        }

        SetStatus("");
        loadingIndicator?.SetActive(false);

        // Suscribirse al evento de login para reaccionar al callback OAuth
        if (AuthManager.Instance != null)
            AuthManager.Instance.OnLoginComplete += OnLoginComplete;
    }

    private void OnDestroy()
    {
        if (AuthManager.Instance != null)
            AuthManager.Instance.OnLoginComplete -= OnLoginComplete;
    }

    // =========================================================================
    // BOTON
    // =========================================================================

    public void OnGoogleLoginClicked()
    {
        if (googleLoginButton != null) googleLoginButton.interactable = false;
        loadingIndicator?.SetActive(true);
        SetStatus("Abriendo Google...");

        AuthManager.Instance?.LoginWithGoogle();

        // Mensaje orientativo mientras el usuario esta en el navegador
        Invoke(nameof(ShowWaitingMessage), 2f);
    }

    private void ShowWaitingMessage()
    {
        SetStatus("Completando inicio de sesion en el navegador...");
    }

    // =========================================================================
    // CALLBACK DE LOGIN
    // =========================================================================

    private void OnLoginComplete(bool success)
    {
        loadingIndicator?.SetActive(false);

        if (success)
        {
            SetStatus("Sesion iniciada correctamente.");
            // AuthManager redirige automaticamente a MainMenuScene
        }
        else
        {
            SetStatus("Error al iniciar sesion. Intenta de nuevo.");
            if (googleLoginButton != null) googleLoginButton.interactable = true;
        }
    }

    // =========================================================================
    // UTILIDADES
    // =========================================================================

    private void SetStatus(string msg)
    {
        if (statusText != null) statusText.text = msg;
    }
}
