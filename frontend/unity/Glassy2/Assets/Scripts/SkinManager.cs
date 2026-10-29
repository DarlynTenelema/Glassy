using System;
using System.IO;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityBridge;
using FlutterUnityBridge.Models;

public class SkinManager : MonoBehaviour
{
    public static SkinManager Instance { get; private set; }

    [Header("Debug en Unity Editor")]
    [Tooltip("Escribe aquí el ID de la skin para probarla directamente en Unity Editor sin Flutter (ej. Dinosaurios, vida_marina)")]
    [SerializeField] private string editorDebugSkinId = "";

    public string CurrentSkinId { get; private set; } = "gemas_clasicas";

    private readonly Dictionary<GemType, Sprite> _skinSpriteCache = new Dictionary<GemType, Sprite>();

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;

        // Cargar skin guardada en preferencias (el default es gemas_clasicas)
        CurrentSkinId = PlayerPrefs.GetString("SelectedSkinId", "gemas_clasicas");

#if UNITY_EDITOR
        if (!string.IsNullOrEmpty(editorDebugSkinId))
        {
            CurrentSkinId = editorDebugSkinId;
        }
#endif
        _skinSpriteCache.Clear();
    }

    private void Start()
    {
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
        _skinSpriteCache.Clear();
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
        BackgroundManager bgManager = FindAnyObjectByType<BackgroundManager>();
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

        if (_skinSpriteCache.TryGetValue(gemType, out Sprite cachedSprite))
        {
            return cachedSprite;
        }

        // 1. Cargar desde Resources (skins predeterminadas del juego)
        string path = $"Skins/{CurrentSkinId}/{gemType}";
        Sprite newSprite = Resources.Load<Sprite>(path);
        
        // 2. Si no está en Resources (skin personalizada entregada al usuario), cargar de almacenamiento persistente
        if (newSprite == null)
        {
            newSprite = LoadCustomSpriteFromDisk(CurrentSkinId, gemType);
        }

        if (newSprite == null)
        {
            Debug.LogWarning($"[SkinManager] Sprite no encontrado en ruta Resources ({path}) ni en almacenamiento persistente.");
        }
        else
        {
            _skinSpriteCache[gemType] = newSprite;
        }
        
        return newSprite;
    }

    private Sprite LoadCustomSpriteFromDisk(string skinId, GemType gemType)
    {
        try
        {
            string folder = Path.Combine(Application.persistentDataPath, "Skins", skinId);
            
            // Probar nombre estándar en Unity (ej. Emerald.png, Pearl.png)
            string filePath = Path.Combine(folder, $"{gemType}.png");

            // Probar nombre generado por Gemini (ej. elemento_1.png)
            if (!File.Exists(filePath))
            {
                int index = ((int)gemType) + 1; // 1-indexed
                filePath = Path.Combine(folder, $"elemento_{index}.png");
            }

            if (File.Exists(filePath))
            {
                byte[] fileData = File.ReadAllBytes(filePath);
                Texture2D tex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
                if (tex.LoadImage(fileData))
                {
                    tex.filterMode = FilterMode.Bilinear;
                    return Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f), 100f);
                }
            }
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"[SkinManager] Error al cargar sprite dinámico desde disco: {ex.Message}");
        }

        return null;
    }
}
