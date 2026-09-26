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
        
        // Cargar la textura desde Resources
        Texture2D tex = Resources.Load<Texture2D>("fondo");
        if (tex != null)
        {
            // Crear el sprite
            Sprite bgSprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f), 100f);
            sr.sprite = bgSprite;
            
            // Ponerlo al fondo (detrás de todo)
            sr.sortingOrder = -1000;
            bgObj.transform.position = new Vector3(0, 0, 50);
            
            cam = Camera.main;
            AdjustScale();
        }
        else
        {
            Debug.LogError("[BackgroundManager] No se pudo cargar 'fondo.jpg' desde Resources.");
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
