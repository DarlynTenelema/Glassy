import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import '../services/storage_service.dart';
import '../services/auth_service.dart';

class GameProvider with ChangeNotifier {
  final StorageService _storage = StorageService();
  final String _backendUrl = 'https://glassy-production.up.railway.app/api';
  
  int _score = 0;
  int _highScore = 0;
  int _crystals = 0; // Fetch from backend
  bool _isGameOver = false;

  // Daily Reward State
  int _currentStreak = 1;
  bool _canClaimDailyReward = false;

  // Skins State
  List<String> _unlockedSkins = ['gemas_clasicas'];
  String _selectedSkinId = 'gemas_clasicas';

  // Chests & Fragments
  int _lapisFragments = 0;
  DateTime? _lastChest6h;
  DateTime? _lastChest12h;
  DateTime? _lastChest24h;

  int get score => _score;
  int get highScore => _highScore;
  int get crystals => _crystals;
  bool get isGameOver => _isGameOver;
  int get currentStreak => _currentStreak;
  bool get canClaimDailyReward => _canClaimDailyReward;
  int get lapisFragments => _lapisFragments;
  DateTime? get lastChest6h => _lastChest6h;
  DateTime? get lastChest12h => _lastChest12h;
  DateTime? get lastChest24h => _lastChest24h;

  List<String> get unlockedSkins => _unlockedSkins;
  String get selectedSkinId => _selectedSkinId;

  GameProvider() {
    _loadData();
  }

  Future<void> _loadData() async {
    _highScore = _storage.getInt('highScore', defaultValue: 0);
    
    // Fetch critical economy data from backend
    await fetchEconomyStatus();
    await fetchSkins();
    notifyListeners();
  }

  Future<void> fetchSkins() async {
    final token = AuthService().accessToken;
    if (token == null) return;

    try {
      final response = await http.get(
        Uri.parse('$_backendUrl/player/skins'),
        headers: {'Authorization': 'Bearer $token'},
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        _unlockedSkins = List<String>.from(data['unlocked_skins'] ?? ['gemas_clasicas']);
        _selectedSkinId = data['selected_skin'] ?? 'gemas_clasicas';
        notifyListeners();
      }
    } catch (e) {
      debugPrint('Error fetching skins: $e');
    }
  }

  Future<void> fetchEconomyStatus() async {
    final token = AuthService().accessToken;
    if (token == null) return;

    try {
      final response = await http.get(
        Uri.parse('$_backendUrl/player/economy'),
        headers: {'Authorization': 'Bearer $token'},
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        _crystals = data['crystals'] ?? 0;
        _currentStreak = data['daily_reward_streak'] ?? 1;
        _canClaimDailyReward = data['can_claim_daily'] ?? false;
        _lapisFragments = data['lapis_fragments'] ?? 0;
        
        if (data['last_chest_6h'] != null) _lastChest6h = DateTime.parse(data['last_chest_6h']).toLocal();
        if (data['last_chest_12h'] != null) _lastChest12h = DateTime.parse(data['last_chest_12h']).toLocal();
        if (data['last_chest_24h'] != null) _lastChest24h = DateTime.parse(data['last_chest_24h']).toLocal();
        
        notifyListeners();
      }
    } catch (e) {
      debugPrint('Error fetching economy: $e');
    }
  }

  bool _isClaimingDaily = false;

  Future<void> claimDailyReward() async {
    if (!_canClaimDailyReward || _isClaimingDaily) return;
    _isClaimingDaily = true;
    notifyListeners();

    final token = AuthService().accessToken;
    if (token == null) {
      _isClaimingDaily = false;
      return;
    }

    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/claim-daily'),
        headers: {'Authorization': 'Bearer $token'},
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        _lapisFragments += (data['reward_fragments'] as int? ?? 0);
        
        if (_lapisFragments >= 100) {
           _crystals += _lapisFragments ~/ 100;
           _lapisFragments = _lapisFragments % 100;
        }

        _currentStreak = data['new_streak'] as int? ?? 1;
        _canClaimDailyReward = false;
        notifyListeners();
      }
    } catch (e) {
      debugPrint('Error claiming daily reward: $e');
    } finally {
      _isClaimingDaily = false;
      notifyListeners();
    }
  }

  Future<bool> claimChest(String chestType) async {
    final token = AuthService().accessToken;
    if (token == null) return false;

    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/claim-chest'),
        headers: {
          'Authorization': 'Bearer $token',
          'Content-Type': 'application/json',
        },
        body: jsonEncode({'chest_type': chestType}),
      );

      if (response.statusCode == 200) {
        // Refetch state to get new times and fragments/crystals
        await fetchEconomyStatus();
        return true;
      }
    } catch (e) {
      debugPrint('Error claiming chest: $e');
    }
    return false;
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
      
      // Sincronizar gasto con el backend en segundo plano
      _syncSpendToBackend(cost);
      
      return true;
    }
    return false;
  }
  
  Future<void> _syncSpendToBackend(int amount) async {
    final token = AuthService().accessToken;
    if (token == null) return;
    
    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/spend-crystals'),
        headers: {
          'Authorization': 'Bearer $token',
          'Content-Type': 'application/json',
        },
        body: jsonEncode({'amount': amount}),
      );
      
      if (response.statusCode != 200) {
        debugPrint('Failed to sync crystal spend: ${response.body}');
        // Podríamos revertir el estado aquí si falla gravemente.
      }
    } catch (e) {
      debugPrint('Error syncing crystal spend: $e');
    }
  }

  Future<bool> buySkin(String skinId, int cost) async {
    if (_crystals >= cost && !_unlockedSkins.contains(skinId)) {
      // Optimistic update
      _crystals -= cost;
      _unlockedSkins.add(skinId);
      notifyListeners();

      final token = AuthService().accessToken;
      if (token == null) return false;

      try {
        final response = await http.post(
          Uri.parse('$_backendUrl/player/skins/buy'),
          headers: {
            'Authorization': 'Bearer $token',
            'Content-Type': 'application/json',
          },
          body: jsonEncode({'skin_id': skinId, 'cost': cost}),
        );

        if (response.statusCode == 200) {
          return true;
        } else {
          // Revert if failed
          _crystals += cost;
          _unlockedSkins.remove(skinId);
          notifyListeners();
          return false;
        }
      } catch (e) {
        // Revert if failed
        _crystals += cost;
        _unlockedSkins.remove(skinId);
        notifyListeners();
        debugPrint('Error buying skin: $e');
        return false;
      }
    }
    return false;
  }

  Future<void> equipSkin(String skinId) async {
    if (_unlockedSkins.contains(skinId)) {
      final oldSkin = _selectedSkinId;
      _selectedSkinId = skinId;
      notifyListeners();

      final token = AuthService().accessToken;
      if (token == null) return;

      try {
        final response = await http.post(
          Uri.parse('$_backendUrl/player/skins/equip'),
          headers: {
            'Authorization': 'Bearer $token',
            'Content-Type': 'application/json',
          },
          body: jsonEncode({'skin_id': skinId}),
        );

        if (response.statusCode != 200) {
          _selectedSkinId = oldSkin;
          notifyListeners();
        }
      } catch (e) {
        _selectedSkinId = oldSkin;
        notifyListeners();
        debugPrint('Error equipping skin: $e');
      }
    }
  }
  
  void resetGame() {
    _score = 0;
    _isGameOver = false;
    notifyListeners();
  }
}
