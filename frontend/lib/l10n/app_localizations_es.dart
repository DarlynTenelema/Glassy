// ignore: unused_import
import 'package:intl/intl.dart' as intl;
import 'app_localizations.dart';

// ignore_for_file: type=lint

/// The translations for Spanish Castilian (`es`).
class AppLocalizationsEs extends AppLocalizations {
  AppLocalizationsEs([String locale = 'es']) : super(locale);

  @override
  String get settingsTitle => 'Configuración';

  @override
  String get generalVolume => 'Volumen General';

  @override
  String get effects => 'Efectos';

  @override
  String get gameMusic => 'Música Juego';

  @override
  String get darkMode => 'Modo Oscuro';

  @override
  String get language => 'Idioma';

  @override
  String get selectLanguage => 'Seleccionar Idioma';

  @override
  String get terms => 'Términos';

  @override
  String get privacy => 'Privacidad';

  @override
  String get deleteAccount => 'Eliminar Cuenta';

  @override
  String get logout => 'Cerrar Sesión';

  @override
  String get deleteAccountTitle => 'Eliminar Cuenta';

  @override
  String get deleteAccountWarning =>
      '¿Estás seguro de que quieres eliminar tu cuenta permanentemente? Perderás todo tu progreso, gemas y skins. Esta acción no se puede deshacer.';

  @override
  String get cancel => 'Cancelar';

  @override
  String get delete => 'Eliminar';

  @override
  String get deleteAccountError =>
      'Error al eliminar la cuenta. Intenta nuevamente.';

  @override
  String get resetProgress => 'Restablecer Progreso';

  @override
  String get resetProgressTitle => 'Restablecer Progreso';

  @override
  String get resetProgressWarning =>
      '¿Estás seguro de que quieres reiniciar tu juego? Perderás todas tus gemas, skins, logros y progreso, pero conservarás tu cuenta y compras. Esta acción no se puede deshacer.';

  @override
  String get reset => 'Restablecer';

  @override
  String get resetProgressError =>
      'Error al restablecer progreso. Intenta nuevamente.';

  @override
  String get resetProgressSuccess => 'Progreso restablecido correctamente.';

  @override
  String get continueWithGoogle => 'Continuar con Google';

  @override
  String get loginCancelled => 'Inicio de sesión cancelado';

  @override
  String get referralCodeOptional => 'Código de referido (opcional)';

  @override
  String get applyReferral => 'Aplicar';

  @override
  String get referralApplied => '¡Código de referido aplicado!';

  @override
  String get invalidReferralCode => 'Código de referido inválido';

  @override
  String get play => 'PLAY';

  @override
  String get skins => 'SKINS';

  @override
  String get store => 'TIENDA';

  @override
  String get records => 'RÉCORDS';

  @override
  String get profile => 'PERFIL';

  @override
  String get mergeToEvolve => 'Fusiona para evolucionar';

  @override
  String get dailyReward => 'RECOMPENSA DIARIA';

  @override
  String dayNumber(int day) {
    return 'Día $day';
  }

  @override
  String get claim => 'RECLAMAR';

  @override
  String dailyRewardClaimed(int day) {
    return '¡Recompensa del Día $day Reclamada!';
  }

  @override
  String get breakTitle => 'BREAK!!!';

  @override
  String get quickSettings => 'Ajustes Rápidos';

  @override
  String get resume => 'REANUDAR';

  @override
  String get gemRecharge => 'Recarga de Gemas';

  @override
  String get gameStartBanner => 'Juega, relájate y disfruta';

  @override
  String get gameOver => 'GAME OVER';

  @override
  String get newHighScore => '¡Felicidades, nuevo score!';

  @override
  String get goodTry => 'Buen intento';

  @override
  String get scoreLabel => 'PUNTUACIÓN';

  @override
  String get highScoreLabel => 'RÉCORD';

  @override
  String epicSave(int bonus) {
    return '¡SALVADA ÉPICA!\n+$bonus';
  }

