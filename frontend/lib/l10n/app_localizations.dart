import 'dart:async';

import 'package:flutter/foundation.dart';
import 'package:flutter/widgets.dart';
import 'package:flutter_localizations/flutter_localizations.dart';
import 'package:intl/intl.dart' as intl;

import 'app_localizations_en.dart';
import 'app_localizations_es.dart';
import 'app_localizations_fr.dart';
import 'app_localizations_pt.dart';

// ignore_for_file: type=lint

/// Callers can lookup localized strings with an instance of AppLocalizations
/// returned by `AppLocalizations.of(context)`.
///
/// Applications need to include `AppLocalizations.delegate()` in their app's
/// `localizationDelegates` list, and the locales they support in the app's
/// `supportedLocales` list. For example:
///
/// ```dart
/// import 'l10n/app_localizations.dart';
///
/// return MaterialApp(
///   localizationsDelegates: AppLocalizations.localizationsDelegates,
///   supportedLocales: AppLocalizations.supportedLocales,
///   home: MyApplicationHome(),
/// );
/// ```
///
/// ## Update pubspec.yaml
///
/// Please make sure to update your pubspec.yaml to include the following
/// packages:
///
/// ```yaml
/// dependencies:
///   # Internationalization support.
///   flutter_localizations:
///     sdk: flutter
///   intl: any # Use the pinned version from flutter_localizations
///
///   # Rest of dependencies
/// ```
///
/// ## iOS Applications
///
/// iOS applications define key application metadata, including supported
/// locales, in an Info.plist file that is built into the application bundle.
/// To configure the locales supported by your app, you’ll need to edit this
/// file.
///
/// First, open your project’s ios/Runner.xcworkspace Xcode workspace file.
/// Then, in the Project Navigator, open the Info.plist file under the Runner
/// project’s Runner folder.
///
/// Next, select the Information Property List item, select Add Item from the
/// Editor menu, then select Localizations from the pop-up menu.
///
/// Select and expand the newly-created Localizations item then, for each
/// locale your application supports, add a new item and select the locale
/// you wish to add from the pop-up menu in the Value field. This list should
/// be consistent with the languages listed in the AppLocalizations.supportedLocales
/// property.
abstract class AppLocalizations {
  AppLocalizations(String locale)
    : localeName = intl.Intl.canonicalizedLocale(locale.toString());

  final String localeName;

  static AppLocalizations? of(BuildContext context) {
    return Localizations.of<AppLocalizations>(context, AppLocalizations);
  }

  static const LocalizationsDelegate<AppLocalizations> delegate =
      _AppLocalizationsDelegate();

  /// A list of this localizations delegate along with the default localizations
  /// delegates.
  ///
  /// Returns a list of localizations delegates containing this delegate along with
  /// GlobalMaterialLocalizations.delegate, GlobalCupertinoLocalizations.delegate,
  /// and GlobalWidgetsLocalizations.delegate.
  ///
  /// Additional delegates can be added by appending to this list in
  /// MaterialApp. This list does not have to be used at all if a custom list
  /// of delegates is preferred or required.
  static const List<LocalizationsDelegate<dynamic>> localizationsDelegates =
      <LocalizationsDelegate<dynamic>>[
        delegate,
        GlobalMaterialLocalizations.delegate,
        GlobalCupertinoLocalizations.delegate,
        GlobalWidgetsLocalizations.delegate,
      ];

  /// A list of this localizations delegate's supported locales.
  static const List<Locale> supportedLocales = <Locale>[
    Locale('en'),
    Locale('es'),
    Locale('fr'),
    Locale('pt'),
  ];

  /// No description provided for @settingsTitle.
  ///
  /// In es, this message translates to:
  /// **'Configuración'**
  String get settingsTitle;

  /// No description provided for @generalVolume.
  ///
  /// In es, this message translates to:
  /// **'Volumen General'**
  String get generalVolume;

  /// No description provided for @effects.
  ///
  /// In es, this message translates to:
  /// **'Efectos'**
  String get effects;

  /// No description provided for @gameMusic.
  ///
  /// In es, this message translates to:
  /// **'Música Juego'**
  String get gameMusic;

  /// No description provided for @darkMode.
  ///
  /// In es, this message translates to:
  /// **'Modo Oscuro'**
  String get darkMode;

