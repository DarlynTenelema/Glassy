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

    float aspect = (float)windowWidth / (float)windowHeight;
    m_layout.windowWidth = windowWidth;
    m_layout.windowHeight = windowHeight;
    m_layout.aspectRatio = aspect;

    // Clasificación del factor de forma de pantalla
    if (aspect < 0.65f) {
        m_layout.mode = ScreenLayoutMode::PhonePortrait;
    } else if (aspect < 1.0f) {
        m_layout.mode = ScreenLayoutMode::TabletPortraitSquare;
    } else if (aspect < 1.45f) {
        m_layout.mode = ScreenLayoutMode::TabletLandscapeSquare;
    } else {
        m_layout.mode = ScreenLayoutMode::LandscapeWidescreen;
    }

    constexpr float flaskVisibleW = 503.4f;
    constexpr float flaskVisibleH = 850.8f;
    constexpr float flaskMouthY = 28.0f;

    if (m_layout.mode == ScreenLayoutMode::PhonePortrait) {
        // Modo Teléfono Vertical (9:16, 9:20): frasco centrado, dock inferior activo
        float topReserved = (windowHeight < 700) ? 60.0f : ((windowHeight < 900) ? 70.0f : 80.0f);
        float bottomReserved = (windowHeight < 700) ? 90.0f : ((windowHeight < 900) ? 110.0f : 125.0f);
        float sideMargin = (windowWidth < 450) ? 10.0f : ((windowWidth < 700) ? 16.0f : 24.0f);

        float maxScaleByWidth = ((float)windowWidth - 2.0f * sideMargin) / flaskVisibleW;
        float availH = std::max(120.0f, (float)windowHeight - topReserved - bottomReserved);
        float maxScaleByHeight = availH / flaskVisibleH;

        m_scale = std::min(maxScaleByWidth, maxScaleByHeight);

        float renderedW = (float)m_virtualWidth * m_scale;
        m_offsetX = ((float)windowWidth - renderedW) * 0.5f;

        float flaskHeightOnScreen = flaskVisibleH * m_scale;
        float extraVerticalSpace = availH - flaskHeightOnScreen;
        m_offsetY = (topReserved + std::max(0.0f, extraVerticalSpace * 0.35f)) - (flaskMouthY * m_scale);

        m_layout.leftWing = { 0.0f, 0.0f, 0.0f, 0.0f };
        m_layout.rightWing = { 0.0f, 0.0f, 0.0f, 0.0f };
        m_layout.topBar = { 0.0f, 0.0f, (float)windowWidth, topReserved };
        m_layout.bottomDock = { 10.0f, (float)windowHeight - bottomReserved + 4.0f, (float)windowWidth - 20.0f, bottomReserved - 8.0f };
    }
    else if (m_layout.mode == ScreenLayoutMode::TabletPortraitSquare) {
        // Modo Tablet Vertical Semi-Cuadrada (iPad 3:4, OnePlus 5:7, Plegables)
        // El frasco se ubica al centro y se liberan las alas laterales para UI táctil de pulgares
        float topReserved = (windowHeight < 800) ? 55.0f : 70.0f;
        float bottomReserved = (windowHeight < 800) ? 35.0f : 45.0f;
        float availH = std::max(120.0f, (float)windowHeight - topReserved - bottomReserved);

        // El frasco ocupa hasta el 62% del ancho para dejar columnas laterales cómodas
        float maxScaleByWidth = ((float)windowWidth * 0.62f) / flaskVisibleW;
        float maxScaleByHeight = availH / flaskVisibleH;
        m_scale = std::min(maxScaleByWidth, maxScaleByHeight);

        float renderedW = (float)m_virtualWidth * m_scale;
        m_offsetX = ((float)windowWidth - renderedW) * 0.5f;

        float flaskHeightOnScreen = flaskVisibleH * m_scale;
        float extraVerticalSpace = availH - flaskHeightOnScreen;
        m_offsetY = (topReserved + std::max(0.0f, extraVerticalSpace * 0.35f)) - (flaskMouthY * m_scale);

        float renderedFlaskW = flaskVisibleW * m_scale;
        float flaskLeftScreen = ((float)windowWidth - renderedFlaskW) * 0.5f;
        float flaskRightScreen = ((float)windowWidth + renderedFlaskW) * 0.5f;

        float wingMargin = 12.0f;
        float wingGap = 10.0f;

        float leftW = std::max(0.0f, flaskLeftScreen - wingMargin - wingGap);
        m_layout.leftWing = { wingMargin, topReserved, leftW, (float)windowHeight - topReserved - bottomReserved };

        float rightX = flaskRightScreen + wingGap;
        float rightW = std::max(0.0f, (float)windowWidth - rightX - wingMargin);
        m_layout.rightWing = { rightX, topReserved, rightW, (float)windowHeight - topReserved - bottomReserved };

        m_layout.topBar = { 0.0f, 0.0f, (float)windowWidth, topReserved };
        m_layout.bottomDock = { 0.0f, 0.0f, 0.0f, 0.0f };
    }
    else {
        // Modos Horizontales: Tablet Horizontal (iPad 4:3, OnePlus 7:5) y Panorámico (Android 16:10, PC 16:9)
        float topReserved = 45.0f;
        float bottomReserved = 25.0f;
        float availH = std::max(120.0f, (float)windowHeight - topReserved - bottomReserved);

        // Maximizar altura del frasco, limitando el ancho al 44% de pantalla
        float maxScaleByHeight = availH / flaskVisibleH;
        float maxScaleByWidth = ((float)windowWidth * 0.44f) / flaskVisibleW;
        m_scale = std::min(maxScaleByHeight, maxScaleByWidth);

        float renderedW = (float)m_virtualWidth * m_scale;
        m_offsetX = ((float)windowWidth - renderedW) * 0.5f;

        float flaskHeightOnScreen = flaskVisibleH * m_scale;
        float extraVerticalSpace = availH - flaskHeightOnScreen;
        m_offsetY = (topReserved + std::max(0.0f, extraVerticalSpace * 0.35f)) - (flaskMouthY * m_scale);

        float renderedFlaskW = flaskVisibleW * m_scale;
        float flaskLeftScreen = ((float)windowWidth - renderedFlaskW) * 0.5f;
        float flaskRightScreen = ((float)windowWidth + renderedFlaskW) * 0.5f;

        float wingMargin = 16.0f;
        float wingGap = 14.0f;

        float leftW = std::max(0.0f, flaskLeftScreen - wingMargin - wingGap);
        m_layout.leftWing = { wingMargin, 16.0f, leftW, (float)windowHeight - 32.0f };

        float rightX = flaskRightScreen + wingGap;
        float rightW = std::max(0.0f, (float)windowWidth - rightX - wingMargin);
        m_layout.rightWing = { rightX, 16.0f, rightW, (float)windowHeight - 32.0f };

        m_layout.topBar = { flaskLeftScreen, 0.0f, renderedFlaskW, topReserved };
        m_layout.bottomDock = { 0.0f, 0.0f, 0.0f, 0.0f };
    }

    m_layout.gameRect = { m_offsetX, m_offsetY, (float)m_virtualWidth * m_scale, (float)m_virtualHeight * m_scale };
}

