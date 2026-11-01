#pragma once
#include <box2d/box2d.h>
#include "GemType.hpp"
#include "GameConfig.hpp"
#include "../engine/core/Math.hpp"

namespace Glassy {

class Gem {
public:
    Gem(b2World* world, GemType type, Engine::Vec2 position, bool isKinematic = false);
    ~Gem();

    void update(float dt, float totalTime);
    void triggerImpact(float impactSpeed);

    void setInteracting(bool interacting, float currentTime);
    bool hasRecentInteraction(float currentTime) const;

    GemType getType() const { return m_type; }
    int getScoreValue() const { 
        size_t idx = (size_t)m_type;
        return (idx < GameConfig::GemScoreValues.size()) ? GameConfig::GemScoreValues[idx] : 0; 
    }
    float getRadius() const { 
        size_t idx = (size_t)m_type;
        return (idx < GameConfig::GemRadii.size()) ? GameConfig::GemRadii[idx] : 0.20f; 
    }
    b2Body* getBody() const { return m_body; }

    Engine::Vec2 getPosition() const;
    float getAngleDeg() const;

    bool isMerged() const { return m_hasMerged; }
    void markMerged() { m_hasMerged = true; }

    float getSquashX() const { return m_squashX; }
    float getSquashY() const { return m_squashY; }

    bool isKinematicPearl() const { return m_type == GemType::Pearl && m_isKinematic; }
    void convertPearlToDynamic();

private:
    b2World* m_world = nullptr;
    b2Body* m_body = nullptr;
    GemType m_type;
    bool m_hasMerged = false;
    bool m_isKinematic = false;

    // Intervención Humana
    bool m_isBeingInteracted = false;
    float m_interactionEndTime = -99.0f;
    float m_baseMass = 1.0f;

    // Jelly Squash & Stretch Effect
    float m_squashX = 0.0f;
    float m_squashY = 0.0f;
    float m_squashRecoveryTimer = 0.0f;

    // Semillas Perlin únicas para flotabilidad Zero-G
    float m_noiseOffsetX = 0.0f;
    float m_noiseOffsetY = 0.0f;
    float m_noiseOffsetTorque = 0.0f;
};

} // namespace Glassy

