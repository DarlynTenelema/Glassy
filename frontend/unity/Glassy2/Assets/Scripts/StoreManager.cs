using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// StoreManager — Gestiona la tienda de cristales y los anuncios de recompensa.
///
/// PARA EL MVP: La compra in-app se maneja via Unity IAP.
/// SETUP DE UNITY IAP:
/// 1. Window → Package Manager → Unity Registry → buscar "In App Purchasing" → Install.
/// 2. Edit → Project Settings → Services → In-App Purchasing → Enable.
/// 3. En Build Settings → Player → Android → Bundle Identifier: com.darlyntenelema.glassy
/// 4. Los Product IDs deben coincidir exactamente con los definidos en GameConfig y en Play Console.
///
/// PARA ADMOB (recompensa por video):
/// 1. Importar el paquete "Google Mobile Ads Unity Plugin" desde:
///    https://github.com/googlesamples/googleads-mobile-unity/releases
/// 2. Reemplazar el método SimulateAdReward() con la llamada real al SDK de AdMob.
///
/// SETUP EN UNITY EDITOR:
/// 1. Crear una escena "StoreScene".
/// 2. Añadir este script a un GameObject "StoreManager".
/// 3. Conectar los campos del Inspector.
/// </summary>
public class StoreManager : MonoBehaviour
{
    [Header("UI — Crystal Balance")]
    [SerializeField] private TMP_Text crystalBalanceText;

    [Header("UI — Botón Ad Reward")]
    [SerializeField] private TMP_Text adButtonText;
    [SerializeField] private UnityEngine.UI.Button adButton;

    [Header("UI — Feedback")]
    [SerializeField] private TMP_Text feedbackText;

    // Estado del ad reward
    private bool _adIsLoading = false;

    private void Start()
    {
        RefreshCrystalDisplay();
        SetFeedback("");

        // Actualizar balance desde servidor
        ApiManager.Instance?.GetWallet(crystals =>
        {
            if (crystals >= 0)
            {
                PlayerPrefs.SetInt(GameConfig.KeyCrystals, crystals);
                PlayerPrefs.Save();
                RefreshCrystalDisplay();
            }
        });
    }

    private void RefreshCrystalDisplay()
    {
        int crystals = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 0);
        if (crystalBalanceText != null)
            crystalBalanceText.text = $"💎 {crystals:N0} Cristales";
    }

    private void SetFeedback(string msg, bool isError = false)
    {
        if (feedbackText == null) return;
        feedbackText.text  = msg;
        feedbackText.color = isError ? UnityEngine.Color.red : UnityEngine.Color.green;
    }

    // =========================================================================
    // COMPRAS IN-APP (Unity IAP)
    // =========================================================================

    /// <summary>
    /// Llamado por los 4 botones de paquete. Pasar el productId correspondiente.
    /// OnClick() del botón "Paquete Amateur" → OnBuyPackageClicked("glass_pack_100")
    /// OnClick() del botón "Paquete Pro"     → OnBuyPackageClicked("glass_pack_600")
    /// OnClick() del botón "Paquete Maestro" → OnBuyPackageClicked("glass_pack_1500")
    /// OnClick() del botón "Paquete Legendario" → OnBuyPackageClicked("glass_pack_5000")
    /// </summary>
    public void OnBuyPackageClicked(string productId)
    {
        SetFeedback("Procesando compra...");

        // TODO: Cuando Unity IAP esté configurado, reemplazar este bloque con:
        // IAPManager.Instance.BuyProduct(productId, OnPurchaseSuccess, OnPurchaseFailed);
        //
        // IAPManager recibirá el purchase_token de Google Play y llamará a:
        // ApiManager.Instance.VerifyPurchase(purchaseToken, productId, OnVerifyResult);

        // PLACEHOLDER para desarrollo sin IAP configurado:
        Debug.Log($"[StoreManager] Compra solicitada: {productId}");
        SetFeedback("⚠️ Configura Unity IAP para activar compras reales.", true);
    }

    /// <summary>
    /// Callback del resultado de verificación de compra en el servidor.
    /// Llamar desde IAPManager tras verificar con el backend.
    /// </summary>
    public void OnVerifyPurchaseResult(bool success, int crystalsAdded)
    {
        if (success)
        {
            int current = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 0);
            current += crystalsAdded;
            PlayerPrefs.SetInt(GameConfig.KeyCrystals, current);
            PlayerPrefs.Save();
            RefreshCrystalDisplay();
            SetFeedback($"✅ ¡{crystalsAdded} cristales añadidos!");
        }
        else
        {
            SetFeedback("❌ Error al verificar la compra.", true);
        }
    }

    // =========================================================================
    // AD REWARD (ver video → +5 cristales)
    // =========================================================================

    /// <summary>
    /// Llamado por el botón "Ver video → +5 💎".
    /// En producción, este método debe mostrar el anuncio rewarded de AdMob
    /// y solo llamar a ClaimRewardFromServer() cuando el video se complete.
    /// </summary>
    public void OnWatchAdClicked()
    {
        if (_adIsLoading) return;

        // TODO: Reemplazar con AdMob SDK cuando esté configurado:
        // RewardedAd.Show(OnAdRewarded);
        //
        // PLACEHOLDER: Simular que el video fue visto (5 segundos de espera)
        _adIsLoading = true;
        if (adButton != null) adButton.interactable = false;
        if (adButtonText != null) adButtonText.text = "Cargando anuncio...";

        SetFeedback("🎬 Simulando video (modo dev)...");

        // En producción: esperar callback de AdMob, no un timer
        Invoke(nameof(SimulateAdComplete), 2f);
    }

    // SOLO PARA DESARROLLO — Quitar cuando AdMob esté integrado
    private void SimulateAdComplete()
    {
        ClaimRewardFromServer();
    }

    private void ClaimRewardFromServer()
    {
        ApiManager.Instance?.ClaimAdReward((success, crystalsAwarded) =>
        {
            _adIsLoading = false;
            if (adButton != null) adButton.interactable = true;
            if (adButtonText != null) adButtonText.text = $"Ver video → +{GameConfig.AdRewardCrystals} 💎";

            if (success)
            {
                int current = PlayerPrefs.GetInt(GameConfig.KeyCrystals, 0);
                current += crystalsAwarded;
                PlayerPrefs.SetInt(GameConfig.KeyCrystals, current);
                PlayerPrefs.Save();
                RefreshCrystalDisplay();
                SetFeedback($"✅ ¡+{crystalsAwarded} cristales por ver el video!");
            }
            else
            {
                SetFeedback("❌ Error al reclamar la recompensa.", true);
            }
        });
    }

    // =========================================================================
    // NAVEGACIÓN
    // =========================================================================

    public void OnBackClicked()
    {
        SceneManager.LoadScene(GameConfig.SceneMainMenu);
    }
}
