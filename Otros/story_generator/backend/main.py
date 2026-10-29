import os
import sys
import io
import time
import re
import datetime
import asyncio
import random

# Configurar stdout/stderr en UTF-8 para Windows PowerShell/CMD
if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
if hasattr(sys.stderr, 'reconfigure'):
    sys.stderr.reconfigure(encoding='utf-8', errors='replace')

import zipfile
import subprocess
import shutil
import tempfile
import imageio_ffmpeg
from typing import Optional, List, Dict, Any
from fastapi import FastAPI, HTTPException, Query, UploadFile, File
from fastapi.middleware.cors import CORSMiddleware
from fastapi.staticfiles import StaticFiles
from fastapi.responses import FileResponse
from pydantic import BaseModel
from dotenv import load_dotenv

# Cargar variables de entorno
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
ENV_PATH = os.path.abspath(os.path.join(BASE_DIR, "../.env"))
load_dotenv(dotenv_path=ENV_PATH, override=True)

# Autodetectar credenciales si el path en .env no existe o se movió
cred_path = os.getenv("GOOGLE_APPLICATION_CREDENTIALS", "")
if not cred_path or not os.path.exists(cred_path):
    candidate_dirs = [
        os.path.abspath(os.path.join(BASE_DIR, "..")), # story_generator
        os.path.abspath(os.path.join(BASE_DIR, "../../skins_generator"))
    ]
    for c_dir in candidate_dirs:
        if os.path.exists(c_dir):
            for f in os.listdir(c_dir):
                if f.endswith(".json") and "glassy" in f.lower():
                    found_cred = os.path.join(c_dir, f)
                    os.environ["GOOGLE_APPLICATION_CREDENTIALS"] = found_cred
                    print(f"🔑 Credenciales detectadas automáticamente: {found_cred}")
                    break
            if os.getenv("GOOGLE_APPLICATION_CREDENTIALS") and os.path.exists(os.getenv("GOOGLE_APPLICATION_CREDENTIALS")):
                break

# Inicializar FastAPI
app = FastAPI(
    title="Glassy Reddit Story & Voice Generator API",
    description="Generador de historias de Reddit con voces hiperrealistas (Hombre/Mujer) optimizadas para TikTok/Shorts y Glassy gameplay.",
    version="1.0.0"
)

# CORS
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

# Directorio para archivos de audio generados
OUTPUT_AUDIO_DIR = os.path.abspath(os.path.join(BASE_DIR, "output_audio"))
os.makedirs(OUTPUT_AUDIO_DIR, exist_ok=True)
PACKS_DIR = os.path.abspath(os.path.join(OUTPUT_AUDIO_DIR, "packs"))
os.makedirs(PACKS_DIR, exist_ok=True)
app.mount("/audio", StaticFiles(directory=OUTPUT_AUDIO_DIR), name="audio")

# Directorios de Video y Destino para TikTok
UPLOADS_DIR = os.path.abspath(os.path.join(BASE_DIR, "uploads"))
os.makedirs(UPLOADS_DIR, exist_ok=True)
app.mount("/uploads", StaticFiles(directory=UPLOADS_DIR), name="uploads")

TIKTOK_VIDEOS_DIR = r"C:\Users\PC\Videos\Videos for tiktok"
os.makedirs(TIKTOK_VIDEOS_DIR, exist_ok=True)
app.mount("/videos", StaticFiles(directory=TIKTOK_VIDEOS_DIR), name="videos")

FFMPEG_EXE = imageio_ffmpeg.get_ffmpeg_exe()
print(f"🎬 FFmpeg listo en: {FFMPEG_EXE}")

# Cliente Gemini / Vertex AI
PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT", "glassy-508419")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")

gemini_client = None
try:
    from google import genai
    gemini_client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)
    print("✅ Cliente Gemini Vertex AI conectado.")
except Exception as e:
    print(f"⚠️ Aviso al iniciar cliente Gemini: {e}")

# Cliente Google Cloud TTS
gcp_tts_client = None
try:
    from google.cloud import texttospeech
    gcp_tts_client = texttospeech.TextToSpeechClient()
    print("✅ Cliente Google Cloud Text-to-Speech instanciado.")
except Exception as e:
    print(f"⚠️ Aviso al instanciar GCP TTS: {e}")

# Catálogo Curado de Voces (Hombre y Mujer)
VOICES_CATALOG = [
    # --- VOCES MASCULINAS (HOMBRE) ---
    {
        "id": "gcp_es_us_neural2_b",
        "gender": "male",
        "name": "Mateo",
        "display_name": "Mateo (Latinoamérica - Voz Profunda y Narrativa)",
        "gcp_voice_name": "es-US-Neural2-B",
        "language_code": "es-US",
        "provider": "google_cloud",
        "accent": "Latino Neutro",
        "description": "Tono grave, envolvente y sobrio. Ideal para historias de misterio, suspenso y confesiones.",
        "edge_fallback": "es-MX-JorgeNeural",
        "recommended": True
    },
    {
        "id": "gcp_es_es_neural2_b",
        "gender": "male",
        "name": "Diego",
        "display_name": "Diego (España - Dinámico y Directo)",
        "gcp_voice_name": "es-ES-Neural2-B",
        "language_code": "es-ES",
        "provider": "google_cloud",
        "accent": "España",
        "description": "Voz masculina clara, con ritmo rápido y enérgica para relatos directos.",
        "edge_fallback": "es-ES-AlvaroNeural",
        "recommended": False
    },
    {
        "id": "gcp_es_us_journey_d",
        "gender": "male",
        "name": "Carlos (Journey)",
        "display_name": "Carlos (Journey DeepMind - Hiperrealista)",
        "gcp_voice_name": "es-US-Journey-D",
        "language_code": "es-US",
        "provider": "google_cloud",
        "accent": "Latino Conversacional",
        "description": "Modelo Journey de Google DeepMind. Modulación humana ultra natural para podcasts y storytelling.",
        "edge_fallback": "es-MX-JorgeNeural",
        "recommended": True
    },
    # --- VOCES FEMENINAS (MUJER) ---
    {
        "id": "gcp_es_us_neural2_a",
        "gender": "female",
        "name": "Valentina",
        "display_name": "Valentina (Latinoamérica - Expresiva y Dulce)",
        "gcp_voice_name": "es-US-Neural2-A",
        "language_code": "es-US",
        "provider": "google_cloud",
        "accent": "Latino Neutro",
        "description": "Tono cálido, empático y expresivo. Perfecta para historias de drama, relaciones y Reddit AITA.",
        "edge_fallback": "es-MX-DaliaNeural",
        "recommended": True
    },
    {
        "id": "gcp_es_es_neural2_a",
        "gender": "female",
        "name": "Elena",
        "display_name": "Elena (España - Clara y Articulada)",
        "gcp_voice_name": "es-ES-Neural2-A",
        "language_code": "es-ES",
        "provider": "google_cloud",
        "accent": "España",
        "description": "Voz femenina neutra, limpia y con dicción perfecta para narraciones continuas.",
        "edge_fallback": "es-ES-ElviraNeural",
        "recommended": False
    },
    {
        "id": "gcp_es_us_journey_f",
        "gender": "female",
        "name": "Sofía (Journey)",
        "display_name": "Sofía (Journey DeepMind - Hiperrealista)",
        "gcp_voice_name": "es-US-Journey-F",
        "language_code": "es-US",
        "provider": "google_cloud",
        "accent": "Latino Conversacional",
        "description": "Modelo Journey de DeepMind. Inflexiones emocionales sutiles y pausas conversacionales auténticas.",
        "edge_fallback": "es-MX-DaliaNeural",
        "recommended": True
    }
]

