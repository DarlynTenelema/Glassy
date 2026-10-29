using UnityEngine;

/// <summary>
/// CameraAspectFitter — Ajusta automáticamente el tamaño ortográfico de la cámara 
/// para asegurar que un ancho específico del mundo (Target Width) siempre sea visible,
/// independientemente de la relación de aspecto del dispositivo.
/// 
/// Esto soluciona el problema de que el frasco se corte en los bordes en teléfonos más estrechos.
/// 
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Añade este script a la "Main Camera" en tu escena.
/// 2. Ajusta el "Target Width" en el inspector. Un buen valor para probar inicialmente
///    es el tamaño de tu frasco de pared a pared (por ejemplo 5 o 6 unidades).
/// </summary>
[RequireComponent(typeof(Camera))]
public class CameraAspectFitter : MonoBehaviour
{
    [Tooltip("El ancho del mundo que siempre debe ser visible (en unidades de Unity).")]
    public float targetWidth = 5.2f; 

    [Tooltip("La altura vertical mínima ortográfica para que el frasco quepa completo en pantallas horizontales (PC 16:9). Menor valor = Frasco más grande (Zoom In).")]
    public float targetHalfHeight = 4.8f;

    private Camera _cam;

    private void Start()
    {
        _cam = GetComponent<Camera>();
        AdjustCameraSize();
    }

    private void Update()
    {
        // Útil si la pantalla rota o cambia de tamaño durante el juego
        #if UNITY_EDITOR
        AdjustCameraSize();
        #endif
    }

    private void AdjustCameraSize()
    {
        if (_cam == null || !_cam.orthographic) return;

        float currentAspect = (float)Screen.width / (float)Screen.height;
        float requiredByWidth = targetWidth / (2f * currentAspect);

        // En pantallas horizontales de PC (16:9), aseguramos que el frasco vertical no se corte
        _cam.orthographicSize = Mathf.Max(requiredByWidth, targetHalfHeight);
    }
}
