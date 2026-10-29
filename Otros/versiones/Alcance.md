# Glassy — Estrategia de Marketing, Crecimiento y Alcance 2026

## 1. Visión y Objetivos Principales
El objetivo central no es rehacer ni complejizar el juego móvil original (cuya lógica en C# y Flutter ya está sólida), sino **desplegar estrategias agresivas de adquisición de audiencia y monetización**, aprovechando herramientas modernas de 2026: interactividad en vivo en TikTok, rev-share para influencers, pipelines de contenido con IA y versiones WebGL.

---

## 2. Los 3 Pilares Fundamentales

### Pilar 1: Edición Interactiva para TikTok Live (Streamer Edition)
* **Objetivo:** Convertir el gameplay relajante/adictivo de Glassy en un espectáculo interactivo en vivo donde el chat compite (Fans vs. Trolls), monetizando mediante regalos de TikTok y redirigiendo tráfico a la app móvil.
* **Diseño Visual (Boceto en Pantalla Dividida):**
  * **Lado Izquierdo (60%):** Panel de reglas en vivo, metas de likes, eventos activos, top donadores y chat.
  * **Lado Derecho (40%):** Botella/frasco vertical con física 2D en tiempo real.
* **Arquitectura Técnica:**
  * Compilación **Standalone PC (Windows)** o escena especial en Unity, sin depender de la UI móvil.
  * **Spawn Directo en el Frasco:** Los elementos de la audiencia (cuarzos, piedras, gemas de regalo) no bajan por el cuello angosto del tubo, sino que aparecen directamente dentro del cuerpo del frasco en posiciones aleatorias seguras. Esto evita atascos de física con las perlas estándar.
  * Conexión en tiempo real con TikTok Live mediante WebSocket local (usando `tiktok-live-connector` o `TikTokLiveSharp`).
* **Nuevas Gemas y Elementos Exclusivos de TikTok:**
  * **Cuarzos (Fans / Ayudantes):** Al fusionarse entre sí otorgan una bonificación alta de puntos y **desaparecen**, liberando espacio vital en el frasco.
  * **Piedras (Trolls / Haters):** Obstáculos pesados que no se fusionan. Solo pueden destruirse si una fusión de gemas ocurre inmediatamente al lado de ellas (onda expansiva).

### Pilar 2: Evolución de la Web de Partners e Influencers
* **Cambio de Modelo Económico (RevShare 25% IAP):**
  * Sustituir el modelo anterior ($0.10 a los 15 días de retención) por una comisión del **25% de todas las compras de monedas/gemas** que realice la comunidad del creador.
  * **Estructura Financiera:** 30% Google Play + 25% Influencer + 5% Pasarelas de retiro = **40% de Margen Neto Limpio** con Costo de Adquisición de Clientes (CAC) igual a cero.
  * **Incentivo para el Jugador:** 100 cristales de bienvenida y 10% adicional en su primera compra al registrar el código de su influencer favorito.
* **Simplificación Web:** Desactivar pantallas secundarias complejas para este primer lanzamiento y centrar la plataforma en:
  1. Registro simple con Google OAuth.
  2. Generador y copia de código único de partner.
  3. Saldo acumulado en tiempo real con botón de retiro (PayPal).

### Pilar 3: Generador Autónomo de Historias con IA (Shorts & TikTok)
* **Objetivo:** Publicar contenido corto diario sin esfuerzo manual recurrente.
* **Mecánica:** Fondo de video con gameplay fluido de Glassy (ASMR / física de gemas) superpuesto con historias atrapantes, dilemas morales o curiosidades generadas por IA.
* **Stack:** Script en Python (aprovechando la configuración existente en `Otros/skins_generator` con `agent platform` y Gemini 1.5/2.5) + Google Text-to-Speech / ElevenLabs + FFmpeg para subtítulos dinámicos y renderizado vertical 9:16.

---

## 3. Nuevas Iniciativas de Crecimiento 2026

### 4. Semillas de Desafío Viral ("Challenge Seeds")
* **Concepto:** Cada partida puede inicializarse con una semilla determinista (`System.Random(seed)`). Dos jugadores que usen la misma semilla reciben la misma secuencia idéntica de gemas.
* **Impacto Viral:** Fomenta retos orgánicos en redes: *"Te reto a superar mis 4,200 puntos con el código #GLASSY77 sin desbordar el frasco"*. Cero quejas de suerte; 100% habilidad.
* **Complejidad:** Muy baja (menos de 10 líneas en `GemSpawner.cs`).

### 5. Suscripción Premium para Creadores ($20/mes) & Fotos de Donadores
* **Concepto:** Ofrecer la versión para TikTok Live como un SaaS ($20/mes) para que otros streamers lo transmitan en sus propios canales.
* **Fotos de Donadores en Tiempo Real:** Las fotos de perfil de los donadores más activos se descargan dinámicamente (`UnityWebRequestTexture.GetTexture`) y se estampan como textura en la gema más grande del frasco o en el Diamante.
* **Complejidad:** Baja en Unity; el impacto en donaciones por vanidad del espectador es masivo.

### 6. Minijuego WebGL Jugable (Playable Web)
* Miniversión web de 60 segundos compilada en Unity WebGL.
* Enlace en la biografía de TikTok para que los usuarios jueguen de inmediato sin salir del navegador antes de instalar la app completa desde la Play Store.

---

## 4. Metas y Proyección del Primer Mes

### Proyección de Métricas (Transmisiones 7 veces por semana por más de 8 horas al día):
* **Likes por transmisión:** 1,000,000 – 3,000,000 likes.
* **Espectadores concurrentes promedio (CCV):** 300 – 1,000 simultáneos.
* **Nuevos seguidores en TikTok:** 20,000 – 50,000 seguidores en 30 días.
* **Descargas orgánicas del juego (Play Store):** 10,000 – 30,000 instalaciones.
* **Ingresos brutos TikTok Live (Regalos):** $3,000 – $8,000 USD (Neto estimado: $1,500 – $4,000 USD).
* **Ingresos IAP en juego móvil:** $1,500 – $4,000 USD.
* **Meta total financiera neta Mes 1:** **$3,000 – $8,000 USD**.

---

**Nuevos elementos**
--- Cuarzo: Al fusionarse desaparece y otorga 20 puntos

--- Piedra: No se puede fusionar y para eliminarla se deben juntar dos elementos cerca de estos, desaparece y otorga 30 puntos

## 5. Catálogo de Interacciones de TikTok Live

### Gratuitas (Crecimiento en el Algoritmo):
* **Meta de 100 Likes:** Spawnea 1 Esmeralda flotante en el frasco.
* **Meta de 200 Likes:** Spawnea 1 Amatista flotante en el frasco.
* **Meta de 400 Likes:** Spawnea 1 Topacio flotante en el frasco.
* **Meta de 800 Likes:** Spawnea 1 Peridoto flotante en el frasco.
* **Meta de 1,000 Likes:** Spawnea 1 Zafiro flotante en el frasco.
* **Meta de 1,200 Likes:** Spawnea 1 Rubí flotante en el frasco.
* **Comentario `{Emoji: Corazón blanco}` (5 veces):** Spawnea 1 Cuarzo dentro del frasco.
* **Comentario `{Emoji: Corazón negro}` (10 veces):** Spawnea 1 Piedra dentro del frasco.
* **Comentario `{Emoji: Corazón verde}` (10 veces):** Spawnea 10 Esmeraldas dentro del frasco.
* **Comentario `{Emoji: Corazón morado}` (20 veces):** Spawnea 10 Amatistas dentro del frasco.

### De Pago (Monetización Real):
* **Regalo ($0.05 USD):** Spawnea 1 Cuarzo.
* **Regalo ($0.10 USD):** Spawnea 1 Piedra para complicar al streamer.
* **Regalo ($0.15 USD):** Spawnea 1 paquete de 10 Esmeraldas.
* **Regalo ($0.20 USD):** Spawnea 1 paquete de 10 Cuarzos.
* **Regalo ($0.25 USD):** Spawnea 1 paquete de 10 Piedras.

### Dinámica de pago con las mecánicas especiales.
El sistema puede generar una tarea mientras el usuario juega y los espectadores pueden decisidir si ayudar o complicar.
* **Regalo ($0.05 USD):** Se eliminan todas las gemas desde el topacios hasta el rubí y se le da al jugador todos los puntos que valián dichas gemas.
* **Regalo ($0.10 USD):** Se eliminan todas las gemas.
* **Regalo ($0.15 USD):** Corta el combo del jugador de golpe.
* **Regalo ($0.20 USD):** Aumenta el tiempo de la misión +30 segundos.
* **Regalo ($0.25 USD):** Auto-completa la misión instantaneamente.

* **Logro Especial** Si un usuario espectador llega a más de 5k de likes, 500 comentarios y $1 dólar: Aparecen en el muro de donadores.

A futuro como skill, aún no viable para la versión 1.
* **Regalo ($10.00 USD):** Skin exclusiva dentro del juego y aparición en la siguiente transmisión.
