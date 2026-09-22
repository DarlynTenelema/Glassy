using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// MainMenuManager — Controla la pantalla principal del juego (INDEX).
/// Es la pantalla que el jugador ve después de hacer login.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear una escena llamada "MainMenuScene".
/// 2. Crear un Canvas y añadir este script a un GameObject "MainMenuManager".
/// 3. Conectar los campos del Inspector:
///
/// TEXTOS (TMP_Text):
///   - welcomeText  → "¡Bienvenido, [Nombre]!"
///   - crystalText  → Cantidad de cristales del jugador
///
/// BOTONES — conectar sus OnClick():
///   - Play button        → OnPlayClicked()
///   - Leaderboard button → OnLeaderboardClicked()
///   - Store button       → OnStoreClicked()
///   - Settings button    → OnSettingsClicked()
/// </summary>
public class MainMenuManager : MonoBehaviour
{
    [Header("UI — Textos")]
    [SerializeField] private TMP_Text welcomeText;
    [SerializeField] private TMP_Text crystalText;

    [Header("UI — Avatar (Opcional)")]
    [SerializeField] private Image avatarImage;

    private void Start()
    {
        // Redirigir al Login si no hay sesión activa
        if (AuthManager.Instance != null && !AuthManager.Instance.IsLoggedIn)
        {
            SceneManager.LoadScene(GameConfig.SceneLogin);
            return;
        }

        // Mostrar nombre del usuario
        string name = AuthManager.Instance != null ? AuthManager.Instance.UserName : "Jugador";
        if (welcomeText != null)
            welcomeText.text = $"¡Bienvenido, {name}!";

        // Cargar cristales (locales primero, luego sincronizar con servidor)
        int localCrystals = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 0);
        UpdateCrystalDisplay(localCrystals);

        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            ApiManager.Instance?.GetWallet(crystals =>
            {
                if (crystals >= 0)
                {
                    PlayerPrefs.SetInt(GameConfig.KeyCrystals, crystals);
                    PlayerPrefs.Save();
                    UpdateCrystalDisplay(crystals);
                }
            });
        }
    }

    private void UpdateCrystalDisplay(int amount)
    {
        if (crystalText != null)
            crystalText.text = amount.ToString("N0") + " 💎";
    }

    // =========================================================================
    // BOTONES
    // =========================================================================

    public void OnPlayClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneGame);
    }

    public void OnLeaderboardClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneLeaderboard);
    }

    public void OnStoreClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneStore);
    }

    public void OnSettingsClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneSettings);
    }
}
