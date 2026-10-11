import 'package:glassy/theme/app_colors.dart';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:shared_preferences/shared_preferences.dart';

class ThemeProvider with ChangeNotifier {
  ThemeMode _themeMode = ThemeMode.dark; // Por defecto oscuro para que coincida con el azul marino

  ThemeMode get themeMode => _themeMode;

  ThemeProvider() {
    _loadTheme();
  }

  void toggleTheme(bool isDark) async {
    _themeMode = isDark ? ThemeMode.dark : ThemeMode.light;
    notifyListeners();
    SharedPreferences prefs = await SharedPreferences.getInstance();
    prefs.setBool('isDarkMode', isDark);
  }

  void _loadTheme() async {
    SharedPreferences prefs = await SharedPreferences.getInstance();
    bool isDark = prefs.getBool('isDarkMode') ?? true;
    _themeMode = isDark ? ThemeMode.dark : ThemeMode.light;
    notifyListeners();
  }
}

class AppTheme {

  static ThemeData get darkTheme {
    return _buildTheme(Brightness.dark);
  }

  static ThemeData get lightTheme {
    return _buildTheme(Brightness.light);
  }

  // Se construye un solo sistema robusto que la app debe obedecer
  static ThemeData _buildTheme(Brightness brightness) {
    return ThemeData(
      brightness: brightness,
      scaffoldBackgroundColor: AppColors.navyBlue,
      primaryColor: AppColors.lightBlue,
      
      // ColorScheme Global
      colorScheme: ColorScheme(
        brightness: brightness,
        primary: AppColors.lightBlue,
        onPrimary: AppColors.pureWhite,
        secondary: AppColors.lightBlue, // Reutilizamos AppColors.lightBlue para no introducir colores fuera de paleta
        onSecondary: AppColors.pureWhite,
        error: Colors.redAccent,
        onError: AppColors.pureWhite,
        surface: AppColors.navyBlue, // Tarjetas, modales y fondos de componentes
        onSurface: AppColors.pureWhite, // Texto sobre tarjetas y modales
      ),
      
      // Tipografía Global (Aplica blanco a todo)
      textTheme: GoogleFonts.outfitTextTheme().apply(
        bodyColor: AppColors.pureWhite,
        displayColor: AppColors.pureWhite,
      ),

      // Iconografía
      iconTheme: const IconThemeData(
        color: AppColors.pureWhite,
      ),

      // App Bar Global
      appBarTheme: const AppBarTheme(
        backgroundColor: AppColors.navyBlue,
        foregroundColor: AppColors.pureWhite,
        elevation: 0,
        centerTitle: true,
        iconTheme: IconThemeData(color: AppColors.pureWhite),
        titleTextStyle: TextStyle(
          color: AppColors.pureWhite, 
          fontWeight: FontWeight.w900, 
          letterSpacing: 4, 
          fontSize: 20,
        ),
      ),

      // Botones Elevados Globales
      elevatedButtonTheme: ElevatedButtonThemeData(
        style: ElevatedButton.styleFrom(
          backgroundColor: AppColors.lightBlue,
          foregroundColor: AppColors.pureWhite,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(30),
          ),
          padding: const EdgeInsets.symmetric(horizontal: 32, vertical: 16),
          textStyle: const TextStyle(
            fontWeight: FontWeight.w900,
            fontSize: 16,
          ),
        ),
      ),

      // Botones de Texto Globales
      textButtonTheme: TextButtonThemeData(
        style: TextButton.styleFrom(
          foregroundColor: AppColors.pureWhite,
          textStyle: const TextStyle(
            fontWeight: FontWeight.bold,
          ),
        ),
      ),

      // Tarjetas (Cards)
      cardTheme: CardThemeData(
        color: AppColors.navyBlue,
        elevation: 8,
        shadowColor: AppColors.pureBlack.withValues(alpha: 0.3),
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(20),
          side: BorderSide(color: AppColors.pureWhite.withValues(alpha: 0.1), width: 1), // Borde sutil por defecto
        ),
      ),

      // Diálogos y Modales
      dialogTheme: DialogThemeData(
        backgroundColor: AppColors.navyBlue,
        elevation: 10,
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(24),
        ),
        titleTextStyle: const TextStyle(
          color: AppColors.pureWhite, 
          fontSize: 20, 
          fontWeight: FontWeight.bold,
        ),
        contentTextStyle: const TextStyle(
          color: AppColors.pureWhite, 
          fontSize: 16,
        ),
      ),

      // Pestañas (TabBars)
      tabBarTheme: TabBarThemeData(
        indicatorColor: AppColors.lightBlue,
        labelColor: AppColors.lightBlue, // Azul claro para el tab seleccionado
        unselectedLabelColor: AppColors.pureWhite.withValues(alpha: 0.5), // Blanco con transparencia para no seleccionados
        labelStyle: const TextStyle(
          fontWeight: FontWeight.bold, 
          letterSpacing: 1.5, 
          fontSize: 12,
        ),
      ),

      // Menú de navegación inferior (BottomNavigationBar)
      bottomNavigationBarTheme: BottomNavigationBarThemeData(
        backgroundColor: AppColors.navyBlue,
        selectedItemColor: AppColors.lightBlue,
        unselectedItemColor: AppColors.pureWhite.withValues(alpha: 0.5),
        elevation: 8,
      ),
    );
  }
}



