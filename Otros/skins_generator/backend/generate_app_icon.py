import os
import sys
import io
import subprocess
from dotenv import load_dotenv
from PIL import Image
from rembg import remove, new_session
from google import genai
from google.genai import types

load_dotenv(dotenv_path="../.env", override=True)

PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
MODEL_NAME = "gemini-2.5-flash-image"

BACKEND_DIR = os.path.dirname(os.path.abspath(__file__))
FRONTEND_DIR = os.path.abspath(os.path.join(BACKEND_DIR, "../../../frontend"))
FRONTEND_ASSETS = os.path.join(FRONTEND_DIR, "assets")
OUTPUT_DIR = os.path.abspath(os.path.join(BACKEND_DIR, "../output_icons"))
os.makedirs(OUTPUT_DIR, exist_ok=True)
os.makedirs(FRONTEND_ASSETS, exist_ok=True)

def process_and_save_icon(img: Image.Image, run_flutter_icons: bool = True):
    print("Procesando imagen con especificaciones de Google Play Console (512x512 PNG 32-bit)...")
    
    # 1. Asegurar formato RGB/RGBA
    if img.mode != "RGBA" and img.mode != "RGB":
        img = img.convert("RGB")

    # 2. Redimensionar exactamente a 512x512 con filtro Lanczos
    play_store_img = img.resize((512, 512), Image.Resampling.LANCZOS)

    # 3. Guardar versión Google Play Console (512x512 32-bit PNG)
    play_store_flutter = os.path.join(FRONTEND_ASSETS, "play_store_512.png")
    play_store_local = os.path.join(OUTPUT_DIR, "play_store_512.png")
    
    play_store_img.save(play_store_flutter, format="PNG", optimize=True)
    play_store_img.save(play_store_local, format="PNG", optimize=True)
    
    file_size_kb = os.path.getsize(play_store_flutter) / 1024
    print(f"-> Google Play Icon guardado: {play_store_flutter} ({file_size_kb:.2f} KB - Límite Google Play: 1024 KB)")

    # 4. Guardar versión para SplashScreen de Flutter (assets/logo.jpg)
    logo_splash_path = os.path.join(FRONTEND_ASSETS, "logo.jpg")
    play_store_img.convert("RGB").save(logo_splash_path, format="JPEG", quality=95)
    print(f"-> SplashScreen Logo guardado: {logo_splash_path}")

    # 5. Generar Foreground para Adaptive Icon de Android (manteniendo el arte completo y margen seguro)
    print("Generando capa foreground para Android Adaptive Icon con margen seguro...")
    try:
        bg_color = play_store_img.convert("RGB").getpixel((5, 5))
        adaptive_fg = Image.new("RGBA", (512, 512), bg_color)
        target_size = int(512 * 0.80)
        fg_resized = play_store_img.resize((target_size, target_size), Image.Resampling.LANCZOS)
        offset = ((512 - target_size) // 2, (512 - target_size) // 2)
        adaptive_fg.paste(fg_resized, offset)

        fg_flutter = os.path.join(FRONTEND_ASSETS, "icon_foreground.png")
        fg_local = os.path.join(OUTPUT_DIR, "icon_foreground.png")
        adaptive_fg.save(fg_flutter, format="PNG", optimize=True)
        adaptive_fg.save(fg_local, format="PNG", optimize=True)
        print(f"-> Adaptive Icon Foreground guardado con éxito: {fg_flutter}")
    except Exception as e:
        print(f"Aviso al preparar foreground: {e}. Usando imagen completa como fallback.")

    # 6. Actualizar íconos de Flutter
    if run_flutter_icons:
        print("\nEjecutando 'dart run flutter_launcher_icons' en Flutter...")
        try:
            res = subprocess.run(["dart", "run", "flutter_launcher_icons"], cwd=FRONTEND_DIR, capture_output=True, text=True, shell=True)
            if res.returncode == 0:
                print("✓ Íconos de Android actualizados con éxito en todas las resoluciones.")
            else:
                print(f"Aviso al generar launcher icons: {res.stderr}")
        except Exception as e:
            print(f"Aviso ejecutando flutter_launcher_icons: {e}")

    print("\n¡Todo listo y sincronizado!")
    return play_store_flutter

def generate_with_gemini():
    client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)
    
    char_ref_path = os.path.join(FRONTEND_ASSETS, "avatar/personaje/glassy_lapislazully_offer.png")
    reference_image = None
    if os.path.exists(char_ref_path):
        reference_image = Image.open(char_ref_path)
        print(f"Usando referencia del personaje Lapislazuli: {char_ref_path}")

    prompt = (
        "Mobile app icon for a puzzle video game named 'Glassy'. High-end professional 3D vector and digital art illustration, casual gaming icon style. "
        "COMPOSITION: "
        "- On the left side: The character shown in the reference image (an anime-style boy with sparkling cosmic starry blue hair, blue skin, smiling cheerfully, wearing a blue jacket with gold trim) leaning into frame and pointing excitedly towards the center flask. "
        "- In the center: A sleek, glowing glass potion laboratory flask bottle with transparent crystal walls. Inside the glass flask floats a mesmerizing, radiant luminous blue crystal pearl / glowing sphere emitting sparkling particles and magical light rays. "
        "- On the bottom-right corner: A vibrant curved orange ribbon / badge banner creating a bold warm contrast against the cool blue, with the modern stylized clean game title text 'Glassy'. "
        "- Background: Deep cosmic dark blue gradient (#0A1128 to #080E1E) with subtle starry dust, filling the entire square canvas edge-to-edge. "
        "- Clean full-bleed square 1:1, vibrant colors, premium mobile gaming icon polish, no pre-cut rounded corners, no white borders."
    )

    contents = [reference_image, prompt] if reference_image else [prompt]
    
    print("Enviando petición a Gemini 2.5 Flash Image...")
    response = client.models.generate_content(
        model=MODEL_NAME,
        contents=contents,
        config=types.GenerateContentConfig(
            response_modalities=["IMAGE"],
            image_config=types.ImageConfig(aspect_ratio="1:1")
        )
    )

    if not response.candidates or not response.candidates[0].content.parts[0].inline_data:
        raise RuntimeError("No se recibieron datos de imagen de Gemini.")

    raw_bytes = response.candidates[0].content.parts[0].inline_data.data
    img = Image.open(io.BytesIO(raw_bytes))
    return process_and_save_icon(img)

if __name__ == "__main__":
    if len(sys.argv) > 1 and os.path.exists(sys.argv[1]):
        source_path = sys.argv[1]
        print(f"Cargando imagen desde: {source_path}")
        img = Image.open(source_path)
        process_and_save_icon(img)
    else:
        generate_with_gemini()
