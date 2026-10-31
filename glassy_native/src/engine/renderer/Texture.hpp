#pragma once
#include <string>
#include <SDL2/SDL.h>

namespace Engine {

class Texture {
public:
    Texture() = default;
    ~Texture();

    bool loadFromFile(SDL_Renderer* renderer, const std::string& path);
    void destroy();

    SDL_Texture* getRaw() const { return m_texture; }
    int getWidth() const { return m_width; }
    int getHeight() const { return m_height; }
    bool isValid() const { return m_texture != nullptr; }

private:
    SDL_Texture* m_texture = nullptr;
    int m_width = 0;
    int m_height = 0;
};

} // namespace Engine

