import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../theme/app_theme.dart';
import '../services/audio_service.dart';
import 'login_screen.dart';

class SettingsScreen extends StatefulWidget {
  const SettingsScreen({Key? key}) : super(key: key);

  @override
  State<SettingsScreen> createState() => _SettingsScreenState();
}

class _SettingsScreenState extends State<SettingsScreen> {
  bool _volumen = true;
  bool _efectos = true;
  double _musicVolume = 1.0;

  @override
  void initState() {
    super.initState();
    AudioService().playBgMusic();
    _loadSettings();
  }

  Future<void> _loadSettings() async {
    final prefs = await SharedPreferences.getInstance();
    setState(() {
      _volumen = prefs.getBool('volume') ?? true;
      _efectos = prefs.getBool('effects') ?? true;
      _musicVolume = prefs.getDouble('musicVolume') ?? 1.0;
    });
  }

  Future<void> _saveSetting(String key, bool value) async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setBool(key, value);
  }

  Future<void> _saveDoubleSetting(String key, double value) async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setDouble(key, value);
  }

  @override
  Widget build(BuildContext context) {
    final themeProvider = Provider.of<ThemeProvider>(context);
    final isDark = themeProvider.themeMode == ThemeMode.dark;

    return Scaffold(
      appBar: AppBar(
        title: const Text('Configuración'),
        backgroundColor: Colors.transparent,
        elevation: 0,
      ),
      backgroundColor: Theme.of(context).scaffoldBackgroundColor,
      body: Padding(
        padding: const EdgeInsets.all(20.0),
        child: Column(
          children: [
            GlassContainer(
              padding: const EdgeInsets.all(20),
              child: Column(
                children: [
                  SwitchListTile(
                    title: Text('Volumen General', style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white)),
                    value: _volumen, 
                    activeColor: AppTheme.crystalBlue,
                    onChanged: (val) {
                      setState(() {
                        _volumen = val;
                      });
                      _saveSetting('volume', val);
                    },
                  ),
                  const Divider(color: Colors.white24),
                  SwitchListTile(
                    title: Text('Efectos', style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white)),
                    value: _efectos,
                    activeColor: Colors.white.withOpacity(0.9),
                    onChanged: (val) {
                      setState(() {
                        _efectos = val;
                      });
                      _saveSetting('effects', val);
                    },
                  ),
                  const Divider(color: Colors.white24),
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 16.0, vertical: 8.0),
                    child: Row(
                      children: [
                        Text('Música Juego', style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white)),
                        Expanded(
                          child: Slider(
                            value: _musicVolume,
                            min: 0.0,
                            max: 1.0,
                            activeColor: AppTheme.crystalBlue,
                            onChanged: (v) {
                              setState(() => _musicVolume = v);
                              _saveDoubleSetting('musicVolume', v);
                            },
                          ),
                        ),
                      ],
                    ),
                  ),

                ],
              ),
            ),
            const Spacer(),
            TextButton(
              onPressed: () async {
                await Supabase.instance.client.auth.signOut();
                if (mounted) {
                  Navigator.pushAndRemoveUntil(
                    context, 
                    MaterialPageRoute(builder: (_) => const LoginScreen()),
                    (route) => false,
                  );
                }
              },
              child: const Text('Cerrar Sesión', style: TextStyle(color: Colors.redAccent, fontSize: 16)),
            )
          ],
        ),
      ),
    );
  }
}
