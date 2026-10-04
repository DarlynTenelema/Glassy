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
    Diamond  = 7   // 64 pts — Diamante (explota al aparecer, no persiste en el tablero)
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
    private float _baseMass      = 1.1f; // Cargado en Awake() desde GameConfig
    private SpriteRenderer _spriteRenderer;
    
    // Intervención Humana
    private bool _isBeingInteracted = false;
    private float _interactionEndTime = -99f;
    
    // Luz de impacto dinámica
    private Light2D _impactLight;
    private float _glowIntensity = 0f;
    private Color _gemColor = Color.white;

    private void Awake()
    {
        _rb             = GetComponent<Rigidbody2D>();
        _spriteRenderer = GetComponent<SpriteRenderer>();

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

    public void ApplySkin()
    {
        if (SkinManager.Instance != null && _spriteRenderer != null)
        {
            Sprite skinSprite = SkinManager.Instance.GetSpriteForGem(gemType);
            if (skinSprite != null)
            {
                _spriteRenderer.sprite = skinSprite;
            }
        }
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
        if (gemType == GemType.Pearl) return true; // Las perlas no requieren intervención

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
        
        if (_hasMerged) return;

        // Si la perla venía en caída libre ordenada (Kinematic) y choca con algo (suelo, pared o gema),
        // se vuelve Dynamic para rebotar y comportarse con físicas normales.
        if (gemType == GemType.Pearl && _rb.bodyType == RigidbodyType2D.Kinematic)
        {
            _rb.bodyType = RigidbodyType2D.Dynamic;
            _rb.gravityScale = 1f;
            _rb.linearVelocity = Vector2.down * 2f; // Transferir inercia de la cascada
        }
        
        // Las perlas ahora se fusionan al chocar con otras perlas,
        // igual que el resto de las gemas.
        // (Se eliminó la restricción que evitaba que colisionaran).
        
        if (gemType == GemType.Diamond) return; // El diamante ya se destruyó en Start

        Gem other = collision.gameObject.GetComponent<Gem>();
        if (other == null || other._hasMerged) return;

        // Solo se fusionan gemas del mismo tipo
        if (this.gemType != other.gemType) return;

        // Requiere intervención humana si no son perlas (arrastrando o lanzadas hace < 2 seg)
        if (!this.HasRecentInteraction() && !other.HasRecentInteraction())
        {
            return; // No se fusionan si ninguna fue tocada recientemente
        }

        if (this.gameObject.GetHashCode() > other.gameObject.GetHashCode())
        {
            MergeWith(other);
        }
    }

    private void MergeWith(Gem other)
    {
        _hasMerged       = true;
        other._hasMerged = true;

        // Calcular posición del punto medio entre las dos gemas
        Vector2 spawnPos = ((Vector2)transform.position + (Vector2)other.transform.position) / 2f;

        // Determinar el siguiente tipo
        GemType nextType = gemType + 1; // Enum avanza en orden: Pearl→Emerald→...→Diamond

        // Detectar si la fusión fue provocada por el jugador recientemente
        bool isUserInteraction = this.HasRecentInteraction() || other.HasRecentInteraction();

        // Enviar evento de fusión al sistema de Combos (Reemplaza a AddScore y PlayGemMerge)
        GameManager.Instance?.RegisterMerge(gemType, nextType, isUserInteraction);

        // Destruir las dos gemas actuales
        Destroy(gameObject);
        Destroy(other.gameObject);

        // Instanciar la nueva gema (si es Diamante, su Start() dispara la explosión)
        GameManager.Instance?.SpawnEvolvedGem(nextType, spawnPos);

        // Notificar al sistema de highlight para que reevalúe de inmediato
        GemHighlightManager.Instance?.ForceRefresh();
    }

    // =========================================================================
    // DIAMANTE — Explosión inmediata
    // =========================================================================

    private void TriggerDiamondExplosion()
    {
        // Sumar los 64 puntos del diamante al score total
        GameManager.Instance?.AddScore(ScoreValue);

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
    }
}
