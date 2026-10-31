#pragma once
#include <cstdint>

namespace Glassy {

enum class GemType : int32_t {
    Pearl     = 0,  //  0 pts — Perla (cascada continua, se fusionan solas)
    Emerald   = 1,  //  1 pt  — Esmeralda
    Amethyst  = 2,  //  2 pts — Amatista
    Topaz     = 3,  //  4 pts — Topacio
    GreenRuby = 4,  //  8 pts — Rubí verde (Peridoto)
    Sapphire  = 5,  // 16 pts — Zafiro
    RedRuby   = 6,  // 32 pts — Rubí rojo
    Diamond   = 7,  // 64 pts — Diamante (explota inmediatamente)
    Quartz    = 8,  // 20 pts — Cuarzo (limpiador: desaparece al fusionarse)
    Stone     = 9,  // 30 pts — Piedra (obstáculo pesado: destruido por ondas expansivas)
    Count     = 10
};

} // namespace Glassy

