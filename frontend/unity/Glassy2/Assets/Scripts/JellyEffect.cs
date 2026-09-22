using System.Collections;
using UnityEngine;

/// <summary>
/// JellyEffect — Crea un efecto de Squash & Stretch (Gelatina) al chocar.
/// </summary>
public class JellyEffect : MonoBehaviour
{
    [Header("Configuración de Gelatina")]
    [Tooltip("Intensidad de la deformación.")]
    public float squashAmount = 0.1f;
    
    [Tooltip("Velocidad mínima de impacto para activar el efecto.")]
    public float minImpactVelocity = 1f;

    [Tooltip("Tiempo que tarda en volver a su forma original.")]
    public float recoveryTime = 0.3f;

    private Vector3 _originalScale;
    private Coroutine _jellyCoroutine;
    private Transform _visualTransform;

    private void Awake()
    {
        // Asume que el script está en el objeto principal o en un hijo visual.
        // Si tienes el SpriteRenderer en el mismo objeto, usamos ese transform.
        _visualTransform = transform;
        _originalScale = _visualTransform.localScale;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Calcular la velocidad relativa del impacto
        float impactSpeed = collision.relativeVelocity.magnitude;

        if (impactSpeed >= minImpactVelocity)
        {
            // Calcular cuánto deformar basado en la velocidad (limitado a un máximo)
            float effectIntensity = Mathf.Clamp(impactSpeed * 0.025f, 0.05f, squashAmount);

            // Determinar la dirección del impacto para aplastar correctamente
            // Nota: Para hacerlo simple y eficiente, haremos un squash general o basado en el normal de la colisión.
            Vector2 normal = collision.contacts[0].normal;

            if (_jellyCoroutine != null)
            {
                StopCoroutine(_jellyCoroutine);
            }
            _jellyCoroutine = StartCoroutine(DoJellyEffect(effectIntensity, normal));
        }
    }

    private IEnumerator DoJellyEffect(float intensity, Vector2 hitNormal)
    {
        // Para simplificar, haremos un squash & stretch en los ejes X e Y.
        // Un enfoque más avanzado rotaría el objeto visual, pero escalar X e Y asimétricamente da buen efecto.
        
        // Aplastamos en el eje de impacto, estiramos en el perpendicular
        // (Simplificaremos asumiendo una deformación general para que sea compatible con la rotación de FloatingPhysics)
        Vector3 squashedScale = new Vector3(
            _originalScale.x + intensity,
            _originalScale.y - intensity,
            _originalScale.z
        );

        float elapsedTime = 0f;
        float squashTime = recoveryTime * 0.2f; // El aplaste es rápido

        // 1. Aplastar
        while (elapsedTime < squashTime)
        {
            _visualTransform.localScale = Vector3.Lerp(_originalScale, squashedScale, elapsedTime / squashTime);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // 2. Recuperar (rebote)
        elapsedTime = 0f;
        float bounceTime = recoveryTime * 0.8f;
        while (elapsedTime < bounceTime)
        {
            // Un rebote elástico usando PingPong o un curve podría verse mejor, pero un Lerp suave es suficiente
            // Usamos SmoothStep para suavizar
            float t = elapsedTime / bounceTime;
            t = t * t * (3f - 2f * t); // Smoothstep manual
            
            _visualTransform.localScale = Vector3.Lerp(squashedScale, _originalScale, t);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        _visualTransform.localScale = _originalScale;
    }
}
