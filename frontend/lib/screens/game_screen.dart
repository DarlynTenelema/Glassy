import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import '../theme/app_theme.dart';
import '../widgets/gaming_button.dart';

class GameScreen extends StatefulWidget {
  const GameScreen({Key? key}) : super(key: key);

  @override
  State<GameScreen> createState() => _GameScreenState();
}

class _GameScreenState extends State<GameScreen> {
  late UnityWidgetController _unityWidgetController;
  
  bool _isPaused = false;
  bool _isGameOver = false;
  bool _showStartBanner = true;
  
  int _score = 0;
  int _highScore = 0; // Para la lógica de "Nuevo Score"
  int _crystals = 1000; // Valor inicial o cargado del estado global

  void onUnityCreated(controller) {
    _unityWidgetController = controller;
    
    // Pasar el token a Unity
    final session = Supabase.instance.client.auth.currentSession;
    if (session != null) {
      _unityWidgetController.postMessage(
        'AuthManager', // Asegúrate de que el GameObject en Unity se llame 'AuthManager'
        'ReceiveTokenFromFlutter', 
        session.accessToken,
      );
    }

    // Ocultar la barra de inicio después de 3 segundos
    Future.delayed(const Duration(seconds: 3), () {
      if (mounted) {
        setState(() {
          _showStartBanner = false;
        });
      }
    });
  }

  void onUnityMessage(message) {
    String msg = message.toString();
    print('Mensaje desde Unity: $msg');
    
    if (msg.startsWith('SCORE:')) {
      setState(() {
        _score = int.parse(msg.substring(6));
      });
    } else if (msg.startsWith('CRYSTALS:')) {
      setState(() {
        _crystals = int.parse(msg.substring(9));
      });
    } else if (msg.startsWith('GAMEOVER:')) {
      setState(() {
        _score = int.parse(msg.substring(9));
        _isGameOver = true;
        if (_score > _highScore) {
          _highScore = _score;
        }
      });
    }
  }

  void _togglePause() {
    setState(() {
      _isPaused = !_isPaused;
    });
    // Enviar mensaje a Unity para pausar/reanudar físicas
    _unityWidgetController.postMessage(
      'GameManager', // GameObject en Unity
      _isPaused ? 'PauseGame' : 'ResumeGame', // Nombre del método
      '', // Parámetro extra si es necesario
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      body: Stack(
        children: [
          // 1. Capa Base: Unity (El Juego)
          UnityWidget(
            onUnityCreated: onUnityCreated,
            onUnityMessage: onUnityMessage,
            useAndroidViewSurface: false,
            borderRadius: const BorderRadius.all(Radius.circular(0)),
          ),
          
          // 2. Capa de HUD (Puntaje, Botones)
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
              child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  // Top Bar (Cristales y Pausa)
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      // Contador de Cristales
                      Container(
                        padding: const EdgeInsets.symmetric(horizontal: 15, vertical: 8),
                        decoration: BoxDecoration(
                          color: Colors.black54,
                          borderRadius: BorderRadius.circular(20),
                          border: Border.all(color: AppTheme.neonPurple, width: 1.5),
                        ),
                        child: Row(
                          children: [
                            const Icon(Icons.diamond, color: AppTheme.neonBlue, size: 20),
                            const SizedBox(width: 8),
                            Text(
                              '$_crystals',
                              style: const TextStyle(
                                color: Colors.white,
                                fontWeight: FontWeight.bold,
                                fontSize: 16,
                              ),
                            ),
                          ],
                        ),
                      ),
                      
                      // Botones Superiores Derecha
                      Row(
                        children: [
                          IconButton(
                            onPressed: _togglePause,
                            icon: Icon(
                              _isPaused ? Icons.play_arrow : Icons.pause,
                              color: Colors.white,
                              size: 35,
                              shadows: [Shadow(color: AppTheme.neonPink, blurRadius: 10)],
                            ),
                          ),
                          IconButton(
                            onPressed: () {
                              Navigator.pop(context);
                            },
                            icon: const Icon(
                              Icons.close,
                              color: Colors.white,
                              size: 35,
                              shadows: [Shadow(color: AppTheme.neonPink, blurRadius: 10)],
                            ),
                          ),
                        ],
                      )
                    ],
                  ),
                  
                  // Bottom Bar (Puntaje sobre las montañas o abajo)
                  Container(
                    margin: const EdgeInsets.only(bottom: 20),
                    padding: const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                    decoration: BoxDecoration(
                      color: Colors.black.withOpacity(0.6),
                      borderRadius: BorderRadius.circular(30),
                    ),
                    child: Text(
                      'Score: $_score',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 24,
                        fontWeight: FontWeight.bold,
                        shadows: [Shadow(color: AppTheme.neonBlue, blurRadius: 15)],
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
          
          // 3. Capa de Overlays (Pausa o Game Over)
          if (_isPaused) _buildPauseOverlay(),
          
          // 4. Banners Animados (Inicio y Game Over)
          _buildAnimatedBanner(),
        ],
      ),
    );
  }

