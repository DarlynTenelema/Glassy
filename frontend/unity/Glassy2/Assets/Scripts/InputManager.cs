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
    public float swipeForceMultiplier = 1.0f;

    [Tooltip("Velocidad máxima al arrastrar una gema con el dedo.")]
    public float maxDragSpeed = 30f;

    [Tooltip("Distancia mínima del swipe (en unidades de mundo) para considerarlo lanzamiento.")]
    public float minSwipeDistance = 0.4f;

    private Camera _mainCam;
    private Gem    _selectedGem;
    private Rigidbody2D _selectedRb;
    
    // Puntero físico reutilizable
    private GameObject _pointerObj;
    private Rigidbody2D _pointerRb;
    private SpringJoint2D _dragJoint;
    
    private Vector2 _lastTouchWorldPos;
    private Vector2 _trackedVelocity;
    private bool    _isDragging = false;

    private void Start()
    {
        _mainCam = Camera.main;
        SetupPhysicsPointer();
    }

    private void SetupPhysicsPointer()
    {
        // Creamos un objeto oculto que seguirá nuestro dedo
        _pointerObj = new GameObject("PhysicsPointer");
        _pointerObj.transform.SetParent(this.transform);

        // Kinematic para que lo movamos libremente sin gravedad
        _pointerRb = _pointerObj.AddComponent<Rigidbody2D>();
        _pointerRb.bodyType = RigidbodyType2D.Kinematic;

        // Usamos un SpringJoint2D para conectar este puntero a las gemas
        _dragJoint = _pointerObj.AddComponent<SpringJoint2D>();
        _dragJoint.autoConfigureDistance = false;
        _dragJoint.distance = 0f; // Queremos que la gema vaya exactamente al dedo
        _dragJoint.dampingRatio = 1f; // Sin rebote
        _dragJoint.frequency = 15f; // Respuesta muy rápida
        _dragJoint.enabled = false; // Apagado hasta que toquemos una gema
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
        _isDragging        = true;

        _selectedGem.SetPlayerInteraction(true);

        // En lugar de crear componentes, reutilizamos nuestro puntero
        _pointerRb.position = worldPos;
        _dragJoint.connectedBody = _selectedRb;
        _dragJoint.enabled = true;

        _lastTouchWorldPos = worldPos;
        _trackedVelocity = Vector2.zero;
        
        // Detener giro loco al agarrarla
        _selectedRb.angularVelocity = 0f;
    }

    // =========================================================================
    // DRAG — Mover gema con el dedo
    // =========================================================================

    private void HandleDrag()
    {
        if (!_isDragging || _selectedGem == null) return;

        Vector2 worldPos  = GetInputWorldPosition();
        
        // Movemos físicamente nuestro puntero fantasma al dedo
        // El joint arrastrará a la gema automáticamente
        _pointerRb.MovePosition(worldPos);

        // Calcular velocidad suavizada (inercia reciente del dedo) para el lanzamiento
        if (Time.deltaTime > 0)
        {
            Vector2 instantVelocity = (worldPos - _lastTouchWorldPos) / Time.deltaTime;
            _trackedVelocity = Vector2.Lerp(_trackedVelocity, instantVelocity, 20f * Time.deltaTime);
        }
        
        // Mantener la gema quieta (sin girar como loca) mientras se la arrastra
        if (_selectedRb != null)
        {
            _selectedRb.angularVelocity = 0f;
        }

        _lastTouchWorldPos = worldPos;
    }

    // =========================================================================
    // RELEASE — Soltar o lanzar gema
    // =========================================================================

    private void HandleRelease()
    {
        if (!_isDragging || _selectedGem == null || _selectedRb == null)
        {
            DisconnectPointer();
            return;
        }

        // Soltar físicamente la gema
        DisconnectPointer();

        // Si la inercia reciente del dedo es alta, es un "Lanzamiento"
        if (_trackedVelocity.magnitude > 3f)
        {
            _selectedRb.linearVelocity = Vector2.zero; // Reset velocidad previa
            
            // Usamos la inercia real del dedo, escalada con una matemática más moderada
            float forceMagnitude = _trackedVelocity.magnitude * swipeForceMultiplier * 0.015f; // Reducido de 0.05 a 0.015
            // Aplicar un límite a la fuerza máxima para evitar que salgan volando como balas
            forceMagnitude = Mathf.Clamp(forceMagnitude, 0f, 15f);
            
            _selectedRb.AddForce(_trackedVelocity.normalized * forceMagnitude, ForceMode2D.Impulse);
        }
        else
        {
            // Movimiento corto/lento → soltar suavemente conservando un poco de la inercia natural
            _selectedRb.linearVelocity = _trackedVelocity * 0.1f; // Reducido de 0.2 a 0.1
        }

        _selectedGem.SetPlayerInteraction(false);
        _selectedGem = null;
        _selectedRb  = null;
        _isDragging  = false;
    }
    
    private void DisconnectPointer()
    {
        _dragJoint.enabled = false;
        _dragJoint.connectedBody = null;
        _isDragging = false;
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
