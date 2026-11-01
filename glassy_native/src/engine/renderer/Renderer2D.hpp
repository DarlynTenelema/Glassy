#pragma once
#include <SDL2/SDL.h>
#include "Texture.hpp"
#include "../core/Math.hpp"

namespace Engine {

/// Modos de layout responsivo según la relación de aspecto de la pantalla
enum class ScreenLayoutMode {
    PhonePortrait,          // aspect < 0.65 (9:16, 9:20 teléfono vertical estrecho)
    TabletPortraitSquare,   // 0.65 <= aspect < 1.0 (iPad 3:4, OnePlus 5:7, Plegables verticales)
    TabletLandscapeSquare,  // 1.0 <= aspect < 1.45 (iPad 4:3, OnePlus 7:5 horizontal semi-cuadrado)
    LandscapeWidescreen     // aspect >= 1.45 (Android 16:10, PC 16:9 panorámico)
};

/// Metadatos y rectángulos de anclaje de UI para pantallas de tablets y computadoras
struct ResponsiveLayout {
    ScreenLayoutMode mode = ScreenLayoutMode::PhonePortrait;
    float aspectRatio = 0.5625f; // windowWidth / windowHeight

    int windowWidth = 576;
    int windowHeight = 1024;

    // Área en pantalla donde se proyecta el matraz y la física
    Rect gameRect;

    // Zonas de anclaje para la UI adaptativa (en píxeles reales de ventana)
    Rect leftWing;     // Espacio a la izquierda del frasco (misiones/stats en tablets y PC)
    Rect rightWing;    // Espacio a la derecha del frasco (códice/combos en tablets y PC)
    Rect topBar;       // Barra superior
    Rect bottomDock;   // Dock inferior (en teléfono vertical o tablet portrait estrecha)

    bool hasSideWings() const {
        return (mode == ScreenLayoutMode::TabletPortraitSquare && leftWing.w >= 70.0f) ||
               mode == ScreenLayoutMode::TabletLandscapeSquare ||
               mode == ScreenLayoutMode::LandscapeWidescreen;
    }

    bool isLandscape() const {
        return mode == ScreenLayoutMode::TabletLandscapeSquare ||
               mode == ScreenLayoutMode::LandscapeWidescreen;
    }
};

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

    // Dibujo en coordenadas virtuales del juego (576 x 1024)
    void drawTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg = 0.0f, Color tint = Color::White());
    void drawJellyTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg, Color tint, float squashX, float squashY);

    void drawCircle(Vec2 center, float radius, Color color, bool filled = false);
    void drawRect(const Rect& rect, Color color, bool filled = false);
    void drawLine(Vec2 a, Vec2 b, Color color);

    // Dibujo de fondo inmersivo (cubre el 100% de la ventana en modo Aspect-Fill sin barras negras)
    void drawFullscreenBackground(const Texture& tex);

    // Dibujo en coordenadas de pantalla directas (para UI de tablets, PC y botones)
    void drawScreenRect(const Rect& rect, Color color, bool filled = true);
    void drawGlassPanel(const Rect& rect, Color bgColor = Color(14, 11, 26, 215), Color borderColor = Color(90, 140, 255, 110));
    void drawScreenTexture(const Texture& tex, Vec2 center, Vec2 size, float angleDeg = 0.0f, Color tint = Color::White());

    Vec2 screenToVirtual(int screenX, int screenY) const;
    Vec2 virtualToScreen(Vec2 virtualPos) const;

    SDL_Renderer* getRaw() const { return m_renderer; }
    int getVirtualWidth() const { return m_virtualWidth; }
    int getVirtualHeight() const { return m_virtualHeight; }
    float getViewportScale() const { return m_scale; }
    int getWindowWidth() const { return m_windowWidth; }
    int getWindowHeight() const { return m_windowHeight; }

    const ResponsiveLayout& getLayout() const { return m_layout; }

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

    ResponsiveLayout m_layout;
};

} // namespace Engine

