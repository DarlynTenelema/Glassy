import os
import sys

# Configurar stdout/stderr en UTF-8 para Windows PowerShell/CMD
if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
if hasattr(sys.stderr, 'reconfigure'):
    sys.stderr.reconfigure(encoding='utf-8', errors='replace')

import imageio_ffmpeg
from dotenv import load_dotenv

# Base directories
BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROOT_DIR = os.path.dirname(BASE_DIR)

# Load .env from story_generator root
ENV_PATH = os.path.join(ROOT_DIR, ".env")
load_dotenv(dotenv_path=ENV_PATH, override=True)

# Assets and output directories
ASSETS_DIR = os.path.join(BASE_DIR, "assets")
BACKGROUNDS_DIR = os.path.join(ASSETS_DIR, "backgrounds")
AUDIO_DIR = os.path.join(ASSETS_DIR, "audio")
DATA_DIR = os.path.join(BASE_DIR, "data")
VIDEOS_DIR = os.path.join(BASE_DIR, "videos")
STATIC_DIR = os.path.join(BASE_DIR, "static")

# Create needed directories
for path in [BACKGROUNDS_DIR, AUDIO_DIR, DATA_DIR, VIDEOS_DIR, STATIC_DIR]:
    os.makedirs(path, exist_ok=True)

# Detect Google Cloud Credentials
cred_path = os.getenv("GOOGLE_APPLICATION_CREDENTIALS", "")
if not cred_path or not os.path.exists(cred_path):
    candidates = [
        os.path.join(ROOT_DIR, "glassy-508419-c57039b8dad3.json"),
        os.path.join(ROOT_DIR, "..", "skins_generator", "glassy-508419-c57039b8dad3.json"),
        os.path.join(BASE_DIR, "glassy-508419-c57039b8dad3.json")
    ]
    for c in candidates:
        if os.path.exists(c):
            os.environ["GOOGLE_APPLICATION_CREDENTIALS"] = os.path.abspath(c)
            break

PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT", "glassy-508419")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
PORT = int(os.getenv("NOSTALGIA_PORT", "8005"))
HOST = os.getenv("HOST", "0.0.0.0")

# FFmpeg binary
FFMPEG_EXE = imageio_ffmpeg.get_ffmpeg_exe()

print(f"🌲 [Nostalgia Studio] Base Dir: {BASE_DIR}")
print(f"🎬 [Nostalgia Studio] FFmpeg: {FFMPEG_EXE}")
print(f"📁 [Nostalgia Studio] Videos Output: {VIDEOS_DIR}")
