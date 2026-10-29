# Nostalgia Studio 🌙🎮

Sistema autónomo para crear videos de **Filosofía Gamer & Nostalgia Pixelada (65–70 Segundos)** optimizados para TikTok, Shorts y Reels.

---

## 🚀 Inicio Rápido

Para iniciar el servidor de Nostalgia Studio:

```bash
cd Nostalgia
python run.py
```
O simplemente haz doble clic en `run.bat`.

Se abrirá automáticamente en tu navegador en: **http://localhost:8005**

---

## ✨ Características Principales

1. **Botón Único "Crear 3 videos nuevos":**
   * Con un solo clic, el sistema analiza el historial, genera 3 reflexiones de 65-70 segundos con Gemini Flash y renderiza los 3 videos en vertical (1080x1920) con música y ambiente relajante.
2. **Cero Consumo de Créditos de Voz (Sin TTS):**
   * El sistema no consume créditos de Google Cloud Text-to-Speech ni APIs de voz. Utiliza pistas de audio ambiental relajante (sonido de lluvia suave o brisa nocturna) combinadas con tipografía cinemática en pantalla.
3. **Memoria de Cero Repeticiones (`data/history.json`):**
   * Cada frase, metáfora de videojuego y gancho queda registrado permanentemente. Al generar nuevos videos, la IA lee la lista de temas previos y tiene prohibido repetirlos.
4. **Estética Pixel Art 16/32-Bit:**
   * Incluye paisajes cinemáticos nocturnos, bosques lluviosos y acantilados al atardecer en vertical 9:16.
   * Aplica un sutil movimiento de paneo cinemático (Ken Burns breathe) para dar vida a la ilustración.
5. **Subtítulos Dinámicos de Alto Rendimiento:**
   * Subtítulos estilo cinemático integrados (.ass) con resalte de palabras en tonos dorados/ámbar y contornos legibles, perfectamente pausados para una lectura tranquila mientras se escucha la lluvia.
6. **Destino Directo de Videos:**
   * Todos los videos finalizados se guardan directamente en: `C:\Users\PC\Glassy1\Otros\story_generator\Nostalgia\videos`.
   * Incluye un botón para abrir la carpeta directamente en el Explorador de Windows.
