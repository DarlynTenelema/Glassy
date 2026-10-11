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
  int _totalScore = 0;
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
  int get totalScore => _totalScore;
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
    _totalScore = _storage.getInt('totalScore', defaultValue: 0);
    
    // La fuente de la verdad es 100% el backend y la base de datos
    await fetchEconomyStatus();
    await fetchSkins();
    
    notifyListeners();
  }

  Future<void> fetchSkins() async {
    final token = AuthService().accessToken;
    
    if (token == null) {
      _selectedSkinId = 'gemas_clasicas';
      _unlockedSkins = ['gemas_clasicas'];
      notifyListeners();
      return;
    }

    try {
      final response = await http.get(
        Uri.parse('$_backendUrl/player/skins'),
        headers: {'Authorization': 'Bearer $token'},
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        final remoteUnlocked = List<String>.from(data['unlocked_skins'] ?? ['gemas_clasicas']);
        if (!remoteUnlocked.contains('gemas_clasicas')) {
          remoteUnlocked.add('gemas_clasicas');
        }
        
        // Estado oficial desde el servidor (cero almacenamiento local manipulable)
        _unlockedSkins = remoteUnlocked;
        _selectedSkinId = data['selected_skin'] ?? 'gemas_clasicas';
        notifyListeners();
      }
    } catch (e) {
      debugPrint('Error fetching skins from server: $e');
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
        _totalScore = data['total_score'] ?? _storage.getInt('totalScore', defaultValue: 0);
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
    
    final token = AuthService().accessToken;
    if (token == null) return; // Solo online
    
    _isClaimingDaily = true;
    notifyListeners();

    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/claim-daily'),
        headers: {'Authorization': 'Bearer $token'},
      );
      
      if (response.statusCode == 200) {
        // Obtenemos los nuevos datos desde el servidor inmediatamente
        await fetchEconomyStatus();
      } else {
        debugPrint('Backend rejected daily claim: ${response.statusCode}');
      }
    } catch (e) {
      debugPrint('Error claiming daily reward: $e');
    }
    
    _isClaimingDaily = false;
    notifyListeners();
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
    _totalScore += newScore; // Update local total score optimistically
    _storage.setInt('totalScore', _totalScore);
    
    if (_score > _highScore) {
      _highScore = _score;
      _storage.setInt('highScore', _highScore);
    }
    notifyListeners();
  }

  void updateCrystals(int newCrystals) {
    _crystals = newCrystals;
    notifyListeners();
  }

  void addCrystals(int amount) {
    _crystals += amount;
    notifyListeners();
  }

  void setGameOver(bool isOver) {
    _isGameOver = isOver;
    notifyListeners();
  }

  Future<bool> buySkin(String skinId, int cost) async {
    final token = AuthService().accessToken;
    if (token == null) {
      debugPrint('No se puede comprar skins sin conexión o sin sesión.');
      return false;
    }

    if (_crystals < cost || _unlockedSkins.contains(skinId)) {
      return false;
    }

    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/skins/buy'),
        headers: {
          'Authorization': 'Bearer $token',
          'Content-Type': 'application/json',
        },
        body: jsonEncode({'skin_id': skinId}),
      );

      if (response.statusCode == 200) {
        // Compra aprobada por el servidor
        if (!_unlockedSkins.contains(skinId)) {
          _unlockedSkins.add(skinId);
        }
        _crystals = (_crystals - cost).clamp(0, double.infinity).toInt();
        notifyListeners();
        
        // Sincronizar estado oficial completo de economía
        await fetchEconomyStatus();
        return true;
      } else {
        debugPrint('Backend rechazó la compra de skin (Status: ${response.statusCode})');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción al comprar skin en el servidor: $e');
      return false;
    }
  }

  Future<void> equipSkin(String skinId) async {
    if (_unlockedSkins.contains(skinId) || skinId == 'gemas_clasicas') {
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
          debugPrint('Backend rechazó equipar skin (Status: ${response.statusCode})');
        }
      } catch (e) {
        debugPrint('Error equipando skin en el servidor: $e');
      }
    }
  }
  
  void resetGame() {
    _score = 0;
    _isGameOver = false;
    notifyListeners();
  }
}
