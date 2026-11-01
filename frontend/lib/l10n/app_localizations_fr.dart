// ignore: unused_import
import 'package:intl/intl.dart' as intl;
import 'app_localizations.dart';

// ignore_for_file: type=lint

/// The translations for French (`fr`).
class AppLocalizationsFr extends AppLocalizations {
  AppLocalizationsFr([String locale = 'fr']) : super(locale);

  @override
  String get settingsTitle => 'Paramètres';

  @override
  String get generalVolume => 'Volume Général';

  @override
  String get effects => 'Effets';

  @override
  String get gameMusic => 'Musique du Jeu';

  @override
  String get darkMode => 'Mode Sombre';

  @override
  String get language => 'Langue';

  @override
  String get selectLanguage => 'Choisir la Langue';

  @override
  String get terms => 'Conditions';

  @override
  String get privacy => 'Confidentialité';

  @override
  String get deleteAccount => 'Supprimer le Compte';

  @override
  String get logout => 'Déconnexion';

  @override
  String get deleteAccountTitle => 'Supprimer le Compte';

  @override
  String get deleteAccountWarning =>
      'Êtes-vous sûr de vouloir supprimer définitivement votre compte ? Vous perdrez toute votre progression, vos gemmes et vos skins. Cette action est irréversible.';

  @override
  String get cancel => 'Annuler';

  @override
  String get delete => 'Supprimer';

  @override
  String get deleteAccountError =>
      'Erreur lors de la suppression du compte. Veuillez réessayer.';

  @override
  String get resetProgress => 'Réinitialiser la Progression';

  @override
  String get resetProgressTitle => 'Réinitialiser la Progression';

  @override
  String get resetProgressWarning =>
      'Êtes-vous sûr de vouloir redémarrer votre jeu ? Vous perdrez vos gemmes, skins, succès et progression, mais vous conserverez votre compte et vos achats. Cette action est irréversible.';

  @override
  String get reset => 'Réinitialiser';

  @override
  String get resetProgressError =>
      'Erreur lors de la réinitialisation. Veuillez réessayer.';

  @override
  String get resetProgressSuccess => 'Progression réinitialisée avec succès.';

  @override
  String get continueWithGoogle => 'Continuer avec Google';

  @override
  String get loginCancelled => 'Connexion annulée';

  @override
  String get referralCodeOptional => 'Code de parrainage (facultatif)';

  @override
  String get applyReferral => 'Appliquer';

  @override
  String get referralApplied => 'Code de parrainage appliqué !';

  @override
  String get invalidReferralCode => 'Code de parrainage invalide';

  @override
  String get play => 'JOUER';

  @override
  String get singlePlayer => 'SOLITAIRE';

  @override
  String get onlineMultiplayer => 'EN LIGNE';

  @override
  String get localMultiplayer => 'LOCAL';

  @override
  String get skins => 'SKINS';

  @override
  String get store => 'BOUTIQUE';

  @override
  String get records => 'RECORDS';

  @override
  String get profile => 'PROFIL';

  @override
  String get mergeToEvolve => 'Fusionnez pour évoluer';

  @override
  String get dailyReward => 'RÉCOMPENSE DU JOUR';

  @override
  String dayNumber(int day) {
    return 'Jour $day';
  }

  @override
  String get claim => 'RÉCLAMER';

  @override
  String dailyRewardClaimed(int day) {
    return 'Récompense du Jour $day Réclamée !';
  }

  @override
  String get breakTitle => 'PAUSE !!!';

  @override
  String get quickSettings => 'Paramètres Rapides';

  @override
  String get resume => 'REPRENDRE';

  @override
  String get gemRecharge => 'Recharge de Gemmes';

  @override
  String get gameStartBanner => 'Jouez, détendez-vous et profitez';

  @override
  String get gameOver => 'GAME OVER';

  @override
  String get newHighScore => 'Félicitations, nouveau score !';

  @override
  String get goodTry => 'Bien essayé';

  @override
  String get scoreLabel => 'SCORE';

  @override
  String get highScoreLabel => 'RECORD';

