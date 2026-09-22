using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// ApiManager — Cliente HTTP para todos los endpoints del backend Golang.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// - Añadir este script a un GameObject persistente (DontDestroyOnLoad).
/// - AuthManager.SetAuthToken() es llamado automáticamente tras el login.
///
/// USO DESDE OTROS SCRIPTS:
///   ApiManager.Instance.GetWallet(crystals => Debug.Log(crystals));
///   ApiManager.Instance.SubmitScore(1234, success => { ... });
/// </summary>
public class ApiManager : MonoBehaviour
{
    public static ApiManager Instance { get; private set; }

    private string _authToken = "";
    private string _backendUrl = GameConfig.BackendUrl;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    /// <summary>Establece el JWT de autenticación. Llamado por AuthManager tras el login.</summary>
    public void SetAuthToken(string token) => _authToken = token;

    // =========================================================================
    // HELPERS PRIVADOS
    // =========================================================================

    private UnityWebRequest BuildGet(string endpoint)
    {
        var req = UnityWebRequest.Get(_backendUrl + endpoint);
        AddAuthHeader(req);
        return req;
    }

    private UnityWebRequest BuildPost(string endpoint, string jsonBody)
    {
        var req = new UnityWebRequest(_backendUrl + endpoint, "POST");
        if (!string.IsNullOrEmpty(jsonBody))
        {
            byte[] raw = Encoding.UTF8.GetBytes(jsonBody);
            req.uploadHandler   = new UploadHandlerRaw(raw);
        }
        req.downloadHandler = new DownloadHandlerBuffer();
        req.SetRequestHeader("Content-Type", "application/json");
        AddAuthHeader(req);
        return req;
    }

    private void AddAuthHeader(UnityWebRequest req)
    {
        if (!string.IsNullOrEmpty(_authToken))
            req.SetRequestHeader("Authorization", "Bearer " + _authToken);
    }

    private bool IsSuccess(UnityWebRequest req) =>
        req.result == UnityWebRequest.Result.Success;

    // =========================================================================
    // WALLET
    // =========================================================================

    /// <summary>
    /// Obtiene los cristales del jugador desde el servidor.
    /// Callback: (int crystals) — -1 si hay error.
    /// </summary>
    public void GetWallet(Action<int> callback)
    {
        StartCoroutine(GetWalletRoutine(callback));
    }

    private IEnumerator GetWalletRoutine(Action<int> callback)
    {
        using var req = BuildGet("/player/wallet");
        yield return req.SendWebRequest();

        if (IsSuccess(req))
        {
            var resp = JsonUtility.FromJson<WalletResponse>(req.downloadHandler.text);
            callback?.Invoke(resp.crystals);
        }
        else
        {
            Debug.LogWarning($"[ApiManager] GetWallet error: {req.error}");
            callback?.Invoke(-1);
        }
    }

    // =========================================================================
    // LEADERBOARD
    // =========================================================================

    /// <summary>
    /// Envía el puntaje final al servidor (UPSERT: solo guarda si es el mejor).
    /// Callback: (bool success)
    /// </summary>
    public void SubmitScore(int score, Action<bool> callback = null)
    {
        StartCoroutine(SubmitScoreRoutine(score, callback));
    }

    private IEnumerator SubmitScoreRoutine(int score, Action<bool> callback)
    {
        string body = $"{{\"score\":{score}}}";
        using var req = BuildPost("/leaderboard", body);
        yield return req.SendWebRequest();

        bool ok = IsSuccess(req);
        if (!ok) Debug.LogWarning($"[ApiManager] SubmitScore error: {req.error}");
        callback?.Invoke(ok);
    }

    /// <summary>
    /// Obtiene el TOP 200 del leaderboard global.
    /// Callback: (List&lt;LeaderboardEntry&gt;) — null si hay error.
    /// </summary>
    public void GetLeaderboard(Action<List<LeaderboardEntry>> callback)
    {
        StartCoroutine(GetLeaderboardRoutine(callback));
    }

    private IEnumerator GetLeaderboardRoutine(Action<List<LeaderboardEntry>> callback)
    {
        // El leaderboard global es público (no necesita auth)
        using var req = UnityWebRequest.Get(_backendUrl.Replace("/api", "") + "/api/leaderboard/global");
        yield return req.SendWebRequest();

        if (IsSuccess(req))
        {
            // JsonUtility no puede deserializar arrays directamente → usamos wrapper
            string wrapped = "{\"entries\":" + req.downloadHandler.text + "}";
            var resp = JsonUtility.FromJson<LeaderboardArrayWrapper>(wrapped);
            callback?.Invoke(resp?.entries != null
                ? new List<LeaderboardEntry>(resp.entries)
                : new List<LeaderboardEntry>());
        }
        else
        {
            Debug.LogWarning($"[ApiManager] GetLeaderboard error: {req.error}");
            callback?.Invoke(null);
        }
    }

