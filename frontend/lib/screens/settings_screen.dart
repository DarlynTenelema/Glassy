import 'dart:convert';
import 'package:glassy/theme/app_colors.dart';
import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'package:provider/provider.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import '../config/env.dart';
import '../providers/game_provider.dart';
import '../widgets/ui/glass_card.dart';
import '../services/audio_service.dart';
import '../services/auth_service.dart';
import '../providers/locale_provider.dart';
import '../l10n/l10n_extension.dart';
import 'login_screen.dart';

class SettingsScreen extends StatefulWidget {
  const SettingsScreen({super.key});

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

  void _showLanguageSelector(BuildContext context) {
    final localeProvider = Provider.of<LocaleProvider>(context, listen: false);
    final currentCode = localeProvider.locale.languageCode;

    showModalBottomSheet(
      context: context,
      backgroundColor: Colors.transparent,
      builder: (bottomSheetContext) {
        return Container(
          decoration: BoxDecoration(
            color: Theme.of(context).scaffoldBackgroundColor,
            borderRadius: const BorderRadius.vertical(top: Radius.circular(25)),
            border: Border.all(color: Colors.white.withValues(alpha: 0.2)),
          ),
          padding: const EdgeInsets.symmetric(vertical: 24, horizontal: 20),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              Container(
                width: 40,
                height: 4,
                margin: const EdgeInsets.only(bottom: 20),
                decoration: BoxDecoration(
                  color: Colors.white24,
                  borderRadius: BorderRadius.circular(2),
                ),
              ),
              Row(
                children: [
                  const Icon(Icons.language_rounded, color: AppColors.lightBlue, size: 26),
                  const SizedBox(width: 12),
                  Text(
                    context.l10n.selectLanguage,
                    style: const TextStyle(
                      color: Colors.white,
                      fontSize: 18,
                      fontWeight: FontWeight.bold,
                      letterSpacing: 1,
                    ),
                  ),
                ],
              ),
              const SizedBox(height: 16),
              ...LocaleProvider.supportedLocales.map((loc) {
                final isSelected = loc.languageCode == currentCode;
                final name = localeProvider.getLanguageName(loc.languageCode);
                final flag = localeProvider.getLanguageFlag(loc.languageCode);
                return Container(
                  margin: const EdgeInsets.only(bottom: 10),
                  decoration: BoxDecoration(
                    color: isSelected
                        ? AppColors.lightBlue.withValues(alpha: 0.15)
                        : Colors.white.withValues(alpha: 0.05),
                    borderRadius: BorderRadius.circular(16),
                    border: Border.all(
                      color: isSelected ? AppColors.lightBlue : Colors.white12,
                      width: isSelected ? 1.5 : 1,
                    ),
                  ),
                  child: ListTile(
                    leading: Container(
                      width: 40,
                      height: 40,
                      alignment: Alignment.center,
                      decoration: BoxDecoration(
                        color: Colors.black.withValues(alpha: 0.25),
                        borderRadius: BorderRadius.circular(12),
                      ),
                      child: Text(flag, style: const TextStyle(fontSize: 22)),
                    ),
                    title: Text(
                      name,
                      style: TextStyle(
                        color: isSelected ? AppColors.lightBlue : Colors.white,
                        fontWeight: isSelected ? FontWeight.bold : FontWeight.normal,
                        fontSize: 16,
                      ),
                    ),
                    trailing: isSelected
                        ? const Icon(Icons.check_circle_rounded, color: AppColors.lightBlue, size: 22)
                        : null,
                    onTap: () {
                      localeProvider.setLocale(loc);
                      Navigator.pop(bottomSheetContext);
                    },
                  ),
                );
              }),
            ],
          ),
        );
      },
    );
  }

  void _showRedeemCodeDialog(BuildContext context) {
    final codeController = TextEditingController();
    bool isSubmitting = false;

    showDialog(
      context: context,
      builder: (dialogContext) {
        return StatefulBuilder(
          builder: (context, setDialogState) {
            return AlertDialog(
              backgroundColor: const Color(0xFF1E293B),
              shape: RoundedRectangleBorder(
                borderRadius: BorderRadius.circular(20),
                side: BorderSide(color: Colors.white.withValues(alpha: 0.2)),
              ),
              title: const Row(
                children: [
                  Icon(Icons.stars_rounded, color: Colors.amber, size: 26),
                  SizedBox(width: 10),
                  Text(
                    'Código de Creador',
                    style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 18),
                  ),
                ],
              ),
              content: Column(
                mainAxisSize: MainAxisSize.min,
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  const Text(
                    'Ingresa el código que te dio tu influencer o streamer para recibir 300 cristales gratis:',
                    style: TextStyle(color: Colors.white70, fontSize: 13),
                  ),
                  const SizedBox(height: 16),
                  TextField(
                    controller: codeController,
                    textCapitalization: TextCapitalization.characters,
                    style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1.5),
                    decoration: InputDecoration(
                      hintText: 'EJ: DARLYN_GLAS8F',
                      hintStyle: TextStyle(color: Colors.white.withValues(alpha: 0.3)),
                      filled: true,
                      fillColor: Colors.black26,
                      contentPadding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
                      border: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(12),
                        borderSide: BorderSide(color: Colors.white.withValues(alpha: 0.2)),
                      ),
                      enabledBorder: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(12),
                        borderSide: BorderSide(color: Colors.white.withValues(alpha: 0.2)),
                      ),
                      focusedBorder: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(12),
                        borderSide: const BorderSide(color: AppColors.lightBlue, width: 1.5),
                      ),
                    ),
                  ),
                ],
              ),
              actions: [
                TextButton(
                  onPressed: isSubmitting ? null : () => Navigator.pop(dialogContext),
                  child: const Text('Cancelar', style: TextStyle(color: Colors.white54)),
                ),
                ElevatedButton(
                  onPressed: isSubmitting
                      ? null
                      : () async {
                          final code = codeController.text.trim().toUpperCase();
                          if (code.isEmpty) return;

                          setDialogState(() => isSubmitting = true);
                          final session = Supabase.instance.client.auth.currentSession;
                          if (session == null) {
                            Navigator.pop(dialogContext);
                            return;
                          }

                          try {
                            final response = await http.post(
                              Uri.parse('${Env.backendUrl}/player/referral'),
                              headers: {
                                'Content-Type': 'application/json',
                                'Authorization': 'Bearer ${session.accessToken}',
                              },
                              body: jsonEncode({'code': code}),
                            );

                            final data = jsonDecode(response.body);

                            if (!context.mounted) return;
                            Navigator.pop(dialogContext);

                            if (response.statusCode == 200) {
                              Provider.of<GameProvider>(context, listen: false).addCrystals(300);
                              ScaffoldMessenger.of(context).showSnackBar(
                                const SnackBar(
                                  content: Row(
                                    children: [
                                      Icon(Icons.check_circle_rounded, color: Colors.greenAccent),
                                      SizedBox(width: 8),
                                      Expanded(
                                        child: Text(
                                          '¡Código canjeado con éxito! Recibiste +300 cristales.',
                                          style: TextStyle(fontWeight: FontWeight.bold),
                                        ),
                                      ),
                                    ],
                                  ),
                                  backgroundColor: Color(0xFF0F766E),
                                ),
                              );
                            } else {
                              ScaffoldMessenger.of(context).showSnackBar(
                                SnackBar(
                                  content: Text(data['error'] ?? data['details'] ?? 'Código inválido o ya utilizado.'),
                                  backgroundColor: Colors.redAccent,
                                ),
                              );
                            }
                          } catch (e) {
                            if (!context.mounted) return;
                            Navigator.pop(dialogContext);
                            ScaffoldMessenger.of(context).showSnackBar(
                              SnackBar(
                                content: Text('Error de conexión: $e'),
                                backgroundColor: Colors.redAccent,
                              ),
                            );
                          }
                        },
                  style: ElevatedButton.styleFrom(
                    backgroundColor: AppColors.lightBlue,
                    foregroundColor: Colors.white,
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                  child: isSubmitting
                      ? const SizedBox(width: 18, height: 18, child: CircularProgressIndicator(strokeWidth: 2, color: Colors.white))
                      : const Text('Canjear', style: TextStyle(fontWeight: FontWeight.bold)),
                ),
              ],
            );
          },
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    final localeProvider = Provider.of<LocaleProvider>(context);
    final currentLangName = localeProvider.getLanguageName(localeProvider.locale.languageCode);

    return Scaffold(
      appBar: AppBar(
        title: Text(context.l10n.settingsTitle),
        backgroundColor: Colors.transparent,
        elevation: 0,
      ),
      backgroundColor: Theme.of(context).scaffoldBackgroundColor,
      body: Padding(
        padding: const EdgeInsets.all(20.0),
        child: Column(
          children: [
            GlassCard(
              padding: const EdgeInsets.all(20),
              child: Column(
                children: [
                  SwitchListTile(
                    title: Text(
                      context.l10n.generalVolume,
                      style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white),
                    ),
                    value: _volumen, 
                    activeThumbColor: AppColors.lightBlue,
                    onChanged: (val) {
                      setState(() {
                        _volumen = val;
                      });
                      _saveSetting('volume', val);
                    },
                  ),
                  const Divider(color: Colors.white24),
                  SwitchListTile(
                    title: Text(
                      context.l10n.effects,
                      style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white),
                    ),
                    value: _efectos,
                    activeThumbColor: Colors.white.withValues(alpha: 0.9),
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
                        Text(
                          context.l10n.gameMusic,
                          style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white),
                        ),
                        Expanded(
                          child: Slider(
                            value: _musicVolume,
                            min: 0.0,
                            max: 1.0,
                            activeColor: AppColors.lightBlue,
                            onChanged: (v) {
                              setState(() => _musicVolume = v);
                              _saveDoubleSetting('musicVolume', v);
                            },
                          ),
                        ),
                      ],
                    ),
                  ),
                  const Divider(color: Colors.white24),
                  ListTile(
                    leading: const Icon(Icons.language_rounded, color: AppColors.lightBlue),
                    title: Text(
                      context.l10n.language,
                      style: Theme.of(context).textTheme.titleLarge?.copyWith(color: Colors.white),
                    ),
                    trailing: Row(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        Text(
                          localeProvider.getLanguageFlag(localeProvider.locale.languageCode),
                          style: const TextStyle(fontSize: 18),
                        ),
                        const SizedBox(width: 8),
                        Text(
                          currentLangName,
                          style: const TextStyle(
                            color: AppColors.lightBlue,
                            fontWeight: FontWeight.bold,
                            fontSize: 15,
                          ),
                        ),
                        const SizedBox(width: 6),
                        const Icon(Icons.arrow_forward_ios_rounded, color: Colors.white54, size: 14),
                      ],
                    ),
                    onTap: () => _showLanguageSelector(context),
                  ),
                  const Divider(color: Colors.white24),
                  ListTile(
                    leading: const Icon(Icons.card_giftcard_rounded, color: Colors.amber),
                    title: const Text(
                      'Código de Creador',
                      style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16),
                    ),
                    subtitle: const Text(
                      'Canjea y gana 300 cristales gratis',
                      style: TextStyle(color: Colors.white60, fontSize: 12),
                    ),
                    trailing: const Icon(Icons.arrow_forward_ios_rounded, color: Colors.white54, size: 14),
                    onTap: () => _showRedeemCodeDialog(context),
                  ),
                ],
              ),
            ),
            const Spacer(),
            TextButton(
              onPressed: () async {
                await AuthService().signOut();
                if (!context.mounted) return;
                Navigator.pushAndRemoveUntil(
                  context, 
                  MaterialPageRoute(builder: (_) => const LoginScreen()),
                  (route) => false,
                );
              },
              child: Text(
                context.l10n.logout,
                style: const TextStyle(color: Colors.redAccent, fontSize: 16),
              ),
            )
          ],
        ),
      ),
    );
  }
}
