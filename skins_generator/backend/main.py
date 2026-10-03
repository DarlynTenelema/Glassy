import os
import io
import time
import re
from fastapi import FastAPI, BackgroundTasks
from fastapi.middleware.cors import CORSMiddleware
from pydantic import BaseModel

class MarkdownRequest(BaseModel):
    markdown_text: str
from dotenv import load_dotenv
from google import genai
from google.genai import types
from rembg import remove
from PIL import Image

# Cargar variables de entorno desde el archivo .env
load_dotenv(dotenv_path="../.env")

app = FastAPI()

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

class GenerationRequest(BaseModel):
    theme: str
    elements_prompts: list[str]
    background_prompt: str

# Configuración de Google GenAI SDK
PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)

def process_and_save_images(theme: str, elements_prompts: list[str], background_prompt: str, folder_path: str):
    try:
        # 1. Configuración del modelo Gemini Flash Image
        model_name = "gemini-2.5-flash-image"
        
        # 2. Generar el Wallpaper (Fondo)
        if background_prompt and background_prompt.lower() != "skip" and background_prompt.lower() != "ninguno":
            print(f"Generando fondo para: {theme}")
            enhanced_bg_prompt = (
                "Wallpaper de fondo para un juego móvil vertical. "
                "ESTILO OBLIGATORIO: Pixel art detallado de 16-bits, estética retro de videojuegos de los 90s, paisaje sereno, inmersivo y muy relajante. "
                "Excelente uso de paletas de color para la iluminación atmosférica (puede ser de noche, atardecer o amanecer). "
                "Completamente libre de UI o texto. "
                f"Tema a representar: {background_prompt}"
            )
            bg_response = client.models.generate_content(
                model=model_name,
                contents=enhanced_bg_prompt,
                config=types.GenerateContentConfig(
                    response_modalities=["IMAGE"],
                    image_config=types.ImageConfig(aspect_ratio="9:16")
                )
            )
            
            # Guardar fondo en JPG
            if bg_response.candidates and bg_response.candidates[0].content.parts[0].inline_data:
                bg_image_bytes = bg_response.candidates[0].content.parts[0].inline_data.data
                bg_image = Image.open(io.BytesIO(bg_image_bytes))
                if bg_image.mode != "RGB":
                    bg_image = bg_image.convert("RGB")
                bg_path = os.path.join(folder_path, "wallpaper.jpg")
                bg_image.save(bg_path, "JPEG")
                print(f"Fondo guardado en {bg_path}")
            
            # Pausa para evitar límite de peticiones justo después del fondo
            time.sleep(5)
        else:
            print(f"Omitiendo generación de fondo para: {theme} (Se conservará el actual)")
            
        # 3. Generar los 8 Elementos
        print(f"Generando {len(elements_prompts)} elementos para: {theme}")
        elements = []
        
        for i, prompt_text in enumerate(elements_prompts):
            print(f"Generando elemento {i+1}...")
            enhanced_elem_prompt = (
                "Crea un Icono 3D moderno y premium para la interfaz de un videojuego móvil llamado 'Glassy'. "
                "ESTILO VISUAL: Estilo de apps móviles modernas, diseño predominantemente BLANCO o cristalino, "
                "glassmorfismo, con reflejos de luz y una textura similar al vidrio o cristal pulido. "
                "Debe verse muy limpio, minimalista, pero con un volumen 3D suave y redondeado. "
                "Puede tener sutiles toques de colores vibrantes (azul, verde, dorado) incrustados en el cristal para mantener la identidad del juego. "
                "ILUMINACIÓN: Iluminación de estudio suave, reflejos brillantes, aspecto táctil, premium y elegante. "
                "Aislado perfectamente en el centro sobre un fondo completamente blanco sólido. Sin marcas de agua. "
                f"Elemento/Ícono a dibujar: {prompt_text}"
            )
            
            # Lógica de reintentos para evadir el error 429
            max_retries = 3
            for attempt in range(max_retries):
                try:
                    elem_response = client.models.generate_content(
                        model=model_name,
                        contents=enhanced_elem_prompt,
                        config=types.GenerateContentConfig(
                            response_modalities=["IMAGE"],
                            image_config=types.ImageConfig(aspect_ratio="1:1")
                        )
                    )
                    break # Si funciona, salimos del bucle de reintentos
                except Exception as e:
                    if "429" in str(e) and attempt < max_retries - 1:
                        print("Límite de API alcanzado (429). Esperando 60 segundos antes de reintentar...")
                        time.sleep(60)
                    else:
                        raise e

            if elem_response.candidates and elem_response.candidates[0].content.parts[0].inline_data:
                elem_image_bytes = elem_response.candidates[0].content.parts[0].inline_data.data
                elements.append(Image.open(io.BytesIO(elem_image_bytes)))
            
            # Pausa obligatoria de 60 segundos entre cada elemento para no saturar la API gratuita
            print("Esperando 60 segundos por límite de cuota...")
            time.sleep(60)
                
        # 4. Quitar el fondo de los elementos y guardarlos
        for i, elem_image in enumerate(elements):
            # Convertir PIL a bytes para rembg
            img_byte_arr = io.BytesIO()
            elem_image.save(img_byte_arr, format='PNG')
            input_bytes = img_byte_arr.getvalue()
            
            # Quitar fondo
            output_bytes = remove(input_bytes)
            
            # Volver a PIL y guardar
            final_image = Image.open(io.BytesIO(output_bytes))
            elem_path = os.path.join(folder_path, f"elemento_{i+1}.png")
            final_image.save(elem_path, "PNG")
            print(f"Elemento {i+1} guardado en {elem_path}")
            
        print("¡Generación completada con éxito!")
        
    except Exception as e:
        print(f"Error durante la generación: {str(e)}")