  /// No description provided for @language.
  ///
  /// In es, this message translates to:
  /// **'Idioma'**
  String get language;

  /// No description provided for @selectLanguage.
  ///
  /// In es, this message translates to:
  /// **'Seleccionar Idioma'**
  String get selectLanguage;

  /// No description provided for @terms.
  ///
  /// In es, this message translates to:
  /// **'Términos'**
  String get terms;

  /// No description provided for @privacy.
  ///
  /// In es, this message translates to:
  /// **'Privacidad'**
  String get privacy;

  /// No description provided for @deleteAccount.
  ///
  /// In es, this message translates to:
  /// **'Eliminar Cuenta'**
  String get deleteAccount;

  /// No description provided for @logout.
  ///
  /// In es, this message translates to:
  /// **'Cerrar Sesión'**
  String get logout;

  /// No description provided for @deleteAccountTitle.
  ///
  /// In es, this message translates to:
  /// **'Eliminar Cuenta'**
  String get deleteAccountTitle;

  /// No description provided for @deleteAccountWarning.
  ///
  /// In es, this message translates to:
  /// **'¿Estás seguro de que quieres eliminar tu cuenta permanentemente? Perderás todo tu progreso, gemas y skins. Esta acción no se puede deshacer.'**
  String get deleteAccountWarning;

  /// No description provided for @cancel.
  ///
  /// In es, this message translates to:
  /// **'Cancelar'**
  String get cancel;

  /// No description provided for @delete.
  ///
  /// In es, this message translates to:
  /// **'Eliminar'**
  String get delete;

  /// No description provided for @deleteAccountError.
  ///
  /// In es, this message translates to:
  /// **'Error al eliminar la cuenta. Intenta nuevamente.'**
  String get deleteAccountError;

  /// No description provided for @resetProgress.
  ///
  /// In es, this message translates to:
  /// **'Restablecer Progreso'**
  String get resetProgress;

  /// No description provided for @resetProgressTitle.
  ///
  /// In es, this message translates to:
  /// **'Restablecer Progreso'**
  String get resetProgressTitle;

  /// No description provided for @resetProgressWarning.
  ///
  /// In es, this message translates to:
  /// **'¿Estás seguro de que quieres reiniciar tu juego? Perderás todas tus gemas, skins, logros y progreso, pero conservarás tu cuenta y compras. Esta acción no se puede deshacer.'**
  String get resetProgressWarning;

  /// No description provided for @reset.
  ///
  /// In es, this message translates to:
  /// **'Restablecer'**
  String get reset;

  /// No description provided for @resetProgressError.
  ///
  /// In es, this message translates to:
  /// **'Error al restablecer progreso. Intenta nuevamente.'**
  String get resetProgressError;

  /// No description provided for @resetProgressSuccess.
  ///
  /// In es, this message translates to:
  /// **'Progreso restablecido correctamente.'**
  String get resetProgressSuccess;

  /// No description provided for @continueWithGoogle.
  ///
  /// In es, this message translates to:
  /// **'Continuar con Google'**
  String get continueWithGoogle;

  /// No description provided for @loginCancelled.
  ///
  /// In es, this message translates to:
  /// **'Inicio de sesión cancelado'**
  String get loginCancelled;

  /// No description provided for @referralCodeOptional.
  ///
  /// In es, this message translates to:
  /// **'Código de referido (opcional)'**
  String get referralCodeOptional;

  /// No description provided for @applyReferral.
  ///
  /// In es, this message translates to:
  /// **'Aplicar'**
  String get applyReferral;

  /// No description provided for @referralApplied.
  ///
  /// In es, this message translates to:
  /// **'¡Código de referido aplicado!'**
  String get referralApplied;

  /// No description provided for @invalidReferralCode.
  ///
  /// In es, this message translates to:
  /// **'Código de referido inválido'**
  String get invalidReferralCode;

  /// No description provided for @play.
  ///
  /// In es, this message translates to:
  /// **'PLAY'**
  String get play;

  /// No description provided for @singlePlayer.
  ///
  /// In es, this message translates to:
  /// **'SOLITARIO'**
  String get singlePlayer;

  /// No description provided for @onlineMultiplayer.
  ///
  /// In es, this message translates to:
  /// **'ONLINE'**
  String get onlineMultiplayer;

