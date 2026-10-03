using UnityEngine;

/// <summary>
/// AudioManager — Controla toda la música y efectos de sonido del juego.
///
/// SETUP REQUERIDO EN UNITY EDITOR:
/// 1. Crear un GameObject vacío llamado "AudioManager" en la LoginScene.
/// 2. Añadir este script.
/// 3. Añadir dos componentes AudioSource:
///    - MusicSource: Loop = true, PlayOnAwake = false.
///    - SfxSource:   Loop = false, PlayOnAwake = false.
/// 4. Asignar los AudioClips desde /sonidos/ en el Inspector:
///    - backgroundMusicClip → (cualquier música relajante que elijas)
///    - backgroundMusicClip → (cualquier música relajante que elijas)
///    - gemFusionClip       → fusion.mp3
///    - diamondFoundClip    → diamante_encontrado.mp3
///    - gameOverClip        → game_over.mp3
///    - startGameClip       → start_game.mp3
/// </summary>
public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance { get; private set; }

    [Header("Audio Sources")]
    [SerializeField] private AudioSource musicSource;
    [SerializeField] private AudioSource sfxSource;

    [Header("Music")]
    [SerializeField] private AudioClip backgroundMusicClip;
    [Range(0f, 1f)] [SerializeField] private float backgroundMusicVolume = 0.6f;

    [Header("SFX Fusión")]
    [SerializeField] private AudioClip gemFusionClip;
    [Range(0f, 1f)] [SerializeField] private float gemFusionVolume = 1f;

    [Header("SFX Individuales")]
    [SerializeField] private AudioClip startGameClip;
    [Range(0f, 1f)] [SerializeField] private float startGameVolume = 1f;

    [SerializeField] private AudioClip diamondFoundClip;
    [Range(0f, 1f)] [SerializeField] private float diamondFoundVolume = 1f;

    [SerializeField] private AudioClip gameOverClip;
    [Range(0f, 1f)] [SerializeField] private float gameOverVolume = 1f;

    // Estado interno de audio (sincronizado con SettingsManager)
    private bool  _volumeOn    = true;
    private bool  _effectsOn   = true;
    private float _musicVolume = 1f;   // 0.0 – 1.0

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        // Cargar preferencias guardadas localmente
        _volumeOn    = PlayerPrefs.GetInt(GameConfig.KeyVolumeOn,  1) == 1;
        _effectsOn   = PlayerPrefs.GetInt(GameConfig.KeyEffectsOn, 1) == 1;
        _musicVolume = PlayerPrefs.GetFloat("glassy_music_volume", 1f);

        ApplyVolumeSettings();
        PlayMusic();
    }

    // =========================================================================
    // ESCALA MUSICAL (JUICINESS)
    // =========================================================================

    private float _currentPitch = 1f;

    public void IncreasePitch()
    {
        _currentPitch += 0.05f;
        if (_currentPitch > 2.0f) _currentPitch = 2.0f; // Límite máximo de escala
    }

    public void ResetPitch()
    {
        _currentPitch = 1f;
    }

    // =========================================================================
    // MÚSICA
    // =========================================================================

    public void PlayMusic()
    {
        if (musicSource == null || backgroundMusicClip == null) return;
        if (musicSource.isPlaying) return;

        musicSource.clip = backgroundMusicClip;
        musicSource.loop = true;
        if (_volumeOn) musicSource.Play();
    }

    public void StopMusic() => musicSource?.Stop();

    // =========================================================================
    // EFECTOS DE SONIDO
    // =========================================================================

    /// <summary>Toca el sonido de fusión cuando dos gemas se combinan.</summary>
    public void PlayGemMerge(GemType resultType)
    {
        if (!_effectsOn || gemFusionClip == null) return;
        sfxSource.pitch = _currentPitch; // Aplicar la escala musical del combo
        sfxSource.PlayOneShot(gemFusionClip, gemFusionVolume);
    }

    /// <summary>Toca el sonido al obtener un diamante.</summary>
    public void PlayDiamondSequence()
    {
        if (!_effectsOn || diamondFoundClip == null) return;
        sfxSource.pitch = 1f;
        sfxSource.PlayOneShot(diamondFoundClip, diamondFoundVolume);
    }

    public void PlayStartGame()
    {
        if (!_effectsOn || startGameClip == null) return;
        sfxSource.pitch = 1f;
        sfxSource.PlayOneShot(startGameClip, startGameVolume);
    }

    public void PlayGameOver()
    {
        if (!_effectsOn || gameOverClip == null) return;
        // Detener música y tocar game over
        StopMusic();
        sfxSource.pitch = 1f;
        sfxSource.PlayOneShot(gameOverClip, gameOverVolume);
    }

    // =========================================================================
    // CONFIGURACIÓN DE VOLUMEN
    // =========================================================================

    public void SetVolume(bool on)
    {
        _volumeOn = on;
        PlayerPrefs.SetInt(GameConfig.KeyVolumeOn, on ? 1 : 0);
        PlayerPrefs.Save();
        ApplyVolumeSettings();
    }

    /// <summary>Ajusta el volumen de la música del juego (0.0 – 1.0). Llamado desde Flutter vía bridge.</summary>
    public void SetMusicVolume(float volume)
    {
        _musicVolume = Mathf.Clamp01(volume);
        PlayerPrefs.SetFloat("glassy_music_volume", _musicVolume);
        PlayerPrefs.Save();
        ApplyVolumeSettings();
    }

    public void SetEffects(bool on)
    {
        _effectsOn = on;
        PlayerPrefs.SetInt(GameConfig.KeyEffectsOn, on ? 1 : 0);
        PlayerPrefs.Save();
    }

    // Wrappers para recibir mensajes desde Flutter
    public void SetVolumeFromString(string value)
    {
        SetVolume(value.ToLower() == "true");
    }

    public void SetEffectsFromString(string value)
    {
        SetEffects(value.ToLower() == "true");
    }

    public void PlayStartGameFromFlutter(string dummy)
    {
        PlayStartGame();
    }

    public bool IsVolumeOn  => _volumeOn;
    public bool IsEffectsOn => _effectsOn;

    private void ApplyVolumeSettings()
    {
        if (musicSource == null) return;
        // Si el volumen general está activo, aplica el nivel del slider; si no, silencia.
        musicSource.volume = _volumeOn ? _musicVolume * backgroundMusicVolume : 0f;
    }
}
