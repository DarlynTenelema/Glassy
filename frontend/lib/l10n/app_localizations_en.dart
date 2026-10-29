// ignore: unused_import
import 'package:intl/intl.dart' as intl;
import 'app_localizations.dart';

// ignore_for_file: type=lint

/// The translations for English (`en`).
class AppLocalizationsEn extends AppLocalizations {
  AppLocalizationsEn([String locale = 'en']) : super(locale);

  @override
  String get settingsTitle => 'Settings';

  @override
  String get generalVolume => 'Master Volume';

  @override
  String get effects => 'Effects';

  @override
  String get gameMusic => 'Game Music';

  @override
  String get darkMode => 'Dark Mode';

  @override
  String get language => 'Language';

  @override
  String get selectLanguage => 'Select Language';

  @override
  String get terms => 'Terms';

  @override
  String get privacy => 'Privacy';

  @override
  String get deleteAccount => 'Delete Account';

  @override
  String get logout => 'Log Out';

  @override
  String get deleteAccountTitle => 'Delete Account';

  @override
  String get deleteAccountWarning =>
      'Are you sure you want to permanently delete your account? You will lose all your progress, gems, and skins. This action cannot be undone.';

  @override
  String get cancel => 'Cancel';

  @override
  String get delete => 'Delete';

  @override
  String get deleteAccountError => 'Error deleting account. Please try again.';

  @override
  String get resetProgress => 'Reset Progress';

  @override
  String get resetProgressTitle => 'Reset Progress';

  @override
  String get resetProgressWarning =>
      'Are you sure you want to restart your game? You will lose all your gems, skins, achievements, and progress, but you will keep your account and purchases. This action cannot be undone.';

  @override
  String get reset => 'Reset';

  @override
  String get resetProgressError =>
      'Error resetting progress. Please try again.';

  @override
  String get resetProgressSuccess => 'Progress reset successfully.';

  @override
  String get continueWithGoogle => 'Continue with Google';

  @override
  String get loginCancelled => 'Login cancelled';

  @override
  String get referralCodeOptional => 'Referral code (optional)';

  @override
  String get applyReferral => 'Apply';

  @override
  String get referralApplied => 'Referral code applied!';

  @override
  String get invalidReferralCode => 'Invalid referral code';

  @override
  String get play => 'PLAY';

  @override
  String get skins => 'SKINS';

  @override
  String get store => 'STORE';

  @override
  String get records => 'RECORDS';

  @override
  String get profile => 'PROFILE';

  @override
  String get mergeToEvolve => 'Merge to evolve';

  @override
  String get dailyReward => 'DAILY REWARD';

  @override
  String dayNumber(int day) {
    return 'Day $day';
  }

  @override
  String get claim => 'CLAIM';

  @override
  String dailyRewardClaimed(int day) {
    return 'Day $day Reward Claimed!';
  }

  @override
  String get breakTitle => 'BREAK!!!';

  @override
  String get quickSettings => 'Quick Settings';

  @override
  String get resume => 'RESUME';

  @override
  String get gemRecharge => 'Gem Recharge';

  @override
  String get gameStartBanner => 'Play, relax and enjoy';

  @override
  String get gameOver => 'GAME OVER';

  @override
  String get newHighScore => 'Congratulations, new score!';

  @override
  String get goodTry => 'Good try';

  @override
  String get scoreLabel => 'SCORE';

  @override
  String get highScoreLabel => 'HIGH SCORE';

  @override
  String epicSave(int bonus) {
    return 'EPIC SAVE!\n+$bonus';
  }

  @override
  String comboText(int combo, int bonus) {
    return 'COMBO X$combo!\n+$bonus';
  }

  @override
  String get missionComplete => 'MISSION COMPLETED!';

  @override
  String missionCreateGems(int count, String gemName) {
    return 'Create $count $gemName';
  }

  @override
  String get shareScore => 'Share';

  @override
  String shareText(int score) {
    return 'I scored $score points in Glassy! Can you beat me?';
  }

  @override
  String get gemPearl => 'Pearls';

  @override
  String get gemEmerald => 'Emeralds';

  @override
  String get gemAmethyst => 'Amethysts';

  @override
  String get gemTopaz => 'Topazes';

  @override
  String get gemGreenRuby => 'Green Rubies';

  @override
  String get gemSapphire => 'Sapphires';

  @override
  String get gemRedRuby => 'Rubies';

  @override
  String get gemDiamond => 'Diamonds';

  @override
  String get gemDefault => 'Gems';

  @override
  String get achievementsTab => 'Achievements';

  @override
  String get rankingTab => 'Leaderboard';

  @override
  String get dailyTab => 'Daily';

  @override
  String get achievementsSystemTitle => 'ACHIEVEMENT SYSTEM';

  @override
  String get achievementsSystemSubtitle =>
      'Complete challenges to earn free Lapis.';

  @override
  String get gemFusionCategory => 'GEM FUSION';

  @override
  String get specialOffersCategory => 'SPECIAL OFFERS';

  @override
  String get claimed => 'CLAIMED';

  @override
  String get completed => 'COMPLETED';

  @override
  String get weeklyRanking => 'Weekly';

  @override
  String get totalRanking => 'All Time';

  @override
  String get skinsCollection => 'SKINS COLLECTION';

  @override
  String get equipped => 'EQUIPPED';

  @override
  String get equip => 'EQUIP';