# Catálogo Multilingüe Oficial (7 Idiomas Globales)
GLOBAL_LANGUAGES = {
    "es": {
        "code": "es-US",
        "name": "Español",
        "native_name": "Español",
        "flag": "🇪🇸",
        "male": {
            "name": "Mateo",
            "gcp": "es-US-Neural2-B",
            "edge": "es-MX-JorgeNeural"
        },
        "female": {
            "name": "Valentina",
            "gcp": "es-US-Neural2-A",
            "edge": "es-MX-DaliaNeural"
        }
    },
    "en": {
        "code": "en-US",
        "name": "Inglés",
        "native_name": "English",
        "flag": "🇺🇸",
        "male": {
            "name": "Christopher",
            "gcp": "en-US-Neural2-D",
            "edge": "en-US-ChristopherNeural"
        },
        "female": {
            "name": "Jenny",
            "gcp": "en-US-Neural2-F",
            "edge": "en-US-JennyNeural"
        }
    },
    "fr": {
        "code": "fr-FR",
        "name": "Francés",
        "native_name": "Français",
        "flag": "🇫🇷",
        "male": {
            "name": "Henri",
            "gcp": "fr-FR-Neural2-G",
            "edge": "fr-FR-HenriNeural"
        },
        "female": {
            "name": "Denise",
            "gcp": "fr-FR-Neural2-E",
            "edge": "fr-FR-DeniseNeural"
        }
    },
    "it": {
        "code": "it-IT",
        "name": "Italiano",
        "native_name": "Italiano",
        "flag": "🇮🇹",
        "male": {
            "name": "Diego",
            "gcp": "it-IT-Neural2-F",
            "edge": "it-IT-DiegoNeural"
        },
        "female": {
            "name": "Elsa",
            "gcp": "it-IT-Neural2-A",
            "edge": "it-IT-ElsaNeural"
        }
    },
    "de": {
        "code": "de-DE",
        "name": "Alemán",
        "native_name": "Deutsch",
        "flag": "🇩🇪",
        "male": {
            "name": "Conrad",
            "gcp": "de-DE-Neural2-G",
            "edge": "de-DE-ConradNeural"
        },
        "female": {
            "name": "Katja",
            "gcp": "de-DE-Neural2-F",
            "edge": "de-DE-KatjaNeural"
        }
    },
    "pt": {
        "code": "pt-BR",
        "name": "Portugués",
        "native_name": "Português",
        "flag": "🇧🇷",
        "male": {
            "name": "Antonio",
            "gcp": "pt-BR-Neural2-B",
            "edge": "pt-BR-AntonioNeural"
        },
        "female": {
            "name": "Francisca",
            "gcp": "pt-BR-Neural2-A",
            "edge": "pt-BR-FranciscaNeural"
        }
    },
    "ru": {
        "code": "ru-RU",
        "name": "Ruso",
        "native_name": "Русский",
        "flag": "🇷🇺",
        "male": {
            "name": "Dmitry",
            "gcp": "ru-RU-Standard-B",
            "edge": "ru-RU-DmitryNeural"
        },
        "female": {
            "name": "Svetlana",
            "gcp": "ru-RU-Standard-A",
            "edge": "ru-RU-SvetlanaNeural"
        }
    }
}

GLASSY_INTROS_POOL = {
    "es": [
        "Disfruta esta historia mientras ves cómo estas gemas se fusionan en Glassy.",
        "Quédate hasta el final mientras ves este gameplay de Glassy de fondo.",
        "Relájate viendo cómo caen las gemas en Glassy mientras te cuento esto.",
        "Mira cómo se combinan estos diamantes en Glassy mientras escuchas este secreto.",
        "Acomódate y mira cómo caen las piezas en Glassy mientras descubres esta historia."
    ],
    "en": [
        "Enjoy this story while you watch these gems merge in Glassy.",
        "Stick around till the end while watching this Glassy gameplay in the background.",
        "Relax watching the gems drop in Glassy while I tell you this.",
        "Watch these diamonds combine in Glassy as you discover this secret.",
        "Sit back and watch the pieces fall in Glassy as you hear this story."
    ],
    "fr": [
        "Profite de cette histoire pendant que tu regardes ces gemmes fusionner dans Glassy.",
        "Reste jusqu'à la fin pendant que tu regardes ce gameplay de Glassy en arrière-plan.",
        "Détends-toi en regardant les gemmes tomber dans Glassy pendant que je te raconte ça."
    ],
    "it": [
        "Goditi questa storia mentre guardi queste gemme fondersi in Glassy.",
        "Resta fino alla fine mentre guardi questo gameplay di Glassy sullo sfondo.",
        "Rilassati guardando cadere le gemme in Glassy mentre ti racconto questo segreto."
    ],
    "de": [
        "Genieße diese Geschichte, während du siehst, wie die Edelsteine in Glassy verschmelzen.",
        "Bleib bis zum Ende dran, während du dieses Glassy-Gameplay im Hintergrund siehst.",
        "Entspann dich beim Zuschauen, wie die Juwelen in Glassy fallen, während ich dir das erzähle."
    ],
    "pt": [
        "Aproveite esta história enquanto vê essas joias se fundindo no Glassy.",
        "Fique até o final enquanto assiste a este gameplay do Glassy ao fundo.",
        "Relaxe vendo as gemas caírem no Glassy enquanto te conto este segredo."
    ],
    "ru": [
        "Наслаждайтесь историей, пока эти кристаллы соединяются в Glassy.",
        "Досмотрите до конца, наблюдая за фоновым геймплеем Glassy.",
        "Расслабьтесь под падение самоцветов в Glassy, пока слушаете этот секрет."
    ]
}

GLASSY_OUTROS_POOL = {
    "es": [
        "Glassy ya disponible en Play Store, link en mi perfil.",
        "Descarga Glassy gratis en Google Play, enlace en mi perfil.",
        "Prueba Glassy gratis hoy en el link de la bio.",
        "Juégalo gratis en Android, link en mi perfil.",
        "Glassy ya disponible en tu tienda de aplicaciones, enlace en perfil."
    ],
    "en": [
        "Glassy is now available on Google Play, link in my bio.",
        "Download Glassy for free on Play Store, link in profile.",
        "Play Glassy for free today, link in bio.",
        "Get Glassy on Android now, link in profile."
    ],
    "fr": [
        "Glassy est disponible sur le Play Store, lien dans ma bio.",
        "Télécharge Glassy gratuitement sur Android, lien en bio.",
        "Joue à Glassy gratuitement dès aujourd'hui, lien dans le profil."
    ],
    "it": [
        "Glassy è ora disponibile su Play Store, link nel mio profilo.",
        "Scarica Glassy gratis su Android, link in bio.",
        "Prova Glassy gratis oggi stesso, link nel profilo."
    ],
    "de": [
        "Glassy ist jetzt im Play Store verfügbar, Link in meiner Bio.",
        "Lade Glassy kostenlos für Android herunter, Link im Profil.",
        "Probier Glassy heute kostenlos aus, Link in der Bio."
    ],
    "pt": [
        "Glassy já disponível na Play Store, link no meu perfil.",
        "Baixe o Glassy grátis na Google Play, link na bio.",
        "Jogue Glassy de graça hoje, link no perfil."
    ],
    "ru": [
        "Glassy уже доступен в Google Play, ссылка в профиле.",
        "Скачивайте Glassy бесплатно на Android, ссылка в описании.",
        "Сыграйте в Glassy бесплатно уже сегодня, ссылка в профиле."
    ]
}

def get_random_glassy_intro(lang_key: str) -> str:
    pool = GLASSY_INTROS_POOL.get(lang_key, GLASSY_INTROS_POOL["es"])
    return random.choice(pool)

