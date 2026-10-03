import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../theme/app_theme.dart';
import '../providers/game_provider.dart';
import 'store_screen.dart';

class SkinsScreen extends StatefulWidget {
  const SkinsScreen({Key? key}) : super(key: key);

  @override
  State<SkinsScreen> createState() => _SkinsScreenState();
}

class _SkinsScreenState extends State<SkinsScreen> {
  final List<Map<String, dynamic>> _allSkins = [
    {'id': 'gemas_clasicas', 'name': 'Gemas Clásicas'},
    {'id': 'vida_marina', 'name': 'Vida Marina'},
    {'id': 'Dinosaurios', 'name': 'Dinosaurios'},
    {'id': 'Dulces_de_Halloween', 'name': 'Dulces Halloween'},
    {'id': 'Caldero_de_Bruja', 'name': 'Caldero Bruja'},
    {'id': 'Cementerio_Encantado', 'name': 'Cementerio Encantado'},
    {'id': 'Cultivo_de_Calabazas', 'name': 'Calabazas'},
    {'id': 'Ajedrez_Magico', 'name': 'Ajedrez Mágico'},
    {'id': 'Alquimia_Antigua', 'name': 'Alquimia Antigua'},
    {'id': 'Flores_Magicas', 'name': 'Flores Mágicas'},
    {'id': 'Frutas_Jugosas', 'name': 'Frutas Jugosas'},
    {'id': 'Hongos_Brillantes', 'name': 'Hongos Brillantes'},
    {'id': 'Monstruos_de_Bolsillo', 'name': 'Monstruos Bolsillo'},
    {'id': 'Mundo_Dulce', 'name': 'Mundo Dulce'},
    {'id': 'Planetas', 'name': 'Planetas'},
    {'id': 'Sushi_Japones', 'name': 'Sushi Japonés'},
  ];

  void _selectSkin(String skinId, GameProvider provider) {
    provider.equipSkin(skinId);
    _sendSkinToUnity(skinId);
  }

  void _sendSkinToUnity(String skinId) {
    print("------------------------------------------------");
    print("SKIN SELECCIONADA: $skinId (Se enviará a Unity al iniciar el juego)");
    print("------------------------------------------------");
  }

