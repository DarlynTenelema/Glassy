#include "Gem.hpp"
#include "../engine/physics/PhysicsWorld.hpp"
#include <cstdlib>

namespace Glassy {

Gem::Gem(b2World* world, GemType type, Engine::Vec2 position, bool isKinematic)
    : m_world(world), m_type(type), m_isKinematic(isKinematic) {

    size_t typeIdx = (size_t)type;
    m_baseMass = GameConfig::GemBaseMasses[typeIdx];
    float radius = GameConfig::GemRadii[typeIdx];

    // Semillas aleatorias únicas para la flotabilidad Perlin
    m_noiseOffsetX = (float)(rand() % 1000);
    m_noiseOffsetY = (float)(rand() % 1000);
    m_noiseOffsetTorque = (float)(rand() % 1000);

    b2BodyDef bd;
    bd.position.Set(position.x, position.y);
    bd.type = (m_type == GemType::Pearl && isKinematic) ? b2_kinematicBody : b2_dynamicBody;
    bd.linearDamping = 0.05f; // Resistencia de fluido muy suave para flotabilidad continua
    bd.angularDamping = 0.1f;
    bd.fixedRotation = false;

    m_body = m_world->CreateBody(&bd);

    b2CircleShape circle;
    circle.m_radius = radius;

    b2FixtureDef fd;
    fd.shape = &circle;
    fd.density = m_baseMass / (3.14159f * radius * radius);
    fd.friction = 0.05f;
    fd.restitution = 0.98f; // Rebote elástico: se devuelve en sentido contrario con la misma fuerza del choque

    if (m_type == GemType::Pearl) {
        fd.filter.categoryBits = Engine::CATEGORY_PEARL;
        fd.filter.maskBits     = Engine::CATEGORY_WALL | Engine::CATEGORY_PEARL;
    } else {
        fd.filter.categoryBits = Engine::CATEGORY_GEM;
        fd.filter.maskBits     = Engine::CATEGORY_WALL | Engine::CATEGORY_GEM | Engine::CATEGORY_SENSOR;
    }

    b2Fixture* fixture = m_body->CreateFixture(&fd);

    // Guardar puntero al Gem en el UserData del fixture para detección O(1)
    fixture->GetUserData().pointer = reinterpret_cast<uintptr_t>(this);
}

Gem::~Gem() {
    if (m_body && m_world) {
        m_world->DestroyBody(m_body);
        m_body = nullptr;
    }
}

void Gem::convertPearlToDynamic() {
    if (m_type == GemType::Pearl && m_isKinematic && m_body) {
        m_isKinematic = false;
        m_body->SetType(b2_dynamicBody);
        m_body->SetLinearVelocity(b2Vec2(0.0f, 1.5f)); // Transferir inercia hacia abajo
    }
}

void Gem::update(float dt, float totalTime) {
    if (!m_body) return;

    // Cascada cinemática ordenada para perlas en el tubo
    if (m_isKinematic && m_type == GemType::Pearl) {
        b2Vec2 pos = m_body->GetPosition();
        pos.x = 2.88f; // Centrada exactamente en el centro del cuello
        pos.y += 2.0f * dt; // Caída constante hacia el fondo
        m_body->SetTransform(pos, 0.0f);
    }
    else if (!m_isBeingInteracted) {
        // Flotabilidad libre Zero-G (FloatingPhysics de Unity)
        // Permite que las gemas floten libremente por todo el interior del frasco
        float flowSpeed = 0.6f;
        float nx = Engine::PerlinNoise::noise2D(totalTime * flowSpeed + m_noiseOffsetX, 0.0f) * 2.0f - 1.0f;
        float ny = Engine::PerlinNoise::noise2D(0.0f, totalTime * flowSpeed + m_noiseOffsetY) * 2.0f - 1.0f;
        float torque = Engine::PerlinNoise::noise2D(totalTime * flowSpeed + m_noiseOffsetTorque, 0.0f) * 2.0f - 1.0f;

        m_body->ApplyForceToCenter(b2Vec2(nx * 0.35f * m_baseMass, ny * 0.35f * m_baseMass), true);
        m_body->ApplyTorque(torque * 0.05f * m_baseMass, true);
    }

    // Animación Jelly (Squash & Stretch elástico)
    if (m_squashRecoveryTimer > 0.0f) {
        m_squashRecoveryTimer -= dt;
        float t = std::clamp(1.0f - (m_squashRecoveryTimer / 0.3f), 0.0f, 1.0f);
        // Smoothstep hacia cero
        float factor = 1.0f - (t * t * (3.0f - 2.0f * t));
        m_squashX *= factor;
        m_squashY *= factor;
        if (m_squashRecoveryTimer <= 0.0f) {
            m_squashX = 0.0f;
            m_squashY = 0.0f;
        }
    }
}

void Gem::triggerImpact(float impactSpeed) {
    if (impactSpeed < 1.0f) return;

    // Calcular deformación elástica basada en la violencia del impacto
    float intensity = std::clamp(impactSpeed * 0.03f, 0.05f, 0.20f);
    m_squashX = intensity;
    m_squashY = intensity;
    m_squashRecoveryTimer = 0.3f;
}

void Gem::setInteracting(bool interacting, float currentTime) {
    m_isBeingInteracted = interacting;
    if (!interacting) {
        m_interactionEndTime = currentTime;
    }

    // Aumentar masa al arrastrar con el dedo (+1.5f) para mover gemas pesadas
    if (m_body) {
        b2MassData massData;
        m_body->GetMassData(&massData);
        massData.mass = interacting ? (m_baseMass + GameConfig::PLAYER_MASS_BONUS) : m_baseMass;
        m_body->SetMassData(&massData);
        if (interacting) {
            m_body->SetAngularVelocity(0.0f); // Evitar giro descontrolado en el dedo
        }
    }
}

bool Gem::hasRecentInteraction(float currentTime) const {
    if (m_type == GemType::Pearl) return false;
    if (m_isBeingInteracted) return true;
    return (currentTime - m_interactionEndTime) <= GameConfig::HUMAN_INTERACTION_TIMEOUT;
}

Engine::Vec2 Gem::getPosition() const {
    if (!m_body) return Engine::Vec2(0, 0);
    b2Vec2 p = m_body->GetPosition();
    return Engine::Vec2(p.x, p.y);
}

float Gem::getAngleDeg() const {
    if (!m_body) return 0.0f;
    return m_body->GetAngle() * (180.0f / 3.14159265f);
}

} // namespace Glassy

