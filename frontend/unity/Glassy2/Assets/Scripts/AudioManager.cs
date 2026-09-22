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

    [Header("SFX Fusión")]
    [SerializeField] private AudioClip gemFusionClip;

    [Header("SFX Individuales")]
    [SerializeField] private AudioClip startGameClip;
    [SerializeField] private AudioClip diamondFoundClip;   // Suena al obtener diamante
    [SerializeField] private AudioClip gameOverClip;

    // Estado interno de audio (sincronizado con SettingsManager)
    private bool _volumeOn  = true;
    private bool _effectsOn = true;

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        // Cargar preferencias guardadas localmente
        _volumeOn  = PlayerPrefs.GetInt(GameConfig.KeyVolumeOn,  1) == 1;
        _effectsOn = PlayerPrefs.GetInt(GameConfig.KeyEffectsOn, 1) == 1;

        ApplyVolumeSettings();
        PlayMusic();
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
        sfxSource.PlayOneShot(gemFusionClip);
    }

    /// <summary>Toca el sonido al obtener un diamante.</summary>
    public void PlayDiamondSequence()
    {
        if (!_effectsOn || diamondFoundClip == null) return;
        sfxSource.PlayOneShot(diamondFoundClip);
    }

    public void PlayStartGame()
    {
        if (!_effectsOn || startGameClip == null) return;
        sfxSource.PlayOneShot(startGameClip);
    }

    public void PlayGameOver()
    {
        if (!_effectsOn || gameOverClip == null) return;
        // Detener música y tocar game over
        StopMusic();
        sfxSource.PlayOneShot(gameOverClip);
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

    public void SetEffects(bool on)
    {
        _effectsOn = on;
        PlayerPrefs.SetInt(GameConfig.KeyEffectsOn, on ? 1 : 0);
        PlayerPrefs.Save();
    }

    public bool IsVolumeOn  => _volumeOn;
    public bool IsEffectsOn => _effectsOn;

    private void ApplyVolumeSettings()
    {
        if (musicSource == null) return;
        musicSource.volume = _volumeOn ? 0.6f : 0f;
    }
}