  @override
  String epicSave(int bonus) {
    return 'SAUVETAGE ÉPIQUE !\n+$bonus';
  }

  @override
  String comboText(int combo, int bonus) {
    return 'COMBO X$combo !\n+$bonus';
  }

  @override
  String get missionComplete => 'MISSION ACCOMPLIE !';

  @override
  String missionCreateGems(int count, String gemName) {
    return 'Créez $count $gemName';
  }

  @override
  String get shareScore => 'Partager';

  @override
  String shareText(int score) {
    return 'J\'ai obtenu $score points sur Glassy ! Peux-tu me battre ?';
  }

  @override
  String get gemPearl => 'Perles';

  @override
  String get gemEmerald => 'Émeraudes';

  @override
  String get gemAmethyst => 'Améthystes';

  @override
  String get gemTopaz => 'Topazes';

  @override
  String get gemGreenRuby => 'Rubis Verts';

  @override
  String get gemSapphire => 'Saphirs';

  @override
  String get gemRedRuby => 'Rubis';

  @override
  String get gemDiamond => 'Diamants';

  @override
  String get gemDefault => 'Gemmes';

  @override
  String get achievementsTab => 'Succès';

  @override
  String get rankingTab => 'Classement';

  @override
  String get dailyTab => 'Quotidien';

  @override
  String get achievementsSystemTitle => 'SYSTÈME DE SUCCÈS';

  @override
  String get achievementsSystemSubtitle =>
      'Relevez des défis pour gagner des Lapis gratuits.';

  @override
  String get gemFusionCategory => 'FUSION DE GEMMES';

  @override
  String get specialOffersCategory => 'OFFRES SPÉCIALES';

  @override
  String get claimed => 'RÉCLAMÉ';

  @override
  String get completed => 'COMPLÉTÉ';

  @override
  String get weeklyRanking => 'Hebdomadaire';

  @override
  String get totalRanking => 'Historique Total';

  @override
  String get skinsCollection => 'COLLECTION DE SKINS';

  @override
  String get equipped => 'ÉQUIPÉ';

  @override
  String get equip => 'ÉQUIPER';

  @override
  String get unlock => 'DÉBLOQUER';

  @override
  String get exclusiveSkin => 'Skin Exclusive';

  @override
  String get storeTitle => 'BOUTIQUE';

  @override
  String get chests => 'COFFRES';

  @override
  String get gemPacks => 'PACKS DE GEMMES';

  @override
  String get free => 'GRATUIT';

  @override
  String get purchaseSuccessful => 'Achat effectué avec succès !';

  @override
  String get purchaseFailed => 'Erreur lors de l\'achat. Veuillez réessayer.';

  @override
  String get playerProfile => 'PROFIL DU JOUEUR';

  @override
  String get stats => 'STATISTIQUES';

  @override
  String get totalScore => 'Score Total';

  @override
  String get gamesPlayed => 'Parties Jouées';

  @override
  String get changeAvatar => 'Changer d\'Avatar';

  @override
  String get copyId => 'Copier l\'ID';

  @override
  String get idCopied => 'ID copié dans le presse-papiers !';

  @override
  String get playAgain => 'REJOUER';

  @override
  String get mainMenu => 'MENU PRINCIPAL';

  @override
  String yourScore(int score) {
    return 'Votre score : $score';
  }

  @override
  String globalAccumulated(int total) {
    return '🌟 Total Global : $total';
  }

  @override
  String get playWithGoogle => 'JOUER AVEC GOOGLE';

  @override
  String authError(String error) {
    return 'Erreur d\'authentification : $error';
  }

  @override
  String googleSignInError(String error) {
    return 'Erreur Google Sign In : $error';
  }

  @override
  String get termsNotice =>
      'En jouant, vous acceptez nos Conditions d\'utilisation et notre Politique de confidentialité.';

  @override
  String get allRightsReserved =>
      '© Tous droits réservés.\nCopie ou distribution non autorisée interdite.';

  @override
  String get welcomeSubtitle => 'Bienvenue au niveau supérieur';

  @override
  String get referralCodeHint => 'CODE AMI OU CRÉATEUR (Facultatif)';

