class SkinThemeTier {
  final String singular;
  final String plural;
  final String filename; // e.g. 'Emerald.png'

  const SkinThemeTier({
    required this.singular,
    required this.plural,
    required this.filename,
  });
}

class SkinThemeData {
  final String id;
  final String displayName;
  final List<SkinThemeTier> tiers;

  const SkinThemeData({
    required this.id,
    required this.displayName,
    required this.tiers,
  });
}

/// Catálogo maestro de temáticas y skins de Glassy.
/// Mapea cada tier (0 a 7) con los nombres de las criaturas/elementos
/// definidos en los documentos de diseño de first_skins y hallowin.
class SkinThemes {
  static const List<String> _gemFilenames = [
    'Pearl.png',     // Tier 0
    'Emerald.png',   // Tier 1
    'Amethyst.png',  // Tier 2
    'Topaz.png',     // Tier 3
    'GreenRuby.png', // Tier 4
    'Sapphire.png',  // Tier 5
    'RedRuby.png',   // Tier 6
    'Diamond.png',   // Tier 7
  ];

  static final Map<String, SkinThemeData> _themes = {
    // 1. Gemas Clásicas (Default)
    'gemas_clasicas': const SkinThemeData(
      id: 'gemas_clasicas',
      displayName: 'Gemas Clásicas',
      tiers: [
        SkinThemeTier(singular: 'Perla', plural: 'Perlas', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Esmeralda', plural: 'Esmeraldas', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Amatista', plural: 'Amatistas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Topacio', plural: 'Topacios', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Peridoto', plural: 'Peridotos', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Zafiro', plural: 'Zafiros', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Rubí', plural: 'Rubíes', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Diamante', plural: 'Diamantes', filename: 'Diamond.png'),
      ],
    ),

    // 2. Dinosaurios (Temática 6)
    'Dinosaurios': const SkinThemeData(
      id: 'Dinosaurios',
      displayName: 'Dinosaurios',
      tiers: [
        SkinThemeTier(singular: 'Huevo de dinosaurio', plural: 'Huevos de dinosaurio', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Cría de dinosaurio', plural: 'Crías de dinosaurio', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Velociraptor', plural: 'Velociraptores', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Pterodáctilo', plural: 'Pterodáctilos', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Estegosaurio', plural: 'Estegosaurios', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Triceratops', plural: 'Triceratops', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Brontosaurio', plural: 'Brontosaurios', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Tiranosaurio Rex', plural: 'Tiranosaurios Rex', filename: 'Diamond.png'),
      ],
    ),

    // 3. Vida Marina (Temática 2)
    'vida_marina': const SkinThemeData(
      id: 'vida_marina',
      displayName: 'Vida Marina',
      tiers: [
        SkinThemeTier(singular: 'Burbuja de agua', plural: 'Burbujas de agua', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Caracola de mar', plural: 'Caracolas de mar', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Estrella de mar', plural: 'Estrellas de mar', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Pez payaso', plural: 'Peces payaso', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Caballito de mar', plural: 'Caballitos de mar', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Medusa bioluminiscente', plural: 'Medusas bioluminiscentes', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Pulpo abisal', plural: 'Pulpos abisales', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Tortuga marina', plural: 'Tortugas marinas', filename: 'Diamond.png'),
      ],
    ),

    // 4. Ajedrez Mágico
    'Ajedrez_Magico': const SkinThemeData(
      id: 'Ajedrez_Magico',
      displayName: 'Ajedrez Mágico',
      tiers: [
        SkinThemeTier(singular: 'Peón de cristal', plural: 'Peones de cristal', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Caballo de cristal', plural: 'Caballos de cristal', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Alfil de cristal', plural: 'Alfiles de cristal', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Torre de cristal', plural: 'Torres de cristal', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Reina de cristal', plural: 'Reinas de cristal', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Rey de cristal', plural: 'Reyes de cristal', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Tablero místico', plural: 'Tableros místicos', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Corona real', plural: 'Coronas reales', filename: 'Diamond.png'),
      ],
    ),

    // 5. Alquimia Antigua
    'Alquimia_Antigua': const SkinThemeData(
      id: 'Alquimia_Antigua',
      displayName: 'Alquimia Antigua',
      tiers: [
        SkinThemeTier(singular: 'Gota de mercurio', plural: 'Gotas de mercurio', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Cristal de sal', plural: 'Cristales de sal', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Frasco de poción', plural: 'Frascos de poción', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Llama mágica', plural: 'Llamas mágicas', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Piedra de ámbar', plural: 'Piedras de ámbar', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Pergamino antiguo', plural: 'Pergaminos antiguos', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Esfera armilar', plural: 'Esferas armilares', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Piedra filosofal', plural: 'Piedras filosofales', filename: 'Diamond.png'),
      ],
    ),

    // 6. Flores Mágicas
    'Flores_Magicas': const SkinThemeData(
      id: 'Flores_Magicas',
      displayName: 'Flores Mágicas',
      tiers: [
        SkinThemeTier(singular: 'Brote matutino', plural: 'Brotes matutinos', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Margarita', plural: 'Margaritas', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Lirio de agua', plural: 'Lirios de agua', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Tulipán', plural: 'Tulipanes', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Orquídea', plural: 'Orquídeas', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Girasol', plural: 'Girasoles', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Rosa carmesí', plural: 'Rosas carmesíes', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Flor de loto', plural: 'Flores de loto', filename: 'Diamond.png'),
      ],
    ),

    // 7. Frutas Jugosas
    'Frutas_Jugosas': const SkinThemeData(
      id: 'Frutas_Jugosas',
      displayName: 'Frutas Jugosas',
      tiers: [
        SkinThemeTier(singular: 'Arándano', plural: 'Arándanos', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Fresa', plural: 'Fresas', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Limón', plural: 'Limones', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Racimo de uvas', plural: 'Racimos de uvas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Durazno', plural: 'Duraznos', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Pera', plural: 'Peras', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Manzana roja', plural: 'Manzanas rojas', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Sandía gigante', plural: 'Sandías gigantes', filename: 'Diamond.png'),
      ],
    ),

    // 8. Hongos Brillantes
    'Hongos_Brillantes': const SkinThemeData(
      id: 'Hongos_Brillantes',
      displayName: 'Hongos Brillantes',
      tiers: [
        SkinThemeTier(singular: 'Champiñón blanco', plural: 'Champiñones blancos', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Hongo plano', plural: 'Hongos planos', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Seta naranja', plural: 'Setas naranjas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Colmenilla', plural: 'Colmenillas', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Seta roja', plural: 'Setas rojas', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Hongo bioluminiscente', plural: 'Hongos bioluminiscentes', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Hongo morado', plural: 'Hongos morados', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Hongo maestro', plural: 'Hongos maestros', filename: 'Diamond.png'),
      ],
    ),

    // 9. Mundo Dulce
    'Mundo_Dulce': const SkinThemeData(
      id: 'Mundo_Dulce',
      displayName: 'Mundo Dulce',
      tiers: [
        SkinThemeTier(singular: 'Grajea de azúcar', plural: 'Grajeas de azúcar', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Caramelo', plural: 'Caramelos', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Osito de goma', plural: 'Ositos de goma', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Macaron', plural: 'Macarons', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Galleta con chispas', plural: 'Galletas con chispas', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Cupcake', plural: 'Cupcakes', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Paleta en espiral', plural: 'Paletas en espiral', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Pastel de fresa', plural: 'Pasteles de fresa', filename: 'Diamond.png'),
      ],
    ),

    // 10. Planetas
    'Planetas': const SkinThemeData(
      id: 'Planetas',
      displayName: 'Planetas',
      tiers: [
        SkinThemeTier(singular: 'Asteroide', plural: 'Asteroides', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Luna', plural: 'Lunas', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Planeta rojo', plural: 'Planetas rojos', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Tierra', plural: 'Tierras', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Neptuno', plural: 'Neptunos', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Saturno', plural: 'Saturnos', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Sol ardiente', plural: 'Soles ardientes', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Galaxia en espiral', plural: 'Galaxias en espiral', filename: 'Diamond.png'),
      ],
    ),

    // 11. Sushi Japonés
    'Sushi_Japones': const SkinThemeData(
      id: 'Sushi_Japones',
      displayName: 'Sushi Japonés',
      tiers: [
        SkinThemeTier(singular: 'Grano de arroz', plural: 'Granos de arroz', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Alga nori', plural: 'Algas nori', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Rollo maki', plural: 'Rollos maki', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Nigiri de salmón', plural: 'Nigiris de salmón', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Onigiri', plural: 'Onigiris', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Rollo con huevas', plural: 'Rollos con huevas', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Tazón de ramen', plural: 'Tazones de ramen', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Barco de sushi', plural: 'Barcos de sushi', filename: 'Diamond.png'),
      ],
    ),

    // 12. Caldero de Bruja (Halloween)
    'Caldero_de_Bruja': const SkinThemeData(
      id: 'Caldero_de_Bruja',
      displayName: 'Caldero de Bruja',
      tiers: [
        SkinThemeTier(singular: 'Frasco de poción', plural: 'Frascos de poción', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Ojo de gelatina', plural: 'Ojos de gelatina', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Rana mágica', plural: 'Ranas mágicas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Escoba voladora', plural: 'Escobas voladoras', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Sombrero de bruja', plural: 'Sombreros de bruja', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Libro de hechizos', plural: 'Libros de hechizos', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Bola de cristal', plural: 'Bolas de cristal', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Gran Caldero', plural: 'Grandes Calderos', filename: 'Diamond.png'),
      ],
    ),

    // 13. Cementerio Encantado (Halloween)
    'Cementerio_Encantado': const SkinThemeData(
      id: 'Cementerio_Encantado',
      displayName: 'Cementerio Encantado',
      tiers: [
        SkinThemeTier(singular: 'Vela blanca', plural: 'Velas blancas', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Hueso', plural: 'Huesos', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Cráneo de azúcar', plural: 'Cráneos de azúcar', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Farol espectral', plural: 'Faroles espectrales', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Lápida', plural: 'Lápidas', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Gárgola', plural: 'Gárgolas', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Ataúd', plural: 'Ataúdes', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Mausoleo gótico', plural: 'Mausoleos góticos', filename: 'Diamond.png'),
      ],
    ),

    // 14. Cultivo de Calabazas (Halloween)
    'Cultivo_de_Calabazas': const SkinThemeData(
      id: 'Cultivo_de_Calabazas',
      displayName: 'Cultivo de Calabazas',
      tiers: [
        SkinThemeTier(singular: 'Semilla mágica', plural: 'Semillas mágicas', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Brote verde', plural: 'Brotes verdes', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Mini calabaza', plural: 'Mini calabazas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Calabaza naranja', plural: 'Calabazas naranjas', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Jack-o-lantern', plural: 'Jack-o-lanterns', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Calabaza con sombrero', plural: 'Calabazas con sombrero', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Pila de calabazas', plural: 'Pilas de calabazas', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Carroza de calabaza', plural: 'Carrozas de calabaza', filename: 'Diamond.png'),
      ],
    ),

    // 15. Dulces de Halloween
    'Dulces_de_Halloween': const SkinThemeData(
      id: 'Dulces_de_Halloween',
      displayName: 'Dulces Halloween',
      tiers: [
        SkinThemeTier(singular: 'Caramelo festivo', plural: 'Caramelos festivos', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Paleta espiral', plural: 'Paletas espirales', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Maíz dulce', plural: 'Maíces dulces', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Manzana acaramelada', plural: 'Manzanas acarameladas', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Barra de chocolate', plural: 'Barras de chocolate', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Gomita de murciélago', plural: 'Gomitas de murciélago', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Magdalena estelar', plural: 'Magdalenas estelares', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Canasta de dulces', plural: 'Canastas de dulces', filename: 'Diamond.png'),
      ],
    ),

    // 16. Monstruos de Bolsillo (Halloween)
    'Monstruos_de_Bolsillo': const SkinThemeData(
      id: 'Monstruos_de_Bolsillo',
      displayName: 'Monstruos de Bolsillo',
      tiers: [
        SkinThemeTier(singular: 'Murciélago suave', plural: 'Murciélagos suaves', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Fantasmita', plural: 'Fantasmitas', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Momia chiquita', plural: 'Momias chiquitas', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Zombito', plural: 'Zombitos', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Frankencito', plural: 'Frankencitos', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Vampirito', plural: 'Vampiritos', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Hombre lobo tierno', plural: 'Hombres lobo tiernos', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Dragón demonio', plural: 'Dragones demonio', filename: 'Diamond.png'),
      ],
    ),

    // 17. Metales Preciosos
    'Metales_Preciosos': const SkinThemeData(
      id: 'Metales_Preciosos',
      displayName: 'Metales Preciosos',
      tiers: [
        SkinThemeTier(singular: 'Pepita de cobre', plural: 'Pepitas de cobre', filename: 'Pearl.png'),
        SkinThemeTier(singular: 'Lingote de bronce', plural: 'Lingotes de bronce', filename: 'Emerald.png'),
        SkinThemeTier(singular: 'Lingote de plata', plural: 'Lingotes de plata', filename: 'Amethyst.png'),
        SkinThemeTier(singular: 'Lingote de oro', plural: 'Lingotes de oro', filename: 'Topaz.png'),
        SkinThemeTier(singular: 'Lingote de platino', plural: 'Lingotes de platino', filename: 'GreenRuby.png'),
        SkinThemeTier(singular: 'Gema imperial', plural: 'Gemas imperiales', filename: 'Sapphire.png'),
        SkinThemeTier(singular: 'Rubí corona', plural: 'Rubíes corona', filename: 'RedRuby.png'),
        SkinThemeTier(singular: 'Corona de diamantes', plural: 'Coronas de diamantes', filename: 'Diamond.png'),
      ],
    ),
  };

  /// Obtiene los datos del tema para una skin dada (con fallback seguro a gemas_clasicas)
  static SkinThemeData getTheme(String? skinId) {
    if (skinId == null || !_themes.containsKey(skinId)) {
      return _themes['gemas_clasicas']!;
    }
    return _themes[skinId]!;
  }

  /// Retorna el nombre de la criatura o elemento para un tier específico
  static String getElementName(String? skinId, int tier, {int count = 1}) {
    final theme = getTheme(skinId);
    final safeTier = tier.clamp(0, 7);
    final item = theme.tiers[safeTier];
    return count > 1 ? item.plural : item.singular;
  }

  /// Retorna la ruta al asset del sprite de ese tier según la skin equipada
  static String getElementAsset(String? skinId, int tier) {
    final safeTier = tier.clamp(0, 7);
    final filename = _gemFilenames[safeTier];

    if (skinId == null || skinId == 'gemas_clasicas') {
      const defaultGems = [
        'assets/game/gems/perla.png',
        'assets/game/gems/esmeralda.png',
        'assets/game/gems/amatista.png',
        'assets/game/gems/topacio.png',
        'assets/game/gems/peridoto.png',
        'assets/game/gems/zafiro.png',
        'assets/game/gems/rubi.png',
        'assets/game/gems/diamante.png',
      ];
      return defaultGems[safeTier];
    }

    return 'assets/skin/$skinId/$filename';
  }

  /// Genera el texto redactado de la misión de forma natural y coherente según la acción
  static String getMissionText(String? skinId, int tier, int targetAmount, {String action = 'merge'}) {
    final name = getElementName(skinId, tier, count: targetAmount > 1 ? targetAmount : 2);

    if (action == 'combo') {
      return 'Logra un combo de $targetAmount con $name';
    } else if (action == 'create') {
      if (tier >= 6 || targetAmount == 1) {
        final singularName = getElementName(skinId, tier, count: 1);
        return 'Sintetiza 1 $singularName';
      } else {
        return 'Crea $targetAmount $name';
      }
    } else {
      // action == 'merge': Fusión estricta de elementos existentes de este tipo
      return 'Fusiona $targetAmount $name';
    }
  }
}
