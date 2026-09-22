import 'package:flutter/material.dart';
import '../theme/app_theme.dart';

class SettingsScreen extends StatelessWidget {
  const SettingsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Configuración'),
        backgroundColor: Colors.transparent,
        elevation: 0,
      ),
      backgroundColor: AppTheme.darkBackground,
      body: Padding(
        padding: const EdgeInsets.all(20.0),
        child: Column(
          children: [
            GlassContainer(
              padding: const EdgeInsets.all(20),
              child: Column(
                children: [
                  SwitchListTile(
                    title: const Text('Volumen', style: TextStyle(color: Colors.white, fontSize: 18)),
                    value: true, 
                    activeColor: AppTheme.neonBlue,
                    onChanged: (val) {
                      // TODO: Implementar cambio de volumen
                    },
                  ),
                  const Divider(color: Colors.white24),
                  SwitchListTile(
                    title: const Text('Efectos', style: TextStyle(color: Colors.white, fontSize: 18)),
                    value: true,
                    activeColor: AppTheme.neonPink,
                    onChanged: (val) {
                      // TODO: Implementar cambio de efectos
                    },
                  ),
                  const Divider(color: Colors.white24),
                  SwitchListTile(
                    title: const Text('Tema Claro', style: TextStyle(color: Colors.white, fontSize: 18)),
                    value: false, // Por ahora fijo en oscuro para UI premium
                    activeColor: AppTheme.neonPurple,
                    onChanged: (val) {
                      // TODO: Provider Theme toggle
                    },
                  ),
                ],
              ),
            ),
            const Spacer(),
            TextButton(
              onPressed: () {
                Navigator.pop(context); // Y cerrar sesión idealmente
              },
              child: const Text('Cerrar Sesión', style: TextStyle(color: Colors.redAccent, fontSize: 16)),
            )
          ],
        ),
      ),
    );
  }
}