  @override
  String comboText(int combo, int bonus) {
    return '¡COMBO X$combo!\n+$bonus';
  }

  @override
  String get missionComplete => '¡MISIÓN COMPLETADA!';

  @override
  String missionCreateGems(int count, String gemName) {
    return 'Crea $count $gemName';
  }

  @override
  String get shareScore => 'Compartir';

  @override
  String shareText(int score) {
    return '¡Conseguí $score puntos en Glassy! ¿Puedes superarme?';
  }

  @override
  String get gemPearl => 'Perlas';

  @override
  String get gemEmerald => 'Esmeraldas';

  @override
  String get gemAmethyst => 'Amatistas';

  @override
  String get gemTopaz => 'Topacios';

  @override
  String get gemGreenRuby => 'Rubíes Verdes';

  @override
  String get gemSapphire => 'Zafiros';

  @override
  String get gemRedRuby => 'Rubíes';

  @override
  String get gemDiamond => 'Diamantes';

  @override
  String get gemDefault => 'Gemas';

  @override
  String get achievementsTab => 'Logros';

  @override
  String get rankingTab => 'Ranking';

  @override
  String get dailyTab => 'Diario';

  @override
  String get achievementsSystemTitle => 'SISTEMA DE LOGROS';

  @override
  String get achievementsSystemSubtitle =>
      'Completa retos para ganar Lapislázulis gratis.';

  @override
  String get gemFusionCategory => 'FUSIÓN DE GEMAS';

  @override
  String get specialOffersCategory => 'OFERTAS ESPECIALES';

  @override
  String get claimed => 'RECLAMADO';

  @override
  String get completed => 'COMPLETADO';

  @override
  String get weeklyRanking => 'Semanal';

  @override
  String get totalRanking => 'Histórico Total';

  @override
  String get skinsCollection => 'COLECCIÓN DE SKINS';

  @override
  String get equipped => 'EQUIPADO';

  @override
  String get equip => 'EQUIPAR';

  @override
  String get unlock => 'DESBLOQUEAR';

  @override
  String get exclusiveSkin => 'Skin Exclusiva';

  @override
  String get storeTitle => 'TIENDA';

  @override
  String get chests => 'COFRES';

  @override
  String get gemPacks => 'PAQUETES DE GEMAS';

  @override
  String get free => 'GRATIS';

  @override
  String get purchaseSuccessful => '¡Compra realizada con éxito!';

  @override
  String get purchaseFailed => 'Error en la compra. Intenta de nuevo.';

  @override
  String get playerProfile => 'PERFIL DE JUGADOR';

  @override
  String get stats => 'ESTADÍSTICAS';

  @override
  String get totalScore => 'Puntuación Total';

  @override
  String get gamesPlayed => 'Partidas Jugadas';

  @override
  String get changeAvatar => 'Cambiar Avatar';

  @override
  String get copyId => 'Copiar ID';

  @override
  String get idCopied => '¡ID copiado al portapapeles!';

  @override
  String get playAgain => 'VOLVER A JUGAR';

  @override
  String get mainMenu => 'IR AL MENÚ PRINCIPAL';

  @override
  String yourScore(int score) {
    return 'Tu score: $score';
  }

  @override
  String globalAccumulated(int total) {
    return '🌟 Acumulado Global: $total';
  }

  @override
  String get playWithGoogle => 'JUGAR CON GOOGLE';

  @override
  String authError(String error) {
    return 'Error de autenticación: $error';
  }

  @override
  String googleSignInError(String error) {
    return 'Error de Google Sign In: $error';
  }

  @override
  String get termsNotice =>
      'Al jugar, aceptas nuestros Términos de Servicio y Política de Privacidad.';

  @override
  String get allRightsReserved =>
      '© Todos los derechos del juego están reservados.\nProhibida su copia o distribución no autorizada.';

  @override
  String get welcomeSubtitle => 'Bienvenido al siguiente nivel';

  @override
  String get referralCodeHint => 'CÓDIGO DE AMIGO O CREADOR (Opcional)';

