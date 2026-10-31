#pragma once
#include <SDL2/SDL.h>
#include "../core/Math.hpp"

namespace Engine {

class InputManager {
public:
    static InputManager& get() {
        static InputManager instance;
        return instance;
    }

    void handleEvent(const SDL_Event& event, int windowWidth, int windowHeight);
    void update(float dt);

    bool isPointerDown() const { return m_isDown; }
    bool isPointerJustPressed() const { return m_justPressed; }
    bool isPointerJustReleased() const { return m_justReleased; }

    Vec2 getPointerVirtualPos() const { return m_virtualPos; }
    Vec2 getTrackedVelocity() const { return m_trackedVelocity; }

private:
    InputManager() = default;

    bool m_isDown = false;
    bool m_justPressed = false;
    bool m_justReleased = false;

    Vec2 m_virtualPos;
    Vec2 m_lastVirtualPos;
    Vec2 m_trackedVelocity;
};

} // namespace Engine

