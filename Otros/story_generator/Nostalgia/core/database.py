import os
import json
import datetime
from typing import List, Dict, Any, Optional
from core.config import DATA_DIR, VIDEOS_DIR

HISTORY_FILE = os.path.join(DATA_DIR, "history.json")

def _init_history():
    if not os.path.exists(HISTORY_FILE):
        default_data = {
            "version": "1.0",
            "last_updated": datetime.datetime.now().isoformat(),
            "items": []
        }
        with open(HISTORY_FILE, "w", encoding="utf-8") as f:
            json.dump(default_data, f, ensure_ascii=False, indent=2)

def load_history() -> Dict[str, Any]:
    _init_history()
    try:
        with open(HISTORY_FILE, "r", encoding="utf-8") as f:
            return json.load(f)
    except Exception as e:
        print(f"Error cargando historial: {e}")
        return {"items": []}

def save_history(data: Dict[str, Any]):
    data["last_updated"] = datetime.datetime.now().isoformat()
    with open(HISTORY_FILE, "w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False, indent=2)

def get_used_topics_and_hooks() -> List[str]:
    """Retorna una lista de temas y frases gancho ya usadas para pasárselas a Gemini."""
    hist = load_history()
    used = []
    for item in hist.get("items", []):
        title = item.get("title", "")
        hook = item.get("hook", "")
        game = item.get("game_reference", "")
        if title or hook:
            used.append(f"- [{game}] {title}: '{hook}'")
    return used

def is_duplicate_hook(hook: str) -> bool:
    """Verifica si una frase gancho ya fue utilizada."""
    hist = load_history()
    hook_clean = hook.strip().lower()
    for item in hist.get("items", []):
        existing_hook = item.get("hook", "").strip().lower()
        if hook_clean in existing_hook or existing_hook in hook_clean:
            return True
    return False

def add_generation_entry(
    video_id: str,
    title: str,
    hook: str,
    game_reference: str,
    script_text: str,
    background_name: str,
    voice_name: str,
    duration_seconds: float,
    video_filename: str,
    video_path: str
) -> Dict[str, Any]:
    """Registra un nuevo video y su frase en el historial para evitar duplicados futuros."""
    hist = load_history()
    entry = {
        "id": video_id,
        "title": title,
        "hook": hook,
        "game_reference": game_reference,
        "script": script_text,
        "background": background_name,
        "voice": voice_name,
        "duration_seconds": round(duration_seconds, 1),
        "filename": video_filename,
        "video_path": video_path,
        "created_at": datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    }
    hist["items"].insert(0, entry)
    save_history(hist)
    return entry

def delete_entry(video_id: str, delete_file: bool = True) -> bool:
    hist = load_history()
    items = hist.get("items", [])
    found = False
    new_items = []
    for item in items:
        if item.get("id") == video_id:
            found = True
            if delete_file:
                v_path = item.get("video_path")
                if v_path and os.path.exists(v_path):
                    try:
                        os.remove(v_path)
                    except Exception as e:
                        print(f"Error borrando archivo de video: {e}")
        else:
            new_items.append(item)
    if found:
        hist["items"] = new_items
        save_history(hist)
    return found

def get_all_videos() -> List[Dict[str, Any]]:
    hist = load_history()
    return hist.get("items", [])
