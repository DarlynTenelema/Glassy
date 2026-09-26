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
    public float targetWidth = 6.5f; 

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
        float requiredOrthographicSize = targetWidth / (2f * currentAspect);

        _cam.orthographicSize = requiredOrthographicSize;
    }
}