  @override
  String get unlock => 'UNLOCK';

  @override
  String get exclusiveSkin => 'Exclusive Skin';

  @override
  String get storeTitle => 'STORE';

  @override
  String get chests => 'CHESTS';

  @override
  String get gemPacks => 'GEM PACKS';

  @override
  String get free => 'FREE';

  @override
  String get purchaseSuccessful => 'Purchase completed successfully!';

  @override
  String get purchaseFailed => 'Purchase error. Please try again.';

  @override
  String get playerProfile => 'PLAYER PROFILE';

  @override
  String get stats => 'STATISTICS';

  @override
  String get totalScore => 'Total Score';

  @override
  String get gamesPlayed => 'Games Played';

  @override
  String get changeAvatar => 'Change Avatar';

  @override
  String get copyId => 'Copy ID';

  @override
  String get idCopied => 'ID copied to clipboard!';

  @override
  String get playAgain => 'PLAY AGAIN';

  @override
  String get mainMenu => 'MAIN MENU';

  @override
  String yourScore(int score) {
    return 'Your score: $score';
  }

  @override
  String globalAccumulated(int total) {
    return '🌟 Global Total: $total';
  }

  @override
  String get playWithGoogle => 'PLAY WITH GOOGLE';

  @override
  String authError(String error) {
    return 'Authentication error: $error';
  }

  @override
  String googleSignInError(String error) {
    return 'Google Sign In error: $error';
  }

  @override
  String get termsNotice =>
      'By playing, you agree to our Terms of Service and Privacy Policy.';

  @override
  String get allRightsReserved =>
      '© All game rights reserved.\nUnauthorized copying or distribution prohibited.';

  @override
  String get welcomeSubtitle => 'Welcome to the next level';

  @override
  String get referralCodeHint => 'FRIEND OR CREATOR CODE (Optional)';

  @override
  String get saveChanges => 'SAVE CHANGES';

  @override
  String get profileUpdatedSuccess => 'Profile updated successfully';

  @override
  String get profileUpdateError => 'Error saving profile. Please try again.';

  @override
  String get usernameEmpty => 'Username cannot be empty';

  @override
  String get playerNameHint => 'Your Player Name';

  @override
  String get streak => 'STREAK';

  @override
  String get vipInviteCode => 'VIP INVITE CODE';

  @override
  String get inviteFriendsDesc =>
      'Invite 10 friends and get the Precious Metals skin';

  @override
  String get inviteCodeCopied => 'Code copied! Share it with your friends.';

  @override
  String get copy => 'COPY';

  @override
  String get selectAvatar => 'SELECT YOUR AVATAR';

  @override
  String get boy => 'Boy';

  @override
  String get girl => 'Girl';

  @override
  String get allAvatars => 'All';

  @override
  String get heroes => 'Heroes';

  @override
  String get heroines => 'Heroines';

  @override
  String get acquired => 'ACQUIRED';

  @override
  String get bonusTab => 'BONUS';

  @override
  String get categoryStarter => 'Starter';

  @override
  String get categoryStandard => 'Standard';

  @override
  String get categoryEvent => 'Event';

  @override
  String get skinUnlocked => 'Skin unlocked!';

  @override
  String get insufficientLapisOrError =>
      'Insufficient Lapislazuli or connection error.';

  @override
  String get uniqueOffers => 'SPECIAL OFFERS';

  @override
  String get noEventOffers => 'No event offers available.';

  @override
  String get lapisPacks => 'LAPISLAZULI PACKS';

  @override
  String get timeChests => 'TIMED CHESTS';

  @override
  String get extraRewards => 'EXTRA REWARDS';

  @override
  String get chestBronze => 'Bronze';

  @override
  String get chestSilver => 'Silver';

  @override
  String get chestGold => 'Gold';

  @override
  String chestOpened(int fragments) {
    return 'Chest opened! +$fragments Fragments';
  }

  @override
  String get chestOpenError => 'Error opening chest';

  @override
  String get chestOpenBtn => 'OPEN';

  @override
  String chestEvery(String time) {
    return 'Every $time';
  }

  @override
  String get confirmPurchase => 'Confirm purchase';

  @override
  String confirmPurchasePrompt(String title, String price) {
    return 'Do you want to purchase $title for $price?';
  }

  @override
  String get processingPurchase => 'Processing purchase...';

  @override
  String get buy => 'BUY';

  @override
  String giftBonus(int bonus) {
    return '+$bonus bonus';
  }

  @override
  String subscribeFor(String price) {
    return 'SUBSCRIBE FOR $price';
  }

  @override
  String get piggyBankTitle => 'PIGGY BANK';

  @override
  String get piggyReady => 'You reached 100! Tap the piggy to redeem for FREE';

  @override
  String get piggyCashback => 'Free cashback on every purchase';

  @override
  String get piggyClaimBtn => 'REDEEM 100 LAPIS FOR FREE!';

  @override
  String get piggyClaiming => 'REDEEMING...';

  @override
  String piggyClaimSuccess(int reward) {
    return '🎉 You broke the piggy bank! +$reward free Lapislazuli added to your wallet.';
  }

  @override
  String get piggyClaimError => 'Could not redeem Piggy Bank at this time.';

  @override
  String get freeLapisAd => 'FREE LAPISLAZULI';

  @override
  String get freeLapisAdDesc => 'Watch a video and earn +1.';

  @override
  String get watchAd => 'WATCH';
}