  @override
  Widget build(BuildContext context) {
    final gameProvider = Provider.of<GameProvider>(context);
    final unlockedSkins = gameProvider.unlockedSkins;
    final selectedSkinId = gameProvider.selectedSkinId;

    final ownedSkins = _allSkins.where((s) => unlockedSkins.contains(s['id']) || s['id'] == 'gemas_clasicas').toList();
    final lockedSkins = _allSkins.where((s) => !unlockedSkins.contains(s['id']) && s['id'] != 'gemas_clasicas').toList();

    return Scaffold(
      backgroundColor: const Color(0xFF0D0D12),
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text('INVENTARIO', style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, letterSpacing: 4, fontSize: 20)),
        backgroundColor: Colors.black.withOpacity(0.3),
        flexibleSpace: ClipRect(
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 15, sigmaY: 15),
            child: Container(color: Colors.transparent),
          ),
        ),
        elevation: 0,
        centerTitle: true,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back_ios_new, color: Colors.white, size: 22),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: Stack(
        children: [
          Container(
            decoration: const BoxDecoration(
              gradient: RadialGradient(
                center: Alignment.topCenter,
                radius: 1.5,
                colors: [Color(0xFF1A1A2E), Color(0xFF0D0D12)],
              ),
            ),
          ),
          SafeArea(
            child: CustomScrollView(
              physics: const BouncingScrollPhysics(),
              slivers: [
                _buildSectionHeader('TU COLECCIÓN', Icons.check_circle_outline, AppTheme.crystalBlue),
                _buildGrid(ownedSkins, true, selectedSkinId, gameProvider),
                
                const SliverToBoxAdapter(child: SizedBox(height: 30)),
                
                if (lockedSkins.isNotEmpty) ...[
                  _buildSectionHeader('POR DESBLOQUEAR', Icons.lock_outline, Colors.white54),
                  _buildGrid(lockedSkins, false, selectedSkinId, gameProvider),
                ],
                const SliverToBoxAdapter(child: SizedBox(height: 40)),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildSectionHeader(String title, IconData icon, Color color) {
    return SliverToBoxAdapter(
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 15),
        child: Row(
          children: [
            Icon(icon, color: color, size: 20),
            const SizedBox(width: 10),
            Text(
              title,
              style: TextStyle(color: color, fontWeight: FontWeight.w900, fontSize: 16, letterSpacing: 1.5),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildGrid(List<Map<String, dynamic>> skins, bool isOwned, String selectedSkinId, GameProvider provider) {
    return SliverPadding(
      padding: const EdgeInsets.symmetric(horizontal: 16),
      sliver: SliverGrid(
        gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
          crossAxisCount: 2,
          childAspectRatio: 0.7,
          crossAxisSpacing: 16,
          mainAxisSpacing: 16,
        ),
        delegate: SliverChildBuilderDelegate(
          (context, index) {
            final skin = skins[index];
            final bool isSelected = skin['id'] == selectedSkinId;
            return _buildSkinCard(skin, isOwned, isSelected, provider);
          },
          childCount: skins.length,
        ),
      ),
    );
  }

  Widget _buildSkinCard(Map<String, dynamic> skin, bool isOwned, bool isSelected, GameProvider provider) {
    return GestureDetector(
      onTap: () {
        if (isOwned && !isSelected) {
          _selectSkin(skin['id'], provider);
        } else if (!isOwned) {
          Navigator.push(context, MaterialPageRoute(builder: (_) => const StoreScreen()));
        }
      },
      child: ClipRRect(
        borderRadius: BorderRadius.circular(24),
        child: BackdropFilter(
          filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
          child: Container(
            decoration: BoxDecoration(
              color: Colors.white.withOpacity(0.05),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: isSelected 
                    ? AppTheme.crystalBlue 
                    : (isOwned ? Colors.white.withOpacity(0.15) : Colors.transparent),
                width: isSelected ? 3 : 1.5,
              ),
              boxShadow: isSelected
                  ? [BoxShadow(color: AppTheme.crystalBlue.withOpacity(0.3), blurRadius: 20, spreadRadius: 2)]
                  : [],
            ),
            child: Stack(
              children: [
                Column(
                  children: [
                    // Área superior: Vitrina del Asset 3D con Wallpaper
                    Expanded(
                      flex: 3,
                      child: Container(
                        width: double.infinity,
                        clipBehavior: Clip.hardEdge,
                        decoration: const BoxDecoration(
                          borderRadius: BorderRadius.only(topLeft: Radius.circular(24), topRight: Radius.circular(24)),
                        ),
                        child: Stack(
                          fit: StackFit.expand,
                          children: [
                            // Wallpaper de fondo
                            Image.asset(
                              skin['id'] == 'gemas_clasicas' ? 'assets/logo.jpg' : 'assets/skin/${skin['id']}/wallpaper.jpg',
                              fit: BoxFit.cover,
                              errorBuilder: (c,e,s) => Container(color: Colors.black.withOpacity(0.2)),
                            ),
                            // Filtro oscuro
                            Container(color: Colors.black.withOpacity(0.4)),
                            // Ícono Principal (Diamante)
                            Center(
                              child: Hero(
                                tag: 'inv_${skin['id']}',
                                child: Image.asset(
                                  skin['id'] == 'gemas_clasicas' ? 'assets/images/lapislazuli.png' : 'assets/skin/${skin['id']}/Diamond.png',
                                  width: 90,
                                  height: 90,
                                  fit: BoxFit.contain,
                                  errorBuilder: (c, e, s) => const Icon(Icons.color_lens, color: AppTheme.crystalBlue, size: 50),
                                ),
                              ),
                            ),
                          ],
                        ),
                      ),
                    ),
                    // Área inferior: Información y Estado
                    Expanded(
                      flex: 2,
                      child: Padding(
                        padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 10),
                        child: Column(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            Text(
                              skin['name'].toUpperCase(),
                              style: TextStyle(
                                color: isOwned ? Colors.white : Colors.white54, 
                                fontWeight: FontWeight.bold, 
                                fontSize: 12, 
                                letterSpacing: 0.5
                              ),
                              textAlign: TextAlign.center,
                              maxLines: 2,
                              overflow: TextOverflow.ellipsis,
                            ),
                            const SizedBox(height: 8),
                            if (isSelected)
                              const Text('EQUIPADO', style: TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.w900, fontSize: 11, letterSpacing: 1))
                            else if (isOwned)
                              const Text('SELECCIONAR', style: TextStyle(color: Colors.white54, fontWeight: FontWeight.bold, fontSize: 10))
                            else
                              const Text('VER EN TIENDA', style: TextStyle(color: Colors.orangeAccent, fontWeight: FontWeight.bold, fontSize: 10)),
                          ],
                        ),
                      ),
                    ),
                  ],
                ),
                // Capa oscura 25% con candado para las que no posee
                if (!isOwned)
                  Container(
                    color: Colors.black.withOpacity(0.25),
                    child: const Center(
                      child: Icon(Icons.lock_rounded, color: Colors.white54, size: 40),
                    ),
                  ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