  /// No description provided for @localMultiplayer.
  ///
  /// In es, this message translates to:
  /// **'LOCAL'**
  String get localMultiplayer;

  /// No description provided for @skins.
  ///
  /// In es, this message translates to:
  /// **'SKINS'**
  String get skins;

  /// No description provided for @store.
  ///
  /// In es, this message translates to:
  /// **'TIENDA'**
  String get store;

  /// No description provided for @records.
  ///
  /// In es, this message translates to:
  /// **'RÉCORDS'**
  String get records;

  /// No description provided for @profile.
  ///
  /// In es, this message translates to:
  /// **'PERFIL'**
  String get profile;

  /// No description provided for @mergeToEvolve.
  ///
  /// In es, this message translates to:
  /// **'Fusiona para evolucionar'**
  String get mergeToEvolve;

  /// No description provided for @dailyReward.
  ///
  /// In es, this message translates to:
  /// **'RECOMPENSA DIARIA'**
  String get dailyReward;

  /// No description provided for @dayNumber.
  ///
  /// In es, this message translates to:
  /// **'Día {day}'**
  String dayNumber(int day);

  /// No description provided for @claim.
  ///
  /// In es, this message translates to:
  /// **'RECLAMAR'**
  String get claim;

  /// No description provided for @dailyRewardClaimed.
  ///
  /// In es, this message translates to:
  /// **'¡Recompensa del Día {day} Reclamada!'**
  String dailyRewardClaimed(int day);

  /// No description provided for @breakTitle.
  ///
  /// In es, this message translates to:
  /// **'BREAK!!!'**
  String get breakTitle;

  /// No description provided for @quickSettings.
  ///
  /// In es, this message translates to:
  /// **'Ajustes Rápidos'**
  String get quickSettings;

  /// No description provided for @resume.
  ///
  /// In es, this message translates to:
  /// **'REANUDAR'**
  String get resume;

  /// No description provided for @gemRecharge.
  ///
  /// In es, this message translates to:
  /// **'Recarga de Gemas'**
  String get gemRecharge;

  /// No description provided for @gameStartBanner.
  ///
  /// In es, this message translates to:
  /// **'Juega, relájate y disfruta'**
  String get gameStartBanner;

  /// No description provided for @gameOver.
  ///
  /// In es, this message translates to:
  /// **'GAME OVER'**
  String get gameOver;

  /// No description provided for @newHighScore.
  ///
  /// In es, this message translates to:
  /// **'¡Felicidades, nuevo score!'**
  String get newHighScore;

  /// No description provided for @goodTry.
  ///
  /// In es, this message translates to:
  /// **'Buen intento'**
  String get goodTry;

  /// No description provided for @scoreLabel.
  ///
  /// In es, this message translates to:
  /// **'PUNTUACIÓN'**
  String get scoreLabel;

  /// No description provided for @highScoreLabel.
  ///
  /// In es, this message translates to:
  /// **'RÉCORD'**
  String get highScoreLabel;

  /// No description provided for @epicSave.
  ///
  /// In es, this message translates to:
  /// **'¡SALVADA ÉPICA!\n+{bonus}'**
  String epicSave(int bonus);

  /// No description provided for @comboText.
  ///
  /// In es, this message translates to:
  /// **'¡COMBO X{combo}!\n+{bonus}'**
  String comboText(int combo, int bonus);

  /// No description provided for @missionComplete.
  ///
  /// In es, this message translates to:
  /// **'¡MISIÓN COMPLETADA!'**
  String get missionComplete;

  /// No description provided for @missionCreateGems.
  ///
  /// In es, this message translates to:
  /// **'Crea {count} {gemName}'**
  String missionCreateGems(int count, String gemName);

  /// No description provided for @shareScore.
  ///
  /// In es, this message translates to:
  /// **'Compartir'**
  String get shareScore;

  /// No description provided for @shareText.
  ///
  /// In es, this message translates to:
  /// **'¡Conseguí {score} puntos en Glassy! ¿Puedes superarme?'**
  String shareText(int score);

  /// No description provided for @gemPearl.
  ///
  /// In es, this message translates to:
  /// **'Perlas'**
  String get gemPearl;

