import 'package:flutter/material.dart';
import '../services/storage_service.dart';

class SettingsProvider with ChangeNotifier {
  final StorageService _storage = StorageService();
  
  bool _volume = true;
  bool _effects = true;

  bool get volume => _volume;
  bool get effects => _effects;

  SettingsProvider() {
    _loadSettings();
  }

  void _loadSettings() {
    _volume = _storage.getBool('volume', defaultValue: true);
    _effects = _storage.getBool('effects', defaultValue: true);
    notifyListeners();
  }

  Future<void> setVolume(bool value) async {
    _volume = value;
    await _storage.setBool('volume', value);
    notifyListeners();
  }

  Future<void> setEffects(bool value) async {
    _effects = value;
    await _storage.setBool('effects', value);
    notifyListeners();
  }
}
