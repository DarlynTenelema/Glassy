import 'package:flutter/material.dart';
import '../services/storage_service.dart';

class GameProvider with ChangeNotifier {
  final StorageService _storage = StorageService();
  
  int _score = 0;
  int _highScore = 0;
  int _crystals = 100;
  bool _isGameOver = false;

  int get score => _score;
  int get highScore => _highScore;
  int get crystals => _crystals;
  bool get isGameOver => _isGameOver;

  GameProvider() {
    _loadData();
  }

  void _loadData() {
    _highScore = _storage.getInt('highScore', defaultValue: 0);
    _crystals = _storage.getInt('crystals', defaultValue: 100);
    notifyListeners();
  }

  void updateScore(int newScore) {
    _score = newScore;
    if (_score > _highScore) {
      _highScore = _score;
      _storage.setInt('highScore', _highScore);
    }
    notifyListeners();
  }

  void updateCrystals(int newCrystals) {
    _crystals = newCrystals;
    _storage.setInt('crystals', _crystals);
    notifyListeners();
  }

  void addCrystals(int amount) {
    _crystals += amount;
    _storage.setInt('crystals', _crystals);
    notifyListeners();
  }

  void setGameOver(bool isOver) {
    _isGameOver = isOver;
    notifyListeners();
  }

  bool buyPowerUp(int cost) {
    if (_crystals >= cost) {
      _crystals -= cost;
      _storage.setInt('crystals', _crystals);
      notifyListeners();
      return true;
    }
    return false;
  }
  
  void resetGame() {
    _score = 0;
    _isGameOver = false;
    notifyListeners();
  }
}
