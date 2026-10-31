#pragma once
#include <SDL2/SDL.h>
#include <memory>
#include "../../game/GameWorld.hpp"

namespace Engine {

class Application {
public:
    Application();
    ~Application();

    bool init(const char* title, int width, int height);
    void run();
    void quit();

private:
    void processEvents();
    void update(float dt);
    void render();

    SDL_Window* m_window = nullptr;
    SDL_Renderer* m_renderer = nullptr;
    bool m_isRunning = false;

    int m_windowWidth = 576;
    int m_windowHeight = 1024;

    std::unique_ptr<Glassy::GameWorld> m_gameWorld;
};

} // namespace Engine