  @override
  String get saveChanges => 'ENREGISTRER LES MODIFICATIONS';

  @override
  String get profileUpdatedSuccess => 'Profil mis à jour avec succès';

  @override
  String get profileUpdateError =>
      'Erreur lors de l\'enregistrement du profil. Réessayez.';

  @override
  String get usernameEmpty => 'Le nom d\'utilisateur ne peut pas être vide';

  @override
  String get playerNameHint => 'Votre Nom de Joueur';

  @override
  String get streak => 'SÉRIE';

  @override
  String get vipInviteCode => 'CODE D\'INVITATION VIP';

  @override
  String get inviteFriendsDesc =>
      'Invitez 10 amis et gagnez le skin Métaux Précieux';

  @override
  String get inviteCodeCopied => 'Code copié ! Partagez-le avec vos amis.';

  @override
  String get copy => 'COPIER';

  @override
  String get selectAvatar => 'SÉLECTIONNEZ VOTRE AVATAR';

  @override
  String get boy => 'Garçon';

  @override
  String get girl => 'Fille';

  @override
  String get allAvatars => 'Tous';

  @override
  String get heroes => 'Héros';

  @override
  String get heroines => 'Héroïnes';

  @override
  String get acquired => 'ACQUIS';

  @override
  String get bonusTab => 'BONUS';

  @override
  String get categoryStarter => 'Débutant';

  @override
  String get categoryStandard => 'Standard';

  @override
  String get categoryEvent => 'Événement';

  @override
  String get skinUnlocked => 'Skin débloqué !';

  @override
  String get insufficientLapisOrError =>
      'Lapislazuli insuffisant ou erreur de connexion.';

  @override
  String get uniqueOffers => 'OFFRES SPÉCIALES';

  @override
  String get noEventOffers => 'Aucune offre d\'événement disponible.';

  @override
  String get lapisPacks => 'PACKS DE LAPIS-LAZULI';

  @override
  String get timeChests => 'COFFRES TEMPORELS';

  @override
  String get extraRewards => 'RÉCOMPENSES SUPPLÉMENTAIRES';

  @override
  String get chestBronze => 'Bronze';

  @override
  String get chestSilver => 'Argent';

  @override
  String get chestGold => 'Or';

  @override
  String chestOpened(int fragments) {
    return 'Coffre ouvert ! +$fragments Fragments';
  }

  @override
  String get chestOpenError => 'Erreur lors de l\'ouverture du coffre';

  @override
  String get chestOpenBtn => 'OUVRIR';

  @override
  String chestEvery(String time) {
    return 'Tous les $time';
  }

  @override
  String get confirmPurchase => 'Confirmer l\'achat';

  @override
  String confirmPurchasePrompt(String title, String price) {
    return 'Souhaitez-vous acheter $title pour $price ?';
  }

  @override
  String get processingPurchase => 'Traitement de l\'achat...';

  @override
  String get buy => 'ACHETER';

  @override
  String giftBonus(int bonus) {
    return '+$bonus en cadeau';
  }

  @override
  String subscribeFor(String price) {
    return 'S\'ABONNER POUR $price';
  }

  @override
  String get piggyBankTitle => 'TIRELIRE';

  @override
  String get piggyReady =>
      'Vous avez atteint 100 ! Touchez la tirelire pour échanger GRATUITEMENT';

  @override
  String get piggyCashback => 'Cashback gratuit pour chaque achat';

  @override
  String get piggyClaimBtn => 'RÉCUPÉRER 100 LAPIS GRATUITS !';

  @override
  String get piggyClaiming => 'RÉCUPÉRATION...';

  @override
  String piggyClaimSuccess(int reward) {
    return '🎉 Tirelire brisée ! +$reward Lapis-lazuli gratuits ajoutés à votre portefeuille.';
  }

  @override
  String get piggyClaimError =>
      'Impossible d\'échanger la tirelire pour le moment.';

  @override
  String get freeLapisAd => 'LAPIS-LAZULI GRATUIT';

  @override
  String get freeLapisAdDesc => 'Regardez une vidéo et gagnez +1.';

  @override
  String get watchAd => 'REGARDER';
}
