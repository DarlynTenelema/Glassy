import 'package:flutter/material.dart';
import '../services/storage_service.dart';

class LocaleProvider with ChangeNotifier {
  static const String storageKey = 'language_code';

  static const List<Locale> supportedLocales = [
    Locale('en'),
    Locale('es'),
    Locale('fr'),
    Locale('pt'),
  ];

  static const Map<String, String> languageNames = {
    'en': 'English',
    'es': 'Español',
    'fr': 'Français',
    'pt': 'Português',
  };

  static const Map<String, String> languageFlags = {
    'en': '🇺🇸',
    'es': '🇪🇸',
    'fr': '🇫🇷',
    'pt': '🇧🇷',
  };

  final StorageService _storage = StorageService();
  Locale _locale = const Locale('en');

  Locale get locale => _locale;

  LocaleProvider() {
    _loadLocale();
  }

  void _loadLocale() {
    final savedCode = _storage.getString(storageKey);
    if (savedCode.isNotEmpty && _isSupported(savedCode)) {
      _locale = Locale(savedCode);
    } else {
      // Idioma predeterminado: Inglés
      _locale = const Locale('en');
    }
    notifyListeners();
  }

  bool _isSupported(String code) {
    return supportedLocales.any((loc) => loc.languageCode == code);
  }

  Future<void> setLocale(Locale newLocale) async {
    if (!_isSupported(newLocale.languageCode) || _locale == newLocale) return;

    _locale = newLocale;
    await _storage.setString(storageKey, newLocale.languageCode);
    notifyListeners();
  }

  String getLanguageName(String code) {
    return languageNames[code] ?? code;
  }

  String getLanguageFlag(String code) {
    return languageFlags[code] ?? '🌐';
  }
}