void Renderer2D::beginFrame() {
    // Fondo base cósmico oscuro de seguridad
    SDL_SetRenderDrawColor(m_renderer, 10, 8, 20, 255);
    SDL_RenderClear(m_renderer);
}

void Renderer2D::endFrame() {
    SDL_RenderPresent(m_renderer);
}

void Renderer2D::drawFullscreenBackground(const Texture& tex) {
    if (!tex.isValid() || !m_renderer) return;

    float imgW = (float)tex.getWidth();
    float imgH = (float)tex.getHeight();
    if (imgW <= 0.0f || imgH <= 0.0f) return;

    // Aspect-Fill / Cover: cubre el 100% de la ventana sin bandas negras ni deformación
    float scaleW = (float)m_windowWidth / imgW;
    float scaleH = (float)m_windowHeight / imgH;
    float coverScale = std::max(scaleW, scaleH);

    int dstW = (int)std::round(imgW * coverScale);
    int dstH = (int)std::round(imgH * coverScale);
    int dstX = (m_windowWidth - dstW) / 2;
    int dstY = (m_windowHeight - dstH) / 2;

    SDL_Rect dstRect = { dstX, dstY, dstW, dstH };
    SDL_RenderCopy(m_renderer, tex.getRaw(), nullptr, &dstRect);
}

void Renderer2D::drawScreenRect(const Rect& rect, Color color, bool filled) {
    SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
    SDL_Rect r = {
        (int)std::round(rect.x),
        (int)std::round(rect.y),
        (int)std::round(rect.w),
        (int)std::round(rect.h)
    };
    if (filled) {
        SDL_RenderFillRect(m_renderer, &r);
    } else {
        SDL_RenderDrawRect(m_renderer, &r);
    }
}

void Renderer2D::drawGlassPanel(const Rect& rect, Color bgColor, Color borderColor) {
    drawScreenRect(rect, bgColor, true);
    if (borderColor.a > 0) {
        drawScreenRect(rect, borderColor, false);
    }
}

void Renderer2D::drawScreenTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint) {
    if (!tex.isValid() || !m_renderer) return;

    SDL_Rect dstRect;
    dstRect.w = (int)std::round(size.x);
    dstRect.h = (int)std::round(size.y);
    dstRect.x = (int)std::round(center.x - (dstRect.w * 0.5f));
    dstRect.y = (int)std::round(center.y - (dstRect.h * 0.5f));

    SDL_Texture* raw = tex.getRaw();
    SDL_SetTextureBlendMode(raw, SDL_BLENDMODE_BLEND);
    SDL_SetTextureColorMod(raw, tint.r, tint.g, tint.b);
    SDL_SetTextureAlphaMod(raw, tint.a);

    SDL_RenderCopyEx(m_renderer, raw, nullptr, &dstRect, (double)angleDeg, nullptr, SDL_FLIP_NONE);
}

void Renderer2D::drawTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint) {
    if (!tex.isValid()) return;

    SDL_Rect dstRect;
    dstRect.w = (int)std::round(size.x * m_scale);
    dstRect.h = (int)std::round(size.y * m_scale);
    dstRect.x = (int)std::round(m_offsetX + (center.x * m_scale) - (dstRect.w * 0.5f));
    dstRect.y = (int)std::round(m_offsetY + (center.y * m_scale) - (dstRect.h * 0.5f));

    SDL_Texture* raw = tex.getRaw();
    SDL_SetTextureBlendMode(raw, SDL_BLENDMODE_BLEND);
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
    SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
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
    SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
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
    SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
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