  /// No description provided for @gemEmerald.
  ///
  /// In es, this message translates to:
  /// **'Esmeraldas'**
  String get gemEmerald;

  /// No description provided for @gemAmethyst.
  ///
  /// In es, this message translates to:
  /// **'Amatistas'**
  String get gemAmethyst;

  /// No description provided for @gemTopaz.
  ///
  /// In es, this message translates to:
  /// **'Topacios'**
  String get gemTopaz;

  /// No description provided for @gemGreenRuby.
  ///
  /// In es, this message translates to:
  /// **'Rubíes Verdes'**
  String get gemGreenRuby;

  /// No description provided for @gemSapphire.
  ///
  /// In es, this message translates to:
  /// **'Zafiros'**
  String get gemSapphire;

  /// No description provided for @gemRedRuby.
  ///
  /// In es, this message translates to:
  /// **'Rubíes'**
  String get gemRedRuby;

  /// No description provided for @gemDiamond.
  ///
  /// In es, this message translates to:
  /// **'Diamantes'**
  String get gemDiamond;

  /// No description provided for @gemDefault.
  ///
  /// In es, this message translates to:
  /// **'Gemas'**
  String get gemDefault;

  /// No description provided for @achievementsTab.
  ///
  /// In es, this message translates to:
  /// **'Logros'**
  String get achievementsTab;

  /// No description provided for @rankingTab.
  ///
  /// In es, this message translates to:
  /// **'Ranking'**
  String get rankingTab;

  /// No description provided for @dailyTab.
  ///
  /// In es, this message translates to:
  /// **'Diario'**
  String get dailyTab;

  /// No description provided for @achievementsSystemTitle.
  ///
  /// In es, this message translates to:
  /// **'SISTEMA DE LOGROS'**
  String get achievementsSystemTitle;

  /// No description provided for @achievementsSystemSubtitle.
  ///
  /// In es, this message translates to:
  /// **'Completa retos para ganar Lapislázulis gratis.'**
  String get achievementsSystemSubtitle;

  /// No description provided for @gemFusionCategory.
  ///
  /// In es, this message translates to:
  /// **'FUSIÓN DE GEMAS'**
  String get gemFusionCategory;

  /// No description provided for @specialOffersCategory.
  ///
  /// In es, this message translates to:
  /// **'OFERTAS ESPECIALES'**
  String get specialOffersCategory;

  /// No description provided for @claimed.
  ///
  /// In es, this message translates to:
  /// **'RECLAMADO'**
  String get claimed;

  /// No description provided for @completed.
  ///
  /// In es, this message translates to:
  /// **'COMPLETADO'**
  String get completed;

  /// No description provided for @weeklyRanking.
  ///
  /// In es, this message translates to:
  /// **'Semanal'**
  String get weeklyRanking;

  /// No description provided for @totalRanking.
  ///
  /// In es, this message translates to:
  /// **'Histórico Total'**
  String get totalRanking;

  /// No description provided for @skinsCollection.
  ///
  /// In es, this message translates to:
  /// **'COLECCIÓN DE SKINS'**
  String get skinsCollection;

  /// No description provided for @equipped.
  ///
  /// In es, this message translates to:
  /// **'EQUIPADO'**
  String get equipped;

  /// No description provided for @equip.
  ///
  /// In es, this message translates to:
  /// **'EQUIPAR'**
  String get equip;

  /// No description provided for @unlock.
  ///
  /// In es, this message translates to:
  /// **'DESBLOQUEAR'**
  String get unlock;

  /// No description provided for @exclusiveSkin.
  ///
  /// In es, this message translates to:
  /// **'Skin Exclusiva'**
  String get exclusiveSkin;

  /// No description provided for @storeTitle.
  ///
  /// In es, this message translates to:
  /// **'TIENDA'**
  String get storeTitle;

  /// No description provided for @chests.
  ///
  /// In es, this message translates to:
  /// **'COFRES'**
  String get chests;

  /// No description provided for @gemPacks.
  ///
  /// In es, this message translates to:
  /// **'PAQUETES DE GEMAS'**
  String get gemPacks;

  /// No description provided for @free.
  ///
  /// In es, this message translates to:
  /// **'GRATIS'**
  String get free;

  /// No description provided for @purchaseSuccessful.
  ///
  /// In es, this message translates to:
  /// **'¡Compra realizada con éxito!'**
  String get purchaseSuccessful;

