import 'package:flutter/material.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:google_sign_in/google_sign_in.dart';
import '../config/env.dart';
import '../theme/app_theme.dart';
import 'home_screen.dart';
import '../widgets/gaming_button.dart';

class LoginScreen extends StatefulWidget {
  const LoginScreen({Key? key}) : super(key: key);

  @override
  State<LoginScreen> createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen> {
  bool _isLoading = false;

  @override
  void initState() {
    super.initState();
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
      _isLoading = true;
    });
    
    try {
      final googleSignIn = GoogleSignIn(
        serverClientId: Env.webClientId,
      );
      
      final googleUser = await googleSignIn.signIn();
      if (googleUser == null) {
        setState(() => _isLoading = false);
        return; // El usuario canceló el inicio de sesión
      }
      
      final googleAuth = await googleUser.authentication;
      final accessToken = googleAuth.accessToken;
      final idToken = googleAuth.idToken;

      if (idToken == null) {
        throw 'No ID Token found.';
      }

      await Supabase.instance.client.auth.signInWithIdToken(
        provider: OAuthProvider.google,
        idToken: idToken,
        accessToken: accessToken,
      );

      if (mounted) {
        Navigator.of(context).pushReplacement(
          MaterialPageRoute(builder: (_) => const HomeScreen()),
        );
      }
    } catch (e) {
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text('Error al iniciar sesión: $e'),
            backgroundColor: Colors.red,
          )
        );
      }
    } finally {
      if (mounted) {
        setState(() => _isLoading = false);
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
                colors: [Color(0xFF0F0C29), Color(0xFF302B63), Color(0xFF24243E)],
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
                          color: AppTheme.neonPurple,
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
                  const SizedBox(height: 60),
                  // Botón de Google
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 40),
                    child: _isLoading 
                        ? const Padding(
                            padding: EdgeInsets.all(15.0),
                            child: CircularProgressIndicator(color: Colors.white),
                          )
                        : GamingButton(
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
                            primaryColor: AppTheme.neonBlue,
                            secondaryColor: const Color(0xFF008B99),
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
