#pragma once
#include <array>
#include <string>
#include "GemType.hpp"

namespace Glassy {

struct GameConfig {
    // Dimensiones de pantalla virtual (9:16 vertical)
    static constexpr int VIRTUAL_WIDTH  = 576;
    static constexpr int VIRTUAL_HEIGHT = 1024;

    // Escala del mundo físico: cuántos píxeles corresponden a 1 metro en Box2D
    static constexpr float PIXELS_PER_METER = 100.0f;
    static constexpr float METERS_PER_PIXEL = 1.0f / PIXELS_PER_METER;

    // Tiempos y balance del juego (coincide al 100% con GameConfig.cs)
    static constexpr float SPAWN_INTERVAL        = 0.12f; // Cascada rápida de perlas
    static constexpr float INITIAL_DELAY         = 0.8f;  // Retardo inicial
    static constexpr float GAME_OVER_GRACE_SECS  = 1.5f;  // Segundos en zona de peligro
    static constexpr float COMBO_TIME_LIMIT      = 3.0f;  // Límite de racha de combo
    static constexpr float PLAYER_MASS_BONUS     = 1.5f;  // Bono al agarrar con el dedo
    static constexpr float HUMAN_INTERACTION_TIMEOUT = 2.0f; // 2 segundos tras soltar
    static constexpr float STONE_BLAST_RADIUS    = 1.8f;  // Radio de onda expansiva (metros)

    // Valores en puntos por GemType
    static constexpr std::array<int, 10> GemScoreValues = {
        0,   // [0] Pearl
        1,   // [1] Emerald
        2,   // [2] Amethyst
        4,   // [3] Topaz
        8,   // [4] GreenRuby
        16,  // [5] Sapphire
        32,  // [6] RedRuby
        64,  // [7] Diamond
        20,  // [8] Quartz
        30   // [9] Stone
    };

    // Masas base por GemType
    static constexpr std::array<float, 10> GemBaseMasses = {
        0.1f, // [0] Pearl
        1.0f, // [1] Emerald
        1.2f, // [2] Amethyst
        1.6f, // [3] Topaz
        2.2f, // [4] GreenRuby
        3.0f, // [5] Sapphire
        4.0f, // [6] RedRuby
        0.1f, // [7] Diamond
        1.0f, // [8] Quartz
        4.5f  // [9] Stone
    };

    // Radios de colisión en metros (para Box2D) - Reducidos un 25% (excepto Pearl)
    static constexpr std::array<float, 10> GemRadii = {
        0.20f,  // Pearl (iniciador, intacto)
        0.21f,  // Emerald (-25% de 0.28f)
        0.255f, // Amethyst (-25% de 0.34f)
        0.30f,  // Topaz (-25% de 0.40f)
        0.35f,  // GreenRuby (-25% de 0.47f)
        0.405f, // Sapphire (-25% de 0.54f)
        0.465f, // RedRuby (-25% de 0.62f)
        0.495f, // Diamond (-25% de 0.66f)
        0.27f,  // Quartz (-25% de 0.36f)
        0.36f   // Stone (-25% de 0.48f)
    };

    // Escalas de renderizado visual para que las siluetas coincidan exactamente con el hitbox de Box2D
    static constexpr std::array<float, 10> GemVisualScales = {
        1.34f, // Pearl
        1.48f, // Emerald
        1.30f, // Amethyst
        1.28f, // Topaz
        1.58f, // GreenRuby
        1.33f, // Sapphire
        1.70f, // RedRuby
        1.28f, // Diamond
        1.43f, // Quartz
        1.44f  // Stone
    };

    // Archivos de texturas
    static inline const std::string GemTextureFiles[10] = {
        "assets/sprites/perla.png",
        "assets/sprites/esmeralda.png",
        "assets/sprites/amatista.png",
        "assets/sprites/topacio.png",
        "assets/sprites/peridoto.png",
        "assets/sprites/zafiro.png",
        "assets/sprites/rubi.png",
        "assets/sprites/diamante.png",
        "assets/sprites/cuarzo.png",
        "assets/sprites/piedra.png"
    };

    static inline const std::string FlaskTextureFile = "assets/sprites/frasco.png";
    static inline const std::string BackgroundTextureFile = "assets/sprites/fondo.jpg";
};

} // namespace Glassy

