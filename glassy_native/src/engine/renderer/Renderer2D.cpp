#include "Renderer2D.hpp"
#include <cmath>
#include <algorithm>

namespace Engine {

void Renderer2D::init(SDL_Renderer* renderer, int virtualWidth, int virtualHeight) {
    m_renderer = renderer;
    m_virtualWidth = virtualWidth;
    m_virtualHeight = virtualHeight;
}

void Renderer2D::updateViewport(int windowWidth, int windowHeight) {
    m_windowWidth = windowWidth;
    m_windowHeight = windowHeight;

    float scaleX = (float)windowWidth / (float)m_virtualWidth;
    float scaleY = (float)windowHeight / (float)m_virtualHeight;
    m_scale = std::min(scaleX, scaleY);

    float renderedW = m_virtualWidth * m_scale;
    float renderedH = m_virtualHeight * m_scale;

    m_offsetX = (windowWidth - renderedW) * 0.5f;
    m_offsetY = (windowHeight - renderedH) * 0.5f;
}

void Renderer2D::beginFrame() {
    // Fondo de barras negras
    SDL_SetRenderDrawColor(m_renderer, 8, 6, 16, 255);
    SDL_RenderClear(m_renderer);

    // Fondo del área de juego (Espacio profundo cósmico)
    SDL_Rect gameRect = {
        (int)m_offsetX,
        (int)m_offsetY,
        (int)(m_virtualWidth * m_scale),
        (int)(m_virtualHeight * m_scale)
    };
    SDL_SetRenderDrawColor(m_renderer, 15, 12, 30, 255);
    SDL_RenderFillRect(m_renderer, &gameRect);
}

void Renderer2D::endFrame() {
    SDL_RenderPresent(m_renderer);
}

void Renderer2D::drawTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint) {
    if (!tex.isValid()) return;

    SDL_Rect dstRect;
    dstRect.w = (int)std::round(size.x * m_scale);
    dstRect.h = (int)std::round(size.y * m_scale);
    dstRect.x = (int)std::round(m_offsetX + (center.x * m_scale) - (dstRect.w * 0.5f));
    dstRect.y = (int)std::round(m_offsetY + (center.y * m_scale) - (dstRect.h * 0.5f));

    SDL_Texture* raw = tex.getRaw();
    SDL_SetTextureColorMod(raw, tint.r, tint.g, tint.b);
    SDL_SetTextureAlphaMod(raw, tint.a);

    SDL_RenderCopyEx(m_renderer, raw, nullptr, &dstRect, (double)angleDeg, nullptr, SDL_FLIP_NONE);
}

void Renderer2D::drawJellyTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint, float squashX, float squashY) {
    Vec2 deformedSize;
    deformedSize.x = size.x * (1.0f + squashX);
    deformedSize.y = size.y * (1.0f - squashY);
    drawTexture(tex, center, deformedSize, angleDeg, tint);
}

void Renderer2D::drawCircle(Vec2 center, float radius, Color color, bool filled) {
    SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);

    int cx = (int)std::round(m_offsetX + center.x * m_scale);
    int cy = (int)std::round(m_offsetY + center.y * m_scale);
    int r  = (int)std::round(radius * m_scale);

    int x = r;
    int y = 0;
    int err = 0;

    while (x >= y) {
        if (filled) {
            SDL_RenderDrawLine(m_renderer, cx - x, cy + y, cx + x, cy + y);
            SDL_RenderDrawLine(m_renderer, cx - y, cy + x, cx + y, cy + x);
            SDL_RenderDrawLine(m_renderer, cx - x, cy - y, cx + x, cy - y);
            SDL_RenderDrawLine(m_renderer, cx - y, cy - x, cx + y, cy - x);
        } else {
            SDL_RenderDrawPoint(m_renderer, cx + x, cy + y);
            SDL_RenderDrawPoint(m_renderer, cx + y, cy + x);
            SDL_RenderDrawPoint(m_renderer, cx - y, cy + x);
            SDL_RenderDrawPoint(m_renderer, cx - x, cy + y);
            SDL_RenderDrawPoint(m_renderer, cx - x, cy - y);
            SDL_RenderDrawPoint(m_renderer, cx - y, cy - x);
            SDL_RenderDrawPoint(m_renderer, cx + y, cy - x);
            SDL_RenderDrawPoint(m_renderer, cx + x, cy - y);
        }

        if (err <= 0) {
            y += 1;
            err += 2 * y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}

void Renderer2D::drawRect(const Rect& rect, Color color, bool filled) {
    SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
    SDL_Rect r;
    r.x = (int)std::round(m_offsetX + rect.x * m_scale);
    r.y = (int)std::round(m_offsetY + rect.y * m_scale);
    r.w = (int)std::round(rect.w * m_scale);
    r.h = (int)std::round(rect.h * m_scale);

    if (filled) {
        SDL_RenderFillRect(m_renderer, &r);
    } else {
        SDL_RenderDrawRect(m_renderer, &r);
    }
}

void Renderer2D::drawLine(Vec2 a, Vec2 b, Color color) {
    SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
    int x1 = (int)std::round(m_offsetX + a.x * m_scale);
    int y1 = (int)std::round(m_offsetY + a.y * m_scale);
    int x2 = (int)std::round(m_offsetX + b.x * m_scale);
    int y2 = (int)std::round(m_offsetY + b.y * m_scale);
    SDL_RenderDrawLine(m_renderer, x1, y1, x2, y2);
}

Vec2 Renderer2D::screenToVirtual(int screenX, int screenY) const {
    if (m_scale <= 0.0001f) return Vec2(0, 0);
    float vx = (screenX - m_offsetX) / m_scale;
    float vy = (screenY - m_offsetY) / m_scale;
    return Vec2(vx, vy);
}

Vec2 Renderer2D::virtualToScreen(Vec2 virtualPos) const {
    float sx = m_offsetX + virtualPos.x * m_scale;
    float sy = m_offsetY + virtualPos.y * m_scale;
    return Vec2(sx, sy);
}

} // namespace Engine

