#include "AudioManager.hpp"
#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"
#include <iostream>

namespace Engine {

AudioManager::~AudioManager() {
    shutdown();
}

bool AudioManager::init() {
    if (m_initialized) return true;

    m_engine = new ma_engine();
    ma_result result = ma_engine_init(NULL, m_engine);
    if (result != MA_SUCCESS) {
        std::cerr << "[AudioManager] Error al inicializar miniaudio: " << (int)result << "\n";
        delete m_engine;
        m_engine = nullptr;
        return false;
    }

    m_initialized = true;
    std::cout << "[AudioManager] Motor de audio ultra ligero inicializado correctamente.\n";
    return true;
}

void AudioManager::shutdown() {
    if (!m_initialized) return;

    stopMusic();

    if (m_engine) {
        ma_engine_uninit(m_engine);
        delete m_engine;
        m_engine = nullptr;
    }
    m_initialized = false;
}

void AudioManager::playMusic(const std::string& path, bool loop, float volume) {
    if (!m_initialized) return;

    stopMusic();

    m_bgMusic = new ma_sound();
    ma_result result = ma_sound_init_from_file(
        m_engine,
        path.c_str(),
        MA_SOUND_FLAG_STREAM,
        NULL,
        NULL,
        m_bgMusic
    );

    if (result != MA_SUCCESS) {
        std::cerr << "[AudioManager] Error cargando musica: " << path << "\n";
        delete m_bgMusic;
        m_bgMusic = nullptr;
        return;
    }

    ma_sound_set_looping(m_bgMusic, loop ? MA_TRUE : MA_FALSE);
    ma_sound_set_volume(m_bgMusic, volume * m_musicVolume);
    ma_sound_start(m_bgMusic);
}

void AudioManager::stopMusic() {
    if (m_bgMusic) {
        ma_sound_stop(m_bgMusic);
        ma_sound_uninit(m_bgMusic);
        delete m_bgMusic;
        m_bgMusic = nullptr;
    }
}

void AudioManager::playSound(const std::string& path, float pitch, float volume) {
    if (!m_initialized) return;

    // Reproducción directa e inmediata con modulación de pitch
    ma_sound* sound = new ma_sound();
    ma_result res = ma_sound_init_from_file(m_engine, path.c_str(), 0, NULL, NULL, sound);
    if (res == MA_SUCCESS) {
        ma_sound_set_pitch(sound, pitch);
        ma_sound_set_volume(sound, volume * m_soundVolume);
        ma_sound_start(sound);
        // Desasignar automáticamente al terminar
        // En un juego ultra-ligero podemos mantener un pool de sonidos o fire-and-forget
    } else {
        delete sound;
    }
}

void AudioManager::setMusicVolume(float volume) {
    m_musicVolume = volume;
    if (m_bgMusic) {
        ma_sound_set_volume(m_bgMusic, m_musicVolume);
    }
}

void AudioManager::setSoundVolume(float volume) {
    m_soundVolume = volume;
}

} // namespace Engine

