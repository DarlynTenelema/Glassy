import 'package:glassy/theme/app_colors.dart';
import 'dart:async';
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../widgets/ui/currency_icon.dart';
import '../services/audio_service.dart';
import '../services/purchase_service.dart';
import '../widgets/animated_wallet.dart';
import '../widgets/ui/store_cards.dart';

class StoreScreen extends StatefulWidget {
  const StoreScreen({super.key});

  @override
  State<StoreScreen> createState() => _StoreScreenState();
}

class _StoreScreenState extends State<StoreScreen> with SingleTickerProviderStateMixin {
  Map<String, dynamic>? _storeStatus;
  bool _isLoading = true;
  late TabController _tabController;
  String _selectedSkinCategory = 'Iniciales';
  Timer? _chestTimer;

  final List<Map<String, dynamic>> _storeSkins = [
    // Iniciales
    {'id': 'vida_marina', 'name': 'Vida Marina', 'price': 300, 'category': 'Iniciales'},
    {'id': 'Dinosaurios', 'name': 'Dinosaurios', 'price': 300, 'category': 'Iniciales'},
    // Evento
    {'id': 'Dulces_de_Halloween', 'name': 'Dulces Halloween', 'price': 600, 'category': 'Evento'},
    {'id': 'Caldero_de_Bruja', 'name': 'Caldero Bruja', 'price': 600, 'category': 'Evento'},
    {'id': 'Cementerio_Encantado', 'name': 'Cementerio', 'price': 600, 'category': 'Evento'},
    {'id': 'Cultivo_de_Calabazas', 'name': 'Calabazas', 'price': 600, 'category': 'Evento'},
    // Estándar
    {'id': 'Ajedrez_Magico', 'name': 'Ajedrez Mágico', 'price': 600, 'category': 'Estándar'},
    {'id': 'Alquimia_Antigua', 'name': 'Alquimia Antigua', 'price': 600, 'category': 'Estándar'},
    {'id': 'Flores_Magicas', 'name': 'Flores Mágicas', 'price': 600, 'category': 'Estándar'},
    {'id': 'Frutas_Jugosas', 'name': 'Frutas Jugosas', 'price': 600, 'category': 'Estándar'},
    {'id': 'Hongos_Brillantes', 'name': 'Hongos', 'price': 600, 'category': 'Estándar'},
    {'id': 'Monstruos_de_Bolsillo', 'name': 'Monstruos', 'price': 600, 'category': 'Estándar'},
    {'id': 'Mundo_Dulce', 'name': 'Mundo Dulce', 'price': 600, 'category': 'Estándar'},
    {'id': 'Planetas', 'name': 'Planetas', 'price': 600, 'category': 'Estándar'},
    {'id': 'Sushi_Japones', 'name': 'Sushi Japonés', 'price': 600, 'category': 'Estándar'},
  ];

