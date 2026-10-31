#define SDL_MAIN_HANDLED
#include "engine/core/Application.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    SDL_SetMainReady();

    std::cout << "=============================================\n";
    std::cout << "   GLASSY ULTRA-LIGHT C/C++ MINI ENGINE      \n";
    std::cout << "   Box2D + SDL2 + miniaudio + STB            \n";
    std::cout << "=============================================\n";

    Engine::Application app;

    // Resolución vertical estándar para mobile / touch / PC (576 x 1024)
    // En pantallas de escritorio de 1080p, 432x768 o 576x1024 se ve perfecto
    if (!app.init("Glassy - Native Edition", 576, 1024)) {
        std::cerr << "[Fatal] No se pudo inicializar la aplicacion.\n";
        return 1;
    }

    app.run();

    return 0;
}

