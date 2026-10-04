import 'package:flutter/material.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:google_sign_in/google_sign_in.dart';
import '../config/env.dart';
import '../theme/app_theme.dart';
import 'home_screen.dart';
import '../widgets/gaming_button.dart';
import '../widgets/jar_loading_widget.dart';
import 'dart:convert';
import 'package:http/http.dart' as http;
import '../widgets/shatter_widget.dart';
import '../services/audio_service.dart';

class LoginScreen extends StatefulWidget {
  const LoginScreen({Key? key}) : super(key: key);

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
        );
        googleUser = await googleSignIn.signIn();
        if (googleUser == null) {
          if (mounted) {
            setState(() => _isShattered = false); // Regenerar
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(content: Text('Inicio de sesión cancelado')),
            );
          }
          return;
        }
      } catch (e) {
        if (mounted) {
          setState(() => _isShattered = false); // Regenerar
          ScaffoldMessenger.of(context).showSnackBar(
            SnackBar(content: Text('Error de GoogleSignIn: $e')),
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
      );

      // Enviar código de referido si existe
      final referralCode = _referralController.text.trim();
      if (referralCode.isNotEmpty) {
        final session = Supabase.instance.client.auth.currentSession;
        if (session != null) {
          try {
            await http.post(
              Uri.parse('https://glassy-production.up.railway.app/api/player/referral'),
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
          SnackBar(content: Text('Error de autenticación: $e')),
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
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                colors: [AppTheme.deepLapis, Color(0xFF0F2027), Color(0xFF203A43)],
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
                          color: AppTheme.crystalBlue,
                          blurRadius: 20,
                        )
                      ],
                    ),
                  ),
                  const SizedBox(height: 10),
                  Text(
                    'Welcome to the next level',
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
                        fillColor: Colors.black.withOpacity(0.3),
                        hintText: 'CÓDIGO DE CREADOR (Opcional)',
                        hintStyle: const TextStyle(color: Colors.white54, fontSize: 13, letterSpacing: 1),
                        prefixIcon: const Icon(Icons.star_rounded, color: AppTheme.crystalBlue),
                        border: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: BorderSide.none,
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: BorderSide(color: AppTheme.crystalBlue.withOpacity(0.3)),
                        ),
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.circular(15),
                          borderSide: const BorderSide(color: AppTheme.crystalBlue),
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
                          text: 'JUGAR CON GOOGLE',
                          icon: CircleAvatar(
                            backgroundColor: Colors.white,
                            radius: 16,
                            child: Padding(
                              padding: const EdgeInsets.all(4.0),
                              child: Image.asset('assets/office/google.png'),
                            ),
                          ),
                          onPressed: _signInWithGoogle,
                          primaryColor: AppTheme.crystalBlue,
                          secondaryColor: AppTheme.crystalBlue,
                          shatterEffect: false, // ShatterWidget controla la magia
                        ),
                      ),
                    ),
                  ),
                  const SizedBox(height: 30),
                  const Padding(
                    padding: EdgeInsets.symmetric(horizontal: 40),
                    child: Text(
                      '© Todos los derechos del juego están reservados.\nProhibida su copia o distribución no autorizada.',
                      textAlign: TextAlign.center,
                      style: TextStyle(
                        color: Colors.white54,
                        fontSize: 12,
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}
