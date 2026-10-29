import uvicorn
import webbrowser
import threading
import time
from core.config import HOST, PORT

def open_browser():
    time.sleep(1.5)
    url = f"http://localhost:{PORT}"
    print(f"🚀 Abriendo navegador en: {url}")
    webbrowser.open(url)

if __name__ == "__main__":
    print("=" * 60)
    print("       🌙 NOSTALGIA STUDIO — TIKTOK VIDEOS 65-70s")
    print(f"       Servidor listo en: http://localhost:{PORT}")
    print("=" * 60)
    threading.Thread(target=open_browser, daemon=True).start()
    uvicorn.run("server:app", host=HOST, port=PORT, reload=False)
