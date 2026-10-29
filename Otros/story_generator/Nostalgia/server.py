import os
import sys
import re
import datetime
import subprocess
import asyncio
from typing import Optional, List, Dict, Any

# Configurar UTF-8 en Windows
if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
if hasattr(sys.stderr, 'reconfigure'):
    sys.stderr.reconfigure(encoding='utf-8', errors='replace')

from fastapi import FastAPI, HTTPException, Query, BackgroundTasks
from fastapi.middleware.cors import CORSMiddleware
from fastapi.staticfiles import StaticFiles
from fastapi.responses import FileResponse, JSONResponse
from pydantic import BaseModel

from core.config import (
    BASE_DIR, VIDEOS_DIR, BACKGROUNDS_DIR, AUDIO_DIR, STATIC_DIR,
    PORT, HOST, FFMPEG_EXE
)
from core.database import (
    load_history, add_generation_entry, delete_entry, get_all_videos, get_used_topics_and_hooks
)
from core.gemini_story import generate_nostalgia_scripts, gemini_client
from core.video_renderer import (
    render_nostalgia_video, get_available_backgrounds
)

app = FastAPI(
    title="Nostalgia Studio — Generador de Videos TikTok 65-70s",
    description="Sistema autónomo de generación de videos de reflexiones nostálgicas en pixel art para TikTok con cero repeticiones.",
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

# Montar carpetas estáticas para previsualizaciones
app.mount("/videos-stream", StaticFiles(directory=VIDEOS_DIR), name="videos_stream")
app.mount("/backgrounds-stream", StaticFiles(directory=BACKGROUNDS_DIR), name="backgrounds_stream")

# Modelos Pydantic
class BatchGenerateRequest(BaseModel):
    count: int = 3
    landscape_type: Optional[str] = "auto"
    custom_theme: Optional[str] = None
    ambient_type: Optional[str] = "auto"

@app.get("/api/status")
def get_status():
    history = load_history()
    return {
        "status": "online",
        "gemini_ready": gemini_client is not None,
        "ffmpeg_ready": os.path.exists(FFMPEG_EXE),
        "total_videos_created": len(history.get("items", [])),
        "available_backgrounds": len(get_available_backgrounds()),
        "output_directory": VIDEOS_DIR
    }

@app.get("/api/backgrounds")
def list_backgrounds():
    bgs = get_available_backgrounds()
    results = []
    for b in bgs:
        p = os.path.join(BACKGROUNDS_DIR, b)
        results.append({
            "filename": b,
            "url": f"/backgrounds-stream/{b}",
            "size_kb": round(os.path.getsize(p) / 1024, 1)
        })
    return {"backgrounds": results}

@app.get("/api/history")
def get_history_api():
    videos = get_all_videos()
    return {
        "total": len(videos),
        "items": videos
    }

@app.delete("/api/history/{item_id}")
def delete_history_item(item_id: str, delete_file: bool = True):
    ok = delete_entry(item_id, delete_file=delete_file)
    if not ok:
        raise HTTPException(status_code=404, detail="Video no encontrado en historial.")
    return {"status": "success", "deleted_id": item_id}

@app.post("/api/open-folder")
def open_output_folder():
    """Abre la carpeta de videos directamente en el explorador de Windows."""
    try:
        subprocess.Popen(["explorer.exe", VIDEOS_DIR])
        return {"status": "success", "path": VIDEOS_DIR}
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"No se pudo abrir la carpeta: {e}")

@app.get("/api/download/{filename}")
def download_video_file(filename: str):
    file_path = os.path.join(VIDEOS_DIR, filename)
    if not os.path.exists(file_path):
        raise HTTPException(status_code=404, detail="Archivo de video no encontrado.")
    return FileResponse(
        path=file_path,
        media_type="video/mp4",
        filename=filename
    )

@app.post("/api/generate-batch")
async def generate_batch_videos(req: BatchGenerateRequest):
    """
    Flujo principal:
    1. Genera guiones nostálgicos de 65-70s con Gemini (excluyendo temas previos de la base de datos).
    2. Sintetiza la voz para cada uno (Google Cloud TTS / Edge-TTS).
    3. Renderiza video 9:16 con animación de paneo, audio ambiental y subtítulos.
    4. Guarda en historial para evitar repetir la frase y devuelve el lote listo.
    """
    if req.count < 1 or req.count > 6:
        raise HTTPException(status_code=400, detail="La cantidad debe estar entre 1 y 6.")

    try:
        # 1. Generar guiones únicos con Gemini
        print(f"🎮 [Nostalgia] Generando {req.count} guiones con Gemini...")
        scripts_data = generate_nostalgia_scripts(
            count=req.count,
            custom_theme=req.custom_theme
        )
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Error al generar guiones con IA: {str(e)}")

    rendered_results = []
    timestamp_batch = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")

    for idx, item in enumerate(scripts_data, start=1):
        title = item.get("title", f"Reflexión {idx}")
        game = item.get("game_reference", "Gamer")
        hook = item.get("hook", "")
        script_text = item.get("script", "")

        slug_title = re.sub(r'[^a-zA-Z0-9]', '_', title)[:20].strip('_')
        slug_game = re.sub(r'[^a-zA-Z0-9]', '_', game)[:12].strip('_')
        video_id = f"nostalgia_{timestamp_batch}_{idx}"
        video_filename = f"{idx:02d}_{slug_game}_{slug_title}_{timestamp_batch}.mp4"

        target_dur = float(item.get("estimated_duration_seconds", 68.0))
        if target_dur < 65.0:
            target_dur = 68.0

        print(f"🎬 [Nostalgia] ({idx}/{len(scripts_data)}) Renderizando video MP4 9:16 ({target_dur}s) con pixel art y sonido ambiental...")
        try:
            # 2. Renderizar video con audio ambiental relajante
            render_res = render_nostalgia_video(
                script_text=script_text,
                output_filename=video_filename,
                target_duration=target_dur,
                landscape_type=req.landscape_type,
                ambient_type=req.ambient_type or "auto"
            )

            # 3. Guardar en historial de temas usados
            entry = add_generation_entry(
                video_id=video_id,
                title=title,
                hook=hook,
                game_reference=game,
                script_text=script_text,
                background_name=render_res["background_used"],
                voice_name="Audio Ambiental Relajante (Lluvia/Noche)",
                duration_seconds=render_res["duration_seconds"],
                video_filename=video_filename,
                video_path=render_res["video_path"]
            )

            entry["video_url"] = f"/videos-stream/{video_filename}"
            entry["download_url"] = f"/api/download/{video_filename}"
            entry["size_mb"] = render_res["size_mb"]
            rendered_results.append(entry)

        except Exception as e:
            print(f"❌ Error en video {idx}: {e}")
            rendered_results.append({
                "id": video_id,
                "title": title,
                "game_reference": game,
                "hook": hook,
                "error": str(e),
                "status": "error"
            })

    return {
        "status": "success",
        "total_requested": req.count,
        "total_rendered": len([v for v in rendered_results if "error" not in v]),
        "videos_directory": VIDEOS_DIR,
        "videos": rendered_results
    }

# Montar frontend estático
app.mount("/static", StaticFiles(directory=STATIC_DIR), name="static_dir")
app.mount("/", StaticFiles(directory=STATIC_DIR, html=True), name="static_frontend")

if __name__ == "__main__":
    import uvicorn
    print(f"🌲 Nostalgia Studio iniciando en http://localhost:{PORT}")
    uvicorn.run("server:app", host=HOST, port=PORT, reload=False)