  Widget _buildPauseOverlay() {
    return Container(
      color: Colors.black.withOpacity(0.7),
      child: Center(
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            Text(
              'BREAK!!!',
              style: Theme.of(context).textTheme.displayMedium?.copyWith(
                color: Colors.white,
                fontWeight: FontWeight.bold,
                shadows: [const Shadow(color: AppTheme.neonBlue, blurRadius: 20)],
              ),
            ),
            const SizedBox(height: 40),
            GlassContainer(
              width: 300,
              padding: const EdgeInsets.all(20),
              child: Column(
                children: [
                  SwitchListTile(
                    title: const Text('Volumen', style: TextStyle(color: Colors.white)),
                    value: true,
                    activeColor: AppTheme.neonBlue,
                    onChanged: (v) {},
                  ),
                  const Divider(color: Colors.white24),
                  SwitchListTile(
                    title: const Text('Efectos', style: TextStyle(color: Colors.white)),
                    value: true,
                    activeColor: AppTheme.neonPink,
                    onChanged: (v) {},
                  ),
                ],
              ),
            ),
            const SizedBox(height: 30),
            const Text(
              'Tienda',
              style: TextStyle(color: Colors.white70, fontSize: 18),
            ),
            const SizedBox(height: 10),
            GlassContainer(
              width: 300,
              padding: const EdgeInsets.all(15),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  const Row(
                    children: [
                      Icon(Icons.diamond, color: AppTheme.neonBlue),
                      SizedBox(width: 10),
                      Text('100 Gemas', style: TextStyle(color: Colors.white, fontSize: 18)),
                    ],
                  ),
                  SizedBox(
                    width: 100,
                    child: GamingButton(
                      text: '\$0.99',
                      height: 40,
                      fontSize: 16,
                      primaryColor: AppTheme.neonPurple,
                      secondaryColor: const Color(0xFF6A0DAD),
                      onPressed: () {},
                    ),
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildAnimatedBanner() {
    final bool showBanner = _showStartBanner || _isGameOver;
    final String title = _isGameOver 
        ? (_score >= _highScore && _score > 0 ? '¡Felicidades, nuevo score!' : 'Buen intento') 
        : 'Juega, relájate y disfruta';
    final String subtitle = _isGameOver ? 'Tu score: $_score' : '';

    return AnimatedPositioned(
      duration: const Duration(milliseconds: 800),
      curve: Curves.elasticOut,
      top: showBanner ? MediaQuery.of(context).size.height * 0.4 : -200, // Entra desde arriba o sale
      left: 0,
      right: 0,
      child: Center(
        child: Container(
          width: double.infinity,
          margin: const EdgeInsets.symmetric(horizontal: 20),
          padding: const EdgeInsets.symmetric(vertical: 25, horizontal: 20),
          decoration: BoxDecoration(
            color: Colors.white.withOpacity(0.1),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: Colors.white.withOpacity(0.3), width: 1.5),
            boxShadow: [
              BoxShadow(
                color: AppTheme.neonBlue.withOpacity(0.2),
                blurRadius: 30,
                spreadRadius: 5,
              )
            ],
          ),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              Text(
                title,
                textAlign: TextAlign.center,
                style: const TextStyle(
                  color: Colors.white,
                  fontSize: 26,
                  fontWeight: FontWeight.bold,
                  shadows: [Shadow(color: AppTheme.neonBlue, blurRadius: 10)],
                ),
              ),
              if (subtitle.isNotEmpty) ...[
                const SizedBox(height: 10),
                Text(
                  subtitle,
                  style: const TextStyle(
                    color: AppTheme.neonPink,
                    fontSize: 22,
                    fontWeight: FontWeight.w600,
                    shadows: [Shadow(color: Colors.black, blurRadius: 5)],
                  ),
                ),
                const SizedBox(height: 30),
                Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    OutlinedButton(
                      onPressed: () => Navigator.pop(context),
                      style: OutlinedButton.styleFrom(
                        foregroundColor: Colors.white,
                        side: const BorderSide(color: Colors.white54),
                        padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 12),
                      ),
                      child: const Text('Salir'),
                    ),
                    const SizedBox(width: 15),
                    SizedBox(
                      width: 150,
                      child: GamingButton(
                        text: 'REINTENTAR',
                        height: 45,
                        fontSize: 16,
                        primaryColor: AppTheme.neonPurple,
                        secondaryColor: const Color(0xFF6A0DAD),
                        onPressed: () {
                          setState(() {
                            _isGameOver = false;
                            _showStartBanner = true;
                            _score = 0;
                          });
                          _unityWidgetController.postMessage('GameManager', 'RestartGame', '');
                          // Volver a ocultar la barra de inicio
                          Future.delayed(const Duration(seconds: 3), () {
                            if (mounted) {
                              setState(() {
                                _showStartBanner = false;
                              });
                            }
                          });
                        },
                      ),
                    ),
                  ],
                )
              ]
            ],
          ),
        ),
      ),
    );
  }
}
