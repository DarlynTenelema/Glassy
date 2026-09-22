using UnityEngine;

/// <summary>
/// InputManager — Controla el input táctil y de mouse para mover/lanzar gemas.
///
/// DOS MODOS DE INTERACCIÓN (según la spec):
/// 1. ARRASTRAR: Presionar y mover lentamente → la gema sigue el dedo.
/// 2. LANZAR:    Deslizar rápido y soltar → la gema sale disparada con velocidad.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Añadir este script a un GameObject en GameScene (puede ser el mismo que GameManager).
/// 2. La cámara principal debe tener tag "MainCamera".
/// 3. Asegurarse de que las gemas tengan Collider2D para ser detectadas.
///
/// RESTRICCIONES:
/// - El jugador no puede mover gemas si el juego está pausado o terminado.
/// - Las perlas NO son arrastrables (tienen capa diferente / masa baja).
/// </summary>
public class InputManager : MonoBehaviour
{
    [Header("Configuración")]
    [Tooltip("Multiplicador de fuerza al lanzar una gema con swipe rápido.")]
    public float swipeForceMultiplier = 4f;

    [Tooltip("Velocidad máxima al arrastrar una gema con el dedo.")]
    public float maxDragSpeed = 6f;

    [Tooltip("Distancia mínima del swipe (en unidades de mundo) para considerarlo lanzamiento.")]
    public float minSwipeDistance = 0.4f;

    private Camera _mainCam;
    private Gem    _selectedGem;
    private Rigidbody2D _selectedRb;
    private Vector2 _swipeStartWorldPos;
    private bool    _isDragging = false;

    private void Start()
    {
        _mainCam = Camera.main;
    }

    private void Update()
    {
        // No procesar input si el juego está pausado o terminado
        if (GameManager.Instance != null &&
            (GameManager.Instance.IsPaused || GameManager.Instance.IsGameOver)) return;

        // Unificar input de touch (móvil) y mouse (editor)
        if (IsTouchOrMouseDown())   HandlePress();
        else if (IsTouchOrMouse())  HandleDrag();
        else if (IsTouchOrMouseUp()) HandleRelease();
    }

    // =========================================================================
    // PRESS — Seleccionar gema
    // =========================================================================

    private void HandlePress()
    {
        Vector2 worldPos = GetInputWorldPosition();
        Collider2D hit   = Physics2D.OverlapPoint(worldPos);

        if (hit == null) return;

        Gem gem = hit.GetComponent<Gem>();

        // Las perlas no son arrastrables
        if (gem == null || gem.gemType == GemType.Pearl) return;

        _selectedGem       = gem;
        _selectedRb        = gem.GetComponent<Rigidbody2D>();
        _swipeStartWorldPos = worldPos;
        _isDragging        = true;

        _selectedGem.SetPlayerInteraction(true);
    }

    // =========================================================================
    // DRAG — Mover gema con el dedo
    // =========================================================================

    private void HandleDrag()
    {
        if (!_isDragging || _selectedGem == null || _selectedRb == null) return;

        Vector2 worldPos  = GetInputWorldPosition();
        Vector2 direction = worldPos - _selectedRb.position;

        // Mover hacia la posición del dedo, limitando la velocidad máxima
        _selectedRb.linearVelocity = Vector2.ClampMagnitude(direction * 15f, maxDragSpeed);
    }

    // =========================================================================
    // RELEASE — Soltar o lanzar gema
    // =========================================================================

    private void HandleRelease()
    {
        if (!_isDragging || _selectedGem == null || _selectedRb == null)
        {
            _isDragging = false;
            return;
        }

        Vector2 releaseWorldPos = GetInputWorldPosition();
        Vector2 swipeVector     = releaseWorldPos - _swipeStartWorldPos;

        // Si el swipe fue lo suficientemente largo → lanzar con fuerza
        if (swipeVector.magnitude > minSwipeDistance)
        {
            // Lanzar en la dirección del swipe
            _selectedRb.linearVelocity = Vector2.zero; // Reset velocidad previa
            _selectedRb.AddForce(swipeVector.normalized * swipeForceMultiplier * swipeVector.magnitude,
                                 ForceMode2D.Impulse);
        }
        else
        {
            // Swipe corto → soltar suavemente (caída normal por gravedad)
            _selectedRb.linearVelocity = Vector2.zero;
        }

        _selectedGem.SetPlayerInteraction(false);
        _selectedGem = null;
        _selectedRb  = null;
        _isDragging  = false;
    }

    // =========================================================================
    // HELPERS — Abstraer touch vs. mouse para que funcione en editor y en móvil
    // =========================================================================

    private bool IsTouchOrMouseDown()
    {
#if UNITY_EDITOR || UNITY_STANDALONE
        return Input.GetMouseButtonDown(0);
#else
        return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
#endif
    }

    private bool IsTouchOrMouse()
    {
#if UNITY_EDITOR || UNITY_STANDALONE
        return Input.GetMouseButton(0);
#else
        return Input.touchCount > 0 && (Input.GetTouch(0).phase == TouchPhase.Moved ||
                                         Input.GetTouch(0).phase == TouchPhase.Stationary);
#endif
    }

    private bool IsTouchOrMouseUp()
    {
#if UNITY_EDITOR || UNITY_STANDALONE
        return Input.GetMouseButtonUp(0);
#else
        return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended;
#endif
    }

    private Vector2 GetInputWorldPosition()
    {
#if UNITY_EDITOR || UNITY_STANDALONE
        return _mainCam.ScreenToWorldPoint(Input.mousePosition);
#else
        if (Input.touchCount > 0)
            return _mainCam.ScreenToWorldPoint(Input.GetTouch(0).position);
        return Vector2.zero;
#endif
    }
}
