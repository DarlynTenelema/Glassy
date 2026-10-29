import os
import json
import re
import random
from typing import List, Dict, Any, Optional
from core.config import PROJECT_ID, LOCATION
from core.database import get_used_topics_and_hooks

# Inicializar cliente Gemini
gemini_client = None
try:
    from google import genai
    gemini_client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)
    print("✨ [Nostalgia] Cliente Gemini conectado con éxito.")
except Exception as e:
    print(f"⚠️ [Nostalgia] Aviso al inicializar Gemini: {e}")

NOSTALGIA_THEMES_INSPIRATION = [
    "Minecraft: 'No dejes los árboles flotando' ( Minecraft no hablaba solo de árboles, hablaba de no dejar ciclos abiertos en tu vida)",
    "Minecraft: 'El perro que dejaste sentado en tu casa de madera hace 8 años esperando que vuelvas'",
    "Minecraft: 'Picar hacia abajo sin ver' (El miedo a arriesgarse a ciegas vs la tentación del atajo fácil)",
    "Minecraft: 'Dormir para pasar la tormenta' (A veces no puedes luchar contra todo hoy, necesitas descansar para que amanezca)",
    "Pokémon: 'La primera vez que dejaste a tu inicial en la caja de la PC para probar otros' (Cómo cambiamos a quienes estuvieron desde el inicio)",
    "Zelda Ocarina of Time: 'Crecer de golpe sacando la Espada Maestra' (Avanzar 7 años sin estar listo para el peso de la adultez)",
    "Dark Souls: 'La fogata solitaria en medio de la oscuridad' (El valor de encontrar un refugio temporal cuando todo parece insalvable)",
    "Halo 3 / Call of Duty: 'La última vez que todo el grupo jugó conectado y nadie supo que era la última'",
    "Skyrim: 'Caminar por la nieve escuchando Secunda' (La soledad elegida para encontrar claridad mental)",
    "Stardew Valley: 'Huir de la oficina de Joja Corp hacia un campo en ruinas' (El anhelo de una vida simple y honesta)",
    "Super Mario 64: 'Nadar en Jolly Roger Bay con Dire Dire Docks sonando' (La serenidad submarina de la infancia)",
    "Shadow of the Colossus: 'Vencer gigantes que solo querían estar en paz' (El costo moral de perseguir obsesivamente lo que perdiste)"
]

def generate_nostalgia_scripts(count: int = 3, custom_theme: Optional[str] = None) -> List[Dict[str, Any]]:
    """
    Genera `count` guiones de 65-70 segundos de reflexiones nostálgicas de videojuegos
    verificando el historial para NO repetir temas ni frases previas.
    """
    if not gemini_client:
        raise Exception("Cliente Gemini no disponible. Revisa tus credenciales de Google Cloud.")

    used_history = get_used_topics_and_hooks()
    used_str = "\n".join(used_history) if used_history else "(No hay temas previos aún)"

    selected_inspo = random.sample(NOSTALGIA_THEMES_INSPIRATION, min(len(NOSTALGIA_THEMES_INSPIRATION), 4))
    inspo_str = "\n".join(f"- {s}" for s in selected_inspo)

    custom_instruction = ""
    if custom_theme and custom_theme.strip():
        custom_instruction = f"\nNOTA DEL USUARIO: Al menos uno de los guiones debe inspirarse en este tema específico pedido por el usuario: '{custom_theme.strip()}'.\n"

    prompt = f"""
    Eres un escritor y narrador poético especializado en 'Nostalgia Gamer', filosofía de vida y relatos reflexivos para TikTok nocturno.
    Tu audiencia son jóvenes y adultos de 16 a 35 años que crecieron jugando videojuegos y ahora sienten el peso de la madurez, la soledad y la nostalgia.

    Tu misión es escribir exactamente {count} guiones COMPLETOS, PROFUNDOS y EMOCIONANTES para videos de TikTok de 65 a 70 segundos de duración.

    {custom_instruction}

    EJEMPLOS DEL TONO Y PROFUNDIDAD QUE BUSCAMOS:
    {inspo_str}

    ESTRICTA REGLA DE NO REPETICIÓN:
    Los siguientes temas y frases ya fueron publicados en videos anteriores. ESTÁ TOTALMENTE PROHIBIDO REPETIRLOS:
    {used_str}

    ESTRUCTURA OBLIGATORIA DE CADA GUION (140 a 160 palabras cada uno, exactamente para 65-70s hablados):
    1. GANCHO INICIAL (0 a 3s): Una frase poderosa, directa, que rompa el corazón o detenga el scroll instantáneamente.
    2. LA METÁFORA DEL JUEGO (4 a 20s): Detalle exacto de la experiencia de juego (la música, la noche, la fogata, talar un árbol, una espada, una pantalla de carga).
    3. EL GIRO A LA REALIDAD (21 a 50s): Cómo esa mecánica del juego se convirtió en una metáfora dolorosa o hermosa de nuestra vida adulta cotidiana.
    4. LA REFLEXIÓN FINAL Y ESPERANZA (51 a 64s): Una enseñanza madura, reconfortante, que invita a sanar o seguir adelante.
    5. EL CIERRE / LOOP (65 a 70s): La última frase debe conectar de manera poética o casi en loop infinito con el inicio.

    REGLAS DE FORMATO:
    - Idioma: Español neutro, cálido, íntimo y cinematográfico.
    - Cada guion debe tener entre 140 y 160 palabras de locución continua.
    - CADA UNO de los {count} guiones debe tratar de un videojuego o metáfora DIFERENTE entre sí.

    Devuelve ÚNICAMENTE un array JSON con esta estructura exacta (sin markdown extra ni texto previo):
    [
      {{
        "title": "Título corto y poético",
        "game_reference": "Nombre del Juego (ej. Minecraft, Zelda, Dark Souls)",
        "hook": "La primera frase que detiene el scroll",
        "script": "Texto completo del guion de 145-160 palabras listo para ser locutado...",
        "word_count": 150,
        "estimated_duration_seconds": 68
      }}
    ]
    """

    try:
        response = gemini_client.models.generate_content(
            model="gemini-2.5-flash",
            contents=prompt,
        )
        text_resp = response.text.strip()
        if text_resp.startswith("```json"):
            text_resp = text_resp[7:]
        if text_resp.startswith("```"):
            text_resp = text_resp[3:]
        if text_resp.endswith("```"):
            text_resp = text_resp[:-3]
        text_resp = text_resp.strip()

        data = json.loads(text_resp)
        if isinstance(data, dict) and "scripts" in data:
            data = data["scripts"]

        # Validar y calcular palabras reales
        results = []
        for item in data[:count]:
            script = item.get("script", "").strip()
            words = len(script.split())
            est_secs = round(words / 2.2, 1)  # ritmo reflexivo y pausado
            results.append({
                "title": item.get("title", "Reflexión Nocturna"),
                "game_reference": item.get("game_reference", "Videojuegos Retro"),
                "hook": item.get("hook", script[:80] + "..."),
                "script": script,
                "word_count": words,
                "estimated_duration_seconds": est_secs
            })
        return results
    except Exception as e:
        print(f"Error generando guiones con Gemini: {e}")
        raise e
