using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// UIManager — Controla toda la interfaz de usuario de la escena de juego (GameScene).
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear un Canvas en GameScene.
/// 2. Añadir este script a un GameObject "UIManager".
/// 3. Conectar todos los campos del Inspector con los elementos del Canvas:
///
/// PANELES (GameObjects que se activan/desactivan):
///   - pausePanel    → Panel con opciones de pausa (fondo semitransparente)
///   - gameOverPanel → Panel de Game Over con score final
///   - storePanelInGame → Panel pequeño de tienda accesible desde pausa
///
/// TEXTOS (TMP_Text):
///   - scoreText        → Texto del score en gameplay
///   - crystalText      → Texto de cristales en gameplay  
///   - finalScoreText   → Texto del score final en Game Over
///   - pauseVolumeText  → "Volumen: ON/OFF" en panel de pausa
///   - pauseEffectsText → "Efectos: ON/OFF" en panel de pausa
///
/// BOTONES (Button) — conectar sus OnClick() a los métodos de este script:
///   - Pause button   → TogglePause()
///   - Resume button  → OnResumeClicked()
///   - Quit button    → OnQuitClicked()
///   - Restart button → OnRestartClicked()
///   - Store button   → OnOpenStoreFromPause()
/// </summary>
public class UIManager : MonoBehaviour
{
    public static UIManager Instance { get; private set; }

    // =========================================================================
    // INSPECTOR FIELDS
    // =========================================================================

    [Header("Paneles")]
    [SerializeField] private GameObject pausePanel;
    [SerializeField] private GameObject gameOverPanel;
    [SerializeField] private GameObject storePanelInGame;

    [Header("Gameplay HUD")]
    [SerializeField] private TMP_Text scoreText;
    [SerializeField] private TMP_Text crystalText;

    [Header("Game Over")]
    [SerializeField] private TMP_Text finalScoreText;
    [SerializeField] private TMP_Text finalGradeText; // "¡Increíble!", "Bien", "Sigue intentando"

    [Header("Pausa")]
    [SerializeField] private TMP_Text pauseVolumeText;
    [SerializeField] private TMP_Text pauseEffectsText;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    private void Start()
    {
        // Asegurarse de que los paneles estén ocultos al iniciar
        if (pausePanel != null) pausePanel.SetActive(false);
        if (gameOverPanel != null) gameOverPanel.SetActive(false);
        if (storePanelInGame != null) storePanelInGame.SetActive(false);

        UpdateScoreDisplay(0);
        RefreshPauseToggleLabels();
    }

    // =========================================================================
    // SCORE Y CRISTALES
    // =========================================================================

    public void UpdateScoreDisplay(int score)
    {
        if (scoreText != null) scoreText.text = score.ToString("N0");
    }

    public void UpdateCrystalDisplay(int crystals)
    {
        if (crystalText != null) crystalText.text = crystals.ToString("N0");
    }

    // =========================================================================
    // GAME OVER
    // =========================================================================

    public void ShowGameOver(int finalScore)
    {
        if (gameOverPanel != null) gameOverPanel.SetActive(true);

        if (finalScoreText != null)
            finalScoreText.text = finalScore.ToString("N0");

        if (finalGradeText != null)
            finalGradeText.text = GetGradeText(finalScore);
    }

    private string GetGradeText(int score)
    {
        if (score >= 500)  return "🏆 ¡LEGENDARIO!";
        if (score >= 300)  return "💎 ¡Maestro!";
        if (score >= 150)  return "⭐ ¡Excelente!";
        if (score >= 50)   return "👍 ¡Bien hecho!";
        return "🎮 ¡Sigue intentando!";
    }

    // =========================================================================
    // PAUSA
    // =========================================================================

    public void ShowPausePanel(bool show)
    {
        if (pausePanel != null) pausePanel.SetActive(show);
        if (show) RefreshPauseToggleLabels();
    }

    private void RefreshPauseToggleLabels()
    {
        if (AudioManager.Instance == null) return;
        if (pauseVolumeText  != null) pauseVolumeText.text  = "Volumen: "  + (AudioManager.Instance.IsVolumeOn  ? "ON" : "OFF");
        if (pauseEffectsText != null) pauseEffectsText.text = "Efectos: "  + (AudioManager.Instance.IsEffectsOn ? "ON" : "OFF");
    }

    // =========================================================================
    // BOTONES — llamados desde los OnClick() del Canvas
    // =========================================================================

    public void OnPauseClicked()      { if (GameManager.Instance != null) GameManager.Instance.TogglePause(); }
    public void OnResumeClicked()     { if (GameManager.Instance != null) GameManager.Instance.ResumeGame(); }
    public void OnRestartClicked()    { if (GameManager.Instance != null) GameManager.Instance.RestartGame(); }
    public void OnQuitClicked()       { if (GameManager.Instance != null) GameManager.Instance.GoToMainMenu(); }

    public void OnToggleVolume()
    {
        if (AudioManager.Instance != null) AudioManager.Instance.SetVolume(!AudioManager.Instance.IsVolumeOn);
        RefreshPauseToggleLabels();
    }

    public void OnToggleEffects()
    {
        if (AudioManager.Instance != null) AudioManager.Instance.SetEffects(!AudioManager.Instance.IsEffectsOn);
        RefreshPauseToggleLabels();
    }

    public void OnOpenStoreFromPause()
    {
        if (pausePanel != null) pausePanel.SetActive(false);
        if (storePanelInGame != null) storePanelInGame.SetActive(true);
    }

    public void OnCloseStoreInGame()
    {
        if (storePanelInGame != null) storePanelInGame.SetActive(false);
        // Si el juego estaba pausado, volver al panel de pausa
        if (GameManager.Instance != null && GameManager.Instance.IsPaused)
            if (pausePanel != null) pausePanel.SetActive(true);
    }
}
