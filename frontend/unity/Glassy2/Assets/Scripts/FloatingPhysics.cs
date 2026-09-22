using UnityEngine;

/// <summary>
/// FloatingPhysics — Aplica fuerzas para simular gravedad cero y flotabilidad suave.
/// </summary>
[RequireComponent(typeof(Rigidbody2D))]
public class FloatingPhysics : MonoBehaviour
{
    [Header("Configuración de Flotabilidad")]
    [Tooltip("Fuerza hacia arriba constante.")]
    public float upwardForce = 0.5f;
    
    [Tooltip("Fuerza máxima para el movimiento suave (flujo lateral/vertical).")]
    public float randomForceMagnitude = 0.2f;

    [Tooltip("Torque para giro suave.")]
    public float randomTorqueMagnitude = 0.1f;

    [Tooltip("Velocidad de cambio en las corrientes (suavidad del movimiento).")]
    public float flowSpeed = 0.5f;

    private Rigidbody2D _rb;
    private float _offsetX;
    private float _offsetY;
    private float _offsetTorque;

    private void Awake()
    {
        _rb = GetComponent<Rigidbody2D>();
        
        // Offsets aleatorios para que cada gema tenga su propio patrón de movimiento
        _offsetX = Random.Range(0f, 1000f);
        _offsetY = Random.Range(0f, 1000f);
        _offsetTorque = Random.Range(0f, 1000f);
    }

    private void FixedUpdate()
    {
        // Generar valores suaves entre -1 y 1 usando Perlin Noise para un movimiento relajante (ASMR) y más animado
        float noiseX = Mathf.PerlinNoise(Time.time * flowSpeed + _offsetX, 0f) * 2f - 1f;
        float noiseY = Mathf.PerlinNoise(0f, Time.time * flowSpeed + _offsetY) * 2f - 1f;
        
        Vector2 flowDir = new Vector2(noiseX, noiseY).normalized;

        // Si se quiere un movimiento hacia arriba muy ligero y constante, se puede combinar:
        // flowDir += Vector2.up * (upwardForce * 0.1f);
        
        _rb.AddForce(flowDir * randomForceMagnitude);

        // Giro suave y continuo
        float smoothTorque = (Mathf.PerlinNoise(Time.time * flowSpeed + _offsetTorque, 0f) * 2f - 1f);
        _rb.AddTorque(smoothTorque * randomTorqueMagnitude);
    }
}