def get_random_glassy_outro(lang_key: str) -> str:
    pool = GLASSY_OUTROS_POOL.get(lang_key, GLASSY_OUTROS_POOL["es"])
    return random.choice(pool)

FINANCE_PRESETS = [
    {
        "category": "Trucos del Sistema Financiero",
        "topics": [
            "El secreto legal de la deuda que usan los multimillonarios para no pagar impuestos (Estrategia Buy, Borrow, Die)",
            "Por qué tener tus ahorros quietos en el banco te hace 8% más pobre cada año (La trampa silenciosa de la inflación)",
            "El truco del 15/3 para hackear tu puntaje crediticio y conseguir préstamos al 0% de interés",
            "Cómo los bancos crean dinero de la nada usando la reserva fraccionaria y cómo aprovecharlo a tu favor"
        ]
    },
    {
        "category": "Sabiduría de Libros Legendarios",
        "topics": [
            "Hábitos Atómicos (James Clear): La regla de los 2 minutos que reprograma tu cerebro contra la pereza",
            "La Psicología del Dinero (Morgan Housel): Por qué gastar dinero para demostrar estatus te mantiene quebrado",
            "El Hombre más Rico de Babilonia: La regla sagrada de pagarte el 10% a ti mismo antes de pagar cuentas",
            "Las 48 Leyes del Poder (Robert Greene): Ley 1 - Por qué nunca debes hacerle sombra a tu superior",
            "Padre Rico Padre Pobre (Robert Kiyosaki): La diferencia real entre un activo que te paga y un pasivo que te drena"
        ]
    },
    {
        "category": "Psicología del Dinero & Sesgos Mentales",
        "topics": [
            "La trampa de la gratificación instantánea: Por qué tu cerebro prefiere un café de $5 a un millón en 20 años",
            "La paradoja del costo hundido: Por qué seguimos perdiendo dinero y tiempo en proyectos condenados",
            "El efecto Diderot: Cómo comprar un artículo nuevo te obliga a gastar miles en cosas que no necesitas"
        ]
    },
    {
        "category": "Negocios, Startups & Hacks Virales",
        "topics": [
            "La estrategia de Red Bull en los 90: Cómo llenar basureros con latas vacías creó un imperio multimillonario",
            "Cómo Airbnb sobrevivió a la quiebra en 2008 vendiendo cajas de cereal coleccionables de Obama",
            "El truco de Spotify para que nunca canceles tu suscripción (La psicología del algoritmo Wrapped)"
        ]
    }
]

# Modelos Pydantic para Historias Globales de 60s
class GlobalFinanceStoryRequest(BaseModel):
    topic: Optional[str] = None
    category: Optional[str] = "Sabiduría de Libros Legendarios"
    include_glassy_hook: bool = True

class GlobalScriptItem(BaseModel):
    title: str
    hook: str
    body: str

class GlobalPackSynthesizeRequest(BaseModel):
    topic: Optional[str] = "Historia Global de Finanzas"
    scripts: Dict[str, GlobalScriptItem]
    gender: str = "male"       # "male" | "female"
    speaking_rate: float = 1.05
    pitch: float = 0.0
    add_dramatic_pauses: bool = True

class GenerateVideosRequest(BaseModel):
    pack_id: str
    video_filename: str
    start_offset_seconds: float = 0.0
    subtitle_color: str = "yellow"

# Modelos Pydantic Anteriores
class StoryOptimizationRequest(BaseModel):
    raw_story: str
    target_seconds: int = 180  # Default 3 minutos (balance ideal)
    style: str = "suspense"   # suspense, drama, confesion, viral
    include_glassy_hook: bool = True

class StoryGenerationRequest(BaseModel):
    topic: Optional[str] = None
    category: str = "confesion" # confesion, venganza, misterio, dilema
    target_seconds: int = 180  # Default 3 minutos
    include_glassy_hook: bool = True

class SynthesisRequest(BaseModel):
    text: str
    gender: str = "male"       # "male" | "female"
    voice_id: Optional[str] = None
    speaking_rate: float = 1.05 # 0.8 - 1.4
    pitch: float = 0.0          # -4.0 - 4.0
    add_dramatic_pauses: bool = True

# Helper: Construir SSML con pausas naturales
def text_to_ssml(text: str, add_pauses: bool = True) -> str:
    cleaned = text.strip()
    # Si ya contiene tags de SSML, usarlo directamente
    if "<speak>" in cleaned:
        return cleaned

    # Escapar caracteres XML requeridos
    cleaned = cleaned.replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', '&quot;')
    
    if not add_pauses:
        return f"<speak>{cleaned}</speak>"
    
    # Insertar pausas en puntos y saltos de línea para dramatismo de narración
    paragraphs = [p.strip() for p in cleaned.split("\n") if p.strip()]
    processed = []
    
    for p in paragraphs:
        # Pausa ligera entre oraciones
        p_with_breaks = re.sub(r'([.?!])\s+', r'\1 <break time="450ms"/> ', p)
        # Puntos suspensivos con pausa más pronunciada
        p_with_breaks = re.sub(r'(\.\.\.)\s*', r'<break time="650ms"/> ', p_with_breaks)
        processed.append(p_with_breaks)
        
    body = ' <break time="700ms"/> '.join(processed)
    return f"<speak>{body}</speak>"

# Helper: Sintetizar con Edge-TTS (Respaldo instantáneo de alta fidelidad)
async def synthesize_edge_tts(text_plain: str, voice_name: str, rate: float, pitch: float, output_path: str):
    import edge_tts
    # Formatear rate y pitch para edge_tts
    rate_percent = int((rate - 1.0) * 100)
    rate_str = f"+{rate_percent}%" if rate_percent >= 0 else f"{rate_percent}%"
    pitch_hz = int(pitch * 5)
    pitch_str = f"+{pitch_hz}Hz" if pitch_hz >= 0 else f"{pitch_hz}Hz"

    communicate = edge_tts.Communicate(
        text=text_plain,
        voice=voice_name,
        rate=rate_str,
        pitch=pitch_str
    )
    await communicate.save(output_path)

# Helper: Síntesis Multilingüe Inteligente (GCP TTS con Edge-TTS Fallback)
async def synthesize_voice_for_lang(
    text: str,
    lang_key: str,
    gender: str = "male",
    speaking_rate: float = 1.05,
    pitch: float = 0.0,
    add_pauses: bool = True,
    output_path: str = ""
) -> dict:
    lang_info = GLOBAL_LANGUAGES.get(lang_key, GLOBAL_LANGUAGES["es"])
    target_gender = gender.lower() if gender in ["male", "female"] else "male"
    voice_conf = lang_info["male"] if target_gender == "male" else lang_info["female"]
    
    provider_used = "google_cloud"
    
    try:
        if not gcp_tts_client:
            raise Exception("GCP TTS client no disponible")
            
        from google.cloud import texttospeech
        ssml_content = text_to_ssml(text, add_pauses=add_pauses)
        synthesis_input = texttospeech.SynthesisInput(ssml=ssml_content)
        voice_params = texttospeech.VoiceSelectionParams(
            language_code=lang_info["code"],
            name=voice_conf["gcp"]
        )
        audio_config = texttospeech.AudioConfig(
            audio_encoding=texttospeech.AudioEncoding.MP3,
            speaking_rate=speaking_rate,
            pitch=pitch
        )
        response = gcp_tts_client.synthesize_speech(
            input=synthesis_input,
            voice=voice_params,
            audio_config=audio_config
        )
        with open(output_path, "wb") as out:
            out.write(response.audio_content)
    except Exception as gcp_err:
        print(f"⚠️ Aviso GCP TTS ({lang_key}): {gcp_err}, usando Edge-TTS fallback")
        provider_used = "edge_neural_fallback"
        clean_text = re.sub(r'<[^>]+>', ' ', text).strip()
        await synthesize_edge_tts(
            text_plain=clean_text,
            voice_name=voice_conf["edge"],
            rate=speaking_rate,
            pitch=pitch,
            output_path=output_path
        )
        
    file_size_kb = round(os.path.getsize(output_path) / 1024, 1)
    word_count = len(text.split())
    estimated_seconds = round((word_count / (135 * speaking_rate)) * 60)
    
    return {
        "status": "success",
        "provider": provider_used,
        "lang_key": lang_key,
        "lang_name": lang_info["name"],
        "flag": lang_info["flag"],
        "gender": target_gender,
        "voice_name": voice_conf["name"],
        "voice_code": voice_conf["gcp"] if provider_used == "google_cloud" else voice_conf["edge"],
        "file_size_kb": file_size_kb,
        "estimated_duration_seconds": estimated_seconds
    }

