using UnityEngine;

/// <summary>
/// ScreenBoundsManager — Crea dinámicamente paredes invisibles alrededor de los límites de la pantalla.
/// 
/// Esto evitará que las gemas salgan disparadas fuera de la pantalla.
/// Ajusta un EdgeCollider2D en los bordes de la cámara, creando una caja protectora.
/// 
/// SETUP:
/// 1. Crea un GameObject vacío en tu escena y llámalo "ScreenBounds".
/// 2. Asígnale este script.
/// 3. Opcionalmente asigna un material de físicas (ej. el material de rebote con bounciness más bajo si lo deseas, o déjalo vacío para rebote nulo).
/// </summary>
[RequireComponent(typeof(EdgeCollider2D))]
public class ScreenBoundsManager : MonoBehaviour
{
    [Tooltip("Grosor o margen extra que le quieres dar a los límites.")]
    public float margin = 0.5f;
    
    private Camera _mainCamera;
    private EdgeCollider2D _edgeCollider;

    private void Start()
    {
        _mainCamera = Camera.main;
        _edgeCollider = GetComponent<EdgeCollider2D>();
        
        CreateScreenBounds();
    }

    private void CreateScreenBounds()
    {
        if (_mainCamera == null || _edgeCollider == null) return;

        // Obtener las esquinas de la cámara en coordenadas del mundo
        Vector2 bottomLeft = _mainCamera.ViewportToWorldPoint(new Vector3(0, 0, _mainCamera.nearClipPlane));
        Vector2 topRight = _mainCamera.ViewportToWorldPoint(new Vector3(1, 1, _mainCamera.nearClipPlane));
        Vector2 topLeft = new Vector2(bottomLeft.x, topRight.y);
        Vector2 bottomRight = new Vector2(topRight.x, bottomLeft.y);

        // Añadir margen
        bottomLeft += new Vector2(-margin, -margin);
        topRight += new Vector2(margin, margin);
        topLeft += new Vector2(-margin, margin);
        bottomRight += new Vector2(margin, -margin);

        // Crear los puntos del EdgeCollider para formar un rectángulo cerrado
        Vector2[] edgePoints = new Vector2[5];
        edgePoints[0] = bottomLeft;
        edgePoints[1] = topLeft;
        edgePoints[2] = topRight;
        edgePoints[3] = bottomRight;
        edgePoints[4] = bottomLeft; // Cerrar el cuadrado volviendo al inicio

        _edgeCollider.points = edgePoints;
    }
}
