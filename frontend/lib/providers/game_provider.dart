import 'dart:async';
import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import '../services/storage_service.dart';
import '../services/auth_service.dart';
import '../config/env.dart';

class GameProvider with ChangeNotifier {
  final StorageService _storage = StorageService();
  final String _backendUrl = Env.backendUrl;
  
  int _score = 0;
  int _highScore = 0;
  int _totalScore = 0;
  int _crystals = 0; // Caché local + sincronizado con el backend
  bool _isGameOver = false;

  StreamSubscription? _authSub;

  // Daily Reward State
  int _currentStreak = 1;
  bool _canClaimDailyReward = false;

  // Skins State
  List<String> _unlockedSkins = ['gemas_clasicas'];
  String _selectedSkinId = 'gemas_clasicas';
  final Set<String> _pendingSkinPurchases = {};

  bool isSkinPurchasePending(String skinId) => _pendingSkinPurchases.contains(skinId);
  bool get isAnySkinPurchasePending => _pendingSkinPurchases.isNotEmpty;

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

  @override
  void dispose() {
    _authSub?.cancel();
    super.dispose();
  }

  Future<void> _loadData() async {
    // 1. Cargar de inmediato desde almacenamiento local persistente (Caché Offline)
    // Esto garantiza que el contador NUNCA se resetee a 0 al salir del juego
    _highScore = _storage.getInt('highScore', defaultValue: 0);
    _totalScore = _storage.getInt('totalScore', defaultValue: 0);
    _crystals = _storage.getInt('crystals', defaultValue: 0);
    _lapisFragments = _storage.getInt('lapis_fragments', defaultValue: 0);
    _selectedSkinId = _storage.getString('selected_skin', defaultValue: 'gemas_clasicas');
    final cachedSkins = _storage.getStringList('unlocked_skins', defaultValue: ['gemas_clasicas']);
    if (cachedSkins.isNotEmpty) {
      _unlockedSkins = cachedSkins;
    }
    notifyListeners();

    // 2. Escuchar cambios de autenticación (resuelve la condición de carrera al arrancar la app)
    _authSub?.cancel();
    _authSub = AuthService().onAuthStateChange.listen((authState) {
      if (authState.session != null) {
        fetchEconomyStatus();
        fetchSkins();
      }
    });

    // 3. Sincronizar datos oficiales desde el backend
    await fetchEconomyStatus();
    await fetchSkins();
  }

  Future<void> fetchSkins() async {
    final token = await AuthService().getFreshAccessToken();
    
    if (token == null) {
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
        
        _unlockedSkins = remoteUnlocked;
        _selectedSkinId = data['selected_skin'] ?? 'gemas_clasicas';

        // Guardar copia local de aspectos
        _storage.setStringList('unlocked_skins', _unlockedSkins);
        _storage.setString('selected_skin', _selectedSkinId);

        notifyListeners();
      }
    } catch (e) {
      debugPrint('Error fetching skins from server: $e');
    }
  }

  Future<void> fetchEconomyStatus() async {
    final token = await AuthService().getFreshAccessToken();
    if (token == null) return;

    try {
      final response = await http.get(
        Uri.parse('$_backendUrl/player/economy'),
        headers: {'Authorization': 'Bearer $token'},
      );

      if (response.statusCode == 200) {
        final data = jsonDecode(response.body);
        _crystals = data['crystals'] ?? _crystals;
        _totalScore = data['total_score'] ?? _totalScore;
        _currentStreak = data['daily_reward_streak'] ?? 1;
        _canClaimDailyReward = data['can_claim_daily'] ?? false;
        _lapisFragments = data['lapis_fragments'] ?? _lapisFragments;
        
        // Persistir en caché local
        _storage.setInt('crystals', _crystals);
        _storage.setInt('totalScore', _totalScore);
        _storage.setInt('lapis_fragments', _lapisFragments);

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
  bool get isClaimingDaily => _isClaimingDaily;

  Future<bool> claimDailyReward() async {
    if (!_canClaimDailyReward || _isClaimingDaily) return false;
    
    final token = await AuthService().getFreshAccessToken();
    if (token == null) return false; // Solo online
    
    _isClaimingDaily = true;
    notifyListeners();

    bool success = false;
    try {
      final response = await http.post(
        Uri.parse('$_backendUrl/player/claim-daily'),
        headers: {'Authorization': 'Bearer $token'},
      );
      
      if (response.statusCode == 200) {
        await fetchEconomyStatus();
        success = true;
      } else {
        debugPrint('Backend rejected daily claim: ${response.statusCode} - ${response.body}');
      }
    } catch (e) {
      debugPrint('Error claiming daily reward: $e');
    } finally {
      _isClaimingDaily = false;
      notifyListeners();
    }
    return success;
  }

  Future<bool> claimChest(String chestType) async {
    final token = await AuthService().getFreshAccessToken();
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
    _totalScore += newScore;
    _storage.setInt('totalScore', _totalScore);
    
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

  Future<bool> buySkin(String skinId, int cost) async {
    final token = await AuthService().getFreshAccessToken();
    if (token == null) {
      debugPrint('No se puede comprar skins sin conexión o sin sesión.');
      return false;
    }

    if (_pendingSkinPurchases.contains(skinId) || _unlockedSkins.contains(skinId) || _crystals < cost) {
      debugPrint('Compra rechazada preventivamente (en progreso, ya adquirida o saldo insuficiente)');
      return false;
    }

    _pendingSkinPurchases.add(skinId);
    notifyListeners();

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
        if (!_unlockedSkins.contains(skinId)) {
          _unlockedSkins.add(skinId);
        }
        _crystals = (_crystals - cost).clamp(0, double.infinity).toInt();
        _storage.setInt('crystals', _crystals);
        _storage.setStringList('unlocked_skins', _unlockedSkins);
        notifyListeners();
        
        await fetchEconomyStatus();
        return true;
      } else {
        debugPrint('Backend rechazó la compra de skin (Status: ${response.statusCode})');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción al comprar skin en el servidor: $e');
      return false;
    } finally {
      _pendingSkinPurchases.remove(skinId);
      notifyListeners();
    }
  }

  Future<void> equipSkin(String skinId) async {
    if (_unlockedSkins.contains(skinId) || skinId == 'gemas_clasicas') {
      _selectedSkinId = skinId;
      _storage.setString('selected_skin', _selectedSkinId);
      notifyListeners();

      final token = await AuthService().getFreshAccessToken();
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