  /// No description provided for @purchaseFailed.
  ///
  /// In es, this message translates to:
  /// **'Error en la compra. Intenta de nuevo.'**
  String get purchaseFailed;

  /// No description provided for @playerProfile.
  ///
  /// In es, this message translates to:
  /// **'PERFIL DE JUGADOR'**
  String get playerProfile;

  /// No description provided for @stats.
  ///
  /// In es, this message translates to:
  /// **'ESTADÍSTICAS'**
  String get stats;

  /// No description provided for @totalScore.
  ///
  /// In es, this message translates to:
  /// **'Puntuación Total'**
  String get totalScore;

  /// No description provided for @gamesPlayed.
  ///
  /// In es, this message translates to:
  /// **'Partidas Jugadas'**
  String get gamesPlayed;

  /// No description provided for @changeAvatar.
  ///
  /// In es, this message translates to:
  /// **'Cambiar Avatar'**
  String get changeAvatar;

  /// No description provided for @copyId.
  ///
  /// In es, this message translates to:
  /// **'Copiar ID'**
  String get copyId;

  /// No description provided for @idCopied.
  ///
  /// In es, this message translates to:
  /// **'¡ID copiado al portapapeles!'**
  String get idCopied;

  /// No description provided for @playAgain.
  ///
  /// In es, this message translates to:
  /// **'VOLVER A JUGAR'**
  String get playAgain;

  /// No description provided for @mainMenu.
  ///
  /// In es, this message translates to:
  /// **'IR AL MENÚ PRINCIPAL'**
  String get mainMenu;

  /// No description provided for @yourScore.
  ///
  /// In es, this message translates to:
  /// **'Tu score: {score}'**
  String yourScore(int score);

  /// No description provided for @globalAccumulated.
  ///
  /// In es, this message translates to:
  /// **'🌟 Acumulado Global: {total}'**
  String globalAccumulated(int total);

  /// No description provided for @playWithGoogle.
  ///
  /// In es, this message translates to:
  /// **'JUGAR CON GOOGLE'**
  String get playWithGoogle;

  /// No description provided for @authError.
  ///
  /// In es, this message translates to:
  /// **'Error de autenticación: {error}'**
  String authError(String error);

  /// No description provided for @googleSignInError.
  ///
  /// In es, this message translates to:
  /// **'Error de Google Sign In: {error}'**
  String googleSignInError(String error);

  /// No description provided for @termsNotice.
  ///
  /// In es, this message translates to:
  /// **'Al jugar, aceptas nuestros Términos de Servicio y Política de Privacidad.'**
  String get termsNotice;

  /// No description provided for @allRightsReserved.
  ///
  /// In es, this message translates to:
  /// **'© Todos los derechos del juego están reservados.\nProhibida su copia o distribución no autorizada.'**
  String get allRightsReserved;

  /// No description provided for @welcomeSubtitle.
  ///
  /// In es, this message translates to:
  /// **'Bienvenido al siguiente nivel'**
  String get welcomeSubtitle;

  /// No description provided for @referralCodeHint.
  ///
  /// In es, this message translates to:
  /// **'CÓDIGO DE AMIGO O CREADOR (Opcional)'**
  String get referralCodeHint;

  /// No description provided for @saveChanges.
  ///
  /// In es, this message translates to:
  /// **'GUARDAR CAMBIOS'**
  String get saveChanges;

  /// No description provided for @profileUpdatedSuccess.
  ///
  /// In es, this message translates to:
  /// **'Perfil actualizado correctamente'**
  String get profileUpdatedSuccess;

  /// No description provided for @profileUpdateError.
  ///
  /// In es, this message translates to:
  /// **'Error al guardar el perfil. Intenta de nuevo.'**
  String get profileUpdateError;

  /// No description provided for @usernameEmpty.
  ///
  /// In es, this message translates to:
  /// **'El nombre de usuario no puede estar vacío'**
  String get usernameEmpty;

  /// No description provided for @playerNameHint.
  ///
  /// In es, this message translates to:
  /// **'Tu Nombre de Jugador'**
  String get playerNameHint;

  /// No description provided for @streak.
  ///
  /// In es, this message translates to:
  /// **'RACHA'**
  String get streak;

