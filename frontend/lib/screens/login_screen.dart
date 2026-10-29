import 'package:glassy/theme/app_colors.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:google_sign_in/google_sign_in.dart';
import '../config/env.dart';
import 'home_screen.dart';
import '../widgets/gaming_button.dart';
import 'dart:convert';
import 'package:http/http.dart' as http;
import 'package:provider/provider.dart';
import '../widgets/shatter_widget.dart';
import '../services/audio_service.dart';
import '../l10n/l10n_extension.dart';
import '../providers/locale_provider.dart';

class LoginScreen extends StatefulWidget {
  const LoginScreen({super.key});

  @override
  State<LoginScreen> createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen> {
  bool _isShattered = false;
  final TextEditingController _referralController = TextEditingController();

  @override
  void initState() {
    super.initState();
    AudioService().stopBgMusic();
    // Revisa si ya hay una sesión activa para saltar el login
    WidgetsBinding.instance.addPostFrameCallback((_) {
      if (Supabase.instance.client.auth.currentSession != null) {
        Navigator.of(context).pushReplacement(
          MaterialPageRoute(builder: (_) => const HomeScreen()),
        );
      }
    });
  }

  Future<void> _signInWithGoogle() async {
    setState(() {
      _isShattered = true; // Inicia la rotura del botón
    });
    
    // Le damos un momento a la animación para que se vea
    await Future.delayed(const Duration(milliseconds: 600));
    
    try {
      GoogleSignInAccount? googleUser;
      try {
        final GoogleSignIn googleSignIn = GoogleSignIn(
          serverClientId: Env.webClientId,
          scopes: const ['email', 'profile'],
        );
        // Forzar a Google a limpiar la caché para que SIEMPRE pregunte qué cuenta usar
        try {
          await googleSignIn.signOut();
        } catch (_) {}
        googleUser = await googleSignIn.signIn();
        if (googleUser == null) {
          if (mounted) {
            setState(() => _isShattered = false); // Regenerar
            ScaffoldMessenger.of(context).showSnackBar(
              SnackBar(content: Text(context.l10n.loginCancelled)),
            );
          }
          return;
        }
      } on PlatformException catch (e) {
        debugPrint('[GoogleSignIn] PlatformException: code=${e.code}, message=${e.message}, details=${e.details}');
        if (mounted) {
          setState(() => _isShattered = false); // Regenerar
          String userMsg;
          final errorDetails = '${e.code} ${e.message} ${e.details}'.toLowerCase();
          if (errorDetails.contains('10') || errorDetails.contains('developer_error')) {
            userMsg = 'Error de configuración de Google Sign-In (código 10). Falta registrar la huella SHA-1 de Google Play Console en Google Cloud.';
          } else if (errorDetails.contains('network') || errorDetails.contains('7')) {
            userMsg = 'Error de conexión con Google Play Services. Comprueba tu conexión a internet.';
          } else {
            userMsg = context.l10n.googleSignInError(e.message ?? e.code);
          }
          ScaffoldMessenger.of(context).showSnackBar(
            SnackBar(
              content: Text(userMsg),
              backgroundColor: Colors.redAccent.shade700,
              duration: const Duration(seconds: 5),
            ),
          );
        }
        return;
      } catch (e) {
        debugPrint('[GoogleSignIn] Error general al iniciar sesión: $e');
        if (mounted) {
          setState(() => _isShattered = false); // Regenerar
          ScaffoldMessenger.of(context).showSnackBar(
            SnackBar(
              content: Text(context.l10n.googleSignInError(e.toString())),
              backgroundColor: Colors.redAccent.shade700,
            ),
          );
        }
        return;
      }
      
      final googleAuth = await googleUser.authentication;
      final idToken = googleAuth.idToken;

      if (idToken == null) {
        throw 'No ID Token found.';
      }

      await Supabase.instance.client.auth.signInWithIdToken(
        provider: OAuthProvider.google,
        idToken: idToken,
        accessToken: googleAuth.accessToken,
      );

      // Enviar código de referido si existe
      final referralCode = _referralController.text.trim();
      if (referralCode.isNotEmpty) {
        final session = Supabase.instance.client.auth.currentSession;
        if (session != null) {
          try {
            await http.post(
              Uri.parse('${Env.backendUrl}/player/referral'),
              headers: {
                'Content-Type': 'application/json',
                'Authorization': 'Bearer ${session.accessToken}',
              },
              body: jsonEncode({'code': referralCode}),
            );
          } catch (e) {
            debugPrint('Error enviando código de creador: $e');
          }
        }
      }

      if (mounted) {
        Navigator.of(context).pushReplacement(
          MaterialPageRoute(builder: (_) => const HomeScreen()),
        );
      }
    } catch (e) {
      if (mounted) {
        setState(() => _isShattered = false); // Regenerar
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(content: Text(context.l10n.authError(e.toString()))),
        );
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          // Fondo animado / Gradiente
          Container(
            decoration: BoxDecoration(
              gradient: LinearGradient(
                colors: [AppColors.navyBlue, Theme.of(context).scaffoldBackgroundColor, Theme.of(context).colorScheme.surface],
                begin: Alignment.topLeft,
                end: Alignment.bottomRight,
              ),
            ),
          ),
          // Contenido principal
          Center(
            child: SingleChildScrollView(
              child: Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  // Logo Glassy text
                  Text(
                    'Glassy',
                    style: Theme.of(context).textTheme.displayLarge?.copyWith(
                      color: Colors.white,
                      fontWeight: FontWeight.bold,
                      letterSpacing: 2,
                      shadows: [
                        const Shadow(
                          color: AppColors.lightBlue,
                          blurRadius: 20,
                        )
                      ],
                    ),
                  ),
                  const SizedBox(height: 10),
                  Text(
                    context.l10n.welcomeSubtitle,
                    style: Theme.of(context).textTheme.titleMedium?.copyWith(
                      color: Colors.white70,
                    ),
                  ),
                  const SizedBox(height: 40),
                  // Campo de texto para código de creador
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 40),
                    child: TextField(
                      controller: _referralController,
                      style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold),
                      decoration: InputDecoration(
                        filled: true,
                        fillColor: Colors.black.withValues(alpha: 0.3),
                        hintText: context.l10n.referralCodeHint,
                        hintStyle: const TextStyle(color: Colors.white54, fontSize: 13, letterSpacing: 1),
                        prefixIcon: const Icon(Icons.card_giftcard, color: AppColors.lightBlue),
                        border: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: BorderSide.none,
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: BorderSide(color: AppColors.lightBlue.withValues(alpha: 0.3)),
                        ),
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: const BorderSide(color: AppColors.lightBlue),
                        ),
                      ),
                    ),
                  ),
                  const SizedBox(height: 20),
                  // Botón de Google
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 40),
                    child: IgnorePointer(
                      ignoring: _isShattered,
                      child: ShatterWidget(
                        isShattered: _isShattered,
                        child: GamingButton(
                          text: context.l10n.playWithGoogle,
                          icon: CircleAvatar(
                            backgroundColor: Colors.white,
                            radius: 16,
                            child: Padding(
                              padding: const EdgeInsets.all(4.0),
                              child: Image.asset('assets/office/google.png'),
                            ),
                          ),
                          onPressed: _signInWithGoogle,
                          primaryColor: AppColors.lightBlue,
                          secondaryColor: AppColors.lightBlue,
                          shatterEffect: false, // ShatterWidget controla la magia
                        ),
                      ),
                    ),
                  ),
                  const SizedBox(height: 14),
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 40),
                    child: Text(
                      context.l10n.termsNotice,
                      textAlign: TextAlign.center,
                      style: TextStyle(
                        color: Colors.white.withValues(alpha: 0.6),
                        fontSize: 11,
                      ),
                    ),
                  ),
                  const SizedBox(height: 20),
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 40),
                    child: Text(
                      context.l10n.allRightsReserved,
                      textAlign: TextAlign.center,
                      style: const TextStyle(
                        color: Colors.white54,
                        fontSize: 12,
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
          // Botón selector de idioma con lista desplegable de banderas
          Positioned(
            top: 16,
            right: 16,
            child: SafeArea(
              child: _buildLanguageDropdown(context),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildLanguageDropdown(BuildContext context) {
    final localeProvider = Provider.of<LocaleProvider>(context);
    final currentCode = localeProvider.locale.languageCode;
    final currentFlag = localeProvider.getLanguageFlag(currentCode);
    final currentName = localeProvider.getLanguageName(currentCode);

    return PopupMenuButton<Locale>(
      tooltip: context.l10n.selectLanguage,
      color: const Color(0xFF0F172A).withValues(alpha: 0.96),
      elevation: 16,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(18),
        side: BorderSide(color: AppColors.lightBlue.withValues(alpha: 0.4), width: 1.5),
      ),
      offset: const Offset(0, 46),
      onSelected: (Locale newLocale) {
        localeProvider.setLocale(newLocale);
      },
      itemBuilder: (BuildContext popupContext) {
        return LocaleProvider.supportedLocales.map((Locale loc) {
          final isSelected = loc.languageCode == currentCode;
          final flag = localeProvider.getLanguageFlag(loc.languageCode);
          final name = localeProvider.getLanguageName(loc.languageCode);
          return PopupMenuItem<Locale>(
            value: loc,
            child: Row(
              children: [
                Text(flag, style: const TextStyle(fontSize: 22)),
                const SizedBox(width: 12),
                Text(
                  name,
                  style: TextStyle(
                    color: isSelected ? AppColors.lightBlue : Colors.white,
                    fontWeight: isSelected ? FontWeight.w900 : FontWeight.w600,
                    fontSize: 14,
                  ),
                ),
                const Spacer(),
                if (isSelected)
                  const Icon(Icons.check_circle_rounded, color: AppColors.lightBlue, size: 18),
              ],
            ),
          );
        }).toList();
      },
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
        decoration: BoxDecoration(
          color: Colors.black.withValues(alpha: 0.4),
          borderRadius: BorderRadius.circular(22),
          border: Border.all(color: AppColors.lightBlue.withValues(alpha: 0.35), width: 1.2),
          boxShadow: [
            BoxShadow(
              color: Colors.black.withValues(alpha: 0.3),
              blurRadius: 10,
              offset: const Offset(0, 3),
            ),
          ],
        ),
        child: Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            Text(currentFlag, style: const TextStyle(fontSize: 18)),
            const SizedBox(width: 8),
            Text(
              currentName,
              style: const TextStyle(
                color: Colors.white,
                fontWeight: FontWeight.bold,
                fontSize: 13,
                letterSpacing: 0.5,
              ),
            ),
            const SizedBox(width: 4),
            const Icon(Icons.keyboard_arrow_down_rounded, color: AppColors.lightBlue, size: 18),
          ],
        ),
      ),
    );
  }
}