  @override
  String get saveChanges => 'GUARDAR CAMBIOS';

  @override
  String get profileUpdatedSuccess => 'Perfil actualizado correctamente';

  @override
  String get profileUpdateError =>
      'Error al guardar el perfil. Intenta de nuevo.';

  @override
  String get usernameEmpty => 'El nombre de usuario no puede estar vacío';

  @override
  String get playerNameHint => 'Tu Nombre de Jugador';

  @override
  String get streak => 'RACHA';

  @override
  String get vipInviteCode => 'CÓDIGO DE INVITACIÓN VIP';

  @override
  String get inviteFriendsDesc =>
      'Invita 10 amigos y gana la skin Metales Preciosos';

  @override
  String get inviteCodeCopied => '¡Código copiado! Compártelo con tus amigos.';

  @override
  String get copy => 'COPIAR';

  @override
  String get selectAvatar => 'SELECCIONA TU AVATAR';

  @override
  String get boy => 'Chico';

  @override
  String get girl => 'Chica';

  @override
  String get allAvatars => 'Todos';

  @override
  String get heroes => 'Héroes';

  @override
  String get heroines => 'Heroínas';

  @override
  String get acquired => 'ADQUIRIDO';

  @override
  String get bonusTab => 'BONUS';

  @override
  String get categoryStarter => 'Iniciales';

  @override
  String get categoryStandard => 'Estándar';

  @override
  String get categoryEvent => 'Evento';

  @override
  String get skinUnlocked => '¡Skin desbloqueada!';

  @override
  String get insufficientLapisOrError =>
      'Lapislázulis insuficientes o error de conexión.';

  @override
  String get uniqueOffers => 'OFERTAS ÚNICAS';

  @override
  String get noEventOffers => 'No hay ofertas de evento disponibles.';

  @override
  String get lapisPacks => 'PAQUETES DE LAPISLÁZULIS';

  @override
  String get timeChests => 'COFRES DE TIEMPO';

  @override
  String get extraRewards => 'RECOMPENSAS EXTRA';

  @override
  String get chestBronze => 'Bronce';

  @override
  String get chestSilver => 'Plata';

  @override
  String get chestGold => 'Oro';

  @override
  String chestOpened(int fragments) {
    return '¡Cofre abierto! +$fragments Fragmentos';
  }

  @override
  String get chestOpenError => 'Error al abrir el cofre';

  @override
  String get chestOpenBtn => 'ABRIR';

  @override
  String chestEvery(String time) {
    return 'Cada $time';
  }

  @override
  String get confirmPurchase => 'Confirmar compra';

  @override
  String confirmPurchasePrompt(String title, String price) {
    return '¿Deseas adquirir $title por $price?';
  }

  @override
  String get processingPurchase => 'Procesando compra...';

  @override
  String get buy => 'COMPRAR';

  @override
  String giftBonus(int bonus) {
    return '+$bonus de regalo';
  }

  @override
  String subscribeFor(String price) {
    return 'SUSCRIBIRSE POR $price';
  }

  @override
  String get piggyBankTitle => 'PIGGY BANK';

  @override
  String get piggyReady =>
      '¡Llegaste a 100! Toca el cerdito para canjear GRATIS';

  @override
  String get piggyCashback => 'Cashback gratis por cada compra';

  @override
  String get piggyClaimBtn => '¡CANJEAR 100 LAPIS GRATIS!';

  @override
  String get piggyClaiming => 'CANJEANDO...';

  @override
  String piggyClaimSuccess(int reward) {
    return '🎉 ¡Has roto el cerdito! +$reward Lapislázulis gratis añadidos a tu billetera.';
  }

  @override
  String get piggyClaimError =>
      'No se pudo canjear el Piggy Bank en este momento.';

  @override
  String get freeLapisAd => 'LAPISLAZULI GRATIS';

  @override
  String get freeLapisAdDesc => 'Mira un video y gana +1.';

  @override
  String get watchAd => 'VER';
}
