#pragma once
#include <chrono>

namespace Engine {

class Time {
public:
    static float deltaTime;
    static float unscaledDeltaTime;
    static float timeScale;
    static float totalTime;

    static void update() {
        static auto lastTime = std::chrono::high_resolution_clock::now();
        auto currentTime = std::chrono::high_resolution_clock::now();

        std::chrono::duration<float> elapsed = currentTime - lastTime;
        lastTime = currentTime;

        unscaledDeltaTime = elapsed.count();
        if (unscaledDeltaTime > 0.1f) unscaledDeltaTime = 0.1f; // Evitar espinas de lag al mover la ventana
        deltaTime = unscaledDeltaTime * timeScale;
        totalTime += deltaTime;
    }
};

inline float Time::deltaTime = 0.01666f;
inline float Time::unscaledDeltaTime = 0.01666f;
inline float Time::timeScale = 1.0f;
inline float Time::totalTime = 0.0f;

} // namespace Engine

