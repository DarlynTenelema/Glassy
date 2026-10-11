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
}
