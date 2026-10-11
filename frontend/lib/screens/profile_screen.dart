import 'package:glassy/theme/app_colors.dart';
import 'dart:math';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:supabase_flutter/supabase_flutter.dart';
import '../theme/app_theme.dart';
import '../services/auth_service.dart';

class ProfileScreen extends StatefulWidget {
  const ProfileScreen({super.key});

  @override
  State<ProfileScreen> createState() => _ProfileScreenState();
}

class _ProfileScreenState extends State<ProfileScreen> {
  final _supabase = Supabase.instance.client;
  final TextEditingController _nameController = TextEditingController();
  
  bool _isLoading = true;
  String? _userId;
  String _currentName = "Player";
  String? _selectedAvatar;
  String? _inviteCode;
  
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
      setState(() {
        _isLoading = false;
      });
    }
  }

  Future<void> _saveProfile() async {
    if (_userId == null) return;
    
    setState(() => _isLoading = true);
    
    try {
      await _supabase.from('users').update({
        'name': _nameController.text.trim(),
        if (_selectedAvatar != null) 'avatar_id': _selectedAvatar,
      }).eq('id', _userId!);
      
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(content: Text('Perfil guardado exitosamente'), backgroundColor: Colors.green),
        );
      }
    } catch (e) {
      debugPrint("Error saving profile: $e");
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(content: Text('Error al guardar el perfil'), backgroundColor: Colors.red),
        );
      }
    } finally {
      if (mounted) {
        setState(() => _isLoading = false);
      }
    }
  }

  void _autoAssignByGender(String gender) {
    final random = Random();
    String newAvatar;
    if (gender == 'Hombre') {
      newAvatar = _avatarsHombre[random.nextInt(_avatarsHombre.length)];
    } else {
      newAvatar = _avatarsMujer[random.nextInt(_avatarsMujer.length)];
    }
    
    setState(() {
      _selectedAvatar = newAvatar;
    });
    _saveProfile();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: AppColors.navyBlue,
      appBar: AppBar(
        title: const Text(
          'MI PERFIL',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.w900,
            letterSpacing: 2,
            shadows: [Shadow(color: AppColors.lightBlue, blurRadius: 15)],
          ),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
        centerTitle: true,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back_ios, color: Colors.white),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      extendBodyBehindAppBar: true,
      body: Stack(
        children: [
          // Fondo
          Container(
            decoration: BoxDecoration(
              gradient: LinearGradient(
                colors: [AppColors.navyBlue, Theme.of(context).colorScheme.surface],
                begin: Alignment.bottomRight,
                end: Alignment.topLeft,
              ),
            ),
          ),
          
          SafeArea(
            child: _isLoading 
              ? const Center(child: CircularProgressIndicator(color: AppColors.lightBlue))
              : SingleChildScrollView(
                  padding: const EdgeInsets.all(24.0),
                  physics: const BouncingScrollPhysics(),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.center,
                    children: [
                      // Avatar Actual
                      Container(
                        width: 120,
                        height: 120,
                        decoration: BoxDecoration(
                          shape: BoxShape.circle,
                          border: Border.all(color: AppColors.lightBlue, width: 3),
                          boxShadow: [
                            BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.5), blurRadius: 20, spreadRadius: 2)
                          ],
                        ),
                        child: ClipOval(
                          child: _selectedAvatar != null 
                            ? Image.asset('assets/avatar/perfiles/$_selectedAvatar', fit: BoxFit.cover, errorBuilder: (c,e,s) => const Icon(Icons.person, size: 60, color: Colors.white))
                            : const Icon(Icons.person, size: 60, color: Colors.white),
                        ),
                      ),
                      const SizedBox(height: 20),
                      
                      // ID del usuario y Código de Invitación
                      if (_userId != null)
                        Text(
                          'ID: ${_userId!.substring(0, 8)}...',
                          style: const TextStyle(color: Colors.white54, fontSize: 12),
                        ),
                      const SizedBox(height: 12),
                      if (_inviteCode != null)
                        InkWell(
                          borderRadius: BorderRadius.circular(16),
                          onTap: () {
                            Clipboard.setData(ClipboardData(text: _inviteCode!));
                            ScaffoldMessenger.of(context).showSnackBar(
                              const SnackBar(
                                content: Text('¡Código copiado! Compártelo con amigos para ganar la skin Metales Preciosos.'),
                                backgroundColor: AppColors.lightBlue,
                                duration: Duration(seconds: 3),
                              ),
                            );
                          },
                          child: Container(
                            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 12),
                            decoration: BoxDecoration(
                              color: AppColors.lightBlue.withValues(alpha: 0.12),
                              borderRadius: BorderRadius.circular(16),
                              border: Border.all(color: AppColors.lightBlue.withValues(alpha: 0.6), width: 1.5),
                              boxShadow: [
                                BoxShadow(
                                  color: AppColors.lightBlue.withValues(alpha: 0.15),
                                  blurRadius: 10,
                                  spreadRadius: 1,
                                ),
                              ],
                            ),
                            child: Row(
                              mainAxisSize: MainAxisSize.min,
                              children: [
                                const Icon(Icons.share_outlined, color: AppColors.lightBlue, size: 20),
                                const SizedBox(width: 10),
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    const Text(
                                      'TU CÓDIGO DE INVITACIÓN (TOCA PARA COPIAR)',
                                      style: TextStyle(color: Colors.white54, fontSize: 10, fontWeight: FontWeight.bold, letterSpacing: 1),
                                    ),
                                    const SizedBox(height: 2),
                                    Text(
                                      _inviteCode!,
                                      style: const TextStyle(
                                        color: AppColors.lightBlue,
                                        fontWeight: FontWeight.w900,
                                        fontSize: 18,
                                        letterSpacing: 2,
                                      ),
                                    ),
                                  ],
                                ),
                                const SizedBox(width: 12),
                                const Icon(Icons.copy, color: AppColors.lightBlue, size: 18),
                              ],
                            ),
                          ),
                        ),
                      const SizedBox(height: 20),
                      
                      // Campo de Nombre
                      TextField(
                        controller: _nameController,
                        style: const TextStyle(color: Colors.white, fontSize: 18, fontWeight: FontWeight.bold),
                        textAlign: TextAlign.center,
                        decoration: InputDecoration(
                          labelText: 'Nombre de Usuario',
                          labelStyle: const TextStyle(color: AppColors.lightBlue),
                          enabledBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(15),
                            borderSide: BorderSide(color: Colors.white.withValues(alpha: 0.3)),
                          ),
                          focusedBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(15),
                            borderSide: const BorderSide(color: AppColors.lightBlue, width: 2),
                          ),
                          filled: true,
                          fillColor: Colors.white.withValues(alpha: 0.05),
                        ),
                      ),
                      
                      const SizedBox(height: 20),
                      
                      ElevatedButton(
                        onPressed: _saveProfile,
                        style: ElevatedButton.styleFrom(
                          backgroundColor: AppColors.lightBlue,
                          foregroundColor: Colors.black,
                          padding: const EdgeInsets.symmetric(horizontal: 40, vertical: 15),
                          shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20)),
                        ),
                        child: const Text('GUARDAR CAMBIOS', style: TextStyle(fontWeight: FontWeight.w900)),
                      ),
                      
                      const SizedBox(height: 40),
                      
                      // Selector por Género
                      const Text(
                        'ASIGNACIÓN RÁPIDA (POR GÉNERO)',
                        style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1),
                      ),
                      const SizedBox(height: 15),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          _buildGenderButton('Hombre', Icons.male, Colors.blue),
                          const SizedBox(width: 20),
                          _buildGenderButton('Mujer', Icons.female, Colors.pink),
                        ],
                      ),
                      
                      const SizedBox(height: 40),
                      
                      // Galería de Avatares
                      const Text(
                        'O ELIGE TU AVATAR FAVORITO',
                        style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1),
                      ),
                      const SizedBox(height: 20),
                      
                      GridView.builder(
                        shrinkWrap: true,
                        physics: const NeverScrollableScrollPhysics(),
                        gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                          crossAxisCount: 3,
                          crossAxisSpacing: 15,
                          mainAxisSpacing: 15,
                        ),
                        itemCount: _allAvatars.length,
                        itemBuilder: (context, index) {
                          final avatar = _allAvatars[index];
                          final isSelected = _selectedAvatar == avatar;
                          return GestureDetector(
                            onTap: () {
                              setState(() {
                                _selectedAvatar = avatar;
                              });
                            },
                            child: Container(
                              decoration: BoxDecoration(
                                shape: BoxShape.circle,
                                border: Border.all(
                                  color: isSelected ? AppColors.lightBlue : Colors.transparent,
                                  width: 3,
                                ),
                                boxShadow: isSelected 
                                  ? [BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.6), blurRadius: 10)]
                                  : [],
                              ),
                              child: ClipOval(
                                child: Image.asset(
                                  'assets/avatar/perfiles/$avatar',
                                  fit: BoxFit.cover,
                                  errorBuilder: (c,e,s) => const Icon(Icons.image_not_supported, color: Colors.white),
                                ),
                              ),
                            ),
                          );
                        },
                      ),
                      const SizedBox(height: 40),
                    ],
                  ),
                ),
          ),
        ],
      ),
    );
  }
  
  Widget _buildGenderButton(String label, IconData icon, Color color) {
    return InkWell(
      onTap: () => _autoAssignByGender(label),
      borderRadius: BorderRadius.circular(15),
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 12),
        decoration: BoxDecoration(
          color: color.withValues(alpha: 0.2),
          borderRadius: BorderRadius.circular(15),
          border: Border.all(color: color.withValues(alpha: 0.5), width: 2),
        ),
        child: Row(
          children: [
            Icon(icon, color: color),
            const SizedBox(width: 8),
            Text(label, style: TextStyle(color: color, fontWeight: FontWeight.bold)),
          ],
        ),
      ),
    );
  }
}
