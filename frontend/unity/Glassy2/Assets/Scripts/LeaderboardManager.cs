using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// LeaderboardManager — Obtiene y muestra el TOP 200 global del leaderboard.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear una escena "LeaderboardScene".
/// 2. Crear un Canvas con:
///    - ScrollView → Content (GameObject vertical donde se instancian las filas)
///    - GameObject "LoadingText" con TMP_Text
///    - GameObject "ErrorText" con TMP_Text
/// 3. Crear un prefab "LeaderboardRowPrefab" con:
///    - TMP_Text para rank (ej: "#1")
///    - TMP_Text para name
///    - TMP_Text para score
///    Añadir el script LeaderboardRow.cs a este prefab.
/// 4. Conectar los campos en el Inspector de LeaderboardManager.
/// 5. Añadir un botón "Volver" con OnClick() → OnBackClicked().
/// </summary>
public class LeaderboardManager : MonoBehaviour
{
    [Header("UI — Contenedor de filas")]
    [SerializeField] private Transform rowsContainer;  // ScrollView → Content

    [Header("UI — Estados")]
    [SerializeField] private GameObject loadingIndicator;
    [SerializeField] private TMP_Text   errorText;

    [Header("Prefab de fila del leaderboard")]
    [SerializeField] private GameObject leaderboardRowPrefab;

    [Header("UI — Header")]
    [SerializeField] private TMP_Text titleText;

    private void Start()
    {
        if (titleText != null) titleText.text = "🏆 TOP 200 GLOBAL";
        loadingIndicator?.SetActive(true);
        if (errorText != null) errorText.gameObject.SetActive(false);

        ApiManager.Instance?.GetLeaderboard(OnLeaderboardReceived);
    }

    private void OnLeaderboardReceived(List<LeaderboardEntry> entries)
    {
        loadingIndicator?.SetActive(false);

        if (entries == null || entries.Count == 0)
        {
            if (errorText != null)
            {
                errorText.gameObject.SetActive(true);
                errorText.text = "No hay puntajes todavía.\n¡Sé el primero!";
            }
            return;
        }

        // Limpiar filas anteriores (por si se recarga)
        foreach (Transform child in rowsContainer)
            Destroy(child.gameObject);

        // Instanciar una fila por cada entrada del leaderboard
        foreach (LeaderboardEntry entry in entries)
        {
            if (leaderboardRowPrefab == null) break;

            GameObject row = Instantiate(leaderboardRowPrefab, rowsContainer);
            LeaderboardRow rowScript = row.GetComponent<LeaderboardRow>();
            rowScript?.SetData(entry);
        }
    }

    public void OnBackClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneMainMenu);
    }
}

/// <summary>
/// LeaderboardRow — Script del prefab de cada fila del leaderboard.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear un prefab con tres TMP_Text: rankText, nameText, scoreText.
/// 2. Añadir este script al prefab raíz.
/// 3. Conectar los tres textos en el Inspector.
/// </summary>
public class LeaderboardRow : MonoBehaviour
{
    [SerializeField] private TMP_Text rankText;
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private TMP_Text scoreText;

    public void SetData(LeaderboardEntry entry)
    {
        // Decoración especial para el TOP 3
        string rankDisplay = entry.rank switch
        {
            1 => "🥇 #1",
            2 => "🥈 #2",
            3 => "🥉 #3",
            _ => $"#{entry.rank}"
        };

        if (rankText  != null) rankText.text  = rankDisplay;
        if (nameText  != null) nameText.text  = entry.name ?? "Anónimo";
        if (scoreText != null) scoreText.text = entry.score.ToString("N0");
    }
}