# ==================== HELPERS: VIDEO PIPELINE & TIKTOK SUBTITLES ====================

def get_media_duration(file_path: str) -> float:
    """Calcula con precisión la duración en segundos de un archivo multimedia usando FFmpeg."""
    try:
        cmd = [FFMPEG_EXE, "-i", file_path]
        p = subprocess.run(cmd, capture_output=True, text=True, errors="ignore")
        m = re.search(r"Duration:\s*(\d+):(\d+):(\d+\.\d+)", p.stderr)
        if m:
            hours, mins, secs = m.groups()
            return int(hours) * 3600 + int(mins) * 60 + float(secs)
    except Exception as e:
        print(f"Error obteniendo duración de {file_path}: {e}")
    return 60.0

def generate_tiktok_ass_subtitles(text: str, total_duration: float, highlight_color: str = "yellow") -> str:
    """Genera archivo de subtítulos .ass en formato viral de TikTok (pop-in de 2-3 palabras con borde negro y resalte)."""
    color_map = {
        "yellow": "&H0000FFFF&",
        "cyan": "&H00FFFF00&",
        "green": "&H0034D399&",
        "pink": "&H00F472B6&",
        "white": "&H00FFFFFF&"
    }
    hl_hex = color_map.get(highlight_color.lower(), "&H0000FFFF&")

    clean_text = re.sub(r'<[^>]+>', ' ', text).strip()
    words = clean_text.split()
    if not words:
        return ""

    chunks = []
    i = 0
    while i < len(words):
        remaining = len(words) - i
        if remaining == 4:
            chunk_size = 2
        elif remaining <= 3:
            chunk_size = remaining
        else:
            chunk_size = 3
        chunk = words[i:i+chunk_size]
        chunks.append(" ".join(chunk))
        i += chunk_size

    total_chars = sum(len(c) for c in chunks)
    if total_chars == 0:
        total_chars = 1

    effective_duration = max(total_duration - 0.4, 1.0)
    start_offset = 0.2

    ass_header = """[Script Info]
ScriptType: v4.00+
PlayResX: 1080
PlayResY: 1920

[V4+ Styles]
Format: Name, Fontname, Fontsize, PrimaryColour, SecondaryColour, OutlineColour, BackColour, Bold, Italic, Underline, StrikeOut, ScaleX, ScaleY, Spacing, Angle, BorderStyle, Outline, Shadow, Alignment, MarginL, MarginR, MarginV, Encoding
Style: TikTok,Arial,65,&H00FFFFFF,&H0000FFFF,&H00000000,&H80000000,1,0,0,0,100,100,0,0,1,5,2,2,60,60,420,1

[Events]
Format: Layer, Start, End, Style, Name, MarginL, MarginR, MarginV, Effect, Text
"""
    dialogues = []
    current_time = start_offset

    def format_ass_time(secs: float) -> str:
        h = int(secs // 3600)
        m = int((secs % 3600) // 60)
        s = secs % 60
        return f"{h}:{m:02d}:{s:05.2f}"

    for chunk in chunks:
        weight = len(chunk) / total_chars
        duration = weight * effective_duration
        end_time = current_time + duration

        words_in_chunk = chunk.upper().split()
        if len(words_in_chunk) == 1:
            styled_line = f"{{\\c{hl_hex}}}{words_in_chunk[0]}{{\\c&H00FFFFFF&}}"
        else:
            styled_line = f"{{\\c{hl_hex}}}{words_in_chunk[0]}{{\\c&H00FFFFFF&}} " + " ".join(words_in_chunk[1:])

        dialogues.append(
            f"Dialogue: 0,{format_ass_time(current_time)},{format_ass_time(end_time)},TikTok,,0,0,0,,{styled_line}"
        )
        current_time = end_time

    return ass_header + "\n".join(dialogues) + "\n"

def render_tiktok_video(
    background_video_path: str,
    audio_path: str,
    output_video_path: str,
    subtitle_text: str,
    start_offset: float = 0.0,
    subtitle_color: str = "yellow"
) -> dict:
    """Recorta el video a la duración exacta del audio, escala a 1080x1920 vertical y quema los subtítulos dinámicos."""
    audio_duration = get_media_duration(audio_path)
    bg_duration = get_media_duration(background_video_path)

    if start_offset + audio_duration > bg_duration:
        start_offset = max(0.0, bg_duration - audio_duration - 0.5)

    temp_dir = tempfile.mkdtemp()
    ass_file = os.path.join(temp_dir, "subs.ass")
    ass_content = generate_tiktok_ass_subtitles(subtitle_text, audio_duration, subtitle_color)
    with open(ass_file, "w", encoding="utf-8") as f:
        f.write(ass_content)

    vf_filter = "scale=1080:1920:force_original_aspect_ratio=increase,crop=1080:1920,ass=subs.ass"

    cmd = [
        FFMPEG_EXE, "-y",
        "-ss", str(round(start_offset, 2)),
        "-t", str(round(audio_duration, 2)),
        "-i", background_video_path,
        "-i", audio_path,
        "-map", "0:v:0",
        "-map", "1:a:0",
        "-vf", vf_filter,
        "-c:v", "libx264",
        "-preset", "fast",
        "-crf", "22",
        "-c:a", "aac",
        "-b:a", "192k",
        "-ar", "44100",
        "-shortest",
        output_video_path
    ]

    res = subprocess.run(cmd, cwd=temp_dir, capture_output=True, text=True, errors="ignore")

    try:
        shutil.rmtree(temp_dir, ignore_errors=True)
    except:
        pass

    if res.returncode != 0:
        raise Exception(f"Error renderizando video con FFmpeg: {res.stderr[-300:]}")

    file_size_mb = round(os.path.getsize(output_video_path) / (1024 * 1024), 2)
    return {
        "status": "success",
        "duration": round(audio_duration, 1),
        "size_mb": file_size_mb
    }

# ==================== ENDPOINTS ====================

@app.get("/api/status")
def get_system_status():
    """Verifica si la API de Google Cloud Text-to-Speech está habilitada y reporta el estado."""
    gcp_tts_ready = False
    gcp_error_msg = None
    activation_url = f"https://console.developers.google.com/apis/api/texttospeech.googleapis.com/overview?project={PROJECT_ID}"
    
    if gcp_tts_client:
        try:
            # Prueba ligera listando voces
            gcp_tts_client.list_voices(language_code="es")
            gcp_tts_ready = True
        except Exception as e:
            err_str = str(e)
            if "PERMISSION_DENIED" in err_str or "SERVICE_DISABLED" in err_str or "has not been used" in err_str:
                gcp_error_msg = "La API de Cloud Text-to-Speech necesita ser habilitada en la consola de Google Cloud."
            else:
                gcp_error_msg = err_str

    return {
        "status": "online",
        "google_cloud_project": PROJECT_ID,
        "gcp_tts_enabled": gcp_tts_ready,
        "gcp_error": gcp_error_msg,
        "activation_url": activation_url,
        "gemini_connected": gemini_client is not None,
        "timestamp": datetime.datetime.now().isoformat()
    }

@app.get("/api/voices")
def get_voices(gender: Optional[str] = None):
    """Devuelve las voces disponibles filtradas por Hombre/Mujer."""
    if gender:
        filtered = [v for v in VOICES_CATALOG if v["gender"] == gender.lower()]
        return {"voices": filtered}
    return {"voices": VOICES_CATALOG}

@app.post("/api/optimize-story")
def optimize_story(req: StoryOptimizationRequest):
    """Toma una historia cruda de Reddit y la adapta para un TikTok/Reels de Glassy."""
    if not gemini_client:
        raise HTTPException(status_code=500, detail="Gemini no está configurado.")

    words_target = int(req.target_seconds * 2.3) # Ritmo promedio hablado: ~140 palabras/min

    glassy_prompt_hook = ""
    if req.include_glassy_hook:
        glassy_prompt_hook = (
            "Al final de la historia, añade una llamada a la acción breve y orgánica que conecte con el gameplay "
            "de Glassy (ejemplo: 'Comenta qué habrías hecho tú mientras ves cómo caen los diamantes' o "
            "'¿Tú qué opinas? Déjame tu teoría en comentarios y juega Glassy en el link del perfil')."
        )

    prompt = f"""
    Eres un guionista experto en viralidad para TikTok, YouTube Shorts e Instagram Reels.
    Tu misión es transformar esta historia en un guion narrativo de alto impacto, diseñado para ser narrado
    mientras de fondo se muestra un gameplay relajante y satisfactorio del juego móvil 'Glassy'.

    HISTORIA ORIGINAL:
    \"\"\"{req.raw_story}\"\"\"

    REGLAS DE ORO:
    1. GANCHO INICIAL BRUTAL (Primeros 3 segundos): La primera frase debe atrapar al espectador de inmediato
       (ej: 'Parte 1: Mi novio juraba que trabajaba hasta tarde, hasta que vi una notificación en su reloj...', 
       'No me van a creer lo que hizo mi suegra en mi propia boda...', etc.).
    2. ESTILO: Narración en primera persona, coloquial, con suspenso creciente y ritmo ágil.
    3. LONGITUD: Debe tener aproximadamente {words_target} palabras para una duración narrada de unos {req.target_seconds} segundos (unos {req.target_seconds // 60} minutos si son 180s). Desarrolla adecuadamente el contexto, los detalles emocionales, el conflicto y el desenlace para mantener la intriga durante todo el video sin sentirse apresurado ni con relleno superfluo.
    4. ESTRUCTURA: Párrafos cortos y separados para permitir pausas dramáticas. Elimina detalles irrelevantes o relleno aburrido.
    5. {glassy_prompt_hook}

    Devuelve la respuesta en formato JSON con la siguiente estructura:
    {{
      "title": "Título corto y llamativo",
      "hook": "La primera frase de impacto",
      "body": "El guion completo listo para ser narrado en voz alta",
      "estimated_duration_seconds": {req.target_seconds}
    }}
    Responde ÚNICAMENTE con el objeto JSON válido.
    """

    try:
        response = gemini_client.models.generate_content(
            model="gemini-2.5-flash",
            contents=prompt,
        )
        text_resp = response.text.strip()
        # Limpiar bloques markdown de código si vienen
        if text_resp.startswith("```json"):
            text_resp = text_resp[7:]
        if text_resp.startswith("```"):
            text_resp = text_resp[3:]
        if text_resp.endswith("```"):
            text_resp = text_resp[:-3]
        text_resp = text_resp.strip()

        import json
        data = json.loads(text_resp)
        data["word_count"] = len(data.get("body", "").split())
        return data
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Error optimizando con Gemini: {str(e)}")

@app.post("/api/generate-story")
def generate_story_from_scratch(req: StoryGenerationRequest):
    """Genera una historia estilo Reddit 100% original con gancho para TikTok."""
    if not gemini_client:
        raise HTTPException(status_code=500, detail="Gemini no está configurado.")

    words_target = int(req.target_seconds * 2.3)
    user_topic = req.topic if req.topic else f"una historia viral de {req.category} muy intrigante"

    glassy_prompt_hook = ""
    if req.include_glassy_hook:
        glassy_prompt_hook = "Incluye al final una llamada a comentar mientras miran las fusiones de gemas de Glassy."

    prompt = f"""
    Eres un creador de contenido viral de Reddit y TikTok.
    Escribe una historia viral basada en este tema: '{user_topic}'.
    Categoría: {req.category}.
    Longitud objetivo: Aproximadamente {words_target} palabras ({req.target_seconds} segundos hablados).

    Requisitos:
    - Gancho en la primera frase que impida hacer scroll.
    - Giro de trama o dilema moral que haga que la gente quiera comentar su opinión.
    - {glassy_prompt_hook}

    Devuelve ÚNICAMENTE un JSON con:
    {{
      "title": "Título llamativo",
      "hook": "Frase de enganche inicial",
      "body": "Guion completo para locución"
    }}
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

        import json
        data = json.loads(text_resp)
        data["word_count"] = len(data.get("body", "").split())
        data["estimated_duration_seconds"] = req.target_seconds
        return data
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Error generando con Gemini: {str(e)}")

@app.post("/api/synthesize")
async def synthesize_speech_api(req: SynthesisRequest):
    """Sintetiza la historia a audio MP3 utilizando la voz de Hombre o Mujer seleccionada."""
    if not req.text or not req.text.strip():
        raise HTTPException(status_code=400, detail="El texto no puede estar vacío.")

    # 1. Seleccionar la voz adecuada
    target_gender = req.gender.lower() if req.gender in ["male", "female"] else "male"
    selected_voice = None

    if req.voice_id:
        for v in VOICES_CATALOG:
            if v["id"] == req.voice_id:
                selected_voice = v
                break

    if not selected_voice:
        # Elegir la recomendada para el género
        candidates = [v for v in VOICES_CATALOG if v["gender"] == target_gender]
        selected_voice = next((v for v in candidates if v.get("recommended")), candidates[0])

    # 2. Generar nombre de archivo
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    gender_tag = "hombre" if target_gender == "male" else "mujer"
    filename = f"story_{gender_tag}_{timestamp}.mp3"
    filepath = os.path.join(OUTPUT_AUDIO_DIR, filename)

    provider_used = "google_cloud"
    warning_note = None

    # 3. Intentar síntesis con Google Cloud TTS
    try:
        if not gcp_tts_client:
            raise Exception("GCP TTS client no inicializado")

        from google.cloud import texttospeech
        
        # Preparar texto o SSML
        ssml_content = text_to_ssml(req.text, add_pauses=req.add_dramatic_pauses)
        synthesis_input = texttospeech.SynthesisInput(ssml=ssml_content)

        # Configuración de voz
        voice_params = texttospeech.VoiceSelectionParams(
            language_code=selected_voice["language_code"],
            name=selected_voice["gcp_voice_name"]
        )

        # Configuración de audio
        audio_config = texttospeech.AudioConfig(
            audio_encoding=texttospeech.AudioEncoding.MP3,
            speaking_rate=req.speaking_rate,
            pitch=req.pitch
        )

        response = gcp_tts_client.synthesize_speech(
            input=synthesis_input,
            voice=voice_params,
            audio_config=audio_config
        )

        with open(filepath, "wb") as out:
            out.write(response.audio_content)

        print(f"✅ Audio generado exitosamente con Google Cloud TTS: {filename}")

    except Exception as gcp_err:
        err_msg = str(gcp_err)
        print(f"⚠️ Error con Google Cloud TTS: {err_msg}")
        
        # Si la API no está habilitada o falla, usar Edge-TTS de respaldo
        provider_used = "edge_neural_fallback"
        warning_note = (
            "Nota: Google Cloud TTS reportó que la API necesita ser habilitada en la consola de Google Cloud. "
            "Para evitar interrumpirte, generamos tu audio con el motor Neural en alta calidad. "
            "Tan pronto actives la API en GCP, usará automáticamente los modelos Journey y Neural2."
        )

        try:
            # Limpiar posibles etiquetas SSML para edge-tts
            clean_plain_text = re.sub(r'<[^>]+>', ' ', req.text).strip()
            edge_voice = selected_voice.get("edge_fallback", "es-MX-JorgeNeural" if target_gender == "male" else "es-MX-DaliaNeural")
            
            await synthesize_edge_tts(
                text_plain=clean_plain_text,
                voice_name=edge_voice,
                rate=req.speaking_rate,
                pitch=req.pitch,
                output_path=filepath
            )
            print(f"✅ Audio generado exitosamente con Respaldo Neural: {filename}")
        except Exception as fallback_err:
            raise HTTPException(
                status_code=500, 
                detail=f"Error al generar audio: Google TTS ({err_msg}) | Fallback ({str(fallback_err)})"
            )

    # 4. Obtener duración estimada y tamaño
    file_size_kb = round(os.path.getsize(filepath) / 1024, 1)
    word_count = len(req.text.split())
    estimated_seconds = round((word_count / (135 * req.speaking_rate)) * 60)

    return {
        "status": "success",
        "filename": filename,
        "audio_url": f"/audio/{filename}",
        "gender": target_gender,
        "gender_label": "Hombre" if target_gender == "male" else "Mujer",
        "voice_name": selected_voice["name"],
        "voice_display": selected_voice["display_name"],
        "provider": provider_used,
        "file_size_kb": file_size_kb,
        "estimated_duration_seconds": estimated_seconds,
        "warning": warning_note,
        "created_at": datetime.datetime.now().strftime("%H:%M:%S - %d/%m/%Y")
    }

@app.get("/api/history")
def get_audio_history():
    """Devuelve la lista de audios generados previamente."""
    files = []
    if os.path.exists(OUTPUT_AUDIO_DIR):
        for f in os.listdir(OUTPUT_AUDIO_DIR):
            if f.endswith(".mp3"):
                full_p = os.path.join(OUTPUT_AUDIO_DIR, f)
                stat = os.stat(full_p)
                gender = "Hombre" if "hombre" in f else "Mujer"
                files.append({
                    "filename": f,
                    "audio_url": f"/audio/{f}",
                    "gender": gender,
                    "size_kb": round(stat.st_size / 1024, 1),
                    "timestamp": stat.st_mtime,
                    "created_at": datetime.datetime.fromtimestamp(stat.st_mtime).strftime("%d/%m/%Y %H:%M")
                })
    # Ordenar más recientes primero
    files.sort(key=lambda x: x["timestamp"], reverse=True)
    return {"history": files}

# ==================== ENDPOINTS: GLOBAL FINANCE & WISDOM (7 IDIOMAS) ====================

@app.get("/api/finance/presets")
def get_finance_presets():
    """Devuelve categorías, temas predefinidos e información de los 7 idiomas."""
    langs_summary = [
        {
            "key": k,
            "name": v["name"],
            "native_name": v["native_name"],
            "flag": v["flag"],
            "code": v["code"],
            "male_voice": v["male"]["name"],
            "female_voice": v["female"]["name"]
        }
        for k, v in GLOBAL_LANGUAGES.items()
    ]
    return {
        "presets": FINANCE_PRESETS,
        "languages": langs_summary
    }

@app.post("/api/finance/generate-scripts")
def generate_global_finance_scripts(req: GlobalFinanceStoryRequest):
    """Genera con Gemini 2.5 Flash un guion de alto impacto adaptado a los 7 idiomas en formato 60s."""
    if not gemini_client:
        raise HTTPException(status_code=500, detail="Gemini Vertex AI no está inicializado.")

    user_topic = req.topic.strip() if req.topic and req.topic.strip() else ""
    if not user_topic:
        topic_instruction = (
            f"Elige tú mismo de forma 100% autónoma un tema fascinante y poco conocido de la categoría '{req.category}' "
            "(por ejemplo: un truco contable legal de los ricos, un principio transformador de un libro como Hábitos Atómicos, "
            "o un caso real de marketing viral que nadie conoce). Crea la premisa y la historia tú solo desde cero."
        )
    else:
        topic_instruction = f"TEMA CENTRAL:\n\"{user_topic}\"\nCATEGORÍA: {req.category}"

    prompt = f"""
    Eres un guionista estrella de contenido viral y educativo para TikTok, Reels y YouTube Shorts.
    Tu misión es redactar una narración cautivadora de 60 segundos sobre el tema indicado que mantenga una retención altísima aportando VALOR REAL.

    {topic_instruction}

    REGLAS FUNDAMENTALES DE RETENCIÓN Y CONTENIDO:
    - EL 90% DEL GUION DEBE SER VALOR REAL: Desarrolla el tema prometido con profundidad, curiosidad, ejemplos prácticos y explicaciones fascinantes (finanzas, hábitos, libros, psicología del dinero).
    - EVITAR QUE PAREZCA UN ANUNCIO: El espectador NUNCA debe sentir que el video es una publicidad del juego ni que se desvía del tema. El espectador debe sentir que aprendió una lección reveladora.
    - PROHIBIDO hablar de Glassy en el cuerpo de la historia: En todo el desarrollo explicativo, habla ÚNICA Y EXCLUSIVAMENTE del tema real. Cero analogías forzadas sobre el juego a mitad del tema.

    ESTRUCTURA EXACTA DEL GUION 'body' (DE PRINCIPIO A FIN):
    1. INICIO (Hook + Mención Visual casual al juego de fondo):
       - Empieza con la frase gancho viral (hook) que detiene el scroll sobre el tema.
       - Añade inmediatamente una frase corta y natural haciendo alusión casual a lo que se ve en pantalla (ejemplo: "Disfruta esta historia mientras ves cómo estas gemas se fusionan en Glassy..." o "Quédate hasta el final mientras ves este gameplay de Glassy de fondo..."). Varía la frase para que suene fresca y diferente en cada idioma.
    2. CUERPO DE LA HISTORIA (90% del tiempo - MÁXIMO VALOR):
       - Explica el truco, el principio del libro o la historia real con ritmo ágil, revelaciones y ejemplos comprensibles. Cero menciones al juego aquí.
    3. CIERRE (Últimos 2-3 segundos):
       - Remata la lección y añade una sola frase final corta de llamado a la acción (ejemplo: "Glassy ya disponible en Play Store, link en mi perfil" o "Descarga Glassy gratis en Google Play, enlace en bio"). Varía la frase para que no suene repetitiva.

    REGLAS GENERALES:
    - HISTORIA ÚNICA: Desarrolla UNA SOLA historia central y adáptala/tradúcela a los 7 idiomas para que el mensaje sea idéntico en todos.
    - DURACIÓN: Entre 130 y 145 palabras por guion (~60 segundos hablados).
    - ADAPTACIÓN CULTURAL: Adapta cada idioma (ES, EN, FR, IT, DE, PT, RU) para que suene natural y nativo como un TikToker de ese país.

    Debes generar el guion para los 7 idiomas:
    - 'es': Español
    - 'en': English
    - 'fr': Français
    - 'it': Italiano
    - 'de': Deutsch
    - 'pt': Português (Brasil)
    - 'ru': Русский

    Devuelve ÚNICAMENTE un objeto JSON válido con esta estructura exacta:
    {{
      "topic": "{req.topic}",
      "languages": {{
        "es": {{
          "title": "Título corto y llamativo en español",
          "hook": "La primera frase que detiene el scroll",
          "body": "El guion completo de 60s listo para locución (Hook + mención visual casual a Glassy + 90% contenido real + frase final CTA de Glassy en Play Store)"
        }},
        "en": {{
          "title": "Short catchy title in English",
          "hook": "Scroll-stopping first sentence in English",
          "body": "Full 60-second narration script in English (Hook + casual visual Glassy mention + 90% real story + final Glassy CTA)"
        }},
        "fr": {{
          "title": "Titre accrocheur en français",
          "hook": "Première phrase percutante en français",
          "body": "Script complet de 60 secondes en français"
        }},
        "it": {{
          "title": "Titolo accattivante in italiano",
          "hook": "Prima frase d'impatto in italiano",
          "body": "Copione completo di 60 secondi in italiano"
        }},
        "de": {{
          "title": "Fesselnder Titel auf Deutsch",
          "hook": "Erster Satz, der das Scrollen stoppt",
          "body": "Komplettes 60-Sekunden-Skript auf Deutsch"
        }},
        "pt": {{
          "title": "Título chamativo em português",
          "hook": "Primeira frase impactante em português",
          "body": "Roteiro completo de 60 segundos em português"
        }},
        "ru": {{
          "title": "Цепляющий заголовок на русском",
          "hook": "Первая фраза, останавливающая скролл",
          "body": "Полный текст для озвучки на 60 секунд на русском"
        }}
      }}
    }}
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

        import json
        data = json.loads(text_resp)
        
        # Agregar métricas de palabras y duración por idioma y verificar que la estructura tenga intro y outro equilibrados
        for lang_key, script_obj in data.get("languages", {}).items():
            if req.include_glassy_hook:
                body_str = script_obj.get("body", "")
                body_lower = body_str.lower()

                # 1. Asegurar que termine con un CTA de Glassy al final (si la IA lo olvidó en la última frase)
                tail = body_str[-120:].lower() if len(body_str) >= 120 else body_lower
                if "glassy" not in tail:
                    outro_to_add = " " + get_random_glassy_outro(lang_key)
                    body_str = body_str.rstrip() + outro_to_add
                    print(f"🪄 Remate variado de Glassy inyectado al final para {lang_key}")

                # 2. Asegurar que tenga la mención visual al gameplay de Glassy al principio
                head = body_str[:130].lower() if len(body_str) >= 130 else body_lower
                if "glassy" not in head:
                    intro_to_add = get_random_glassy_intro(lang_key)
                    # Insertar justo después del gancho (primera oración)
                    split_idx = -1
                    for punct in ['.', '!', '?']:
                        pos = body_str.find(punct)
                        if pos != -1 and (split_idx == -1 or pos < split_idx):
                            split_idx = pos
                    if split_idx != -1 and split_idx < 150:
                        body_str = body_str[:split_idx+1] + f" {intro_to_add} " + body_str[split_idx+1:].lstrip()
                    else:
                        body_str = f"{intro_to_add} " + body_str
                    print(f"🪄 Intro visual variada de Glassy inyectada al inicio para {lang_key}")

                script_obj["body"] = body_str

            words = len(script_obj.get("body", "").split())
            script_obj["word_count"] = words
            script_obj["estimated_seconds"] = round((words / 140) * 60)
            if lang_key in GLOBAL_LANGUAGES:
                script_obj["lang_name"] = GLOBAL_LANGUAGES[lang_key]["name"]
                script_obj["flag"] = GLOBAL_LANGUAGES[lang_key]["flag"]

        final_topic = data.get("topic") or user_topic or "Historia Viral de Finanzas"
        return {
            "status": "success",
            "topic": final_topic,
            "category": req.category,
            "languages": data.get("languages", {})
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Error generando historias multilingües: {str(e)}")

@app.post("/api/finance/synthesize-pack")
async def synthesize_finance_pack(req: GlobalPackSynthesizeRequest):
    """Sintetiza los 7 audios en lote y empaqueta todo en un archivo ZIP descargable."""
    if not req.scripts:
        raise HTTPException(status_code=400, detail="No se enviaron guiones para sintetizar.")

    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    pack_id = f"pack_{timestamp}"
    pack_dir = os.path.join(PACKS_DIR, pack_id)
    os.makedirs(pack_dir, exist_ok=True)

    audios_results = []
    scripts_summary_lines = [
        f"==================================================",
        f"GLASSY VIRAL STORIES PACK — {req.topic}",
        f"Fecha: {datetime.datetime.now().strftime('%d/%m/%Y %H:%M')}",
        f"Género de Voz: {'Masculino' if req.gender == 'male' else 'Femenino'}",
        f"==================================================\n"
    ]

    for lang_key in ["es", "en", "fr", "it", "de", "pt", "ru"]:
        if lang_key not in req.scripts:
            continue
        
        script_item = req.scripts[lang_key]
        body_text = script_item.body.strip()
        if not body_text:
            continue

        lang_meta = GLOBAL_LANGUAGES.get(lang_key, {"name": lang_key, "flag": "🌐"})
        lang_name = lang_meta.get("name", lang_key).lower()
        gender_tag = "hombre" if req.gender == "male" else "mujer"
        filename = f"{lang_key.upper()}_{gender_tag}_{lang_name}.mp3"
        filepath = os.path.join(pack_dir, filename)

        # Sintetizar audio
        synth_res = await synthesize_voice_for_lang(
            text=body_text,
            lang_key=lang_key,
            gender=req.gender,
            speaking_rate=req.speaking_rate,
            pitch=req.pitch,
            add_pauses=req.add_dramatic_pauses,
            output_path=filepath
        )

        synth_res["filename"] = filename
        synth_res["audio_url"] = f"/audio/packs/{pack_id}/{filename}"
        synth_res["title"] = script_item.title
        synth_res["hook"] = script_item.hook
        synth_res["body"] = body_text
        audios_results.append(synth_res)

        # Registro para archivo TXT
        scripts_summary_lines.append(f"[{lang_key.upper()} - {lang_meta.get('flag', '')} {lang_meta.get('name', '')}]")
        scripts_summary_lines.append(f"Título: {script_item.title}")
        scripts_summary_lines.append(f"Gancho (Primeros 3s): {script_item.hook}")
        scripts_summary_lines.append(f"Archivo de Audio: {filename}")
        scripts_summary_lines.append("Guion Completo:")
        scripts_summary_lines.append(body_text)
        scripts_summary_lines.append("\n" + ("-" * 45) + "\n")

    # Guardar guiones_y_titulos.txt
    txt_path = os.path.join(pack_dir, "guiones_y_titulos.txt")
    with open(txt_path, "w", encoding="utf-8") as f_txt:
        f_txt.write("\n".join(scripts_summary_lines))

    # Guardar metadata.json
    pack_metadata = {
        "pack_id": pack_id,
        "topic": req.topic,
        "gender": req.gender,
        "created_at": datetime.datetime.now().strftime("%d/%m/%Y %H:%M"),
        "audios_count": len(audios_results),
        "audios": audios_results,
        "zip_url": f"/api/finance/download-pack/{pack_id}"
    }
    meta_path = os.path.join(pack_dir, "metadata.json")
    with open(meta_path, "w", encoding="utf-8") as f_meta:
        import json
        json.dump(pack_metadata, f_meta, ensure_ascii=False, indent=2)

    # Crear el archivo ZIP empaquetado
    zip_path = os.path.join(pack_dir, f"pack_{pack_id}.zip")
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as zipf:
        zipf.write(txt_path, arcname="guiones_y_titulos.txt")
        for a in audios_results:
            a_file = os.path.join(pack_dir, a["filename"])
            if os.path.exists(a_file):
                zipf.write(a_file, arcname=a["filename"])

    return pack_metadata

@app.get("/api/finance/download-pack/{pack_id}")
def download_pack_zip(pack_id: str):
    """Descarga el archivo ZIP que contiene los 7 audios y los guiones."""
    zip_path = os.path.join(PACKS_DIR, pack_id, f"pack_{pack_id}.zip")
    if not os.path.exists(zip_path):
        raise HTTPException(status_code=404, detail="Paquete de audios no encontrado.")
    return FileResponse(
        path=zip_path,
        media_type="application/zip",
        filename=f"Glassy_Stories_Pack_{pack_id}.zip"
    )

@app.get("/api/finance/packs")
def get_recent_finance_packs():
    """Devuelve los paquetes de historias multilingües generados previamente."""
    packs = []
    if os.path.exists(PACKS_DIR):
        for pid in os.listdir(PACKS_DIR):
            pdir = os.path.join(PACKS_DIR, pid)
            if os.path.isdir(pdir):
                meta_file = os.path.join(pdir, "metadata.json")
                if os.path.exists(meta_file):
                    try:
                        import json
                        with open(meta_file, "r", encoding="utf-8") as f:
                            meta = json.load(f)
                            packs.append(meta)
                    except Exception:
                        pass
    packs.sort(key=lambda x: x.get("pack_id", ""), reverse=True)
    return {"packs": packs}

# ==================== ENDPOINTS: VIDEO PIPELINE (TIKTOK FORMAT) ====================

@app.post("/api/video/upload-background")
async def upload_background_video(file: UploadFile = File(...)):
    """Recibe el video de gameplay de fondo (MP4, MOV, etc.) y lo guarda en uploads/."""
    if not file.filename:
        raise HTTPException(status_code=400, detail="Archivo no válido.")

    clean_name = re.sub(r'[^a-zA-Z0-9_.-]', '_', file.filename)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    saved_filename = f"bg_{timestamp}_{clean_name}"
    saved_filepath = os.path.join(UPLOADS_DIR, saved_filename)

    with open(saved_filepath, "wb") as buffer:
        shutil.copyfileobj(file.file, buffer)

    duration = get_media_duration(saved_filepath)
    size_mb = round(os.path.getsize(saved_filepath) / (1024 * 1024), 2)

    return {
        "status": "success",
        "filename": saved_filename,
        "original_name": file.filename,
        "filepath": saved_filepath,
        "video_url": f"/uploads/{saved_filename}",
        "duration_seconds": round(duration, 1),
        "duration_formatted": f"{int(duration // 60)}:{int(duration % 60):02d}",
        "size_mb": size_mb
    }

@app.post("/api/video/generate-pack-videos")
def generate_pack_videos_api(req: GenerateVideosRequest):
    """Genera los 7 videos para TikTok con gameplay de fondo y subtítulos dinámicos en C:\\Users\\PC\\Videos\\Videos for tiktok."""
    pack_dir = os.path.join(PACKS_DIR, req.pack_id)
    if not os.path.exists(pack_dir):
        raise HTTPException(status_code=404, detail="El paquete de audios especificado no existe.")

    meta_path = os.path.join(pack_dir, "metadata.json")
    if not os.path.exists(meta_path):
        raise HTTPException(status_code=404, detail="No se encontró la metadata del paquete.")

    import json
    with open(meta_path, "r", encoding="utf-8") as f:
        pack_meta = json.load(f)

    # Localizar video de fondo
    bg_video_path = os.path.join(UPLOADS_DIR, req.video_filename)
    if not os.path.exists(bg_video_path):
        if os.path.exists(req.video_filename):
            bg_video_path = req.video_filename
        else:
            raise HTTPException(status_code=404, detail="No se encontró el video de gameplay subido.")

    topic_slug = re.sub(r'[^a-zA-Z0-9]', '_', pack_meta.get("topic", "glassy_story"))[:25]
    rendered_videos = []

    for audio_item in pack_meta.get("audios", []):
        lang_key = audio_item.get("lang_key", "es")
        audio_filename = audio_item.get("filename")
        audio_full_path = os.path.join(pack_dir, audio_filename)
        subtitle_text = audio_item.get("body", "")

        if not os.path.exists(audio_full_path):
            continue

        video_output_name = f"{lang_key.upper()}_glassy_{topic_slug}_{req.pack_id}.mp4"
        video_output_path = os.path.join(TIKTOK_VIDEOS_DIR, video_output_name)

        try:
            render_res = render_tiktok_video(
                background_video_path=bg_video_path,
                audio_path=audio_full_path,
                output_video_path=video_output_path,
                subtitle_text=subtitle_text,
                start_offset=req.start_offset_seconds,
                subtitle_color=req.subtitle_color
            )

            rendered_videos.append({
                "lang_key": lang_key,
                "lang_name": audio_item.get("lang_name", lang_key),
                "flag": audio_item.get("flag", "🌐"),
                "filename": video_output_name,
                "filepath": video_output_path,
                "video_url": f"/videos/{video_output_name}",
                "duration": render_res["duration"],
                "size_mb": render_res["size_mb"],
                "status": "ready"
            })
        except Exception as e:
            print(f"Error renderizando video para {lang_key}: {e}")
            rendered_videos.append({
                "lang_key": lang_key,
                "lang_name": audio_item.get("lang_name", lang_key),
                "flag": audio_item.get("flag", "🌐"),
                "filename": video_output_name,
                "error": str(e),
                "status": "error"
            })

    return {
        "status": "success",
        "pack_id": req.pack_id,
        "output_directory": TIKTOK_VIDEOS_DIR,
        "total_generated": len([v for v in rendered_videos if v["status"] == "ready"]),
        "videos": rendered_videos
    }

@app.post("/api/video/open-folder")
def open_tiktok_videos_folder():
    """Abre la carpeta de destino en el Explorador de Windows."""
    try:
        subprocess.Popen(["explorer.exe", TIKTOK_VIDEOS_DIR])
        return {"status": "success", "opened_path": TIKTOK_VIDEOS_DIR}
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"No se pudo abrir la carpeta: {e}")

@app.get("/api/video/latest-videos")
def get_latest_tiktok_videos():
    """Devuelve los videos disponibles en la carpeta de TikTok."""
    videos = []
    if os.path.exists(TIKTOK_VIDEOS_DIR):
        for f in os.listdir(TIKTOK_VIDEOS_DIR):
            if f.endswith(".mp4"):
                full_p = os.path.join(TIKTOK_VIDEOS_DIR, f)
                stat = os.stat(full_p)
                videos.append({
                    "filename": f,
                    "filepath": full_p,
                    "video_url": f"/videos/{f}",
                    "size_mb": round(stat.st_size / (1024 * 1024), 2),
                    "timestamp": stat.st_mtime,
                    "created_at": datetime.datetime.fromtimestamp(stat.st_mtime).strftime("%d/%m/%Y %H:%M")
                })
    videos.sort(key=lambda x: x["timestamp"], reverse=True)
    return {"videos": videos}

# Servir Frontend
FRONTEND_DIR = os.path.abspath(os.path.join(BASE_DIR, "../frontend"))
if os.path.exists(FRONTEND_DIR):
    app.mount("/", StaticFiles(directory=FRONTEND_DIR, html=True), name="frontend")

if __name__ == "__main__":
    import uvicorn
    port = int(os.getenv("PORT", 8001))
    host = os.getenv("HOST", "0.0.0.0")
    print(f"🚀 Iniciando Glassy Voice Generator en http://localhost:{port}")
    uvicorn.run("main:app", host=host, port=port, reload=True)
