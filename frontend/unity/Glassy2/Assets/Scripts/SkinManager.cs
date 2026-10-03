using UnityEngine;
using FlutterUnityBridge;
using FlutterUnityBridge.Models;

public class SkinManager : MonoBehaviour
{
    public static SkinManager Instance { get; private set; }

    public string CurrentSkinId { get; private set; } = "gemas_clasicas";

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    private void Start()
    {
        // Cargar skin guardada en preferencias (el default es gemas_clasicas)
        CurrentSkinId = PlayerPrefs.GetString("SelectedSkinId", "gemas_clasicas");
    }

    private void OnEnable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnSkinRequested += HandleSkinChange;
        }
    }

    private void OnDisable()
    {
        if (FlutterBridgeManager.Instance != null)
        {
            FlutterBridgeManager.Instance.OnSkinRequested -= HandleSkinChange;
        }
    }

    private void HandleSkinChange(SetSkinPayload payload)
    {
        if (string.IsNullOrEmpty(payload.skin_id)) return;
        
        CurrentSkinId = payload.skin_id;
        PlayerPrefs.SetString("SelectedSkinId", CurrentSkinId);
        PlayerPrefs.Save();
        
        Debug.Log($"[SkinManager] Skin actualizada a: {CurrentSkinId}");
        
        // Actualizar sprites en tiempo real de las gemas ya existentes en el tablero
        Gem[] allGems = FindObjectsByType<Gem>(FindObjectsInactive.Exclude);
        foreach (Gem gem in allGems)
        {
            gem.ApplySkin();
        }
        
        // Actualizar fondo si existe
        BackgroundManager bgManager = FindFirstObjectByType<BackgroundManager>();
        if (bgManager != null)
        {
            bgManager.UpdateBackground();
        }
    }
    
    // Método que Gem.cs llama para obtener su sprite correcto según la skin actual
    public Sprite GetSpriteForGem(GemType gemType)
    {
        if (CurrentSkinId == "gemas_clasicas")
        {
            return null; // Usar el sprite por defecto del prefab
        }

        // Ruta de ejemplo: Resources/Skins/vida_marina/Emerald
        string path = $"Skins/{CurrentSkinId}/{gemType}";
        Sprite newSprite = Resources.Load<Sprite>(path);
        
        if (newSprite == null)
        {
            Debug.LogWarning($"[SkinManager] Sprite no encontrado en ruta: {path}");
        }
        
        return newSprite;
    }
}
