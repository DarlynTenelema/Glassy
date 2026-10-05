import 'dart:async';
import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../providers/game_provider.dart';
import '../theme/app_theme.dart';
import '../services/audio_service.dart';
import '../services/purchase_service.dart';
import '../widgets/animated_wallet.dart';

class StoreScreen extends StatefulWidget {
  const StoreScreen({Key? key}) : super(key: key);

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
      backgroundColor: const Color(0xFF0D0D12),
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        title: const Text('STORE', style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, letterSpacing: 4, fontSize: 20)),
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
        actions: const [
          Center(child: AnimatedWallet()),
          SizedBox(width: 16),
        ],
        bottom: TabBar(
          controller: _tabController,
          indicatorColor: AppTheme.crystalBlue,
          indicatorWeight: 4,
          labelColor: Colors.white,
          unselectedLabelColor: Colors.white54,
          labelStyle: const TextStyle(fontWeight: FontWeight.bold, letterSpacing: 1.5, fontSize: 12),
          tabs: [
            Tab(icon: Image.asset('assets/ui/cofres_tienda/elemento_4.png', width: 26, height: 26, errorBuilder: (c,e,s) => const Icon(Icons.color_lens)), text: 'ASPECTOS'),
            Tab(icon: Image.asset('assets/images/lapislazuli.png', width: 26, height: 26, errorBuilder: (c,e,s) => const Icon(Icons.diamond)), text: 'MONEDAS'),
            Tab(icon: Image.asset('assets/images/piggy_bank.png', width: 26, height: 26, errorBuilder: (c,e,s) => const Icon(Icons.card_giftcard)), text: 'BONUS'),
          ],
        ),
      ),
      body: Stack(
        children: [
          // Fondo del juego
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
            child: _isLoading 
            ? const Center(child: CircularProgressIndicator(color: AppTheme.crystalBlue))
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
                    color: isSelected ? AppTheme.crystalBlue.withOpacity(0.2) : Colors.white.withOpacity(0.05),
                    borderRadius: BorderRadius.circular(25),
                    border: Border.all(color: isSelected ? AppTheme.crystalBlue : Colors.white.withOpacity(0.1), width: 1.5),
                  ),
                  child: Text(
                    category.toUpperCase(),
                    style: TextStyle(
                      color: isSelected ? AppTheme.crystalBlue : Colors.white60,
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
            color: Colors.white.withOpacity(0.05),
            borderRadius: BorderRadius.circular(24),
            border: Border.all(color: isOwned ? Colors.greenAccent.withOpacity(0.5) : Colors.white.withOpacity(0.15)),
            boxShadow: [
              if (isOwned) BoxShadow(color: Colors.greenAccent.withOpacity(0.1), blurRadius: 20, spreadRadius: 2)
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
                  decoration: const BoxDecoration(
                    borderRadius: BorderRadius.only(topLeft: Radius.circular(24), topRight: Radius.circular(24)),
                  ),
                  child: Stack(
                    fit: StackFit.expand,
                    children: [
                      // Wallpaper de fondo
                      Image.asset(
                        'assets/skin/${skin['id']}/wallpaper.jpg',
                        fit: BoxFit.cover,
                        errorBuilder: (c,e,s) => Container(color: Colors.black.withOpacity(0.2)),
                      ),
                      // Filtro oscuro para resaltar el diamante
                      Container(color: Colors.black.withOpacity(0.4)),
                      // Ícono Principal (Diamante)
                      Center(
                        child: Hero(
                          tag: 'skin_${skin['id']}',
                          child: Image.asset(
                            'assets/skin/${skin['id']}/Diamond.png',
                            width: 100,
                            height: 100,
                            fit: BoxFit.contain,
                            errorBuilder: (c, e, s) => const Icon(Icons.color_lens, color: AppTheme.crystalBlue, size: 50),
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
                            color: Colors.greenAccent.withOpacity(0.15),
                            borderRadius: BorderRadius.circular(12),
                            border: Border.all(color: Colors.greenAccent.withOpacity(0.5)),
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
                              color: AppTheme.crystalBlue,
                              borderRadius: BorderRadius.circular(12),
                              boxShadow: [
                                BoxShadow(color: AppTheme.crystalBlue.withOpacity(0.4), blurRadius: 10, spreadRadius: 1)
                              ]
                            ),
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                Image.asset('assets/images/lapislazuli.png', width: 16, height: 16, errorBuilder: (c,e,s) => const Icon(Icons.diamond, size: 16, color: Colors.white)),
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
            _buildEventCard(title: 'Welcome Pack 1', crystals: 600, price: '\$0.99', id: 'pack_event_500', accentColor: Colors.orangeAccent),
          if (!_storeStatus!['welcome_pack_2000_bought'])
            _buildEventCard(title: 'Welcome Pack 2', crystals: 1300, price: '\$4.99', id: 'pack_event_2000', accentColor: Colors.orangeAccent),
          if (!_storeStatus!['welcome_pack_5000_bought'])
            _buildEventCard(title: 'Welcome Pack 3', crystals: 2500, price: '\$9.99', id: 'pack_event_5000', accentColor: Colors.orangeAccent),
        ] else ...[
          const Center(child: Padding(padding: EdgeInsets.symmetric(vertical: 20), child: Text('No hay ofertas de evento disponibles.', style: TextStyle(color: Colors.white54)))),
        ],

        const SizedBox(height: 30),
        _buildSectionTitle('PAQUETES DE LAPISLÁZULIS'),
        _buildPackageCard(context, title: 'Starter Pack', crystals: 100, bonus: 0, price: '\$0.99', id: 'glass_pack_100', accentColor: const Color(0xFF00E5FF)),
        _buildPackageCard(context, title: 'Pro Pack', crystals: 500, bonus: 100, price: '\$4.99', id: 'glass_pack_600', accentColor: const Color(0xFF651FFF)),
        _buildPackageCard(context, title: 'Master Pack', crystals: 1000, bonus: 300, price: '\$9.99', id: 'glass_pack_1500', accentColor: const Color(0xFFFFD700), isPopular: true),
        _buildPackageCard(context, title: 'Legendary', crystals: 2000, bonus: 500, price: '\$19.99', id: 'glass_pack_5000', accentColor: const Color(0xFFFF3D00)),
        
        const SizedBox(height: 30),
        _buildSectionTitle('PASES DE RECOMPENSA VIP'),
        _buildSubscriptionCard(
          title: 'Pase Bronce (1 Semana)', description: '1 Lapis por cada 1,000 pts.\nMáx 18 Lapis diarios.', price: '\$0.99', id: 'sub_bronze_weekly', accentColor: const Color(0xFFCD7F32)
        ),
        _buildSubscriptionCard(
          title: 'Pase Plata (15 Días)', description: '3 Lapis por cada 1,000 pts.\nMáx 53 Lapis diarios.', price: '\$4.99', id: 'sub_silver_biweekly', accentColor: const Color(0xFFC0C0C0)
        ),
        _buildSubscriptionCard(
          title: 'Pase Oro (1 Mes Premium)', description: '5 Lapis por cada 1,000 pts.\nMáx 54 Lapis diarios.', price: '\$9.99', id: 'sub_gold_monthly', accentColor: const Color(0xFFFFD700), isPopular: true
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
        style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 16, letterSpacing: 2),
      ),
    );
  }

  // ==========================================
  // PESTAÑA 3: BONUS (COFRES, PIGGY, ADS)
  // ==========================================
  Widget _buildBonusTab() {
    return ListView(
      physics: const BouncingScrollPhysics(),
      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 20),
      children: [
        _buildSectionTitle('COFRES DE TIEMPO'),
        Row(
          children: [
            Expanded(child: _buildTimeChestCard(context, title: 'Bronce', time: '6h', fragments: 5, color: const Color(0xFFCD7F32), assetPath: 'assets/ui/cofres_tienda/elemento_1.png', chestType: '6h', hoursRequired: 6.0)),
            const SizedBox(width: 10),
            Expanded(child: _buildTimeChestCard(context, title: 'Plata', time: '12h', fragments: 10, color: const Color(0xFFC0C0C0), assetPath: 'assets/ui/cofres_tienda/elemento_2.png', chestType: '12h', hoursRequired: 12.0)),
            const SizedBox(width: 10),
            Expanded(child: _buildTimeChestCard(context, title: 'Oro', time: '24h', fragments: 20, color: const Color(0xFFFFD700), assetPath: 'assets/ui/cofres_tienda/elemento_3.png', chestType: '24h', hoursRequired: 24.0)),
          ],
        ),
        
        const SizedBox(height: 30),
        _buildSectionTitle('RECOMPENSAS EXTRA'),
        _buildPiggyBankCard(context),
        const SizedBox(height: 20),
        _buildAdBanner(context),
        const SizedBox(height: 40),
      ],
    );
  }

  // ==========================================
  // COMPONENTES DE UI (BOTONES, TARJETAS)
  // ==========================================

  Widget _buildTimeChestCard(BuildContext context, {required String title, required String time, required int fragments, required Color color, String? assetPath, required String chestType, required double hoursRequired}) {
    final gameProvider = Provider.of<GameProvider>(context);
    DateTime? lastChestTime;
    if (chestType == '6h') lastChestTime = gameProvider.lastChest6h;
    if (chestType == '12h') lastChestTime = gameProvider.lastChest12h;
    if (chestType == '24h') lastChestTime = gameProvider.lastChest24h;

    bool isReady = true;
    String countdownStr = 'ABRIR';

    if (lastChestTime != null) {
      final now = DateTime.now();
      final targetTime = lastChestTime.add(Duration(hours: hoursRequired.toInt()));
      if (now.isBefore(targetTime)) {
        isReady = false;
        final diff = targetTime.difference(now);
        final h = diff.inHours.toString().padLeft(2, '0');
        final m = (diff.inMinutes % 60).toString().padLeft(2, '0');
        final s = (diff.inSeconds % 60).toString().padLeft(2, '0');
        countdownStr = '$h:$m:$s';
      }
    }

    return ClipRRect(
      borderRadius: BorderRadius.circular(20),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
        child: Container(
          padding: const EdgeInsets.all(12),
          decoration: BoxDecoration(
            color: Colors.white.withOpacity(0.05),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(color: color.withOpacity(0.3), width: 1.5),
            boxShadow: [BoxShadow(color: color.withOpacity(0.05), blurRadius: 20)],
          ),
          child: Column(
            children: [
              if (assetPath != null)
                Image.asset(assetPath, width: 60, height: 60, errorBuilder: (c, e, s) => Icon(Icons.inventory_2_rounded, color: color, size: 40))
              else
                Icon(Icons.inventory_2_rounded, color: color, size: 40),
              const SizedBox(height: 10),
              Text(title.toUpperCase(), style: TextStyle(color: color, fontSize: 11, fontWeight: FontWeight.w900, letterSpacing: 1), textAlign: TextAlign.center),
              const SizedBox(height: 4),
              Text('Cada $time', style: const TextStyle(color: Colors.white54, fontSize: 10)),
              const SizedBox(height: 8),
              Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Image.asset('assets/images/lapis_fragments.png', width: 16, height: 16, errorBuilder: (c,e,s) => Icon(Icons.extension, color: color, size: 16)),
                  const SizedBox(width: 4),
                  Text('+$fragments', style: TextStyle(color: color, fontSize: 12, fontWeight: FontWeight.bold)),
                ],
              ),
              const SizedBox(height: 12),
              SizedBox(
                width: double.infinity,
                child: ElevatedButton(
                  onPressed: isReady ? () async {
                    bool success = await gameProvider.claimChest(chestType);
                    if (success) {
                      if (!context.mounted) return;
                      ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text('¡Cofre abierto! +$fragments Fragmentos')));
                    } else {
                      if (!context.mounted) return;
                      ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Error al abrir el cofre')));
                    }
                  } : null,
                  style: ElevatedButton.styleFrom(
                    backgroundColor: isReady ? color.withOpacity(0.2) : Colors.white12,
                    foregroundColor: isReady ? color : Colors.white54,
                    elevation: 0,
                    padding: const EdgeInsets.symmetric(vertical: 8),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                  child: Text(countdownStr, style: const TextStyle(fontSize: 11, fontWeight: FontWeight.bold)),
                ),
              )
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildPiggyBankCard(BuildContext context) {
    int currentPiggy = _storeStatus?['piggy_bank'] ?? 0;
    int maxPiggy = 100;
    double progress = (currentPiggy / maxPiggy).clamp(0.0, 1.0);

    return ClipRRect(
      borderRadius: BorderRadius.circular(24),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 15, sigmaY: 15),
        child: Container(
          padding: const EdgeInsets.all(24),
          decoration: BoxDecoration(
            color: Colors.white.withOpacity(0.05),
            borderRadius: BorderRadius.circular(24),
            border: Border.all(color: AppTheme.crystalBlue.withOpacity(0.3), width: 1.5),
          ),
          child: Column(
            children: [
              Row(
                children: [
                  Image.asset('assets/images/piggy_bank.png', width: 60, height: 60, errorBuilder: (c, e, s) => const Icon(Icons.savings, color: AppTheme.crystalBlue, size: 40)),
                  const SizedBox(width: 16),
                  const Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text('PIGGY BANK', style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 18, letterSpacing: 1)),
                        SizedBox(height: 4),
                        Text('Recibe cashback de tus compras', style: TextStyle(color: Colors.white70, fontSize: 12)),
                      ],
                    ),
                  ),
                ],
              ),
              const SizedBox(height: 20),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Text('$currentPiggy / $maxPiggy Lapis', style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14)),
                  Text('${(progress*100).toInt()}%', style: const TextStyle(color: AppTheme.crystalBlue, fontWeight: FontWeight.bold, fontSize: 14)),
                ],
              ),
              const SizedBox(height: 8),
              ClipRRect(
                borderRadius: BorderRadius.circular(10),
                child: LinearProgressIndicator(value: progress, backgroundColor: Colors.white12, color: AppTheme.crystalBlue, minHeight: 10),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildAdBanner(BuildContext context) {
    return ClipRRect(
      borderRadius: BorderRadius.circular(24),
      child: BackdropFilter(
        filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
        child: Container(
          padding: const EdgeInsets.all(20),
          decoration: BoxDecoration(
            color: Colors.white.withOpacity(0.05),
            borderRadius: BorderRadius.circular(24),
            border: Border.all(color: Colors.white12, width: 1),
          ),
          child: Row(
            children: [
              Container(
                padding: const EdgeInsets.all(12),
                decoration: BoxDecoration(color: AppTheme.crystalBlue.withOpacity(0.2), shape: BoxShape.circle),
                child: const Icon(Icons.play_arrow_rounded, color: AppTheme.crystalBlue, size: 28),
              ),
              const SizedBox(width: 16),
              const Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text('LAPISLAZULI GRATIS', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14)),
                    SizedBox(height: 4),
                    Text('Mira un video y gana +5.', style: TextStyle(color: Colors.white54, fontSize: 12)),
                  ],
                ),
              ),
              ElevatedButton(
                onPressed: () {},
                style: ElevatedButton.styleFrom(
                  backgroundColor: AppTheme.crystalBlue,
                  foregroundColor: Colors.black,
                  shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                ),
                child: const Text('VER', style: TextStyle(fontWeight: FontWeight.w900)),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildEventCard({required String title, required int crystals, required String price, required String id, required Color accentColor}) {
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: accentColor.withOpacity(0.1),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: accentColor.withOpacity(0.5), width: 2),
      ),
      padding: const EdgeInsets.all(20),
      child: Row(
        children: [
          Image.asset('assets/images/lapislazuli.png', width: 45, height: 45, errorBuilder: (c, e, s) => Icon(Icons.diamond, color: accentColor, size: 40)),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(title.toUpperCase(), style: TextStyle(color: accentColor, fontWeight: FontWeight.bold, fontSize: 11, letterSpacing: 1)),
                const SizedBox(height: 4),
                Text('+$crystals Lapis', style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 18)),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () => _showPurchaseConfirmation(context, id, title, crystals, price),
            style: ElevatedButton.styleFrom(
              backgroundColor: accentColor,
              foregroundColor: Colors.black,
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
            ),
            child: Text(price, style: const TextStyle(fontWeight: FontWeight.w900, fontSize: 14)),
          ),
        ],
      ),
    );
  }

  Widget _buildPackageCard(BuildContext context, {required String title, required int crystals, required int bonus, required String price, required String id, required Color accentColor, bool isPopular = false}) {
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: Colors.white.withOpacity(0.05),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: isPopular ? accentColor : Colors.white12, width: isPopular ? 2 : 1),
      ),
      padding: const EdgeInsets.all(20),
      child: Row(
        children: [
          Image.asset('assets/images/lapislazuli.png', width: 40, height: 40, errorBuilder: (c, e, s) => Icon(Icons.diamond, color: accentColor, size: 36)),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(title.toUpperCase(), style: TextStyle(color: isPopular ? accentColor : Colors.white70, fontWeight: FontWeight.bold, fontSize: 12, letterSpacing: 1)),
                const SizedBox(height: 4),
                Text('$crystals Lapis', style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: 16)),
                if (bonus > 0) Text('+$bonus de regalo', style: const TextStyle(color: Colors.greenAccent, fontSize: 11, fontWeight: FontWeight.bold)),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () => _showPurchaseConfirmation(context, id, title, crystals, price),
            style: ElevatedButton.styleFrom(
              backgroundColor: isPopular ? accentColor : Colors.white24,
              foregroundColor: isPopular ? Colors.black : Colors.white,
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
            ),
            child: Text(price, style: const TextStyle(fontWeight: FontWeight.bold)),
          ),
        ],
      ),
    );
  }

  Widget _buildSubscriptionCard({required String title, required String description, required String price, required String id, required Color accentColor, bool isPopular = false}) {
    return Container(
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: accentColor.withOpacity(0.05),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: isPopular ? accentColor : Colors.white12, width: isPopular ? 2 : 1),
      ),
      padding: const EdgeInsets.all(20),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Icon(Icons.star_rounded, color: accentColor, size: 28),
              const SizedBox(width: 12),
              Expanded(child: Text(title.toUpperCase(), style: TextStyle(color: isPopular ? accentColor : Colors.white, fontWeight: FontWeight.w900, fontSize: 14))),
            ],
          ),
          const SizedBox(height: 12),
          Text(description, style: const TextStyle(color: Colors.white70, fontSize: 12, height: 1.4)),
          const SizedBox(height: 16),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () => _showPurchaseConfirmation(context, id, title, 0, price),
              style: ElevatedButton.styleFrom(
                backgroundColor: isPopular ? accentColor : Colors.white24,
                foregroundColor: isPopular ? Colors.black : Colors.white,
                padding: const EdgeInsets.symmetric(vertical: 12),
                shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
              ),
              child: Text('SUSCRIBIRSE POR $price', style: const TextStyle(fontWeight: FontWeight.w900)),
            ),
          ),
        ],
      ),
    );
  }

  void _showPurchaseConfirmation(BuildContext context, String id, String title, int crystals, String price) {
    showDialog(
      context: context,
      builder: (context) => AlertDialog(
        backgroundColor: const Color(0xFF161622),
        title: const Text('Confirmar compra', style: TextStyle(color: Colors.white)),
        content: Text('¿Deseas adquirir $title por $price?', style: const TextStyle(color: Colors.white70)),
        actions: [
          TextButton(onPressed: () => Navigator.pop(context), child: const Text('CANCELAR', style: TextStyle(color: Colors.white54))),
          ElevatedButton(
            onPressed: () {
              Navigator.pop(context);
              PurchaseService().buyProduct(id);
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text('Procesando compra...')));
            },
            style: ElevatedButton.styleFrom(backgroundColor: AppTheme.crystalBlue, foregroundColor: Colors.black),
            child: const Text('COMPRAR'),
          ),
        ],
      ),
    );
  }
}
