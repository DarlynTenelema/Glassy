import os
import re
import random
import shutil
import tempfile
import subprocess
from typing import Dict, Any, Optional, List
from core.config import FFMPEG_EXE, BACKGROUNDS_DIR, AUDIO_DIR, VIDEOS_DIR

def get_media_duration(file_path: str) -> float:
    """Obtiene la duración exacta en segundos usando FFmpeg."""
    try:
        cmd = [FFMPEG_EXE, "-i", file_path]
        p = subprocess.run(cmd, capture_output=True, text=True, errors="ignore")
        m = re.search(r"Duration:\s*(\d+):(\d+):(\d+\.\d+)", p.stderr)
        if m:
            hours, mins, secs = m.groups()
            return int(hours) * 3600 + int(mins) * 60 + float(secs)
    except Exception as e:
        print(f"Error obteniendo duración de {file_path}: {e}")
    return 65.0

def generate_nostalgic_ass_subtitles(
    text: str,
    total_duration: float,
    highlight_color: str = "gold"
) -> str:
    """
    Genera archivo de subtítulos .ass en formato cinemático nostálgico
    con resalte de palabras en tonos cálidos y contorno para máxima legibilidad.
    """
    color_map = {
        "gold": "&H0061D0F5&",     # ASS hex is &HAABBGGRR& (so BGR -> Gold/Amber)
        "cyan": "&H00FFFF00&",
        "mint": "&H00A8E6CF&",
        "rose": "&H00C5A3FF&",
        "white": "&H00FFFFFF&"
    }
    hl_hex = color_map.get(highlight_color.lower(), "&H0061D0F5&")

    clean_text = re.sub(r'<[^>]+>', ' ', text).strip()
    words = clean_text.split()
    if not words:
        return ""

    # Dividir en fragmentos dinámicos de 2 a 3 palabras
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
        chunks.append(" ".join(words[i:i+chunk_size]))
        i += chunk_size

    total_chars = sum(len(c) for c in chunks) or 1
    effective_duration = max(total_duration - 0.5, 1.0)
    start_offset = 0.25

    ass_header = """[Script Info]
ScriptType: v4.00+
PlayResX: 1080
PlayResY: 1920

[V4+ Styles]
Format: Name, Fontname, Fontsize, PrimaryColour, SecondaryColour, OutlineColour, BackColour, Bold, Italic, Underline, StrikeOut, ScaleX, ScaleY, Spacing, Angle, BorderStyle, Outline, Shadow, Alignment, MarginL, MarginR, MarginV, Encoding
Style: Nostalgia,Segoe UI,62,&H00FFFFFF,&H0061D0F5,&H00000000,&H90000000,1,0,0,0,100,100,0,0,1,4.5,2,2,70,70,360,1

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
        dur = weight * effective_duration
        end_time = current_time + dur

        words_in_chunk = chunk.upper().split()
        if len(words_in_chunk) == 1:
            styled_line = f"{{\\c{hl_hex}}}{words_in_chunk[0]}{{\\c&H00FFFFFF&}}"
        else:
            styled_line = f"{{\\c{hl_hex}}}{words_in_chunk[0]}{{\\c&H00FFFFFF&}} " + " ".join(words_in_chunk[1:])

        dialogues.append(
            f"Dialogue: 0,{format_ass_time(current_time)},{format_ass_time(end_time)},Nostalgia,,0,0,0,,{styled_line}"
        )
        current_time = end_time

    return ass_header + "\n".join(dialogues) + "\n"

def get_available_backgrounds() -> List[str]:
    """Lista todas las imágenes y videos disponibles en assets/backgrounds."""
    valid_exts = (".jpg", ".jpeg", ".png", ".webp", ".mp4", ".mov")
    files = []
    if os.path.exists(BACKGROUNDS_DIR):
        for f in os.listdir(BACKGROUNDS_DIR):
            if f.lower().endswith(valid_exts):
                files.append(f)
    return files

def select_background(landscape_type: Optional[str] = None) -> str:
    """Selecciona el fondo adecuado según la categoría pedida o de forma aleatoria."""
    all_bgs = get_available_backgrounds()
    if not all_bgs:
        raise Exception(f"No hay imágenes de fondo en {BACKGROUNDS_DIR}")

    if landscape_type:
        l_lower = landscape_type.lower()
        if "noche" in l_lower or "luna" in l_lower:
            candidates = [b for b in all_bgs if "night" in b.lower() or "moon" in b.lower()]
            if candidates: return os.path.join(BACKGROUNDS_DIR, random.choice(candidates))
        elif "lluvia" in l_lower or "rain" in l_lower or "nublado" in l_lower:
            candidates = [b for b in all_bgs if "rain" in b.lower() or "cloud" in b.lower()]
            if candidates: return os.path.join(BACKGROUNDS_DIR, random.choice(candidates))
        elif "atardecer" in l_lower or "twilight" in l_lower or "acantilado" in l_lower:
            candidates = [b for b in all_bgs if "twilight" in b.lower() or "cliff" in b.lower()]
            if candidates: return os.path.join(BACKGROUNDS_DIR, random.choice(candidates))

    # Selección aleatoria balanceada
    chosen = random.choice(all_bgs)
    return os.path.join(BACKGROUNDS_DIR, chosen)

def render_nostalgia_video(
    script_text: str,
    output_filename: str,
    target_duration: float = 68.0,
    landscape_type: Optional[str] = None,
    ambient_type: str = "auto"
) -> Dict[str, Any]:
    """
    Renderiza un video 9:16 vertical de 65-70 segundos con:
    - Paisaje pixel art con suave paneo cinemático (Ken Burns breathe)
    - Pista de audio ambiental relajante (Lluvia o noche) sin consumir créditos de TTS
    - Frases y subtítulos dinámicos en pantalla con tipografía cinemática
    """
    bg_path = select_background(landscape_type)
    bg_name = os.path.basename(bg_path)

    # Determinar audio ambiental
    if ambient_type == "auto":
        if "rain" in bg_name.lower():
            ambient_file = "ambient_rain.mp3"
        else:
            ambient_file = "ambient_night.mp3"
    elif ambient_type == "rain":
        ambient_file = "ambient_rain.mp3"
    else:
        ambient_file = "ambient_night.mp3"

    ambient_path = os.path.join(AUDIO_DIR, ambient_file)
    has_ambient = os.path.exists(ambient_path)

    temp_dir = tempfile.mkdtemp()
    ass_file = os.path.join(temp_dir, "nostalgia.ass")
    ass_content = generate_nostalgic_ass_subtitles(script_text, target_duration)
    with open(ass_file, "w", encoding="utf-8") as f:
        f.write(ass_content)

    final_video_path = os.path.join(VIDEOS_DIR, output_filename)

    # Filtro visual de paneo suave:
    # 1. Escala a 1180x2098 (un poco más grande que 1080x1920)
    # 2. Recorta con sutil paneo sinusoidal en X y desplazamiento continuo suave en Y
    vf_filter = (
        "scale=1180:2098:force_original_aspect_ratio=increase,"
        "crop=1080:1920:x='(in_w-1080)/2+14*sin(t*0.22)':y='(in_h-1920)/2+t*1.1',"
        "ass=nostalgia.ass,format=yuv420p"
    )

    if has_ambient:
        # Loop continuo del audio ambiental con fade-in y fade-out suave
        af_filter = f"aloop=loop=-1:size=2e+09,volume=0.85,afade=t=in:st=0:d=1.5,afade=t=out:st={round(target_duration-2, 1)}:d=2"
        cmd = [
            FFMPEG_EXE, "-y",
            "-loop", "1",
            "-i", bg_path,
            "-i", ambient_path,
            "-t", str(round(target_duration, 2)),
            "-vf", vf_filter,
            "-af", af_filter,
            "-map", "0:v:0",
            "-map", "1:a:0",
            "-c:v", "libx264",
            "-preset", "veryfast",
            "-crf", "21",
            "-c:a", "aac",
            "-b:a", "192k",
            "-shortest",
            final_video_path
        ]
    else:
        cmd = [
            FFMPEG_EXE, "-y",
            "-loop", "1",
            "-i", bg_path,
            "-f", "lavfi", "-i", "anullsrc=channel_layout=stereo:sample_rate=44100",
            "-t", str(round(target_duration, 2)),
            "-vf", vf_filter,
            "-map", "0:v:0",
            "-map", "1:a:0",
            "-c:v", "libx264",
            "-preset", "veryfast",
            "-crf", "21",
            "-c:a", "aac",
            "-b:a", "192k",
            "-shortest",
            final_video_path
        ]

    res = subprocess.run(cmd, cwd=temp_dir, capture_output=True, text=True, errors="ignore")

    try:
        shutil.rmtree(temp_dir, ignore_errors=True)
    except:
        pass

    if res.returncode != 0:
        raise Exception(f"Error renderizando video FFmpeg: {res.stderr[-400:]}")

    size_mb = round(os.path.getsize(final_video_path) / (1024 * 1024), 2)
    return {
        "status": "success",
        "video_path": final_video_path,
        "filename": output_filename,
        "duration_seconds": round(target_duration, 1),
        "size_mb": size_mb,
        "background_used": bg_name
    }
