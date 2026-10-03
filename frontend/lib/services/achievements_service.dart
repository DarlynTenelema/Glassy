import 'dart:convert';
import 'package:http/http.dart' as http;
import 'package:supabase_flutter/supabase_flutter.dart';
import 'package:flutter/material.dart';

class AchievementsService {
  static final AchievementsService _instance = AchievementsService._internal();
  factory AchievementsService() => _instance;
  AchievementsService._internal();

  // Cambia esto a tu URL de backend de producción
  final String _backendUrl = 'https://glassy-production.up.railway.app/api/player/achievements';

  Future<List<Map<String, dynamic>>> getAchievementsStatus() async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return [];

      final response = await http.get(
        Uri.parse('$_backendUrl/status'),
        headers: {
          'Authorization': 'Bearer ${session.accessToken}',
        },
      );

      if (response.statusCode == 200) {
        final List<dynamic> data = jsonDecode(response.body);
        return data.cast<Map<String, dynamic>>();
      }
    } catch (e) {
      debugPrint('Error fetching achievements status: $e');
    }
    return [];
  }

  Future<void> updateProgress(int groupId, int level, int progressAdded) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return;

      await http.post(
        Uri.parse('$_backendUrl/progress'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'group_id': groupId,
          'level': level,
          'progress_added': progressAdded,
        }),
      );
    } catch (e) {
      debugPrint('Error updating achievement progress: $e');
    }
  }

  Future<bool> claimReward(int groupId, int level, int goalTotal, int reward, String rewardType) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_backendUrl/claim'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'group_id': groupId,
          'level': level,
          'goal_total': goalTotal,
          'reward': reward,
          'reward_type': rewardType,
        }),
      );

      if (response.statusCode == 200) {
        return true;
      } else {
        debugPrint('Error claiming reward: ${response.body}');
        return false;
      }
    } catch (e) {
      debugPrint('Exception claiming reward: $e');
      return false;
    }
  }

  Future<bool> submitTikTokLink(String videoUrl) async {
    try {
      final session = Supabase.instance.client.auth.currentSession;
      if (session == null) return false;

      final response = await http.post(
        Uri.parse('$_backendUrl/tiktok'),
        headers: {
          'Content-Type': 'application/json',
          'Authorization': 'Bearer ${session.accessToken}',
        },
        body: jsonEncode({
          'video_url': videoUrl,
        }),
      );

      if (response.statusCode == 200) {
        return true;
      } else {
        debugPrint('Error submitting TikTok link: ${response.body}');
        return false;
      }
    } catch (e) {
      debugPrint('Exception submitting TikTok link: $e');
      return false;
    }
  }
}
