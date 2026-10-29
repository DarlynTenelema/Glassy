import 'dart:math';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import '../providers/game_provider.dart';
import '../services/auth_service.dart';
import '../theme/app_colors.dart';
import '../widgets/ui/currency_icon.dart';
import '../widgets/ui/glass_card.dart';
import '../l10n/l10n_extension.dart';

class ProfileScreen extends StatefulWidget {
  const ProfileScreen({super.key});

  @override
  State<ProfileScreen> createState() => _ProfileScreenState();
}

class _ProfileScreenState extends State<ProfileScreen> {
  final _supabase = Supabase.instance.client;
  final TextEditingController _nameController = TextEditingController();
  
  bool _isLoading = true;
  bool _isSaving = false;
  String? _userId;
  String _currentName = "Player";
  String? _selectedAvatar;
  String? _inviteCode;
  String _avatarFilter = 'Todos'; // 'Todos', 'Héroes', 'Heroínas'
  
  // Clasificación de personajes
  final List<String> _avatarsHombre = [
    'personaje_2.jpg', 'personaje_3.jpg', 'personaje_7.jpg', 
    'personaje_8.jpg', 'personaje_9.jpg', 'personaje_13.jpg', 
    'personaje_14.jpg', 'personaje_15.jpg', 'personaje_19.jpg'
  ];
  
  final List<String> _avatarsMujer = [
    'personaje_4.jpg', 'personaje_5.jpg', 'personaje_6.jpg', 
    'personaje_10.jpg', 'personaje_11.jpg', 'personaje_12.jpg', 
    'personaje_16.jpg', 'personaje_17.jpg', 'personaje_18.jpg'
  ];
  
  late List<String> _allAvatars;

  @override
  void initState() {
    super.initState();
    _allAvatars = [..._avatarsHombre, ..._avatarsMujer]..sort((a, b) {
      int idA = int.parse(a.replaceAll(RegExp(r'[^0-9]'), ''));
      int idB = int.parse(b.replaceAll(RegExp(r'[^0-9]'), ''));
      return idA.compareTo(idB);
    });
    _loadProfile();
  }

  @override
  void dispose() {
    _nameController.dispose();
    super.dispose();
  }

  Future<void> _loadProfile() async {
    try {
      final user = AuthService().currentUser;
      if (user != null) {
        _userId = user.id;
        final response = await _supabase.from('users').select('name, avatar_id, invite_code').eq('id', user.id).maybeSingle();
        
        if (response != null) {
          setState(() {
            _currentName = response['name'] ?? "Player";
            _nameController.text = _currentName;
            _selectedAvatar = response['avatar_id'];
            _inviteCode = response['invite_code'];
          });
        }
      }
    } catch (e) {
      debugPrint("Error loading profile: $e");
    } finally {
      if (mounted) {
        setState(() {
          _isLoading = false;
        });
      }
    }
  }

