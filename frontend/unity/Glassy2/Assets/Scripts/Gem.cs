using UnityEngine;
using UnityEngine.Rendering.Universal;

/// <summary>
/// GemType — Enum de tipos de gemas. El índice coincide con:
///   - gemPrefabs[] en GameManager
///   - GemScoreValues[] en GameConfig
///   - GemCrystalCosts[] en GameConfig
///   - gemMergeClips[] en AudioManager
/// </summary>
public enum GemType
{
    Pearl    = 0,  //  0 pts — Perla (no tiene masa ni colisiones con otras gemas)
    Emerald  = 1,  //  1 pt  — Esmeralda
    Amethyst = 2,  //  2 pts — Amatista
    Topaz    = 3,  //  4 pts — Topacio
    GreenRuby = 4, //  8 pts — Rubí verde (Peridoto)
    Sapphire = 5,  // 16 pts — Zafiro
    RedRuby  = 6,  // 32 pts — Rubí rojo
    Diamond  = 7,  // 64 pts — Diamante (explota al aparecer, no persiste en el tablero)
    Quartz   = 8,  // 20 pts — Cuarzo (desaparece al fusionarse con otro cuarzo)
    Stone    = 9   // 30 pts — Piedra (no se fusiona; se destruye al fusionar gemas cerca)
}

/// <summary>
/// Gem — Comportamiento de cada gema en el tablero.
///
/// SETUP REQUERIDO EN UNITY EDITOR (por cada prefab de gema):
/// 1. Crear un sprite circular en Assets/Sprites/Gems/.
/// 2. Añadir CircleCollider2D.
/// 3. Añadir Rigidbody2D (Gravity Scale = 1, Collision Detection = Continuous).
/// 4. Añadir este script Gem.cs.
/// 5. Asignar el GemType correcto en el Inspector.
///
/// PHYSICS LAYERS (configurar en Edit → Project Settings → Physics 2D):
/// - Crear layer "Pearls": colisiona con Floor, Walls y Pearls. NO con Gems.
/// - Crear layer "Gems":   colisiona con Floor, Walls y Gems. NO con Pearls.
/// - Los prefabs Pearl deben estar en layer "Pearls", el resto en "Gems".
/// </summary>
public class Gem : MonoBehaviour
{
    [Header("Tipo de Gema")]
    public GemType gemType;

    // Valor en puntos (leído de GameConfig según el tipo)
    public int ScoreValue => GameConfig.GemScoreValues[(int)gemType];

    // Costo en lapislázulis para eliminar esta gema (usado en StoreManager)
    public int CrystalCost => GameConfig.GemCrystalCosts[(int)gemType];

    // La masa se calcula automáticamente desde GameConfig.GemBaseMasses según el tipo.
    // NO la expongas en el Inspector para evitar sobreescrituras accidentales.

    // Estado interno
    private Rigidbody2D _rb;
    private bool  _hasMerged     = false;
    public bool IsMergeLocked { get; set; } = false;
    private float _baseMass      = 1.1f; // Cargado en Awake() desde GameConfig
    private SpriteRenderer _spriteRenderer;
    
    // Intervención Humana
    private bool _isBeingInteracted = false;
    private float _interactionEndTime = -99f;
    
    // Luz de impacto dinámica
    private Light2D _impactLight;
    private float _glowIntensity = 0f;
    private Color _gemColor = Color.white;

    private Vector2 _defaultSpriteSize;
    private Vector3 _originalLocalScale;
    private Sprite _defaultSprite;
    private float _defaultColliderRadius = 1.75f;
    private Vector2 _defaultColliderOffset = Vector2.zero;

    private void Awake()
    {
        _rb             = GetComponent<Rigidbody2D>();
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _originalLocalScale = transform.localScale;

        CircleCollider2D col = GetComponent<CircleCollider2D>();
        if (col != null)
        {
            _defaultColliderRadius = col.radius;
            _defaultColliderOffset = col.offset;
        }

        if (_spriteRenderer != null && _spriteRenderer.sprite != null)
        {
            _defaultSprite = _spriteRenderer.sprite;
            _defaultSpriteSize = _spriteRenderer.sprite.bounds.size;
        }

        // Leer masa base según el tipo de gema (definida en GameConfig)
        int typeIdx = (int)gemType;
        if (typeIdx >= 0 && typeIdx < GameConfig.GemBaseMasses.Length)
            _baseMass = GameConfig.GemBaseMasses[typeIdx];
            
        SetupImpactLight();
    }

