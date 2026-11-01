import 'package:flutter_dotenv/flutter_dotenv.dart';

class Env {
  static String get supabaseUrl =>
      dotenv.env['SUPABASE_URL'] ?? 'https://mstunvdiaqttvfefncbt.supabase.co';

  static String get supabaseAnonKey =>
      dotenv.env['SUPABASE_ANON'] ?? 'sb_publishable_okNqQmjW3g9MYiUoo8rfBg_iygTmuFg';

  static String get webClientId =>
      dotenv.env['GOOGLE_CLIENT_ID'] ?? '445179600709-18e2kv44jmcc3eqf343epdv8fn3ghqv8.apps.googleusercontent.com';

  static String get backendUrl =>
      dotenv.env['BACKEND_URL'] ?? 'https://glassy-production.up.railway.app/api';

  static String get wsMultiplayerUrl {
    final explicit = dotenv.env['WS_MULTIPLAYER_URL'];
    if (explicit != null && explicit.isNotEmpty) return explicit;
    final url = backendUrl;
    if (url.startsWith('https://')) {
      final host = url.replaceFirst('https://', '').split('/api')[0];
      return 'wss://$host/ws/multiplayer';
    } else if (url.startsWith('http://')) {
      final host = url.replaceFirst('http://', '').split('/api')[0];
      return 'ws://$host/ws/multiplayer';
    }
    return 'wss://glassy-production.up.railway.app/ws/multiplayer';
  }
}
