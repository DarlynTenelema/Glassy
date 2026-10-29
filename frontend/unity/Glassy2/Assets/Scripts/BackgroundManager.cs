using System.IO;
using UnityEngine;

public class BackgroundManager : MonoBehaviour
{
    private SpriteRenderer sr;
    private Camera cam;

    void Start()
    {
        // Crear un nuevo GameObject para el fondo
        GameObject bgObj = new GameObject("DynamicBackground");
        sr = bgObj.AddComponent<SpriteRenderer>();
        
        // Ponerlo al fondo (detrás de todo)
        sr.sortingOrder = -1000;
        bgObj.transform.position = new Vector3(0, 0, 50);
        
        cam = Camera.main;
        
        UpdateBackground();
    }

    public void UpdateBackground()
    {
        if (sr == null) return;
        
        string skinId = SkinManager.Instance != null ? SkinManager.Instance.CurrentSkinId : "gemas_clasicas";
        string texPath = (skinId == "gemas_clasicas") ? "fondo" : $"Skins/{skinId}/wallpaper";
        
        // Cargar el Sprite directamente desde Resources
        Sprite bgSprite = Resources.Load<Sprite>(texPath);
        
        // Si no está en Resources (ej. skin personalizada adquirida en vivo), buscar en almacenamiento persistente
        if (bgSprite == null && skinId != "gemas_clasicas")
        {
            bgSprite = LoadCustomBackgroundFromDisk(skinId);
        }

        if (bgSprite != null)
        {
            sr.sprite = bgSprite;
            AdjustScale();
        }
        else
        {
            Debug.LogWarning($"[BackgroundManager] No se pudo cargar el wallpaper en: {texPath}");
        }
    }

    private Sprite LoadCustomBackgroundFromDisk(string skinId)
    {
        try
        {
            string folder = Path.Combine(Application.persistentDataPath, "Skins", skinId);
            string[] possibleNames = { "wallpaper.jpg", "wallpaper.png", "fondo.jpg", "fondo.png" };
            foreach (string name in possibleNames)
            {
                string path = Path.Combine(folder, name);
                if (File.Exists(path))
                {
                    byte[] fileData = File.ReadAllBytes(path);
                    Texture2D tex = new Texture2D(2, 2, TextureFormat.RGB24, false);
                    if (tex.LoadImage(fileData))
                    {
                        return Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f), 100f);
                    }
                }
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogWarning($"[BackgroundManager] Error al cargar fondo dinámico desde disco: {ex.Message}");
        }
        return null;
    }

    void Update()
    {
        // Mantiene el fondo ajustado si la cámara cambia de tamaño o aspecto
        if (sr != null && sr.sprite != null && cam != null)
        {
            AdjustScale();
        }
    }

    private void AdjustScale()
    {
        float cameraHeight = cam.orthographicSize * 2f;
        float cameraWidth = cameraHeight * cam.aspect;
        
        float spriteHeight = sr.sprite.bounds.size.y;
        float spriteWidth = sr.sprite.bounds.size.x;
        
        // Calcular la escala para que cubra toda la pantalla sin distorsionar (Scale to Fill)
        float scaleX = cameraWidth / spriteWidth;
        float scaleY = cameraHeight / spriteHeight;
        float scale = Mathf.Max(scaleX, scaleY);
        
        sr.transform.localScale = new Vector3(scale, scale, 1f);
    }
}