    private void Start()
    {
        GameManager.Instance?.activeGems.Add(this);
        ConfigurePhysicsForType();

        // Aplicar la skin actual
        ApplySkin();

        // El Diamante explota inmediatamente al ser instanciado
        if (gemType == GemType.Diamond)
        {
            TriggerDiamondExplosion();
        }
    }

    public Sprite DefaultSprite => _defaultSprite;

    public void ApplySkin()
    {
        if (_spriteRenderer == null) return;

        Sprite skinSprite = null;

        // Soporte exclusivo y desacoplado para la pantalla relajada de TikTok (Beta.md)
        if (TikTokRelaxDonorManager.Instance != null)
        {
            skinSprite = TikTokRelaxDonorManager.Instance.GetDonorSpriteForGem(this);
        }

        if (skinSprite == null && SkinManager.Instance != null)
        {
            skinSprite = SkinManager.Instance.GetSpriteForGem(gemType);
        }

        if (skinSprite != null)
        {
            _spriteRenderer.sprite = skinSprite;
        }
        else if (_defaultSprite != null)
        {
            _spriteRenderer.sprite = _defaultSprite;
        }

        // REGLA FUNDAMENTAL (Beta.md):
        // La física, escala y colisionadores de las perlas y gemas NUNCA se alteran por una foto o skin.
        // Se preserva exactamente la escala original del prefab para que caiga y se comporte 100% normal.
        transform.localScale = _originalLocalScale;

        ExtractColorForLight();
    }
    
    private void SetupImpactLight()
    {
        GameObject lightObj = new GameObject("ImpactLight");
        lightObj.transform.SetParent(this.transform);
        lightObj.transform.localPosition = Vector3.zero;

        _impactLight = lightObj.AddComponent<Light2D>();
        _impactLight.lightType = Light2D.LightType.Point;
        _impactLight.intensity = 0f;
        _impactLight.pointLightOuterRadius = 1.2f;
    }

    private void ExtractColorForLight()
    {
        if (_spriteRenderer != null && _spriteRenderer.sprite != null && _impactLight != null)
        {
            Texture2D tex = _spriteRenderer.sprite.texture;
            if (tex.isReadable)
            {
                // Tomar un pixel representativo (el centro)
                _gemColor = tex.GetPixel(tex.width / 2, tex.height / 2);
                if (_gemColor.a < 0.1f) _gemColor = tex.GetPixel(tex.width / 2, tex.height / 4); // Si es transparente, bajar un poco
                
                // Asegurar que la luz sea brillante
                _gemColor.a = 1f;
                _impactLight.color = _gemColor;
            }
            else
            {
                // Si no tiene Read/Write enabled, usar un color predeterminado por GemType
                _impactLight.color = GetFallbackColor();
            }
        }
    }
    
    private Color GetFallbackColor()
    {
        switch (gemType)
        {
            case GemType.Emerald: return Color.green;
            case GemType.Amethyst: return new Color(0.6f, 0.2f, 0.8f);
            case GemType.Topaz: return Color.yellow;
            case GemType.GreenRuby: return new Color(0.5f, 1f, 0.2f);
            case GemType.Sapphire: return Color.blue;
            case GemType.RedRuby: return Color.red;
            case GemType.Diamond: return Color.cyan;
            case GemType.Quartz: return new Color(0.9f, 0.95f, 1f);
            case GemType.Stone: return new Color(0.45f, 0.45f, 0.5f);
            default: return Color.white;
        }
    }

    // =========================================================================
    // FÍSICA
    // =========================================================================

    private void ConfigurePhysicsForType()
    {
        if (_rb == null) return;

        // Aplicar masa base diferenciada según el tipo (doc v1: pesos 1.1 – 1.6)
        _rb.mass = _baseMass;

        if (gemType == GemType.Diamond)
        {
            // El diamante explota de inmediato; gravedad no importa.
            _rb.gravityScale = 0f;
        }
        else if (gemType == GemType.Pearl)
        {
            // Restaurado a petición del usuario: Cascada ordenada y estricta
            _rb.bodyType = RigidbodyType2D.Kinematic;
            _rb.useFullKinematicContacts = true;
            _rb.gravityScale = 0f;
        }
        else
        {
            // Gravedad cero global; la flotabilidad es manejada por FloatingPhysics.cs
            _rb.gravityScale = 0f;
        }
    }

