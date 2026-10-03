import 'dart:convert';
import 'package:http/http.dart' as http;
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:flutter/material.dart';

class ChestsService {
  static final ChestsService _instance = ChestsService._internal();
  factory ChestsService() => _instance;
  ChestsService._internal();

  final String _backendUrl = 'https://glassy-production.up.railway.app/api/player/chests';

  Future<Map<String, dynamic>?> openChest(int chestType) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return null;

      final response = await http.post(
        Uri.parse('$_backendUrl/open'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'chest_type': chestType,
        }),
      );

      final data = jsonDecode(response.body);

      if (response.statusCode == 200) {
        return data; // Contiene fragments_added, total_fragments, crystals_added, etc.
      } else {
        debugPrint('Error opening chest: ${data['error']}');
        return data; // Puede contener 'error' y 'available_at'
      }
    } catch (e) {
      debugPrint('Exception opening chest: $e');
      return null;
    }
  }
}
