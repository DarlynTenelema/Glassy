import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:flutter_dotenv/flutter_dotenv.dart';

import 'package:supabase_flutter/supabase_flutter.dart';
import 'config/env.dart';
import 'theme/app_theme.dart';
import 'screens/splash_screen.dart';
import 'package:google_mobile_ads/google_mobile_ads.dart';
import 'services/storage_service.dart';
import 'services/audio_service.dart';
import 'services/purchase_service.dart';
import 'providers/settings_provider.dart';
import 'providers/game_provider.dart';
import 'providers/locale_provider.dart';
import 'l10n/app_localizations.dart';

final GlobalKey<NavigatorState> rootNavigatorKey = GlobalKey<NavigatorState>();

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  
  try {
    await dotenv.load(fileName: ".env");
  } catch (e) {
    debugPrint("Info: Archivo .env no encontrado o empaquetado, usando variables de entorno seguras.");
  }

  await Supabase.initialize(
    url: Env.supabaseUrl,
    anonKey: Env.supabaseAnonKey,
  );

  // Inicializar servicios
  await StorageService().init();
  await AudioService().init();

  // Inicializar compras in-app a nivel global para escuchar reintentos automáticos
  try {
    PurchaseService().initialize();
  } catch (e) {
    debugPrint("Error inicializando PurchaseService: $e");
  }

  // Inicializar Google Mobile Ads
  try {
    await MobileAds.instance.initialize();
  } catch (e) {
    debugPrint("Error inicializando Google Mobile Ads: $e");
  }
  
  runApp(
    MultiProvider(
      providers: [
        ChangeNotifierProvider(create: (_) => ThemeProvider()),
        ChangeNotifierProvider(create: (_) => SettingsProvider()),
        ChangeNotifierProvider(create: (_) => GameProvider()),
        ChangeNotifierProvider(create: (_) => LocaleProvider()),
      ],
      child: const GlassyApp(),
    ),
  );
}

class GlassyApp extends StatelessWidget {
  const GlassyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return Consumer2<ThemeProvider, LocaleProvider>(
      builder: (context, themeProvider, localeProvider, child) {
        return MaterialApp(
          navigatorKey: rootNavigatorKey,
          title: 'Glassy',
          debugShowCheckedModeBanner: false,
          theme: AppTheme.lightTheme,
          darkTheme: AppTheme.darkTheme,
          themeMode: themeProvider.themeMode,
          locale: localeProvider.locale,
          supportedLocales: AppLocalizations.supportedLocales,
          localizationsDelegates: AppLocalizations.localizationsDelegates,
          home: const SplashScreen(),
        );
      },
    );
  }
}
