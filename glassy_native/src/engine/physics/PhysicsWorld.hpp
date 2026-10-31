#pragma once
#include <box2d/box2d.h>
#include "../core/Math.hpp"
#include <vector>
#include <functional>

namespace Engine {

// Categorías de colisión (Idéntico a las capas de física de Unity)
enum CollisionCategory {
    CATEGORY_WALL   = 0x0001,
    CATEGORY_PEARL  = 0x0002,
    CATEGORY_GEM    = 0x0004,
    CATEGORY_SENSOR = 0x0008
};

class PhysicsWorld : public b2ContactListener {
public:
    PhysicsWorld();
    ~PhysicsWorld();

    void init();
    void step(float timeStep, int32 velocityIterations = 8, int32 positionIterations = 3);

    b2World* getRaw() const { return m_world; }

    // Callbacks de colisión desacoplados
    using ContactCallback = std::function<void(b2Fixture* fixtureA, b2Fixture* fixtureB)>;
    void setBeginContactCallback(ContactCallback cb) { m_beginContactCb = cb; }
    void setEndContactCallback(ContactCallback cb)   { m_endContactCb = cb; }

    // Interacción táctil con MouseJoint
    b2Body* queryPoint(const Vec2& worldPos, uint16 categoryMask = CATEGORY_GEM);
    void startDrag(b2Body* body, const Vec2& worldPos);
    void updateDrag(const Vec2& worldPos);
    void endDrag();
    bool isDragging() const { return m_mouseJoint != nullptr; }
    b2Body* getDraggedBody() const { return m_draggedBody; }

    // Implementación b2ContactListener
    void BeginContact(b2Contact* contact) override;
    void EndContact(b2Contact* contact) override;

private:
    b2World* m_world = nullptr;
    b2Body* m_groundBody = nullptr;
    b2MouseJoint* m_mouseJoint = nullptr;
    b2Body* m_draggedBody = nullptr;

    ContactCallback m_beginContactCb;
    ContactCallback m_endContactCb;
};

} // namespace Engine