  @override
  void initState() {
    super.initState();
    // 3 Tabs: Aspectos, Monedas, Bonus
    _tabController = TabController(length: 3, vsync: this);
    AudioService().playBgMusic();
    WidgetsBinding.instance.addPostFrameCallback((_) {
      PurchaseService().initialize(context);
    });
    _loadStatus();
    _chestTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
      if (mounted) setState(() {});
    });
  }

  Future<void> _loadStatus() async {
    final status = await PurchaseService().getStoreStatus();
    if (mounted) {
      setState(() {
        _storeStatus = status;
        _isLoading = false;
      });
    }
  }

  @override
  void dispose() {
    _chestTimer?.cancel();
    _tabController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Theme.of(context).scaffoldBackgroundColor,
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text('STORE', style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, letterSpacing: 4, fontSize: 20)),
        backgroundColor: Colors.black.withValues(alpha: 0.3),
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
        actions: const [
          Center(child: AnimatedWallet()),
          SizedBox(width: 16),
        ],
        bottom: TabBar(
          controller: _tabController,
          indicatorColor: AppColors.lightBlue,
          indicatorWeight: 4,
          labelColor: Colors.white,
          unselectedLabelColor: Colors.white54,
          labelStyle: const TextStyle(fontWeight: FontWeight.bold, letterSpacing: 1.5, fontSize: 12),
          tabs: [
            Tab(icon: Image.asset('assets/ui/cofres_tienda/elemento_4.png', width: 26, height: 26, errorBuilder: (c,e,s) => const Icon(Icons.color_lens)), text: 'ASPECTOS'),
            Tab(icon: CurrencyIcon(size: 26), text: 'MONEDAS'),
            Tab(icon: Image.asset('assets/images/piggy_bank.png', width: 26, height: 26, errorBuilder: (c,e,s) => const Icon(Icons.card_giftcard)), text: 'BONUS'),
          ],
        ),
      ),
      body: Stack(
        children: [
          // Fondo del juego
          Container(
            decoration: BoxDecoration(
              color: Theme.of(context).scaffoldBackgroundColor,
            ),
          ),
          
          SafeArea(
            child: _isLoading 
            ? const Center(child: CircularProgressIndicator(color: AppColors.lightBlue))
            : TabBarView(
                controller: _tabController,
                children: [
                  _buildSkinsTab(),
                  _buildCoinsTab(),
                  _buildBonusTab(),
                ],
              ),
          ),
        ],
      ),
    );
  }

  // ==========================================
  // PESTAÑA 1: ASPECTOS (SKINS) - SHOWCASE 3D
  // ==========================================
  Widget _buildSkinsTab() {
    final gameProvider = Provider.of<GameProvider>(context);
    final unlockedSkins = gameProvider.unlockedSkins;
    final filteredSkins = _storeSkins.where((skin) => skin['category'] == _selectedSkinCategory).toList();

    return Column(
      children: [
        const SizedBox(height: 15),
        // Filtros Categorías en Burbujas Glassmorphism
        SingleChildScrollView(
          scrollDirection: Axis.horizontal,
          physics: const BouncingScrollPhysics(),
          padding: const EdgeInsets.symmetric(horizontal: 16),
          child: Row(
            children: ['Iniciales', 'Estándar', 'Evento'].map((category) {
              bool isSelected = _selectedSkinCategory == category;
              return GestureDetector(
                onTap: () => setState(() => _selectedSkinCategory = category),
                child: AnimatedContainer(
                  duration: const Duration(milliseconds: 300),
                  margin: const EdgeInsets.symmetric(horizontal: 6),
                  padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                  decoration: BoxDecoration(
                    color: isSelected ? AppColors.lightBlue.withValues(alpha: 0.2) : Colors.white.withValues(alpha: 0.05),
                    borderRadius: BorderRadius.circular(25),
                    border: Border.all(color: isSelected ? AppColors.lightBlue : Colors.white.withValues(alpha: 0.1), width: 1.5),
                  ),
                  child: Text(
                    category.toUpperCase(),
                    style: TextStyle(
                      color: isSelected ? AppColors.lightBlue : Colors.white60,
                      fontWeight: FontWeight.w900,
                      letterSpacing: 1,
                    ),
                  ),
                ),
              );
            }).toList(),
          ),
        ),
        const SizedBox(height: 20),
        
        // Cuadrícula de Cartas Coleccionables (Trading Cards style)
        Expanded(
          child: GridView.builder(
            padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10).copyWith(bottom: 40),
            physics: const BouncingScrollPhysics(),
            gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
              crossAxisCount: 2,
              childAspectRatio: 0.65, // Formato alto tipo carta
              crossAxisSpacing: 16,
              mainAxisSpacing: 16,
            ),
            itemCount: filteredSkins.length,
            itemBuilder: (context, index) {
              final skin = filteredSkins[index];
              final bool isOwned = unlockedSkins.contains(skin['id']);
              
              return _buildSkinCard(skin, isOwned, gameProvider);
            },
          ),
        ),
      ],
    );
  }

  Widget _buildSkinCard(Map<String, dynamic> skin, bool isOwned, GameProvider gameProvider) {
    return ClipRRect(
      borderRadius: BorderRadius.circular(24),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
        child: Container(
          decoration: BoxDecoration(
            color: Colors.white.withValues(alpha: 0.05),
            borderRadius: BorderRadius.circular(24),
            border: Border.all(color: isOwned ? Colors.greenAccent.withValues(alpha: 0.5) : Colors.white.withValues(alpha: 0.15)),
            boxShadow: [
              if (isOwned) BoxShadow(color: Colors.greenAccent.withValues(alpha: 0.1), blurRadius: 20, spreadRadius: 2)
            ]
          ),
          child: Column(
            children: [
              // Área superior: Vitrina del Asset 3D con Wallpaper
              Expanded(
                flex: 3,
                child: Container(
                  width: double.infinity,
                  clipBehavior: Clip.hardEdge,
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.only(topLeft: Radius.circular(24), topRight: Radius.circular(24)),
                  ),
                  child: Stack(
                    fit: StackFit.expand,
                    children: [
                      // Wallpaper de fondo
                      Image.asset(
                        'assets/skin/${skin['id']}/wallpaper.jpg',
                        fit: BoxFit.cover,
                        errorBuilder: (c,e,s) => Container(color: Colors.black.withValues(alpha: 0.2)),
                      ),
                      // Filtro oscuro para resaltar el diamante
                      Container(color: Colors.black.withValues(alpha: 0.4)),
                      // Ícono Principal (Diamante)
                      Center(
                        child: Hero(
                          tag: 'skin_${skin['id']}',
                          child: Image.asset(
                            'assets/skin/${skin['id']}/Diamond.png',
                            width: 100,
                            height: 100,
                            fit: BoxFit.contain,
                            errorBuilder: (c, e, s) => const Icon(Icons.color_lens, color: AppColors.lightBlue, size: 50),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              // Área inferior: Información y Botón de Compra
              Expanded(
                flex: 2,
                child: Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 10),
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Text(
                        skin['name'].toUpperCase(),
                        style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 13, letterSpacing: 0.5),
                        textAlign: TextAlign.center,
                        maxLines: 2,
                        overflow: TextOverflow.ellipsis,
                      ),
                      
                      if (isOwned)
                        Container(
                          padding: const EdgeInsets.symmetric(vertical: 8, horizontal: 12),
                          decoration: BoxDecoration(
                            color: Colors.greenAccent.withValues(alpha: 0.15),
                            borderRadius: BorderRadius.circular(12),
                            border: Border.all(color: Colors.greenAccent.withValues(alpha: 0.5)),
                          ),
                          child: const Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Icon(Icons.check_circle, color: Colors.greenAccent, size: 16),
                              SizedBox(width: 4),
                              Text('ADQUIRIDO', style: TextStyle(color: Colors.greenAccent, fontSize: 11, fontWeight: FontWeight.bold)),
                            ],
                          ),
                        )
                      else
                        GestureDetector(
                          onTap: () async {
                            bool success = await gameProvider.buySkin(skin['id'], skin['price']);
                            if (success) {
                              if (!mounted) return;
                              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('¡Skin desbloqueada!'), backgroundColor: Colors.green));
                            } else {
                              if (!mounted) return;
                              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Lapislázulis insuficientes o error de conexión.'), backgroundColor: Colors.redAccent));
                            }
                          },
                          child: Container(
                            padding: const EdgeInsets.symmetric(vertical: 8, horizontal: 12),
                            decoration: BoxDecoration(
                              color: AppColors.lightBlue,
                              borderRadius: BorderRadius.circular(12),
                              boxShadow: [
                                BoxShadow(color: AppColors.lightBlue.withValues(alpha: 0.4), blurRadius: 10, spreadRadius: 1)
                              ]
                            ),
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                CurrencyIcon(size: 16),
                                const SizedBox(width: 6),
                                Text('${skin['price']}', style: const TextStyle(color: Colors.black, fontSize: 14, fontWeight: FontWeight.w900)),
                              ],
                            ),
                          ),
                        ),
                    ],
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  // ==========================================
  // PESTAÑA 2: MONEDAS (COMPRAS IN-APP CONTINUAS)
  // ==========================================
  Widget _buildCoinsTab() {
    return ListView(
      physics: const BouncingScrollPhysics(),
      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 20),
      children: [
        _buildSectionTitle('OFERTAS ÚNICAS'),
        if (_storeStatus != null && (!_storeStatus!['welcome_pack_500_bought'] || !_storeStatus!['welcome_pack_2000_bought'] || !_storeStatus!['welcome_pack_5000_bought'])) ...[
          if (!_storeStatus!['welcome_pack_500_bought'])
            const EventCard(title: 'Welcome Pack 1', crystals: 600, price: '\$0.99', id: 'pack_event_500', accentColor: Colors.orangeAccent),
          if (!_storeStatus!['welcome_pack_2000_bought'])
            const EventCard(title: 'Welcome Pack 2', crystals: 1300, price: '\$4.99', id: 'pack_event_2000', accentColor: Colors.orangeAccent),
          if (!_storeStatus!['welcome_pack_5000_bought'])
            const EventCard(title: 'Welcome Pack 3', crystals: 2500, price: '\$9.99', id: 'pack_event_5000', accentColor: Colors.orangeAccent),
        ] else ...[
          Center(child: Padding(padding: const EdgeInsets.symmetric(vertical: 20), child: Text('No hay ofertas de evento disponibles.', style: TextStyle(color: Theme.of(context).colorScheme.onSurface.withValues(alpha: 0.5))))),
        ],

        const SizedBox(height: 30),
        _buildSectionTitle('PAQUETES DE LAPISLÁZULIS'),
        const PackageCard(title: 'Starter Pack', crystals: 100, bonus: 0, price: '\$0.99', id: 'glass_pack_100', accentColor: Color(0xFF00E5FF)),
        const PackageCard(title: 'Pro Pack', crystals: 500, bonus: 100, price: '\$4.99', id: 'glass_pack_600', accentColor: Color(0xFF651FFF)),
        const PackageCard(title: 'Master Pack', crystals: 1000, bonus: 300, price: '\$9.99', id: 'glass_pack_1500', accentColor: Color(0xFFFFD700), isPopular: true),
        const PackageCard(title: 'Legendary', crystals: 2000, bonus: 500, price: '\$19.99', id: 'glass_pack_5000', accentColor: Color(0xFFFF3D00)),
        
        const SizedBox(height: 30),
        _buildSectionTitle('PASES DE RECOMPENSA VIP'),
        const SubscriptionCard(
          title: 'Pase Bronce (1 Semana)', description: '1 Lapis por cada 1,000 pts.\nMáx 18 Lapis diarios.', price: '\$0.99', id: 'sub_bronze_weekly', accentColor: Color(0xFFCD7F32)
        ),
        const SubscriptionCard(
          title: 'Pase Plata (15 Días)', description: '3 Lapis por cada 1,000 pts.\nMáx 53 Lapis diarios.', price: '\$4.99', id: 'sub_silver_biweekly', accentColor: Color(0xFFC0C0C0)
        ),
        const SubscriptionCard(
          title: 'Pase Oro (1 Mes Premium)', description: '5 Lapis por cada 1,000 pts.\nMáx 54 Lapis diarios.', price: '\$9.99', id: 'sub_gold_monthly', accentColor: Color(0xFFFFD700), isPopular: true
        ),
        const SizedBox(height: 40),
      ],
    );
  }

  Widget _buildSectionTitle(String title) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 15, left: 8),
      child: Text(
        title,
        style: Theme.of(context).textTheme.titleMedium?.copyWith(fontWeight: FontWeight.w900, letterSpacing: 2),
      ),
    );
  }

  // ==========================================
  // PESTAÑA 3: BONUS (COFRES, PIGGY, ADS)
  // ==========================================
  Widget _buildBonusTab() {
    final gameProvider = Provider.of<GameProvider>(context);
    return ListView(
      physics: const BouncingScrollPhysics(),
      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 20),
      children: [
        _buildSectionTitle('COFRES DE TIEMPO'),
        Row(
          children: [
            Expanded(child: TimeChestCard(title: 'Bronce', time: '6h', fragments: 5, color: Color(0xFFCD7F32), assetPath: 'assets/ui/cofres_tienda/elemento_1.png', chestType: '6h', hoursRequired: 6.0, gameProvider: gameProvider)),
            const SizedBox(width: 10),
            Expanded(child: TimeChestCard(title: 'Plata', time: '12h', fragments: 10, color: Color(0xFFC0C0C0), assetPath: 'assets/ui/cofres_tienda/elemento_2.png', chestType: '12h', hoursRequired: 12.0, gameProvider: gameProvider)),
            const SizedBox(width: 10),
            Expanded(child: TimeChestCard(title: 'Oro', time: '24h', fragments: 20, color: Color(0xFFFFD700), assetPath: 'assets/ui/cofres_tienda/elemento_3.png', chestType: '24h', hoursRequired: 24.0, gameProvider: gameProvider)),
          ],
        ),
        
        const SizedBox(height: 30),
        _buildSectionTitle('RECOMPENSAS EXTRA'),
        PiggyBankCard(storeStatus: _storeStatus, onClaimed: _loadStatus),
        const SizedBox(height: 20),
        const AdBannerCard(),
        const SizedBox(height: 40),
      ],
    );
  }
}
