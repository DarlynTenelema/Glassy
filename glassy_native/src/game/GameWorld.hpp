#pragma once
#include <vector>
#include <memory>
#include "Gem.hpp"
#include "ComboManager.hpp"
#include "../engine/physics/PhysicsWorld.hpp"
#include "../engine/renderer/Renderer2D.hpp"
#include "../engine/renderer/Texture.hpp"

namespace Glassy {

class GameWorld {
public:
    GameWorld();
    ~GameWorld();

    bool init(SDL_Renderer* renderer);
    void update(float dt);
    void render();

    void restart();
    void spawnPearl();
    void spawnEvolvedGem(GemType type, Engine::Vec2 position);
    void destroyNearbyStones(Engine::Vec2 center, float radius);

    int getScore() const { return m_score; }
    bool isGameOver() const { return m_isGameOver; }
    bool isInDanger() const { return m_isInDanger; }

private:
    void setupFlaskBounds();
    void setupDangerZone();
    void handleInput(float dt);
    void handleCollisions();
    void processDeferredMerges();
    void checkDangerZone(float dt);

    Engine::PhysicsWorld m_physics;
    ComboManager m_combo;

    std::vector<std::unique_ptr<Gem>> m_gems;
    Gem* m_selectedGem = nullptr;

    // Colas diferidas para modificar Box2D fuera del step
    struct PendingMerge {
        Gem* gemA;
        Gem* gemB;
    };
    std::vector<PendingMerge> m_pendingMerges;

    // Texturas
    Engine::Texture m_gemTextures[10];
    Engine::Texture m_flaskTexture;
    Engine::Texture m_backgroundTexture;

    // Estado del juego
    int m_score = 0;
    bool m_isGameOver = false;
    bool m_isInDanger = false;
    float m_dangerTimer = 0.0f;
    int m_gemsInDangerZone = 0;

    // Spawn de perlas
    float m_spawnTimer = 0.0f;
    Engine::Vec2 m_spawnPoint;

    // Fixture de sensor de Game Over
    b2Fixture* m_dangerSensorFixture = nullptr;
};

} // namespace Glassy

