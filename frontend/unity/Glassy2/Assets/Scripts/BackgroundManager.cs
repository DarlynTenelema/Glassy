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