    /// <summary>
    /// Llamado por InputManager cuando el jugador toma/suelta la gema.
    /// Al tomar: suma PlayerMassBonus (+0.3) a la masa base.
    /// Esto permite que gemas lanzadas por el jugador puedan desplazar
    /// gemas hasta 2 niveles más pesadas (lógica descrita en doc v1).
    /// </summary>
    public void SetPlayerInteraction(bool interacting)
    {
        if (_rb == null) return;
        _rb.mass = interacting
            ? _baseMass + GameConfig.PlayerMassBonus
            : _baseMass;

        _isBeingInteracted = interacting;
        if (!interacting)
        {
            _interactionEndTime = Time.time;
        }
    }

    public bool HasRecentInteraction()
    {
        // Las perlas son elementos iniciadores automáticos sin interacción humana directa
        if (gemType == GemType.Pearl) return false;

        if (_isBeingInteracted) return true; // Está siendo arrastrada actualmente

        // O fue soltada/lanzada hace menos de 2 segundos
        if (Time.time - _interactionEndTime <= 2f) return true;

        return false;
    }

    // =========================================================================
    // HIGHLIGHT ROJO (llamado por GemHighlightManager)
    // =========================================================================

    /// <summary>
    /// Activa o desactiva el highlight rojo de "grupo más numeroso".
    /// El color original se restaura al desactivar.
    /// </summary>
    public void SetHighlight(bool highlighted)
    {
        if (_spriteRenderer == null) return;
        _spriteRenderer.color = highlighted
            ? new UnityEngine.Color(1f, 0.25f, 0.25f, 1f) // Tinte rojo
            : UnityEngine.Color.white;                     // Color original del sprite
    }

    private void FixedUpdate()
    {
        if (_rb == null) return;

        // Lógica de caída ordenada (cascada) exclusiva para perlas
        if (gemType == GemType.Pearl && _rb.bodyType == RigidbodyType2D.Kinematic && !_hasMerged)
        {
            Vector2 newPos = _rb.position + Vector2.down * 2f * Time.fixedDeltaTime; // fallSpeed = 2f
            _rb.MovePosition(newPos);
        }
        
        // Desvanecer la luz de impacto
        if (_glowIntensity > 0 && _impactLight != null)
        {
            _glowIntensity -= Time.fixedDeltaTime * 4f; // Desaparece rápido
            if (_glowIntensity < 0) _glowIntensity = 0;
            _impactLight.intensity = _glowIntensity;
        }
    }

    // =========================================================================
    // COLISIONES Y FUSIÓN
    // =========================================================================

    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Flash de luz al impactar fuerte
        if (collision.relativeVelocity.magnitude > 1.5f && _impactLight != null)
        {
            _glowIntensity = 1.5f; // Intensidad del flash
        }
        
        if (_hasMerged || this.IsMergeLocked) return;

        // Si la perla venía en caída libre ordenada (Kinematic) y choca con algo (suelo, pared o gema),
        // se vuelve Dynamic para rebotar y comportarse con físicas normales.
        if (gemType == GemType.Pearl && _rb.bodyType == RigidbodyType2D.Kinematic)
        {
            _rb.bodyType = RigidbodyType2D.Dynamic;
            _rb.gravityScale = 1f;
            _rb.linearVelocity = Vector2.down * 2f; // Transferir inercia de la cascada
        }
        
        // Las perlas se fusionan al chocar con otras perlas en el frasco
        if (gemType == GemType.Diamond) return; // El diamante ya se destruyó en Start
        if (gemType == GemType.Stone) return;   // Las piedras no se fusionan con nada

        Gem other = collision.gameObject.GetComponent<Gem>();
        if (other == null || other._hasMerged || other.IsMergeLocked) return;
        if (other.gemType == GemType.Stone) return; // No se puede fusionar con piedras

        // Solo se fusionan gemas del mismo tipo
        if (this.gemType != other.gemType) return;

        // Si ambas perlas aún están cayendo en el tubo (Kinematic), esperar a que lleguen al fondo
        if (gemType == GemType.Pearl && _rb.bodyType == RigidbodyType2D.Kinematic && other._rb.bodyType == RigidbodyType2D.Kinematic)
        {
            return;
        }