@app.post("/generate")
async def generate_skins(request: GenerationRequest, background_tasks: BackgroundTasks):
    theme_folder = f"../../skin/{request.theme.replace(' ', '_')}"
    absolute_folder = os.path.abspath(theme_folder)
    os.makedirs(absolute_folder, exist_ok=True)
    
    # Ejecutar la generación pesada en segundo plano para no bloquear el frontend
    background_tasks.add_task(
        process_and_save_images, 
        request.theme, 
        request.elements_prompts, 
        request.background_prompt, 
        absolute_folder
    )
    
    return {
        "status": "procesando", 
        "folder": absolute_folder,
        "message": "Generando imágenes en segundo plano..."
    }

@app.post("/generate-from-md")
async def generate_skins_from_md(request: MarkdownRequest, background_tasks: BackgroundTasks):
    text = request.markdown_text
    
    # Extraer el Nombre de la Temática
    theme_match = re.search(r'\*\*Nombre de la Temática:\*\*\s*(.*)', text)
    if not theme_match:
        return {"status": "error", "message": "No se encontró el Nombre de la Temática en el markdown"}
    theme = theme_match.group(1).strip()
    
    # Extraer los elementos
    elements_prompts = []
    for line in text.split('\n'):
        line = line.strip()
        match = re.match(r'^\d+\.\s*(?:\*\*(.*?)\*\*\s*)?(.*)', line)
        if match:
            content = match.group(2).strip()
            if content:
                elements_prompts.append(content)
                
    # Extraer el fondo
    bg_match = re.search(r'\*\*Fondo \(Wallpaper\):\*\*\n(.*?)(?=\n\n|\Z)', text, re.DOTALL)
    if bg_match:
        background_prompt = bg_match.group(1).strip()
    else:
        background_prompt = ""
        
    theme_folder = f"../../skin/{theme.replace(' ', '_')}"
    absolute_folder = os.path.abspath(theme_folder)
    os.makedirs(absolute_folder, exist_ok=True)
    
    # Ejecutar en segundo plano
    background_tasks.add_task(
        process_and_save_images, 
        theme, 
        elements_prompts, 
        background_prompt, 
        absolute_folder
    )
    
    return {
        "status": "procesando", 
        "folder": absolute_folder,
        "message": f"Generando imágenes de '{theme}' en segundo plano...",
        "elements_found": len(elements_prompts)
    }