  Future<void> _saveProfile() async {
    if (_userId == null || _isSaving) return;
    
    final newName = _nameController.text.trim();
    if (newName.isEmpty) {
      ScaffoldMessenger.of(context).showSnackBar(
        SnackBar(
          content: Text(context.l10n.usernameEmpty),
          backgroundColor: Colors.orangeAccent,
        ),
      );
      return;
    }

    setState(() => _isSaving = true);
    
    try {
      await _supabase.from('users').update({
        'name': newName,
        if (_selectedAvatar != null) 'avatar_id': _selectedAvatar,
      }).eq('id', _userId!);
      
      _currentName = newName;

      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Row(
              children: [
                const Icon(Icons.check_circle, color: Colors.white, size: 20),
                const SizedBox(width: 10),
                Text(context.l10n.profileUpdatedSuccess, style: const TextStyle(fontWeight: FontWeight.bold)),
              ],
            ),
            backgroundColor: const Color(0xFF10B981),
            behavior: SnackBarBehavior.floating,
            shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
          ),
        );
      }
    } catch (e) {
      debugPrint("Error saving profile: $e");
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text(context.l10n.profileUpdateError),
            backgroundColor: Colors.redAccent,
            behavior: SnackBarBehavior.floating,
            shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
          ),
        );
      }
    } finally {
      if (mounted) {
        setState(() => _isSaving = false);
      }
    }
  }

  void _randomizeAvatar(String? gender) {
    HapticFeedback.lightImpact();
    final random = Random();
    String newAvatar;
    if (gender == 'Hombre') {
      newAvatar = _avatarsHombre[random.nextInt(_avatarsHombre.length)];
    } else if (gender == 'Mujer') {
      newAvatar = _avatarsMujer[random.nextInt(_avatarsMujer.length)];
    } else {
      newAvatar = _allAvatars[random.nextInt(_allAvatars.length)];
    }
    
    setState(() {
      _selectedAvatar = newAvatar;
    });
  }

  List<String> get _currentAvatarList {
    if (_avatarFilter == 'Héroes') return _avatarsHombre;
    if (_avatarFilter == 'Heroínas') return _avatarsMujer;
    return _allAvatars;
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);

    return Scaffold(
      backgroundColor: AppColors.navyBlue,
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: Text(
          context.l10n.playerProfile,
          style: const TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 3,
            fontSize: 18,
            shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 15)],
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 20),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: Stack(
        children: [
          // Fondo con gradiente y destellos sutiles
          Container(
            decoration: BoxDecoration(
              gradient: LinearGradient(
                colors: [
                  AppColors.navyBlue,
                  const Color(0xFF0D1B2A),
                  Theme.of(context).colorScheme.surface,
                ],
                begin: Alignment.topCenter,
                end: Alignment.bottomCenter,
              ),
            ),
          ),
          
          SafeArea(
            child: _isLoading 
              ? const Center(child: CircularProgressIndicator(color: AppColors.lightBlue))
              : SingleChildScrollView(
                  physics: const BouncingScrollPhysics(),
                  padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 12),
                  child: Column(
                    children: [
                      // TARJETA DE JUGADOR HERO
                      _buildPlayerCard(gameProvider),
                      
                      const SizedBox(height: 20),
                      
                      // CÓDIGO DE INVITACIÓN VIP
                      if (_inviteCode != null) _buildInviteCard(),
                      
                      const SizedBox(height: 24),
                      
                      // SELECTOR DE AVATARES
                      _buildAvatarSelectionSection(),
                      
                      const SizedBox(height: 30),
                      
                      // BOTÓN GUARDAR CAMBIOS
                      _buildSaveButton(),
                      
                      const SizedBox(height: 30),
                    ],
                  ),
                ),
          ),
        ],
      ),
    );
  }

  Widget _buildPlayerCard(GameProvider gameProvider) {
    return GlassCard(
      padding: const EdgeInsets.all(22),
      borderColor: AppColors.lightBlue.withValues(alpha: 0.35),
      borderRadius: BorderRadius.circular(26),
      child: Column(
        children: [
          // Avatar con halo brillante
          Center(
            child: Stack(
              alignment: Alignment.bottomRight,
              children: [
                Container(
                  width: 110,
                  height: 110,
                  decoration: BoxDecoration(
                    shape: BoxShape.circle,
                    gradient: const LinearGradient(
                      colors: [Color(0xFF60A5FA), Color(0xFF2563EB), Color(0xFF1D4ED8)],
                    ),
                    boxShadow: [
                      BoxShadow(
                        color: AppColors.lightBlue.withValues(alpha: 0.45),
                        blurRadius: 25,
                        spreadRadius: 2,
                      ),
                    ],
                  ),
                  padding: const EdgeInsets.all(3.5),
                  child: Container(
                    decoration: const BoxDecoration(
                      shape: BoxShape.circle,
                      color: AppColors.navyBlue,
                    ),
                    clipBehavior: Clip.antiAlias,
                    child: _selectedAvatar != null 
                      ? ((_selectedAvatar!.startsWith('http://') || _selectedAvatar!.startsWith('https://'))
                          ? Image.network(
                              _selectedAvatar!,
                              fit: BoxFit.cover,
                              errorBuilder: (c, e, s) => const Icon(Icons.person, size: 55, color: Colors.white70),
                            )
                          : Image.asset(
                              'assets/avatar/perfiles/$_selectedAvatar', 
                              fit: BoxFit.cover, 
                              errorBuilder: (c, e, s) => const Icon(Icons.person, size: 55, color: Colors.white70),
                            ))
                      : const Icon(Icons.person, size: 55, color: Colors.white70),
                  ),
                ),
                // Botón flotante para avatar aleatorio
                GestureDetector(
                  onTap: () => _randomizeAvatar(null),
                  child: Container(
                    padding: const EdgeInsets.all(7),
                    decoration: BoxDecoration(
                      color: AppColors.lightBlue,
                      shape: BoxShape.circle,
                      border: Border.all(color: Colors.white, width: 2),
                      boxShadow: [
                        BoxShadow(color: Colors.black.withValues(alpha: 0.4), blurRadius: 6),
                      ],
                    ),
                    child: const Icon(Icons.casino_rounded, color: Colors.black, size: 16),
                  ),
                ),
              ],
            ),
          ),
          
          const SizedBox(height: 14),

          // ID de usuario con tap-to-copy
          if (_userId != null)
            InkWell(
              onTap: () {
                Clipboard.setData(ClipboardData(text: _userId!));
                HapticFeedback.selectionClick();
                ScaffoldMessenger.of(context).showSnackBar(
                  SnackBar(
                    content: Text(context.l10n.idCopied),
                    backgroundColor: AppColors.lightBlue,
                    duration: const Duration(seconds: 2),
                    behavior: SnackBarBehavior.floating,
                  ),
                );
              },
              borderRadius: BorderRadius.circular(12),
              child: Container(
                padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 4),
                decoration: BoxDecoration(
                  color: Colors.white.withValues(alpha: 0.06),
                  borderRadius: BorderRadius.circular(12),
                  border: Border.all(color: Colors.white.withValues(alpha: 0.1)),
                ),
                child: Row(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    const Icon(Icons.fingerprint, color: Colors.white54, size: 13),
                    const SizedBox(width: 5),
                    Text(
                      'ID: ${_userId!.substring(0, min(10, _userId!.length))}...',
                      style: const TextStyle(color: Colors.white54, fontSize: 11, fontFamily: 'monospace'),
                    ),
                    const SizedBox(width: 5),
                    const Icon(Icons.copy, color: Colors.white38, size: 11),
                  ],
                ),
              ),
            ),

          const SizedBox(height: 18),

          // Campo de Nombre de Usuario estilizado
          Container(
            decoration: BoxDecoration(
              color: Colors.black.withValues(alpha: 0.25),
              borderRadius: BorderRadius.circular(16),
              border: Border.all(color: Colors.white.withValues(alpha: 0.12)),
            ),
            padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 4),
            child: TextField(
              controller: _nameController,
              textAlign: TextAlign.center,
              maxLength: 18,
              style: const TextStyle(
                color: Colors.white, 
                fontSize: 17, 
                fontWeight: FontWeight.w800,
                letterSpacing: 0.5,
              ),
              decoration: InputDecoration(
                counterText: '',
                border: InputBorder.none,
                hintText: context.l10n.playerNameHint,
                hintStyle: const TextStyle(color: Colors.white38, fontSize: 15),
                prefixIcon: const Icon(Icons.edit, color: AppColors.lightBlue, size: 18),
                suffixIcon: const SizedBox(width: 18),
              ),
            ),
          ),

          const SizedBox(height: 20),

          // Franja de Estadísticas del Jugador (Récord, Lapislázulis, Racha)
          Container(
            padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 12),
            decoration: BoxDecoration(
              color: Colors.white.withValues(alpha: 0.04),
              borderRadius: BorderRadius.circular(16),
              border: Border.all(color: Colors.white.withValues(alpha: 0.08)),
            ),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                _buildStatItem(context.l10n.highScoreLabel, '${gameProvider.highScore}', Icons.emoji_events_rounded, const Color(0xFFFFD700)),
                Container(height: 28, width: 1, color: Colors.white12),
                _buildStatItemWithIcon('LAPIS', '${gameProvider.crystals}', CurrencyIcon(size: 16)),
                Container(height: 28, width: 1, color: Colors.white12),
                _buildStatItem(context.l10n.streak, '${gameProvider.currentStreak}d', Icons.local_fire_department_rounded, Colors.orangeAccent),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatItem(String label, String value, IconData icon, Color color) {
    return Column(
      children: [
        Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            Icon(icon, color: color, size: 14),
            const SizedBox(width: 4),
            Text(value, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 14)),
          ],
        ),
        const SizedBox(height: 2),
        Text(label, style: const TextStyle(color: Colors.white54, fontSize: 10, fontWeight: FontWeight.bold, letterSpacing: 0.8)),
      ],
    );
  }

  Widget _buildStatItemWithIcon(String label, String value, Widget iconWidget) {
    return Column(
      children: [
        Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            iconWidget,
            const SizedBox(width: 4),
            Text(value, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 14)),
          ],
        ),
        const SizedBox(height: 2),
        Text(label, style: const TextStyle(color: Colors.white54, fontSize: 10, fontWeight: FontWeight.bold, letterSpacing: 0.8)),
      ],
    );
  }

  Widget _buildInviteCard() {
    return Container(
      decoration: BoxDecoration(
        gradient: LinearGradient(
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
          colors: [
            const Color(0xFF1E3A8A).withValues(alpha: 0.4),
            const Color(0xFF0F172A).withValues(alpha: 0.7),
          ],
        ),
        borderRadius: BorderRadius.circular(22),
        border: Border.all(color: const Color(0xFF60A5FA).withValues(alpha: 0.5), width: 1.5),
        boxShadow: [
          BoxShadow(color: const Color(0xFF2563EB).withValues(alpha: 0.15), blurRadius: 15),
        ],
      ),
      padding: const EdgeInsets.all(18),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Container(
                padding: const EdgeInsets.all(8),
                decoration: BoxDecoration(
                  color: Colors.amber.withValues(alpha: 0.15),
                  shape: BoxShape.circle,
                  border: Border.all(color: Colors.amber.withValues(alpha: 0.5)),
                ),
                child: const Icon(Icons.stars, color: Colors.amber, size: 20),
              ),
              const SizedBox(width: 12),
              Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      context.l10n.vipInviteCode,
                      style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 13, letterSpacing: 1),
                    ),
                    const SizedBox(height: 2),
                    Text(
                      context.l10n.inviteFriendsDesc,
                      style: const TextStyle(color: Colors.white60, fontSize: 11),
                    ),
                  ],
                ),
              ),
            ],
          ),
          
          const SizedBox(height: 16),
          
          Container(
            padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
            decoration: BoxDecoration(
              color: Colors.black.withValues(alpha: 0.35),
              borderRadius: BorderRadius.circular(16),
              border: Border.all(color: Colors.white.withValues(alpha: 0.1)),
            ),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Text(
                  _inviteCode!,
                  style: const TextStyle(
                     color: Color(0xFF60A5FA),
                     fontWeight: FontWeight.w900,
                     fontSize: 20,
                     letterSpacing: 3,
                     fontFamily: 'monospace',
                  ),
                ),
                ElevatedButton.icon(
                  onPressed: () {
                    Clipboard.setData(ClipboardData(text: _inviteCode!));
                    HapticFeedback.lightImpact();
                    ScaffoldMessenger.of(context).showSnackBar(
                      SnackBar(
                        content: Text(context.l10n.inviteCodeCopied),
                        backgroundColor: const Color(0xFF2563EB),
                        behavior: SnackBarBehavior.floating,
                      ),
                    );
                  },
                  icon: const Icon(Icons.copy, size: 16, color: Colors.black),
                  label: Text(context.l10n.copy, style: const TextStyle(color: Colors.black, fontWeight: FontWeight.w900, fontSize: 12)),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: const Color(0xFF60A5FA),
                    padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 10),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                    elevation: 0,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildAvatarSelectionSection() {
    final displayedAvatars = _currentAvatarList;

    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            Text(
              context.l10n.selectAvatar,
              style: const TextStyle(
                color: Colors.white, 
                fontWeight: FontWeight.w900, 
                fontSize: 13, 
                letterSpacing: 1.5,
              ),
            ),
            Row(
              children: [
                _buildQuickGenderChip(context.l10n.boy, Icons.male, Colors.blueAccent, () => _randomizeAvatar('Hombre')),
                const SizedBox(width: 8),
                _buildQuickGenderChip(context.l10n.girl, Icons.female, Colors.pinkAccent, () => _randomizeAvatar('Mujer')),
              ],
            ),
          ],
        ),

        const SizedBox(height: 14),

        // Filtro por pestañas (Todos, Héroes, Heroínas)
        Container(
          padding: const EdgeInsets.all(4),
          decoration: BoxDecoration(
            color: Colors.black.withValues(alpha: 0.25),
            borderRadius: BorderRadius.circular(14),
            border: Border.all(color: Colors.white.withValues(alpha: 0.08)),
          ),
          child: Row(
            children: [
              {'key': 'Todos', 'label': context.l10n.allAvatars},
              {'key': 'Héroes', 'label': context.l10n.heroes},
              {'key': 'Heroínas', 'label': context.l10n.heroines},
            ].map((item) {
              final key = item['key']!;
              final label = item['label']!;
              final isSelected = _avatarFilter == key;
              return Expanded(
                child: GestureDetector(
                  onTap: () {
                    HapticFeedback.selectionClick();
                    setState(() => _avatarFilter = key);
                  },
                  child: AnimatedContainer(
                    duration: const Duration(milliseconds: 200),
                    padding: const EdgeInsets.symmetric(vertical: 8),
                    decoration: BoxDecoration(
                      color: isSelected ? AppColors.lightBlue : Colors.transparent,
                      borderRadius: BorderRadius.circular(10),
                    ),
                    child: Text(
                      label.toUpperCase(),
                      textAlign: TextAlign.center,
                      style: TextStyle(
                        color: isSelected ? Colors.black : Colors.white60,
                        fontWeight: FontWeight.w900,
                        fontSize: 11,
                        letterSpacing: 0.8,
                      ),
                    ),
                  ),
                ),
              );
            }).toList(),
          ),
        ),

        const SizedBox(height: 16),

        // Grilla moderna de avatares
        GridView.builder(
          shrinkWrap: true,
          physics: const NeverScrollableScrollPhysics(),
          gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
            crossAxisCount: 3,
            crossAxisSpacing: 14,
            mainAxisSpacing: 14,
          ),
          itemCount: displayedAvatars.length,
          itemBuilder: (context, index) {
            final avatar = displayedAvatars[index];
            final isSelected = _selectedAvatar == avatar;

            return GestureDetector(
              onTap: () {
                HapticFeedback.selectionClick();
                setState(() => _selectedAvatar = avatar);
              },
              child: AnimatedContainer(
                duration: const Duration(milliseconds: 200),
                decoration: BoxDecoration(
                  shape: BoxShape.circle,
                  border: Border.all(
                    color: isSelected ? const Color(0xFF60A5FA) : Colors.white.withValues(alpha: 0.15),
                    width: isSelected ? 3.5 : 1.5,
                  ),
                  boxShadow: isSelected ? [
                    BoxShadow(
                      color: AppColors.lightBlue.withValues(alpha: 0.6),
                      blurRadius: 15,
                      spreadRadius: 2,
                    ),
                  ] : [],
                ),
                child: Stack(
                  alignment: Alignment.bottomRight,
                  children: [
                    Container(
                      decoration: const BoxDecoration(shape: BoxShape.circle),
                      clipBehavior: Clip.antiAlias,
                      child: Image.asset(
                        'assets/avatar/perfiles/$avatar',
                        fit: BoxFit.cover,
                        errorBuilder: (c, e, s) => const Icon(Icons.person, color: Colors.white),
                      ),
                    ),
                    if (isSelected)
                      Container(
                        padding: const EdgeInsets.all(3),
                        decoration: const BoxDecoration(
                          color: Color(0xFF2563EB),
                          shape: BoxShape.circle,
                        ),
                        child: const Icon(Icons.check, color: Colors.white, size: 14),
                      ),
                  ],
                ),
              ),
            );
          },
        ),
      ],
    );
  }

  Widget _buildQuickGenderChip(String label, IconData icon, Color color, VoidCallback onTap) {
    return GestureDetector(
      onTap: onTap,
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
        decoration: BoxDecoration(
          color: color.withValues(alpha: 0.15),
          borderRadius: BorderRadius.circular(10),
          border: Border.all(color: color.withValues(alpha: 0.4)),
        ),
        child: Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            Icon(icon, color: color, size: 13),
            const SizedBox(width: 3),
            Text(label, style: TextStyle(color: color, fontSize: 10, fontWeight: FontWeight.w800)),
          ],
        ),
      ),
    );
  }

  Widget _buildSaveButton() {
    return SizedBox(
      width: double.infinity,
      height: 52,
      child: ElevatedButton(
        onPressed: _isSaving ? null : _saveProfile,
        style: ElevatedButton.styleFrom(
          backgroundColor: AppColors.lightBlue,
          disabledBackgroundColor: AppColors.lightBlue.withValues(alpha: 0.5),
          shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
          elevation: 6,
          shadowColor: AppColors.lightBlue.withValues(alpha: 0.5),
        ),
        child: _isSaving
          ? const SizedBox(
              width: 22,
              height: 22,
              child: CircularProgressIndicator(strokeWidth: 2.5, color: Colors.black),
            )
          : Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                const Icon(Icons.save_rounded, color: Colors.black, size: 20),
                const SizedBox(width: 8),
                Text(
                  context.l10n.saveChanges,
                  style: const TextStyle(
                    color: Colors.black,
                    fontWeight: FontWeight.w900,
                    letterSpacing: 1.5,
                    fontSize: 15,
                  ),
                ),
              ],
            ),
      ),
    );
  }
}
