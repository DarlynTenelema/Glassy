#pragma once
#include <string>
#include <unordered_map>

struct ma_engine;
struct ma_sound;

namespace Engine {

class AudioManager {
public:
    static AudioManager& get() {
        static AudioManager instance;
        return instance;
    }

    bool init();
    void shutdown();

    void playMusic(const std::string& path, bool loop = true, float volume = 0.8f);
    void stopMusic();

    void playSound(const std::string& path, float pitch = 1.0f, float volume = 1.0f);

    void setMusicVolume(float volume);
    void setSoundVolume(float volume);

private:
    AudioManager() = default;
    ~AudioManager();

    ma_engine* m_engine = nullptr;
    ma_sound*  m_bgMusic = nullptr;
    float m_musicVolume = 0.8f;
    float m_soundVolume = 1.0f;
    bool m_initialized = false;
};

} // namespace Engine

