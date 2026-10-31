#include "PhysicsWorld.hpp"

namespace Engine {

class PointQueryCallback : public b2QueryCallback {
public:
    b2Vec2 point;
    b2Fixture* fixture = nullptr;
    uint16 mask = 0xFFFF;

    PointQueryCallback(const b2Vec2& p, uint16 m) : point(p), mask(m) {}

    bool ReportFixture(b2Fixture* f) override {
        b2Body* body = f->GetBody();
        if (body->GetType() == b2_dynamicBody) {
            if (f->GetFilterData().categoryBits & mask) {
                if (f->TestPoint(point)) {
                    fixture = f;
                    return false; // Detener búsqueda
                }
            }
        }
        return true;
    }
};

PhysicsWorld::PhysicsWorld() {
    init();
}

PhysicsWorld::~PhysicsWorld() {
    if (m_world) {
        delete m_world;
        m_world = nullptr;
    }
}

void PhysicsWorld::init() {
    if (m_world) delete m_world;

    // Gravedad cero para simular flotabilidad ASMR Zero-G
    b2Vec2 gravity(0.0f, 0.0f);
    m_world = new b2World(gravity);
    m_world->SetContactListener(this);

    // Cuerpo estático auxiliar para los Joints
    b2BodyDef groundDef;
    m_groundBody = m_world->CreateBody(&groundDef);
}

void PhysicsWorld::step(float timeStep, int32 velocityIterations, int32 positionIterations) {
    if (m_world) {
        m_world->Step(timeStep, velocityIterations, positionIterations);
    }
}

void PhysicsWorld::BeginContact(b2Contact* contact) {
    if (m_beginContactCb && contact->IsTouching()) {
        m_beginContactCb(contact->GetFixtureA(), contact->GetFixtureB());
    }
}

void PhysicsWorld::EndContact(b2Contact* contact) {
    if (m_endContactCb) {
        m_endContactCb(contact->GetFixtureA(), contact->GetFixtureB());
    }
}

b2Body* PhysicsWorld::queryPoint(const Vec2& worldPos, uint16 categoryMask) {
    b2Vec2 p(worldPos.x, worldPos.y);
    b2AABB aabb;
    b2Vec2 d(0.001f, 0.001f);
    aabb.lowerBound = p - d;
    aabb.upperBound = p + d;

    PointQueryCallback callback(p, categoryMask);
    m_world->QueryAABB(&callback, aabb);

    if (callback.fixture) {
        return callback.fixture->GetBody();
    }
    return nullptr;
}

void PhysicsWorld::startDrag(b2Body* body, const Vec2& worldPos) {
    if (!body || m_mouseJoint) return;

    m_draggedBody = body;
    b2MouseJointDef md;
    md.bodyA = m_groundBody;
    md.bodyB = body;
    md.target.Set(worldPos.x, worldPos.y);
    md.maxForce = 1000.0f * body->GetMass();
    md.stiffness = 200.0f; // Respuesta de resorte firme y precisa
    md.damping = 20.0f;    // Sin oscilaciones raras

    m_mouseJoint = (b2MouseJoint*)m_world->CreateJoint(&md);
    body->SetAwake(true);
}

void PhysicsWorld::updateDrag(const Vec2& worldPos) {
    if (m_mouseJoint) {
        m_mouseJoint->SetTarget(b2Vec2(worldPos.x, worldPos.y));
    }
}

void PhysicsWorld::endDrag() {
    if (m_mouseJoint) {
        m_world->DestroyJoint(m_mouseJoint);
        m_mouseJoint = nullptr;
    }
    m_draggedBody = nullptr;
}

} // namespace Engine