    // =========================================================================
    // SETTINGS
    // =========================================================================

    /// <summary>
    /// Obtiene la configuración del jugador desde el servidor.
    /// Callback: (UserSettings) — null si hay error (usar defaults en ese caso).
    /// </summary>
    public void GetSettings(Action<UserSettings> callback)
    {
        StartCoroutine(GetSettingsRoutine(callback));
    }

    private IEnumerator GetSettingsRoutine(Action<UserSettings> callback)
    {
        using var req = BuildGet("/player/settings");
        yield return req.SendWebRequest();

        if (IsSuccess(req))
        {
            var settings = JsonUtility.FromJson<UserSettings>(req.downloadHandler.text);
            callback?.Invoke(settings);
        }
        else
        {
            Debug.LogWarning($"[ApiManager] GetSettings error: {req.error}");
            callback?.Invoke(null);
        }
    }

    /// <summary>
    /// Guarda la configuración del jugador en el servidor.
    /// Callback: (bool success)
    /// </summary>
    public void SaveSettings(UserSettings settings, Action<bool> callback = null)
    {
        StartCoroutine(SaveSettingsRoutine(settings, callback));
    }

    private IEnumerator SaveSettingsRoutine(UserSettings settings, Action<bool> callback)
    {
        string body = JsonUtility.ToJson(settings);
        using var req = BuildPost("/player/settings", body);
        yield return req.SendWebRequest();

        bool ok = IsSuccess(req);
        if (!ok) Debug.LogWarning($"[ApiManager] SaveSettings error: {req.error}");
        callback?.Invoke(ok);
    }

    // =========================================================================
    // AD REWARD
    // =========================================================================

    /// <summary>
    /// Reclamar cristales por ver un video de AdMob.
    /// Callback: (bool success, int crystalsAwarded)
    /// </summary>
    public void ClaimAdReward(Action<bool, int> callback)
    {
        StartCoroutine(ClaimAdRewardRoutine(callback));
    }

    private IEnumerator ClaimAdRewardRoutine(Action<bool, int> callback)
    {
        using var req = BuildPost("/player/ad-reward", "{}");
        yield return req.SendWebRequest();

        if (IsSuccess(req))
        {
            var resp = JsonUtility.FromJson<AdRewardResponse>(req.downloadHandler.text);
            callback?.Invoke(true, resp.crystals_awarded);
        }
        else
        {
            Debug.LogWarning($"[ApiManager] ClaimAdReward error: {req.error}");
            callback?.Invoke(false, 0);
        }
    }

    // =========================================================================
    // PURCHASES
    // =========================================================================

    /// <summary>
    /// Verifica una compra de Google Play Billing con el servidor y acredita cristales.
    /// Callback: (bool success, int crystalsAdded)
    /// </summary>
    public void VerifyPurchase(string purchaseToken, string productId, Action<bool, int> callback)
    {
        StartCoroutine(VerifyPurchaseRoutine(purchaseToken, productId, callback));
    }

    private IEnumerator VerifyPurchaseRoutine(string purchaseToken, string productId, Action<bool, int> callback)
    {
        string body = $"{{\"purchase_token\":\"{purchaseToken}\",\"product_id\":\"{productId}\"}}";
        using var req = BuildPost("/player/verify-purchase", body);
        yield return req.SendWebRequest();

        if (IsSuccess(req))
        {
            var resp = JsonUtility.FromJson<PurchaseResponse>(req.downloadHandler.text);
            callback?.Invoke(true, resp.crystals_added);
        }
        else
        {
            // HTTP 409 = compra ya reclamada, no es un error crítico
            Debug.LogWarning($"[ApiManager] VerifyPurchase error: {req.responseCode} - {req.error}");
            callback?.Invoke(false, 0);
        }
    }

    // =========================================================================
    // MODELOS DE DATOS (compartidos con otros scripts via 'public')
    // =========================================================================

    [Serializable]
    private class WalletResponse { public int crystals; }

    [Serializable]
    private class AdRewardResponse { public int crystals_awarded; }

    [Serializable]
    private class PurchaseResponse { public int crystals_added; }

    [Serializable]
    private class LeaderboardArrayWrapper { public LeaderboardEntry[] entries; }
}

// =========================================================================
// MODELOS PÚBLICOS — Usados por LeaderboardManager, StoreManager, etc.
// =========================================================================

[Serializable]
public class LeaderboardEntry
{
    public int    rank;
    public string name;
    public string avatar_url;
    public int    score;
    public string achieved_at;
}

[Serializable]
public class UserSettings
{
    public bool volume_on  = true;
    public bool effects_on = true;
    public bool dark_mode  = true;
}
