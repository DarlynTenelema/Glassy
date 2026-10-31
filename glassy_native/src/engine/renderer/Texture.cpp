#include "Texture.hpp"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>

namespace Engine {

Texture::~Texture() {
    destroy();
}

void Texture::destroy() {
    if (m_texture) {
        SDL_DestroyTexture(m_texture);
        m_texture = nullptr;
    }
    m_width = 0;
    m_height = 0;
}

bool Texture::loadFromFile(SDL_Renderer* renderer, const std::string& path) {
    destroy();

    int channels = 0;
    stbi_set_flip_vertically_on_load(false);
    unsigned char* data = stbi_load(path.c_str(), &m_width, &m_height, &channels, 4); // Forzar RGBA
    if (!data) {
        std::cerr << "[Texture] Error al cargar imagen: " << path << " (" << stbi_failure_reason() << ")\n";
        return false;
    }

    SDL_Surface* surface = SDL_CreateRGBSurfaceWithFormatFrom(
        data,
        m_width,
        m_height,
        32,
        m_width * 4,
        SDL_PIXELFORMAT_RGBA32
    );

    if (!surface) {
        std::cerr << "[Texture] Error al crear SDL_Surface: " << SDL_GetError() << "\n";
        stbi_image_free(data);
        return false;
    }

    m_texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    stbi_image_free(data);

    if (!m_texture) {
        std::cerr << "[Texture] Error al crear SDL_Texture: " << SDL_GetError() << "\n";
        return false;
    }

    // Habilitar mezcla alpha por defecto
    SDL_SetTextureBlendMode(m_texture, SDL_BLENDMODE_BLEND);
    return true;
}

} // namespace Engine

