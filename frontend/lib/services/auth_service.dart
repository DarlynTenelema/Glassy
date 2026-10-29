import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:google_sign_in/google_sign_in.dart';
import '../config/env.dart';

class AuthService {
  static final AuthService _instance = AuthService._internal();
  factory AuthService() => _instance;
  AuthService._internal();

  final _supabase = Supabase.instance.client;

  Session? get currentSession => _supabase.auth.currentSession;
  User? get currentUser => _supabase.auth.currentUser;
  bool get isAuthenticated => currentSession != null;
  String? get accessToken => currentSession?.accessToken;

  Future<AuthResponse> signInWithEmail(String email, String password) async {
    return await _supabase.auth.signInWithPassword(
      email: email,
      password: password,
    );
  }

  Future<AuthResponse> signUpWithEmail(String email, String password) async {
    return await _supabase.auth.signUp(
      email: email,
      password: password,
    );
  }

  Future<AuthResponse?> signInWithGoogle() async {
    final googleSignIn = GoogleSignIn(
      serverClientId: Env.webClientId,
      scopes: const ['email', 'profile'],
    );
    try {
      await googleSignIn.signOut();
    } catch (_) {}
    final googleUser = await googleSignIn.signIn();
    if (googleUser == null) return null;

    final googleAuth = await googleUser.authentication;
    final idToken = googleAuth.idToken;
    if (idToken == null) throw Exception('No Google ID Token found');

    return await _supabase.auth.signInWithIdToken(
      provider: OAuthProvider.google,
      idToken: idToken,
      accessToken: googleAuth.accessToken,
    );
  }

  Future<void> signOut() async {
    try {
      final googleSignIn = GoogleSignIn(serverClientId: Env.webClientId);
      await googleSignIn.signOut();
    } catch (_) {}
    await _supabase.auth.signOut();
  }
}
