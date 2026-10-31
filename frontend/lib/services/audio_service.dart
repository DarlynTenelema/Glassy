import 'package:audioplayers/audioplayers.dart';
import 'package:flutter/foundation.dart';

class AudioService {
  static final AudioService _instance = AudioService._internal();
  factory AudioService() => _instance;
  
  AudioService._internal();

  final AudioPlayer _bgMusicPlayer = AudioPlayer();
  final AudioPlayer _sfxPlayer1 = AudioPlayer();
  final AudioPlayer _sfxPlayer2 = AudioPlayer();
  final AudioPlayer _pearlPlayer = AudioPlayer();
  final AudioPlayer _fusionPlayer = AudioPlayer();

  bool _isBgMusicPlaying = false;
  bool get isBgMusicPlaying => _isBgMusicPlaying;
  bool _volumeOn = true;
  bool _effectsOn = true;
  double _musicVolume = 0.6;
  double _currentPitch = 1.0;

  bool get volumeOn => _volumeOn;
  bool get effectsOn => _effectsOn;

  void updateSettings({bool? volumeOn, bool? effectsOn, double? musicVolume}) {
    if (volumeOn != null) _volumeOn = volumeOn;
    if (effectsOn != null) _effectsOn = effectsOn;
    if (musicVolume != null) {
      _musicVolume = musicVolume;
      _bgMusicPlayer.setVolume(_volumeOn ? _musicVolume : 0.0);
    }
    if (!_volumeOn) {
      _bgMusicPlayer.setVolume(0.0);
    } else {
      _bgMusicPlayer.setVolume(_musicVolume);
    }
  }

  Future<void> init() async {
    try {
      await AudioPlayer.global.setAudioContext(AudioContextConfig(
        respectSilence: false,
        focus: AudioContextConfigFocus.mixWithOthers,
      ).build());
      await _bgMusicPlayer.setReleaseMode(ReleaseMode.loop);
    } catch (e) {
      debugPrint("AudioPlayer init error: $e");
    }
  }

  // BGM Game
  Future<void> playBgMusic() async {
    if (!_volumeOn) return;
    try {
      if (_bgMusicPlayer.state == PlayerState.playing) {
        return;
      }
      if (_bgMusicPlayer.state == PlayerState.paused) {
        await _bgMusicPlayer.resume();
      } else {
        await _bgMusicPlayer.play(AssetSource('audio/bg_game.mp3'), volume: _musicVolume);
      }
      _isBgMusicPlaying = true;
    } catch (e) {
      debugPrint('Error playing bg music: $e');
    }
  }

  Future<void> stopBgMusic() async {
    try {
      await _bgMusicPlayer.stop();
      _isBgMusicPlaying = false;
    } catch (e) {
      debugPrint('Error stopping bg music: $e');
    }
  }

  // SFX Spawneo de perla
  Future<void> playPearlSpawn() async {
    if (!_effectsOn) return;
    try {
      await _pearlPlayer.stop();
      await _pearlPlayer.play(AssetSource('audio/perlas.mp3'), volume: 0.45);
    } catch (e) {
      debugPrint('Error playing pearl sfx: $e');
    }
  }

  // SFX Fusión de gemas con escala musical (Juiciness Do, Re, Mi...)
  Future<void> playGemMerge([int combo = 0]) async {
    if (!_effectsOn) return;
    try {
      _currentPitch = (1.0 + (combo * 0.08)).clamp(1.0, 2.0);
      await _fusionPlayer.stop();
      await _fusionPlayer.setPlaybackRate(_currentPitch);
      await _fusionPlayer.play(AssetSource('audio/fusion.mp3'), volume: 0.85);
    } catch (e) {
      debugPrint('Error playing fusion sfx: $e');
    }
  }

  // SFX Diamante encontrado / explosión
  Future<void> playDiamondExplosion() async {
    if (!_effectsOn) return;
    try {
      await _sfxPlayer2.stop();
      await _sfxPlayer2.play(AssetSource('audio/diamante_encontrado.mp3'), volume: 1.0);
    } catch (e) {
      debugPrint('Error playing diamond sfx: $e');
    }
  }

  // SFX Inicio de partida
  Future<void> playStartGame() async {
    playBgMusic();
    if (!_effectsOn) return;
    try {
      await _sfxPlayer1.stop();
      await _sfxPlayer1.play(AssetSource('audio/start_game.mp3'), volume: 0.9);
    } catch (e) {
      debugPrint('Error playing start game sfx: $e');
    }
  }

  // SFX Game Over
  Future<void> playGameOver() async {
    stopBgMusic();
    if (!_effectsOn) return;
    try {
      await _sfxPlayer1.stop();
      await _sfxPlayer1.play(AssetSource('audio/game_over.mp3'), volume: 1.0);
    } catch (e) {
      debugPrint('Error playing game over sfx: $e');
    }
  }

  // SFX UI Clásico
  Future<void> playClick() async {
    if (!_effectsOn) return;
    try {
      await _sfxPlayer1.stop();
      await _sfxPlayer1.play(AssetSource('audio/click.mp3'), volume: 0.4);
    } catch (e) {
      debugPrint('Error playing click: $e');
    }
  }

  Future<void> playGlassBreak() async {
    if (!_effectsOn) return;
    try {
      await _sfxPlayer2.stop();
      await _sfxPlayer2.play(AssetSource('audio/glass_break.mp3'), volume: 0.5);
    } catch (e) {
      debugPrint('Error playing glass break: $e');
    }
  }

  Future<void> playChangeGlass() async {
    if (!_effectsOn) return;
    try {
      await _sfxPlayer2.stop();
      await _sfxPlayer2.play(AssetSource('audio/change_glass.mp3'), volume: 1.0);
    } catch (e) {
      debugPrint('Error playing change glass: $e');
    }
  }
}
