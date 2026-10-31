#pragma once
#include <SDL2/SDL.h>
#include "Texture.hpp"
#include "../core/Math.hpp"

namespace Engine {

class Renderer2D {
public:
    static Renderer2D& get() {
        static Renderer2D instance;
        return instance;
    }

    void init(SDL_Renderer* renderer, int virtualWidth, int virtualHeight);
    void updateViewport(int windowWidth, int windowHeight);

    void beginFrame();
    void endFrame();

    void drawTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg = 0.0f, Color tint = Color::White());
    void drawJellyTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint, float squashX, float squashY);

    void drawCircle(Vec2 center, float radius, Color color, bool filled = false);
    void drawRect(const Rect& rect, Color color, bool filled = false);
    void drawLine(Vec2 a, Vec2 b, Color color);

    Vec2 screenToVirtual(int screenX, int screenY) const;
    Vec2 virtualToScreen(Vec2 virtualPos) const;

    SDL_Renderer* getRaw() const { return m_renderer; }
    int getVirtualWidth() const { return m_virtualWidth; }
    int getVirtualHeight() const { return m_virtualHeight; }
    float getViewportScale() const { return m_scale; }

private:
    Renderer2D() = default;

    SDL_Renderer* m_renderer = nullptr;
    int m_virtualWidth = 576;
    int m_virtualHeight = 1024;

    int m_windowWidth = 576;
    int m_windowHeight = 1024;
    float m_scale = 1.0f;
    float m_offsetX = 0.0f;
    float m_offsetY = 0.0f;
};

} // namespace Engine

