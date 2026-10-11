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
}
