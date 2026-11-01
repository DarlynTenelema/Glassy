#include "Application.hpp"
#include "Time.hpp"
#include "../renderer/Renderer2D.hpp"
#include "../input/InputManager.hpp"
#include "../audio/AudioManager.hpp"
#include <iostream>

namespace Engine {

Application::Application() {
}

Application::~Application() {
    quit();
}

bool Application::init(const char* title, int width, int height) {
    m_windowWidth = width;
    m_windowHeight = height;

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS) != 0) {
        std::cerr << "[Application] Error al inicializar SDL2: " << SDL_GetError() << "\n";
        return false;
    }

    // Permitir redimensionar y mantener relación de aspecto vertical 9:16
    m_window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        width,
        height,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI
    );

    if (!m_window) {
        std::cerr << "[Application] Error creando ventana: " << SDL_GetError() << "\n";
        return false;
    }

    // Renderizador acelerado por hardware con VSync
    m_renderer = SDL_CreateRenderer(
        m_window,
        -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
    );

    if (!m_renderer) {
        std::cerr << "[Application] Fallback a renderizador por software: " << SDL_GetError() << "\n";
        m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_SOFTWARE);
    }

    if (!m_renderer) {
        std::cerr << "[Application] Error fatal creando renderizador: " << SDL_GetError() << "\n";
        return false;
    }

    // Inicializar subsistemas del motor
    Renderer2D::get().init(m_renderer, 576, 1024);
    Renderer2D::get().updateViewport(width, height);

    if (!AudioManager::get().init()) {
        std::cerr << "[Application] Advertencia: Audio no disponible.\n";
    }

    // Inicializar lógica del juego Glassy
    m_gameWorld = std::make_unique<Glassy::GameWorld>();
    if (!m_gameWorld->init(m_renderer)) {
        std::cerr << "[Application] Error inicializando mundo de juego.\n";
        return false;
    }

    m_isRunning = true;
    std::cout << "[Application] Mini-Motor y Glassy inicializados con exito!\n";
    return true;
}

void Application::processEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            m_isRunning = false;
        }
        else if (event.type == SDL_WINDOWEVENT) {
            if (event.window.event == SDL_WINDOWEVENT_RESIZED ||
                event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
                m_windowWidth = event.window.data1;
                m_windowHeight = event.window.data2;
                Renderer2D::get().updateViewport(m_windowWidth, m_windowHeight);
            }
        }
        else if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                m_isRunning = false;
            }
            else if (event.key.keysym.sym == SDLK_SPACE) {
                if (m_gameWorld) m_gameWorld->restart();
            }
            else if (event.key.keysym.sym == SDLK_p) {
                if (m_gameWorld) m_gameWorld->togglePause();
            }
            // Teclas de prueba rápida para simular tablets y teléfonos al vuelo
            else if (event.key.keysym.sym == SDLK_F1) {
                // F1: Teléfono clásico vertical (9:16)
                SDL_SetWindowSize(m_window, 450, 800);
            }
            else if (event.key.keysym.sym == SDLK_F2) {
                // F2: Tablet semi-cuadrada vertical (iPad 3:4)
                SDL_SetWindowSize(m_window, 768, 1024);
            }
            else if (event.key.keysym.sym == SDLK_F3) {
                // F3: Tablet semi-cuadrada vertical (OnePlus Pad / Oppo 5:7)
                SDL_SetWindowSize(m_window, 700, 980);
            }
            else if (event.key.keysym.sym == SDLK_F4) {
                // F4: Tablet semi-cuadrada horizontal (iPad 4:3)
                SDL_SetWindowSize(m_window, 1024, 768);
            }
            else if (event.key.keysym.sym == SDLK_F5) {
                // F5: Tablet panorámica horizontal (Samsung Tab 16:10 / Monitor PC)
                SDL_SetWindowSize(m_window, 1280, 800);
            }
        }

        // Reenviar al gestor unificado de entrada táctil y ratón
        InputManager::get().handleEvent(event, m_windowWidth, m_windowHeight);
    }
}

void Application::update(float dt) {
    InputManager::get().update(dt);
    if (m_gameWorld) {
        m_gameWorld->update(dt);
    }
}

void Application::render() {
    Renderer2D::get().beginFrame();

    if (m_gameWorld) {
        m_gameWorld->render();
    }

    Renderer2D::get().endFrame();
}

void Application::run() {
    // Fixed timestep game loop para físicas deterministas a 60 Hz
    constexpr float fixedTimeStep = 1.0f / 60.0f;
    float accumulator = 0.0f;

    while (m_isRunning) {
        Time::update();
        accumulator += Time::deltaTime;

        processEvents();

        // Evitar "espiral de la muerte" si hay congelamiento momentáneo
        if (accumulator > 0.2f) accumulator = 0.2f;

        while (accumulator >= fixedTimeStep) {
            update(fixedTimeStep);
            accumulator -= fixedTimeStep;
        }

        render();
    }
}

void Application::quit() {
    if (m_gameWorld) {
        m_gameWorld.reset();
    }

    AudioManager::get().shutdown();

    if (m_renderer) {
        SDL_DestroyRenderer(m_renderer);
        m_renderer = nullptr;
    }

    if (m_window) {
        SDL_DestroyWindow(m_window);
        m_window = nullptr;
    }

    SDL_Quit();
}

} // namespace Engine

