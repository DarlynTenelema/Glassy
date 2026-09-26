import 'package:audioplayers/audioplayers.dart';

class AudioService {
  static final AudioService _instance = AudioService._internal();
  factory AudioService() => _instance;
  
  AudioService._internal();

  final AudioPlayer _bgMusicPlayer = AudioPlayer();
  final AudioPlayer _sfxPlayer1 = AudioPlayer();
  final AudioPlayer _sfxPlayer2 = AudioPlayer();
  
  bool _isBgMusicPlaying = false;

  Future<void> init() async {
    // Configurar el contexto de audio global para que SFX no interrumpa BGM
    // respectSilence en 'false' indica que se usa el volumen MULTIMEDIA del dispositivo (Media Volume), normal para juegos.
    await AudioPlayer.global.setAudioContext(AudioContextConfig(
      respectSilence: false,
      focus: AudioContextConfigFocus.mixWithOthers,
    ).build());
    // Preload sounds if needed or set modes
    await _bgMusicPlayer.setReleaseMode(ReleaseMode.loop);
  }

  // BGM
  Future<void> playBgMusic() async {
    try {
      if (_bgMusicPlayer.state == PlayerState.playing) {
        return; // Ya está sonando
      }
      
      if (_bgMusicPlayer.state == PlayerState.paused) {
        await _bgMusicPlayer.resume();
      } else {
        await _bgMusicPlayer.play(AssetSource('audio/bg_music.mp3'), volume: 0.5);
      }
      _isBgMusicPlaying = true;
    } catch (e) {
      print('Error playing bg music: $e');
    }
  }

  Future<void> stopBgMusic() async {
    try {
      await _bgMusicPlayer.stop();
      _isBgMusicPlaying = false;
    } catch (e) {
      print('Error stopping bg music: $e');
    }
  }

  // SFX
  Future<void> playClick() async {
    try {
      // Usamos stop y play de nuevo para permitir clics rápidos
      await _sfxPlayer1.stop();
      await _sfxPlayer1.play(AssetSource('audio/click.mp3'), volume: 0.4);
    } catch (e) {
      print('Error playing click: $e');
    }
  }

  Future<void> playGlassBreak() async {
    try {
      await _sfxPlayer2.stop();
      await _sfxPlayer2.play(AssetSource('audio/glass_break.mp3'), volume: 0.5);
    } catch (e) {
      print('Error playing glass break: $e');
    }
  }

  Future<void> playChangeGlass() async {
    try {
      await _sfxPlayer2.stop();
      await _sfxPlayer2.play(AssetSource('audio/change_glass.mp3'), volume: 1.0);
    } catch (e) {
      print('Error playing change glass: $e');
    }
  }
}
