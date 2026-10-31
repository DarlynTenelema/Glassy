#include "GameWorld.hpp"
#include "../engine/input/InputManager.hpp"
#include "../engine/audio/AudioManager.hpp"
#include "../engine/core/Time.hpp"
#include <iostream>
#include <cmath>
#include <algorithm>

namespace Glassy {

GameWorld::GameWorld() {
    m_spawnPoint = Engine::Vec2(2.88f, 0.7f);
}

GameWorld::~GameWorld() {
}

bool GameWorld::init(SDL_Renderer* renderer) {
    // 1. Cargar texturas de gemas
    for (int i = 0; i < 10; ++i) {
        if (!m_gemTextures[i].loadFromFile(renderer, GameConfig::GemTextureFiles[i])) {
            std::cerr << "[GameWorld] Advertencia: No se pudo cargar " << GameConfig::GemTextureFiles[i] << "\n";
        }
    }

    // 2. Cargar textura del frasco y fondo
    m_flaskTexture.loadFromFile(renderer, GameConfig::FlaskTextureFile);
    m_backgroundTexture.loadFromFile(renderer, GameConfig::BackgroundTextureFile);

    // 3. Configurar límites físicos y zona de peligro
    setupFlaskBounds();
    setupDangerZone();

    // 4. Iniciar música de fondo
    Engine::AudioManager::get().playMusic("assets/audio/bg_game.mp3", true, 0.6f);

    restart();
    return true;
}

void GameWorld::setupFlaskBounds() {
    b2BodyDef bd;
    bd.type = b2_staticBody;
    bd.position.Set(0.0f, 0.0f);
    b2Body* staticBody = m_physics.getRaw()->CreateBody(&bd);

    // Vértices del contorno interior del Frasco / Matraz
    // Cuello delgado arriba, hombro inclinado y cámara ancha abajo
    std::vector<b2Vec2> leftWallPoints = {
        b2Vec2(2.28f, 0.5f),  // Boca cuello izq
        b2Vec2(2.28f, 2.6f),  // Base cuello izq
        b2Vec2(0.60f, 3.8f),  // Hombro izq
        b2Vec2(0.60f, 9.4f),  // Pared izq inferior
        b2Vec2(1.20f, 9.8f),  // Esquina inferior izq biselada
        b2Vec2(4.56f, 9.8f),  // Esquina inferior der biselada
        b2Vec2(5.16f, 9.4f),  // Pared der inferior
        b2Vec2(5.16f, 3.8f),  // Hombro der
        b2Vec2(3.48f, 2.6f),  // Base cuello der
        b2Vec2(3.48f, 0.5f)   // Boca cuello der
    };

    b2ChainShape chain;
    chain.CreateChain(leftWallPoints.data(), (int32)leftWallPoints.size(),
                      leftWallPoints.front(), leftWallPoints.back());

    b2FixtureDef fd;
    fd.shape = &chain;
    fd.friction = 0.2f;
    fd.restitution = 0.2f;
    fd.filter.categoryBits = Engine::CATEGORY_WALL;
    fd.filter.maskBits     = 0xFFFF; // Colisiona con todo

    staticBody->CreateFixture(&fd);
}

void GameWorld::setupDangerZone() {
    b2BodyDef bd;
    bd.type = b2_staticBody;
    bd.position.Set(2.88f, 2.5f); // Justo en la transición del cuello
    b2Body* sensorBody = m_physics.getRaw()->CreateBody(&bd);

    b2PolygonShape box;
    box.SetAsBox(0.65f, 0.15f); // Ancho cubre todo el cuello

    b2FixtureDef fd;
    fd.shape = &box;
    fd.isSensor = true; // No genera colisión física, solo detección
    fd.filter.categoryBits = Engine::CATEGORY_SENSOR;
    fd.filter.maskBits     = Engine::CATEGORY_GEM; // Detecta gemas, no perlas

    m_dangerSensorFixture = sensorBody->CreateFixture(&fd);

    // Callbacks de física para colisiones y zona de peligro
    m_physics.setBeginContactCallback([this](b2Fixture* fA, b2Fixture* fB) {
        // 1. Detección de Zona de Peligro
        if (fA == m_dangerSensorFixture || fB == m_dangerSensorFixture) {
            b2Fixture* other = (fA == m_dangerSensorFixture) ? fB : fA;
            Gem* gem = reinterpret_cast<Gem*>(other->GetUserData().pointer);
            if (gem && gem->getType() != GemType::Pearl) {
                m_gemsInDangerZone++;
            }
            return;
        }

        // 2. Colisión entre dos gemas
        Gem* gemA = reinterpret_cast<Gem*>(fA->GetUserData().pointer);
        Gem* gemB = reinterpret_cast<Gem*>(fB->GetUserData().pointer);

        if (!gemA || !gemB || gemA->isMerged() || gemB->isMerged()) return;

        // Despertar perlas cinemáticas al chocar
        if (gemA->isKinematicPearl()) gemA->convertPearlToDynamic();
        if (gemB->isKinematicPearl()) gemB->convertPearlToDynamic();

        // Efecto Jelly por impacto
        b2Vec2 relVel = gemA->getBody()->GetLinearVelocity() - gemB->getBody()->GetLinearVelocity();
        float speed = relVel.Length();
        gemA->triggerImpact(speed);
        gemB->triggerImpact(speed);

        // Fusión solo si son del mismo tipo y no son Piedras ni Diamantes
        if (gemA->getType() == gemB->getType() &&
            gemA->getType() != GemType::Stone &&
            gemA->getType() != GemType::Diamond) {

            // Perlas y Cuarzos se fusionan solos.
            // Gemas jugables requieren intervención humana reciente (< 2s)
            float now = Engine::Time::totalTime;
            bool isAutomated = (gemA->getType() == GemType::Pearl || gemA->getType() == GemType::Quartz);
            bool hasHuman = gemA->hasRecentInteraction(now) || gemB->hasRecentInteraction(now);

            if (isAutomated || hasHuman) {
                // Encolar fusión diferida para procesarla fuera del step
                m_pendingMerges.push_back({gemA, gemB});
            }
        }
    });

    m_physics.setEndContactCallback([this](b2Fixture* fA, b2Fixture* fB) {
        if (fA == m_dangerSensorFixture || fB == m_dangerSensorFixture) {
            b2Fixture* other = (fA == m_dangerSensorFixture) ? fB : fA;
            Gem* gem = reinterpret_cast<Gem*>(other->GetUserData().pointer);
            if (gem && gem->getType() != GemType::Pearl) {
                m_gemsInDangerZone = std::max(0, m_gemsInDangerZone - 1);
            }
        }
    });
}

void GameWorld::restart() {
    m_physics.endDrag();
    m_selectedGem = nullptr;
    m_gems.clear();
    m_pendingMerges.clear();
    m_score = 0;
    m_isGameOver = false;
    m_isInDanger = false;
    m_dangerTimer = 0.0f;
    m_gemsInDangerZone = 0;
    m_spawnTimer = GameConfig::INITIAL_DELAY;
    m_combo.resetCombo();

    Engine::AudioManager::get().playSound("assets/audio/start_game.mp3");
}

void GameWorld::spawnPearl() {
    if (m_isGameOver) return;
    auto pearl = std::make_unique<Gem>(m_physics.getRaw(), GemType::Pearl, m_spawnPoint, true);
    m_gems.push_back(std::move(pearl));
}

void GameWorld::spawnEvolvedGem(GemType type, Engine::Vec2 position) {
    if ((int)type >= (int)GemType::Count) return;

    // Caso Diamante: explota de inmediato
    if (type == GemType::Diamond) {
        m_score += GameConfig::GemScoreValues[(size_t)GemType::Diamond];
        Engine::AudioManager::get().playSound("assets/audio/diamante_encontrado.mp3", 1.0f, 1.0f);
        // Desvanecimiento / Onda de choque
        destroyNearbyStones(position, 2.5f);
        std::cout << "[DIAMANTE] Creado y estallado con exito! +64 pts\n";
        return;
    }

    auto gem = std::make_unique<Gem>(m_physics.getRaw(), type, position, false);
    m_gems.push_back(std::move(gem));
}

void GameWorld::destroyNearbyStones(Engine::Vec2 center, float radius) {
    for (auto& gem : m_gems) {
        if (gem && !gem->isMerged() && gem->getType() == GemType::Stone) {
            float dist = Engine::Vec2::distance(gem->getPosition(), center);
            if (dist <= radius) {
                gem->markMerged();
                m_score += gem->getScoreValue();
                Engine::AudioManager::get().playSound("assets/audio/fusion.mp3", 0.8f, 0.7f);
                std::cout << "[PIEDRA] Piedra destruida por onda expansiva! +30 pts\n";
            }
        }
    }
}

void GameWorld::handleInput(float dt) {
    auto& input = Engine::InputManager::get();
    Engine::Vec2 vPos = input.getPointerVirtualPos();
    Engine::Vec2 worldPos = vPos * GameConfig::METERS_PER_PIXEL;
    float now = Engine::Time::totalTime;

    if (input.isPointerJustPressed()) {
        if (m_isGameOver) {
            restart();
            return;
        }

        // Buscar gema tocada
        b2Body* body = m_physics.queryPoint(worldPos, Engine::CATEGORY_GEM);
        if (body) {
            for (auto& g : m_gems) {
                if (g && g->getBody() == body && g->getType() != GemType::Pearl) {
                    m_selectedGem = g.get();
                    m_selectedGem->setInteracting(true, now);
                    m_physics.startDrag(body, worldPos);
                    break;
                }
            }
        }
    }
    else if (input.isPointerDown()) {
        if (m_physics.isDragging()) {
            m_physics.updateDrag(worldPos);
        }
    }
    else if (input.isPointerJustReleased()) {
        if (m_selectedGem) {
            m_physics.endDrag();
            m_selectedGem->setInteracting(false, now);

            // Calcular impulso por lanzamiento rápido (Swipe / Flick)
            Engine::Vec2 vVel = input.getTrackedVelocity();
            Engine::Vec2 worldVel = vVel * GameConfig::METERS_PER_PIXEL;
            float speed = worldVel.length();

            if (speed > 2.0f && m_selectedGem->getBody()) {
                float impulseMag = std::clamp(speed * 0.12f, 0.0f, 15.0f);
                Engine::Vec2 dir = worldVel.normalized();
                m_selectedGem->getBody()->ApplyLinearImpulseToCenter(
                    b2Vec2(dir.x * impulseMag, dir.y * impulseMag), true
                );
            }

            m_selectedGem = nullptr;
        }
    }
}

void GameWorld::processDeferredMerges() {
    if (m_pendingMerges.empty()) return;

    float now = Engine::Time::totalTime;

    for (auto& pair : m_pendingMerges) {
        Gem* a = pair.gemA;
        Gem* b = pair.gemB;

        if (!a || !b || a->isMerged() || b->isMerged()) continue;

        a->markMerged();
        b->markMerged();

        Engine::Vec2 posA = a->getPosition();
        Engine::Vec2 posB = b->getPosition();
        Engine::Vec2 midPos = (posA + posB) * 0.5f;

        GemType curType = a->getType();

        // Caso CUARZO: Desaparece al unirse y destruye piedras
        if (curType == GemType::Quartz) {
            m_score += GameConfig::GemScoreValues[(size_t)GemType::Quartz];
            Engine::AudioManager::get().playSound("assets/audio/fusion.mp3", 1.5f, 0.9f);
            destroyNearbyStones(midPos, 2.0f);
            continue;
        }

        // Evolucionar a la siguiente gema
        GemType nextType = (GemType)((int)curType + 1);

        // Sistema de combos
        bool isHuman = a->hasRecentInteraction(now) || b->hasRecentInteraction(now);
        int earnedPoints = m_combo.registerMerge(curType, nextType, isHuman);
        m_score += earnedPoints;

        // Reproducir sonido con escala de pitch según el combo
        Engine::AudioManager::get().playSound("assets/audio/fusion.mp3", m_combo.getPitch(), 0.9f);

        // Spawning de la nueva gema
        spawnEvolvedGem(nextType, midPos);

        // Onda expansiva de destrucción de piedras cercanas
        destroyNearbyStones(midPos, GameConfig::STONE_BLAST_RADIUS);
    }

    m_pendingMerges.clear();

    // Eliminar gemas marcadas como fusionadas
    m_gems.erase(
        std::remove_if(m_gems.begin(), m_gems.end(), [](const std::unique_ptr<Gem>& g) {
            return !g || g->isMerged();
        }),
        m_gems.end()
    );
}

void GameWorld::checkDangerZone(float dt) {
    m_isInDanger = (m_gemsInDangerZone > 0);

    if (m_isInDanger && !m_isGameOver) {
        m_dangerTimer += dt;
        if (m_dangerTimer >= GameConfig::GAME_OVER_GRACE_SECS) {
            m_isGameOver = true;
            m_physics.endDrag();
            m_selectedGem = nullptr;
            Engine::AudioManager::get().playSound("assets/audio/game_over.mp3");
            std::cout << "[Game Over] Frasco desbordado! Puntuacion final: " << m_score << "\n";
        }
    } else {
        m_dangerTimer = 0.0f;
    }
}

void GameWorld::update(float dt) {
    handleInput(dt);

    if (!m_isGameOver) {
        // 1. Spawner de perlas
        m_spawnTimer -= dt;
        if (m_spawnTimer <= 0.0f) {
            spawnPearl();
            m_spawnTimer = GameConfig::SPAWN_INTERVAL;
        }

        // 2. Paso de físicas Box2D
        m_physics.step(dt, 8, 3);

        // 3. Procesar fusiones diferidas
        processDeferredMerges();

        // 4. Actualizar estado de las gemas (Jelly + Perlin)
        float totalTime = Engine::Time::totalTime;
        for (auto& g : m_gems) {
            if (g) g->update(dt, totalTime);
        }

        // 5. Combos y Zona de Peligro
        m_combo.update(dt);
        checkDangerZone(dt);
    }
}

void GameWorld::render() {
    auto& r = Engine::Renderer2D::get();

    // 0. Dibujar Fondo Paisaje Nocturno (Montañas y Lago)
    if (m_backgroundTexture.isValid()) {
        Engine::Vec2 bgCenter(288.0f, 512.0f);
        Engine::Vec2 bgSize(576.0f, 1024.0f);
        r.drawTexture(m_backgroundTexture, bgCenter, bgSize);
    }

    // 1. Dibujar contorno del Frasco
    Engine::Vec2 flaskCenter(288.0f, 512.0f);
    Engine::Vec2 flaskSize(576.0f, 1024.0f);
    if (m_flaskTexture.isValid()) {
        r.drawTexture(m_flaskTexture, flaskCenter, flaskSize, 0.0f, Engine::Color(255, 255, 255, 230));
    }

    // 2. Línea indicadora de Zona de Peligro
    Engine::Color dangerColor = m_isInDanger ? Engine::Color(255, 40, 40, 220) : Engine::Color(255, 255, 255, 60);
    r.drawLine(Engine::Vec2(228.0f, 250.0f), Engine::Vec2(348.0f, 250.0f), dangerColor);

    // 3. Dibujar todas las Gemas
    for (const auto& g : m_gems) {
        if (!g || g->isMerged()) continue;

        Engine::Vec2 wPos = g->getPosition();
        Engine::Vec2 vPos = wPos * GameConfig::PIXELS_PER_METER;
        float radiusPix = g->getRadius() * GameConfig::PIXELS_PER_METER;
        Engine::Vec2 size(radiusPix * 2.0f, radiusPix * 2.0f);

        size_t typeIdx = (size_t)g->getType();
        if (typeIdx < 10 && m_gemTextures[typeIdx].isValid()) {
            r.drawJellyTexture(
                m_gemTextures[typeIdx],
                vPos,
                size,
                g->getAngleDeg(),
                Engine::Color::White(),
                g->getSquashX(),
                g->getSquashY()
            );
        } else {
            // Fallback visual si falta textura
            r.drawCircle(vPos, radiusPix, Engine::Color::Gold(), true);
        }
    }

    // 4. Marcadores UI sencillos y ultra rápidos
    // Si hay combo activo
    if (m_combo.getMultiplier() > 1) {
        // Indicador de racha
        r.drawRect(Engine::Rect{210.0f, 100.0f, 156.0f, 36.0f}, Engine::Color(255, 215, 0, 180), true);
    }

    // Si es Game Over
    if (m_isGameOver) {
        // Overlay de Game Over
        r.drawRect(Engine::Rect{88.0f, 420.0f, 400.0f, 160.0f}, Engine::Color(20, 10, 30, 240), true);
        r.drawRect(Engine::Rect{88.0f, 420.0f, 400.0f, 160.0f}, Engine::Color(255, 60, 60, 255), false);
    }
}

} // namespace Glassy

