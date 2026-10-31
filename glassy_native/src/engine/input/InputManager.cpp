#include "InputManager.hpp"
#include "../renderer/Renderer2D.hpp"

namespace Engine {

void InputManager::handleEvent(const SDL_Event& event, int windowWidth, int windowHeight) {
    auto& renderer = Renderer2D::get();

    if (event.type == SDL_MOUSEBUTTONDOWN) {
        if (event.button.button == SDL_BUTTON_LEFT) {
            m_isDown = true;
            m_justPressed = true;
            m_virtualPos = renderer.screenToVirtual(event.button.x, event.button.y);
            m_lastVirtualPos = m_virtualPos;
            m_trackedVelocity = Vec2(0.0f, 0.0f);
        }
    }
    else if (event.type == SDL_MOUSEBUTTONUP) {
        if (event.button.button == SDL_BUTTON_LEFT) {
            m_isDown = false;
            m_justReleased = true;
            m_virtualPos = renderer.screenToVirtual(event.button.x, event.button.y);
        }
    }
    else if (event.type == SDL_MOUSEMOTION) {
        if (m_isDown) {
            m_virtualPos = renderer.screenToVirtual(event.motion.x, event.motion.y);
        }
    }
    // Soporte táctil nativo (Android, iOS, pantallas táctiles y kioscos)
    else if (event.type == SDL_FINGERDOWN) {
        m_isDown = true;
        m_justPressed = true;
        int sx = (int)(event.tfinger.x * windowWidth);
        int sy = (int)(event.tfinger.y * windowHeight);
        m_virtualPos = renderer.screenToVirtual(sx, sy);
        m_lastVirtualPos = m_virtualPos;
        m_trackedVelocity = Vec2(0.0f, 0.0f);
    }
    else if (event.type == SDL_FINGERUP) {
        m_isDown = false;
        m_justReleased = true;
        int sx = (int)(event.tfinger.x * windowWidth);
        int sy = (int)(event.tfinger.y * windowHeight);
        m_virtualPos = renderer.screenToVirtual(sx, sy);
    }
    else if (event.type == SDL_FINGERMOTION) {
        if (m_isDown) {
            int sx = (int)(event.tfinger.x * windowWidth);
            int sy = (int)(event.tfinger.y * windowHeight);
            m_virtualPos = renderer.screenToVirtual(sx, sy);
        }
    }
}

void InputManager::update(float dt) {
    if (m_isDown && dt > 0.0001f) {
        Vec2 instantVel = (m_virtualPos - m_lastVirtualPos) / dt;
        m_trackedVelocity = Vec2::lerp(m_trackedVelocity, instantVel, 20.0f * dt);
        m_lastVirtualPos = m_virtualPos;
    }

    // Limpiar banderas de un solo frame
    m_justPressed = false;
    m_justReleased = false;
}

} // namespace Engine

