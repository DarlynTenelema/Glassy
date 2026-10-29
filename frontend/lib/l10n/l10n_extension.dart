import 'package:flutter/widgets.dart';
import 'app_localizations.dart';

extension LocalizationContextExtension on BuildContext {
  AppLocalizations get l10n {
    final localizations = AppLocalizations.of(this);
    if (localizations == null) {
      throw FlutterError('AppLocalizations not found in current context');
    }
    return localizations;
  }
}