  /// No description provided for @vipInviteCode.
  ///
  /// In es, this message translates to:
  /// **'CÓDIGO DE INVITACIÓN VIP'**
  String get vipInviteCode;

  /// No description provided for @inviteFriendsDesc.
  ///
  /// In es, this message translates to:
  /// **'Invita 10 amigos y gana la skin Metales Preciosos'**
  String get inviteFriendsDesc;

  /// No description provided for @inviteCodeCopied.
  ///
  /// In es, this message translates to:
  /// **'¡Código copiado! Compártelo con tus amigos.'**
  String get inviteCodeCopied;

  /// No description provided for @copy.
  ///
  /// In es, this message translates to:
  /// **'COPIAR'**
  String get copy;

  /// No description provided for @selectAvatar.
  ///
  /// In es, this message translates to:
  /// **'SELECCIONA TU AVATAR'**
  String get selectAvatar;

  /// No description provided for @boy.
  ///
  /// In es, this message translates to:
  /// **'Chico'**
  String get boy;

  /// No description provided for @girl.
  ///
  /// In es, this message translates to:
  /// **'Chica'**
  String get girl;

  /// No description provided for @allAvatars.
  ///
  /// In es, this message translates to:
  /// **'Todos'**
  String get allAvatars;

  /// No description provided for @heroes.
  ///
  /// In es, this message translates to:
  /// **'Héroes'**
  String get heroes;

  /// No description provided for @heroines.
  ///
  /// In es, this message translates to:
  /// **'Heroínas'**
  String get heroines;

  /// No description provided for @acquired.
  ///
  /// In es, this message translates to:
  /// **'ADQUIRIDO'**
  String get acquired;

  /// No description provided for @bonusTab.
  ///
  /// In es, this message translates to:
  /// **'BONUS'**
  String get bonusTab;

  /// No description provided for @categoryStarter.
  ///
  /// In es, this message translates to:
  /// **'Iniciales'**
  String get categoryStarter;

  /// No description provided for @categoryStandard.
  ///
  /// In es, this message translates to:
  /// **'Estándar'**
  String get categoryStandard;

  /// No description provided for @categoryEvent.
  ///
  /// In es, this message translates to:
  /// **'Evento'**
  String get categoryEvent;

  /// No description provided for @skinUnlocked.
  ///
  /// In es, this message translates to:
  /// **'¡Skin desbloqueada!'**
  String get skinUnlocked;

  /// No description provided for @insufficientLapisOrError.
  ///
  /// In es, this message translates to:
  /// **'Lapislázulis insuficientes o error de conexión.'**
  String get insufficientLapisOrError;

  /// No description provided for @uniqueOffers.
  ///
  /// In es, this message translates to:
  /// **'OFERTAS ÚNICAS'**
  String get uniqueOffers;

  /// No description provided for @noEventOffers.
  ///
  /// In es, this message translates to:
  /// **'No hay ofertas de evento disponibles.'**
  String get noEventOffers;

  /// No description provided for @lapisPacks.
  ///
  /// In es, this message translates to:
  /// **'PAQUETES DE LAPISLÁZULIS'**
  String get lapisPacks;

  /// No description provided for @timeChests.
  ///
  /// In es, this message translates to:
  /// **'COFRES DE TIEMPO'**
  String get timeChests;

  /// No description provided for @extraRewards.
  ///
  /// In es, this message translates to:
  /// **'RECOMPENSAS EXTRA'**
  String get extraRewards;

  /// No description provided for @chestBronze.
  ///
  /// In es, this message translates to:
  /// **'Bronce'**
  String get chestBronze;

  /// No description provided for @chestSilver.
  ///
  /// In es, this message translates to:
  /// **'Plata'**
  String get chestSilver;

  /// No description provided for @chestGold.
  ///
  /// In es, this message translates to:
  /// **'Oro'**
  String get chestGold;

  /// No description provided for @chestOpened.
  ///
  /// In es, this message translates to:
  /// **'¡Cofre abierto! +{fragments} Fragmentos'**
  String chestOpened(int fragments);

  /// No description provided for @chestOpenError.
  ///
  /// In es, this message translates to:
  /// **'Error al abrir el cofre'**
  String get chestOpenError;

