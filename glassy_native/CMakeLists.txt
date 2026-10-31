cmake_minimum_required(VERSION 3.16)
project(GlassyNative C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Opciones de optimización para rendimiento extremo en gama baja
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall -Wextra -Wno-unused-parameter")
elseif (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /O2 /W3")
endif()

# ------------------------------------------------------------------------------
# 1. Box2D (Librería estática ultra ligera)
# ------------------------------------------------------------------------------
file(GLOB_RECURSE BOX2D_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/box2d/src/*.cpp"
)

add_library(box2d STATIC ${BOX2D_SOURCES})
target_include_directories(box2d PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/box2d/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/box2d/src"
)

# ------------------------------------------------------------------------------
# 2. Fuentes del Motor y Juego Glassy
# ------------------------------------------------------------------------------
file(GLOB_RECURSE ENGINE_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/engine/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/game/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
)

add_executable(GlassyNative ${ENGINE_SOURCES})

# Rutas de Includes
target_include_directories(GlassyNative PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/box2d/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL2/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/stb"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/miniaudio"
)

# Enlace de librerías
target_link_directories(GlassyNative PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL2/lib"
)

target_link_libraries(GlassyNative PRIVATE
    box2d
    SDL2
)

# Dependencias nativas del sistema operativo en Windows
if (WIN32)
    target_link_libraries(GlassyNative PRIVATE
        mingw32
        opengl32
        winmm
        imm32
        ole32
        oleaut32
        version
        uuid
    )
endif()

# ------------------------------------------------------------------------------
# 3. Post-Build: Copiar DLLs y Assets a la carpeta del binario
# ------------------------------------------------------------------------------
add_custom_command(TARGET GlassyNative POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL2/bin/SDL2.dll"
        $<TARGET_FILE_DIR:GlassyNative>
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_CURRENT_SOURCE_DIR}/assets"
        "$<TARGET_FILE_DIR:GlassyNative>/assets"
    COMMENT "Copiando SDL2.dll y carpeta de assets al directorio de salida..."
)