        // Las perlas y los cuarzos se fusionan automáticamente entre sí al chocar.
        // Para las gemas jugables estándar (Esmeralda a Rubí Rojo), se requiere intervención humana (arrastrada o lanzada hace < 2s).
        if (gemType != GemType.Pearl && gemType != GemType.Quartz)
        {
            if (!this.HasRecentInteraction() && !other.HasRecentInteraction())
            {
                return; // No se fusionan si ninguna fue manipulada recientemente por el jugador
            }
        }

        if (this.gameObject.GetHashCode() > other.gameObject.GetHashCode())
        {
            MergeWith(other);
        }
    }

    public void DirectMerge(Gem other, bool isUserInteraction = true)
    {
        if (_hasMerged || other == null || other._hasMerged) return;
        _hasMerged       = true;
        other._hasMerged = true;

        // Desactivar colisionadores y simulación inmediatamente para prevenir
        // que choquen o generen impulsos explosivos de separación con gemas vecinas
        Collider2D colA = GetComponent<Collider2D>();
        Collider2D colB = other.GetComponent<Collider2D>();
        if (colA != null) colA.enabled = false;
        if (colB != null) colB.enabled = false;

        Rigidbody2D rbA = GetComponent<Rigidbody2D>();
        Rigidbody2D rbB = other.GetComponent<Rigidbody2D>();
        if (rbA != null) { rbA.linearVelocity = Vector2.zero; rbA.simulated = false; }
        if (rbB != null) { rbB.linearVelocity = Vector2.zero; rbB.simulated = false; }

        // Calcular posición del punto medio entre las dos gemas
        Vector2 spawnPos = ((Vector2)transform.position + (Vector2)other.transform.position) / 2f;

        // Caso especial: CUARZO (Al fusionarse desaparece y otorga 20 puntos)
        if (gemType == GemType.Quartz)
        {
            GameManager.Instance?.RegisterQuartzMerge(spawnPos);

            // Destruir las dos gemas de cuarzo
            Destroy(gameObject);
            Destroy(other.gameObject);

            // Destruir piedras cercanas por la onda expansiva del cuarzo
            GameManager.Instance?.DestroyNearbyStones(spawnPos, 2.0f);

            GemHighlightManager.Instance?.ForceRefresh();
            return;
        }

        // Determinar el siguiente tipo
        GemType nextType = gemType + 1; // Enum avanza en orden: Pearl→Emerald→...→Diamond

        // Enviar evento de fusión al sistema de Combos (Reemplaza a AddScore y PlayGemMerge)
        GameManager.Instance?.RegisterMerge(gemType, nextType, isUserInteraction);

        // Destruir las dos gemas actuales
        Destroy(gameObject);
        Destroy(other.gameObject);

        // Instanciar la nueva gema (si es Diamante, su Start() dispara la explosión)
        GameManager.Instance?.SpawnEvolvedGem(nextType, spawnPos);

        // Destruir piedras cercanas si las hay (onda expansiva)
        GameManager.Instance?.DestroyNearbyStones(spawnPos, 1.8f);

        // Notificar al sistema de highlight para que reevalúe de inmediato
        GemHighlightManager.Instance?.ForceRefresh();
    }

    private void MergeWith(Gem other)
    {
        // Detectar si la fusión fue provocada por el jugador recientemente
        // (Las perlas son automáticas; las gemas jugables requieren intervención humana)
        bool isUserInteraction = (gemType != GemType.Pearl) && (this.HasRecentInteraction() || other.HasRecentInteraction());
        DirectMerge(other, isUserInteraction);
    }

    // =========================================================================
    // DIAMANTE — Explosión inmediata
    // =========================================================================

    private void TriggerDiamondExplosion()
    {
        // NOTA: Los puntos del Diamante ya son otorgados en RegisterMerge
        // al fusionar los dos Rubís Rojos, evitando duplicidad de puntuación.

        // Reproducir secuencia de sonidos: encontrado → desvanecer
        AudioManager.Instance?.PlayDiamondSequence();



        // Destruir la gema con un pequeño delay para que se vea el efecto
        Destroy(gameObject, 0.3f);
    }

    private void OnDestroy()
    {
        if (GameManager.Instance != null)
        {
            GameManager.Instance.activeGems.Remove(this);
        }
        TikTokRelaxDonorManager.Instance?.OnGemDestroyed(this);
    }
}