  /// No description provided for @chestOpenBtn.
  ///
  /// In es, this message translates to:
  /// **'ABRIR'**
  String get chestOpenBtn;

  /// No description provided for @chestEvery.
  ///
  /// In es, this message translates to:
  /// **'Cada {time}'**
  String chestEvery(String time);

  /// No description provided for @confirmPurchase.
  ///
  /// In es, this message translates to:
  /// **'Confirmar compra'**
  String get confirmPurchase;

  /// No description provided for @confirmPurchasePrompt.
  ///
  /// In es, this message translates to:
  /// **'¿Deseas adquirir {title} por {price}?'**
  String confirmPurchasePrompt(String title, String price);

  /// No description provided for @processingPurchase.
  ///
  /// In es, this message translates to:
  /// **'Procesando compra...'**
  String get processingPurchase;

  /// No description provided for @buy.
  ///
  /// In es, this message translates to:
  /// **'COMPRAR'**
  String get buy;

  /// No description provided for @giftBonus.
  ///
  /// In es, this message translates to:
  /// **'+{bonus} de regalo'**
  String giftBonus(int bonus);

  /// No description provided for @subscribeFor.
  ///
  /// In es, this message translates to:
  /// **'SUSCRIBIRSE POR {price}'**
  String subscribeFor(String price);

  /// No description provided for @piggyBankTitle.
  ///
  /// In es, this message translates to:
  /// **'PIGGY BANK'**
  String get piggyBankTitle;

  /// No description provided for @piggyReady.
  ///
  /// In es, this message translates to:
  /// **'¡Llegaste a 100! Toca el cerdito para canjear GRATIS'**
  String get piggyReady;

  /// No description provided for @piggyCashback.
  ///
  /// In es, this message translates to:
  /// **'Cashback gratis por cada compra'**
  String get piggyCashback;

  /// No description provided for @piggyClaimBtn.
  ///
  /// In es, this message translates to:
  /// **'¡CANJEAR 100 LAPIS GRATIS!'**
  String get piggyClaimBtn;

  /// No description provided for @piggyClaiming.
  ///
  /// In es, this message translates to:
  /// **'CANJEANDO...'**
  String get piggyClaiming;

  /// No description provided for @piggyClaimSuccess.
  ///
  /// In es, this message translates to:
  /// **'🎉 ¡Has roto el cerdito! +{reward} Lapislázulis gratis añadidos a tu billetera.'**
  String piggyClaimSuccess(int reward);

  /// No description provided for @piggyClaimError.
  ///
  /// In es, this message translates to:
  /// **'No se pudo canjear el Piggy Bank en este momento.'**
  String get piggyClaimError;

  /// No description provided for @freeLapisAd.
  ///
  /// In es, this message translates to:
  /// **'LAPISLAZULI GRATIS'**
  String get freeLapisAd;

  /// No description provided for @freeLapisAdDesc.
  ///
  /// In es, this message translates to:
  /// **'Mira un video y gana +1.'**
  String get freeLapisAdDesc;

  /// No description provided for @watchAd.
  ///
  /// In es, this message translates to:
  /// **'VER'**
  String get watchAd;
}

class _AppLocalizationsDelegate
    extends LocalizationsDelegate<AppLocalizations> {
  const _AppLocalizationsDelegate();

  @override
  Future<AppLocalizations> load(Locale locale) {
    return SynchronousFuture<AppLocalizations>(lookupAppLocalizations(locale));
  }

  @override
  bool isSupported(Locale locale) =>
      <String>['en', 'es', 'fr', 'pt'].contains(locale.languageCode);

  @override
  bool shouldReload(_AppLocalizationsDelegate old) => false;
}

AppLocalizations lookupAppLocalizations(Locale locale) {
  // Lookup logic when only language code is specified.
  switch (locale.languageCode) {
    case 'en':
      return AppLocalizationsEn();
    case 'es':
      return AppLocalizationsEs();
    case 'fr':
      return AppLocalizationsFr();
    case 'pt':
      return AppLocalizationsPt();
  }

  throw FlutterError(
    'AppLocalizations.delegate failed to load unsupported locale "$locale". This is likely '
    'an issue with the localizations generation tool. Please file an issue '
    'on GitHub with a reproducible sample app and the gen-l10n configuration '
    'that was used.',
  );
}
