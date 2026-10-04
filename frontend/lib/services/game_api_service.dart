import 'dart:convert';
import 'package:http/http.dart' as http;
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:flutter/material.dart';
import '../services/storage_service.dart';

class GameApiService {
  static final GameApiService _instance = GameApiService._internal();
  factory GameApiService() => _instance;
  GameApiService._internal();

  // URL del backend en producción
  final String _baseUrl = 'https://glassy-production.up.railway.app/api';

  Future<bool> submitScore(int score) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_baseUrl/leaderboard'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'score': score,
        }),
      );

      if (response.statusCode == 200) {
        debugPrint('Score enviado correctamente al servidor: $score');
        return true;
      } else {
        debugPrint('Error enviando score: ${response.statusCode} - ${response.body}');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción enviando score: $e');
      return false;
    }
  }

  Future<void> submitScoreWithRetry(int score) async {
    bool success = await submitScore(score);
    if (!success) {
      final storage = StorageService();
      int pending = storage.getInt('pending_score', defaultValue: 0);
      if (score > pending) {
        await storage.setInt('pending_score', score);
        debugPrint('Score $score guardado en local para reintento por falta de red');
      }
    }
  }

  Future<void> syncPendingScore() async {
    final storage = StorageService();
    int pending = storage.getInt('pending_score', defaultValue: 0);
    if (pending > 0) {
      debugPrint('Intentando sincronizar score guardado localmente: $pending');
      bool success = await submitScore(pending);
      if (success) {
        await storage.setInt('pending_score', 0);
        debugPrint('Score local $pending sincronizado con éxito');
      }
    }
  }

  Future<bool> updateMissionProgress(int progressAdded) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_baseUrl/player/mission/update'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'progress_added': progressAdded,
        }),
      );

      if (response.statusCode == 200) {
        debugPrint('Progreso de misión actualizado: +$progressAdded');
        return true;
      } else {
        debugPrint('Error actualizando misión: ${response.statusCode} - ${response.body}');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción actualizando misión: $e');
      return false;
    }
  }

  Future<bool> claimAdReward() async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_baseUrl/player/ad-reward'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
      );

      if (response.statusCode == 200) {
        debugPrint('Recompensa de anuncio reclamada');
        return true;
      } else {
        debugPrint('Error reclamando anuncio: ${response.statusCode}');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción reclamando anuncio: $e');
      return false;
    }
  }

  Future<bool> spendCrystals(int amount) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_baseUrl/player/spend-crystals'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'amount': amount,
        }),
      );

      if (response.statusCode == 200) {
        debugPrint('Cristales gastados exitosamente en backend: $amount');
        return true;
      } else {
        debugPrint('Error gastando cristales: ${response.statusCode}');
        return false;
      }
    } catch (e) {
      debugPrint('Excepción gastando cristales: $e');
      return false;
    }
  }
}
