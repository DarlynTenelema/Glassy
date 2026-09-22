using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// SettingsManager — Gestiona la pantalla de configuración del juego.
/// Guarda cambios localmente (PlayerPrefs) Y los sincroniza con el servidor.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear una escena "SettingsScene".
/// 2. Añadir este script a un GameObject "SettingsManager".
/// 3. Conectar los campos del Inspector:
///
/// TOGGLES (Toggle o Button):
///   - volumeToggle  → Toggle para Volumen ON/OFF
///   - effectsToggle → Toggle para Efectos ON/OFF
///   - darkModeToggle → Toggle para Dark Mode / Light Mode
///
/// TEXTOS:
///   - userNameText → Nombre del usuario logueado
///
/// BOTONES:
///   - Logout button → OnLogoutClicked()
///   - Back button   → OnBackClicked()
/// </summary>
public class SettingsManager : MonoBehaviour
{
    [Header("UI — Info del usuario")]
    [SerializeField] private TMP_Text userNameText;
    [SerializeField] private TMP_Text userEmailText;

    [Header("UI — Toggles de configuración")]
    [SerializeField] private Toggle volumeToggle;
    [SerializeField] private Toggle effectsToggle;
    [SerializeField] private Toggle darkModeToggle;

    [Header("UI — Feedback")]
    [SerializeField] private TMP_Text feedbackText;

    private bool _isInitializing = false; // Previene que los listeners disparen durante el setup

    private void Start()
    {
        LoadAndApplySettings();
    }

    private void LoadAndApplySettings()
    {
        _isInitializing = true;

        // Mostrar nombre del usuario
        if (AuthManager.Instance != null)
        {
            if (userNameText  != null) userNameText.text  = AuthManager.Instance.UserName;
        }

        // Aplicar valores locales primero (respuesta inmediata)
        bool volumeOn  = PlayerPrefs.GetInt(GameConfig.KeyVolumeOn,  1) == 1;
        bool effectsOn = PlayerPrefs.GetInt(GameConfig.KeyEffectsOn, 1) == 1;
        bool darkMode  = PlayerPrefs.GetInt(GameConfig.KeyDarkMode,  1) == 1;

        ApplyToToggles(volumeOn, effectsOn, darkMode);

        _isInitializing = false;

        // Sincronizar con servidor en background (si hay login)
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            ApiManager.Instance?.GetSettings(serverSettings =>
            {
                if (serverSettings == null) return;

                // Actualizar con los valores del servidor
                _isInitializing = true;
                PlayerPrefs.SetInt(GameConfig.KeyVolumeOn,  serverSettings.volume_on  ? 1 : 0);
                PlayerPrefs.SetInt(GameConfig.KeyEffectsOn, serverSettings.effects_on ? 1 : 0);
                PlayerPrefs.SetInt(GameConfig.KeyDarkMode,  serverSettings.dark_mode  ? 1 : 0);
                PlayerPrefs.Save();

                ApplyToToggles(serverSettings.volume_on, serverSettings.effects_on, serverSettings.dark_mode);
                ApplyAudioSettings(serverSettings.volume_on, serverSettings.effects_on);

                _isInitializing = false;
            });
        }
    }

    private void ApplyToToggles(bool volumeOn, bool effectsOn, bool darkMode)
    {
        if (volumeToggle   != null) volumeToggle.isOn   = volumeOn;
        if (effectsToggle  != null) effectsToggle.isOn  = effectsOn;
        if (darkModeToggle != null) darkModeToggle.isOn = darkMode;
    }

    private void ApplyAudioSettings(bool volumeOn, bool effectsOn)
    {
        AudioManager.Instance?.SetVolume(volumeOn);
        AudioManager.Instance?.SetEffects(effectsOn);
    }

    // =========================================================================
    // TOGGLE EVENTS — Conectar en Inspector: Toggle.OnValueChanged → estos métodos
    // =========================================================================

    public void OnVolumeToggleChanged(bool isOn)
    {
        if (_isInitializing) return;
        AudioManager.Instance?.SetVolume(isOn);
        SaveSettings();
    }

    public void OnEffectsToggleChanged(bool isOn)
    {
        if (_isInitializing) return;
        AudioManager.Instance?.SetEffects(isOn);
        SaveSettings();
    }

    public void OnDarkModeToggleChanged(bool isOn)
    {
        if (_isInitializing) return;
        // TODO: Aplicar cambio de tema visual (cambiar colores del Canvas)
        Debug.Log($"[SettingsManager] Dark Mode: {(isOn ? "ON" : "OFF")}");
        SaveSettings();
    }

    // =========================================================================
    // GUARDAR SETTINGS
    // =========================================================================

    private void SaveSettings()
    {
        bool volumeOn  = volumeToggle  != null && volumeToggle.isOn;
        bool effectsOn = effectsToggle != null && effectsToggle.isOn;
        bool darkMode  = darkModeToggle != null && darkModeToggle.isOn;

        // Guardar localmente
        PlayerPrefs.SetInt(GameConfig.KeyVolumeOn,  volumeOn  ? 1 : 0);
        PlayerPrefs.SetInt(GameConfig.KeyEffectsOn, effectsOn ? 1 : 0);
        PlayerPrefs.SetInt(GameConfig.KeyDarkMode,  darkMode  ? 1 : 0);
        PlayerPrefs.Save();

        // Sincronizar con servidor si hay login
        if (AuthManager.Instance != null && AuthManager.Instance.IsLoggedIn)
        {
            var settings = new UserSettings
            {
                volume_on  = volumeOn,
                effects_on = effectsOn,
                dark_mode  = darkMode
            };

            ApiManager.Instance?.SaveSettings(settings, success =>
            {
                if (feedbackText != null)
                {
                    feedbackText.text  = success ? "✅ Guardado" : "⚠️ Solo guardado localmente";
                    feedbackText.color = success ? UnityEngine.Color.green : UnityEngine.Color.yellow;
                    // Ocultar el mensaje después de 2 segundos
                    Invoke(nameof(ClearFeedback), 2f);
                }
            });
        }
    }

    private void ClearFeedback()
    {
        if (feedbackText != null) feedbackText.text = "";
    }

    // =========================================================================
    // NAVEGACIÓN Y LOGOUT
    // =========================================================================

    public void OnLogoutClicked()
    {
        // Guardar settings antes de cerrar sesión
        SaveSettings();
        AuthManager.Instance?.Logout(); // Redirige a LoginScene
    }

    public void OnBackClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneMainMenu);
    }
}
