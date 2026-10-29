# Glassy Story Studio 🎙️💎

Sistema generador de historias de Reddit con voces hiperrealistas (Hombre y Mujer) impulsado por Google Cloud Text-to-Speech y Gemini 2.5 Flash. Diseñado para crear videos virales para TikTok, Shorts y Reels superpuestos sobre el gameplay relajante de **Glassy**.

---

## 🚀 Inicio Rápido

El servidor ya está listo para ejecutarse en cualquier momento con un solo comando:

```bash
cd backend
python main.py
```

Abre tu navegador en: **http://localhost:8001**

---

## ✨ Características Principales

### 0. 🌍 Estudio Global de Finanzas & Libros (7 Idiomas Simultáneos)
* **Historias de Alto Impacto (60 Segundos):** Genera lecciones sobre secretos financieros, trucos bancarios, resúmenes de libros (*Hábitos Atómicos*, *La Psicología del Dinero*, *Las 48 Leyes del Poder*) y casos de negocio virales.
* **Adaptación Cultural a 7 Idiomas en 1 Clic:**
  * 🇪🇸 **Español:** Mateo (Neural2) / Valentina
  * 🇺🇸 **Inglés:** Christopher (Neural2) / Jenny
  * 🇫🇷 **Francés:** Henri (Neural2) / Denise
  * 🇮🇹 **Italiano:** Diego (Neural2) / Elsa
  * 🇩🇪 **Alemán:** Conrad (Neural2) / Katja
  * 🇧🇷 **Portugués:** Antonio (Neural2) / Francisca
  * 🇷🇺 **Ruso:** Dmitry (Standard) / Svetlana
* **Empaquetado y Descarga en Lote (.ZIP):** Descarga un archivo ZIP único con los 7 audios MP3 nombrados y etiquetados, además de un archivo `guiones_y_titulos.txt` con los textos y ganchos de 3 segundos listos para copiar en TikTok/Shorts.

### 1. Selector de Voces Masculinas y Femeninas (Hombre / Mujer)
* **👨 Voz Masculina:**
  * **Mateo (Latam Neutro - Neural2):** Voz grave, clara y envolvente. Excelente para misterio y confesiones.
  * **Carlos (Journey DeepMind):** Modulación hiperrealista conversacional para podcasts y narración larga.
  * **Diego (España - Neural2):** Dinámico y enérgico para relatos rápidos.
* **👩 Voz Femenina:**
  * **Valentina (Latam Neutro - Neural2):** Tono cálido, empático y expresivo para dramas y dilemas morales (Reddit AITA).
  * **Sofía (Journey DeepMind):** Relato hiperrealista con inflexiones emotivas naturales.
  * **Elena (España - Neural2):** Serena, limpia y con dicción impecable.

### 2. Optimización Viral con Gemini 2.5 Flash
* **Pega cualquier historia de Reddit:** Gemini limpia la historia, elimina partes aburridas y le coloca un **gancho inicial en los primeros 3 segundos** que detiene el scroll en TikTok.
* **Ajuste de Duración:** Configura historias de 45s, 60s, 90s o 2 minutos (con contador en vivo de palabras).
* **Llamado a la acción (CTA) de Glassy:** Añade un cierre sutil como *"Comenta qué habrías hecho tú mientras ves cómo caen los diamantes en Glassy"*.

### 3. Pausas Dramáticas SSML
* Inserta automáticamente pausas de 450ms a 700ms entre oraciones y puntos suspensivos para dar el suspenso característico de los videos virales de Reddit.

### 4. Reproductor y Descarga MP3
* Reproductor con visualizador de ondas y control de línea de tiempo.
* Descarga directa en `.mp3` lista para importar a tu editor de video (CapCut, Premiere, DaVinci) junto al gameplay de Glassy.
* Historial con todos los audios generados previamente.

---

## 🔑 Configuración de Google Cloud
El proyecto utiliza las credenciales ya configuradas en `Otros/skins_generator/glassy-508419-c57039b8dad3.json`.

> **Activación de la API de Cloud Text-to-Speech:**  
> Si aún no lo has hecho, habilita la API con un clic en la consola de Google Cloud:  
> [Habilitar Cloud Text-to-Speech API](https://console.developers.google.com/apis/api/texttospeech.googleapis.com/overview?project=445179600709)
