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
                "Crea un Asset/Icono 2D para un videojuego móvil de puzzles (Clasificación A, apto para todas las edades). "
                "ESTILO VISUAL: Colorido, brillante, redondeado, amigable. Debe tener una estética vibrante, pulida "
                "y muy atractiva tanto para niños como para adultos (estilo arte casual premium), apegate a la realidad sin alterar o agregar tantos detalles raros a los diseños, deben ser amigables para todos los niños, pero nada de caras humanas en los rostros de los animalitos, debe ser su rostro normal y lo mismo con los objetos, nada sobre diseñado, pero sí amigable, infantil, colores llamativos, debe cumplir con las mejores practicas para una skin de un juego de clasificación A"
                "REGLA CRÍTICA SOBRE ROSTROS: Los objetos inanimados (gemas, frutas, dulces) NO DEBEN tener caras, ojos ni sonrisas bajo ninguna circunstancia. "
                "Si el elemento es un animal (ej. tortuga, pez), debe verse adorable, redondito, estilizado y bonito, pero usando exclusivamente su CARA DE ANIMAL NATURAL. "
                "ESTÁ ESTRICTAMENTE PROHIBIDO humanizarlos: no les pongas ojos gigantes de personaje de caricatura, ni cejas, ni sonrisas humanas. Mantenlos como animales naturales pero en una versión muy 'cute' y estilizada. "
                "ILUMINACIÓN: Renderizado 2D con volumen suave, reflejos brillantes y un aspecto 'glassy' o táctil muy agradable. "
                "Aislado perfectamente en el centro sobre un fondo completamente blanco sólido. Sin marcas de agua ni sombras en el suelo. "
                f"Elemento principal a dibujar: {prompt_text}"
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
                        print("Límite de API alcanzado (429). Esperando 30 segundos antes de reintentar...")
                        time.sleep(30)
                    else:
                        raise e

            if elem_response.candidates and elem_response.candidates[0].content.parts[0].inline_data:
                elem_image_bytes = elem_response.candidates[0].content.parts[0].inline_data.data
                elements.append(Image.open(io.BytesIO(elem_image_bytes)))
            
            # Pausa obligatoria de 15 segundos entre cada elemento para no saturar la API gratuita
            print("Esperando 15 segundos por límite de cuota...")
            time.sleep(15)
                
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


import os
import io
import time
import re
import base64
from typing import Optional, List, Dict, Any
from fastapi import FastAPI, BackgroundTasks, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from fastapi.staticfiles import StaticFiles
from pydantic import BaseModel
from dotenv import load_dotenv
from google import genai
from google.genai import types
from rembg import remove, new_session
from PIL import Image

# Cargar variables de entorno desde el archivo .env
load_dotenv(dotenv_path="../.env", override=True)

app = FastAPI(title="Glassy Skins Generator & Studio API")

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

# Rutas del sistema de archivos
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
SKINS_OUTPUT_DIR = os.path.abspath(os.path.join(BASE_DIR, "../../skin"))
UNITY_GEMS_DIR = os.path.abspath(os.path.join(BASE_DIR, "../../../frontend/unity/Glassy2/Assets/Gemas"))

os.makedirs(SKINS_OUTPUT_DIR, exist_ok=True)
app.mount("/skins-output", StaticFiles(directory=SKINS_OUTPUT_DIR), name="skins_output")

if os.path.exists(UNITY_GEMS_DIR):
    app.mount("/unity-gems", StaticFiles(directory=UNITY_GEMS_DIR), name="unity_gems")
    print(f"Carpeta de gemas Unity montada desde: {UNITY_GEMS_DIR}")
else:
    print(f"Aviso: Carpeta de gemas Unity no encontrada en {UNITY_GEMS_DIR}")

# Sesión global u2net para rembg (ligera y pre-cargada)
print("Cargando sesión u2net para rembg...")
rembg_session = new_session("u2net")
print("Sesión u2net lista.")

# Configuración de Google GenAI SDK
PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)
MODEL_NAME = "gemini-2.5-flash-image"

# Metadatos canónicos de las 8 gemas predeterminadas
DEFAULT_GEMS_DATA = [
    {
        "id": 1,
        "name": "Perla",
        "unity_file": "perla.png",
        "color": "#e2e8f0",
        "tier": 1,
        "default_prompt": "Perla esférica perfecta, de textura suave y nacarada color blanco marfil brillante, con lustre iridiscente pulido y reflejos limpios, estilo asset 2D animado redondeado y pulcro."
    },
    {
        "id": 2,
        "name": "Esmeralda",
        "unity_file": "esmeralda.png",
        "color": "#10b981",
        "tier": 2,
        "default_prompt": "Esmeralda verde brillante con corte octagonal clásico ('emerald cut'), facetas geométricas simétricas bien definidas, esquinas biseladas, color verde esmeralda saturado y cristalino con reflejos luminosos, estilo asset 2D vibrante."
    },
    {
        "id": 3,
        "name": "Amatista",
        "unity_file": "amatista.png",
        "color": "#a855f7",
        "tier": 3,
        "default_prompt": "Gema de amatista pulida estilo canto rodado suavemente redondeado, color violeta púrpura profundo y translúcido, con vetas luminosas internas y brillo cristalino suave, estilo asset 2D amigable."
    },
    {
        "id": 4,
        "name": "Topacio",
        "unity_file": "topacio.png",
        "color": "#f59e0b",
        "tier": 4,
        "default_prompt": "Topacio dorado con corte poligonal facetado redondeado, color ámbar brillante y amarillo miel resplandeciente, con múltiples facetas internas que reflejan luz cálida dorada, estilo asset 2D pulido."
    },
    {
        "id": 5,
        "name": "Peridoto",
        "unity_file": "peridoto.png",
        "color": "#84cc16",
        "tier": 5,
        "default_prompt": "Peridoto verde lima radiante con corte brillante circular, múltiples facetas triangulares concéntricas, tono verde manzana vibrante y translúcido con destellos frescos, estilo asset 2D alegre."
    },
    {
        "id": 6,
        "name": "Zafiro",
        "unity_file": "zafiro.png",
        "color": "#3b82f6",
        "tier": 6,
        "default_prompt": "Zafiro azul real profundo con corte circular brillante facetado, facetas nítidas concéntricas, color azul cobalto y destellos de luz azul eléctrica cristalina, estilo asset 2D noble y llamativo."
    },
    {
        "id": 7,
        "name": "Rubí",
        "unity_file": "rubi.png",
        "color": "#ef4444",
        "tier": 7,
        "default_prompt": "Rubí rojo carmesí brillante con corte clásico de gema en perspectiva frontal, corona plana superior y facetas angulares afiladas descendentes hacia el pabellón, color rojo fuego cristalino con destellos ardientes, estilo asset 2D impactante."
    },
    {
        "id": 8,
        "name": "Diamante",
        "unity_file": "diamante.png",
        "color": "#38bdf8",
        "tier": 8,
        "default_prompt": "Diamante blanco puro majestuoso con corte brillante clásico, facetas geométricas triangulares y romboidales perfectamente definidas, refracción cristalina deslumbrante con destellos de luz plateada y prisma celeste, estilo asset 2D premium y resplandeciente."
    }
]

# Modelos Pydantic
class MarkdownRequest(BaseModel):
    markdown_text: str

class GenerationRequest(BaseModel):
    theme: str
    elements_prompts: list[str]
    background_prompt: str

class SingleElementRequest(BaseModel):
    theme: str
    element_index: int
    prompt: str
    reference_unity_gem: Optional[str] = None
    reference_base64: Optional[str] = None

# Función auxiliar para generar imagen con Gemini
def generate_gem_with_gemini(prompt_text: str, reference_image: Optional[Image.Image] = None) -> bytes:
    if reference_image:
        enhanced_prompt = (
            "INSTRUCCIÓN CRÍTICA DE REFERENCIA VISUAL: "
            "TOMA COMO REFERENCIA DIRECTA Y PRECISA LA IMAGEN DE ENTRADA PROPORCIONADA. "
            "Recrea esta misma gema como un Asset/Icono 2D para un videojuego móvil de puzzles casual (estilo Glassy). "
            "PAUTAS ESTÉTICAS Y DE DISEÑO OBLIGATORIAS: "
            "1. CONSERVA EXACTAMENTE la forma, silueta, proporción, corte geométrico, ángulo de perspectiva y facetas originales de la gema de referencia. "
            "2. ESTILO VISUAL PREMIUM: Versión 2D animada, vibrante, 'juicy' y táctil. Proporciona mayor volumen suave, reflejos luminosos limpios estilo cristal ('glassy'), colores saturados y brillantes sin quemar la textura. "
            "3. FONDO Y ENCUADRE: Aislada perfectamente en el centro sobre fondo blanco sólido uniforme. Cero sombras en el suelo, sin marcas de agua ni viñeteados. "
            "4. REGLA DE ROSTROS: ESTÁ ESTRICTAMENTE PROHIBIDO ponerle caras, ojos, sonrisas o humanizar el objeto. Debe ser una gema o mineral puro, elegante y estético. "
            f"5. DETALLES ESPECÍFICOS DEL ELEMENTO: {prompt_text}"
        )
        contents = [reference_image, enhanced_prompt]
    else:
        enhanced_prompt = (
            "Crea un Asset/Icono 2D para un videojuego móvil de puzzles (Clasificación A, apto para todas las edades). "
            "ESTILO VISUAL: Colorido, brillante, redondeado, amigable. Estética vibrante, pulida "
            "y muy atractiva tanto para niños como para adultos (estilo arte casual premium). "
            "REGLA CRÍTICA SOBRE ROSTROS: Los objetos inanimados (gemas, frutas, dulces) NO DEBEN tener caras, ojos ni sonrisas bajo ninguna circunstancia. "
            "ILUMINACIÓN: Renderizado 2D con volumen suave, reflejos brillantes y un aspecto 'glassy' o táctil muy agradable. "
            "Aislado perfectamente en el centro sobre un fondo completamente blanco sólido. Sin marcas de agua ni sombras en el suelo. "
            f"Elemento principal a dibujar: {prompt_text}"
        )
        contents = [enhanced_prompt]

    max_retries = 3
    for attempt in range(max_retries):
        try:
            response = client.models.generate_content(
                model=MODEL_NAME,
                contents=contents,
                config=types.GenerateContentConfig(
                    response_modalities=["IMAGE"],
                    image_config=types.ImageConfig(aspect_ratio="1:1")
                )
            )
            if response.candidates and response.candidates[0].content.parts[0].inline_data:
                return response.candidates[0].content.parts[0].inline_data.data
            raise RuntimeError("Respuesta de Gemini sin datos de imagen.")
        except Exception as e:
            if "429" in str(e) and attempt < max_retries - 1:
                print("Límite de API alcanzado (429). Esperando 30 segundos antes de reintentar...")
                time.sleep(30)
            else:
                raise e

# Función auxiliar para quitar fondo y guardar en disco
def remove_bg_and_save(image_bytes: bytes, target_path: str):
    try:
        output_bytes = remove(image_bytes, session=rembg_session)
        final_image = Image.open(io.BytesIO(output_bytes))
    except Exception as rembg_err:
        print(f"Aviso al quitar fondo ({rembg_err}). Guardando imagen original...")
        final_image = Image.open(io.BytesIO(image_bytes))

    os.makedirs(os.path.dirname(target_path), exist_ok=True)
    final_image.save(target_path, "PNG")
    print(f"Archivo guardado exitosamente en {target_path}")

# Función para procesamiento secuencial de batch
def process_and_save_images(theme: str, elements_prompts: list[str], background_prompt: str, folder_path: str):
    try:
        # 1. Generar el Wallpaper (Fondo)
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
                model=MODEL_NAME,
                contents=enhanced_bg_prompt,
                config=types.GenerateContentConfig(
                    response_modalities=["IMAGE"],
                    image_config=types.ImageConfig(aspect_ratio="9:16")
                )
            )
            if bg_response.candidates and bg_response.candidates[0].content.parts[0].inline_data:
                bg_image_bytes = bg_response.candidates[0].content.parts[0].inline_data.data
                bg_image = Image.open(io.BytesIO(bg_image_bytes))
                if bg_image.mode != "RGB":
                    bg_image = bg_image.convert("RGB")
                bg_path = os.path.join(folder_path, "wallpaper.jpg")
                bg_image.save(bg_path, "JPEG")
                print(f"Fondo guardado en {bg_path}")
            time.sleep(5)
        else:
            print(f"Omitiendo generación de fondo para: {theme} (Se conservará el actual)")

        # 2. Generar elementos secuencialmente
        print(f"Generando {len(elements_prompts)} elementos para: {theme}")
        for i, prompt_text in enumerate(elements_prompts):
            print(f"Generando elemento {i+1}...")
            img_bytes = generate_gem_with_gemini(prompt_text)
            elem_path = os.path.join(folder_path, f"elemento_{i+1}.png")
            remove_bg_and_save(img_bytes, elem_path)
            
            if i < len(elements_prompts) - 1:
                print("Esperando 15 segundos por límite de cuota...")
                time.sleep(15)

        print("¡Generación completada con éxito!")
    except Exception as e:
        print(f"Error durante la generación: {str(e)}")

# ==================== ENDPOINTS DE LA API ====================

@app.get("/api/default-gems")
def get_default_gems():
    """Retorna los datos y rutas de las 8 gemas canónicas."""
    results = []
    for g in DEFAULT_GEMS_DATA:
        gem_copy = dict(g)
        unity_file_path = os.path.join(UNITY_GEMS_DIR, g["unity_file"])
        if os.path.exists(unity_file_path):
            gem_copy["unity_url"] = f"/unity-gems/{g['unity_file']}"
        else:
            gem_copy["unity_url"] = None
        results.append(gem_copy)
    return results

@app.get("/api/theme-status/{theme}")
def get_theme_status(theme: str):
    """Consulta las imágenes generadas actualmente para una temática dada."""
    folder_name = theme.replace(" ", "_")
    target_folder = os.path.join(SKINS_OUTPUT_DIR, folder_name)
    now_ts = int(time.time())

    elements = []
    for i in range(1, 9):
        file_path = os.path.join(target_folder, f"elemento_{i}.png")
        if os.path.exists(file_path):
            elements.append({
                "index": i,
                "exists": True,
                "url": f"/skins-output/{folder_name}/elemento_{i}.png?t={now_ts}",
                "size_bytes": os.path.getsize(file_path)
            })
        else:
            elements.append({
                "index": i,
                "exists": False,
                "url": None,
                "size_bytes": 0
            })

    bg_path = os.path.join(target_folder, "wallpaper.jpg")
    bg_exists = os.path.exists(bg_path)
    bg_url = f"/skins-output/{folder_name}/wallpaper.jpg?t={now_ts}" if bg_exists else None

    return {
        "theme": theme,
        "folder": target_folder,
        "elements": elements,
        "wallpaper": {
            "exists": bg_exists,
            "url": bg_url
        }
    }

@app.post("/api/generate-single-element")
async def generate_single_element(req: SingleElementRequest):
    """Genera o regenera un único elemento, con o sin imagen de referencia."""
    folder_name = req.theme.replace(" ", "_")
    target_folder = os.path.join(SKINS_OUTPUT_DIR, folder_name)
    os.makedirs(target_folder, exist_ok=True)

    ref_img = None

    # 1. Cargar imagen de referencia si viene de base64
    if req.reference_base64:
        try:
            # Limpiar header tipo data:image/png;base64,
            base64_data = re.sub(r"^data:image/.+;base64,", "", req.reference_base64)
            img_bytes = base64.b64decode(base64_data)
            ref_img = Image.open(io.BytesIO(img_bytes))
            print(f"Imagen de referencia cargada desde Base64 ({ref_img.size})")
        except Exception as e:
            print(f"Error al decodificar imagen base64: {e}")

    # 2. Cargar imagen de referencia desde Unity si está especificada
    elif req.reference_unity_gem:
        unity_file = os.path.join(UNITY_GEMS_DIR, req.reference_unity_gem)
        if os.path.exists(unity_file):
            try:
                ref_img = Image.open(unity_file)
                print(f"Imagen de referencia cargada desde Unity: {unity_file} ({ref_img.size})")
            except Exception as e:
                print(f"Error al abrir archivo de Unity {unity_file}: {e}")

    # 3. Generar con Gemini
    print(f"Iniciando generación de elemento {req.element_index} para temática '{req.theme}'...")
    try:
        raw_bytes = generate_gem_with_gemini(req.prompt, reference_image=ref_img)
        elem_path = os.path.join(target_folder, f"elemento_{req.element_index}.png")
        remove_bg_and_save(raw_bytes, elem_path)

        now_ts = int(time.time())
        return {
            "status": "success",
            "element_index": req.element_index,
            "url": f"/skins-output/{folder_name}/elemento_{req.element_index}.png?t={now_ts}",
            "message": f"Elemento {req.element_index} generado con éxito."
        }
    except Exception as e:
        print(f"Error generando elemento {req.element_index}: {e}")
        raise HTTPException(status_code=500, detail=str(e))

@app.post("/generate")
async def generate_skins(request: GenerationRequest, background_tasks: BackgroundTasks):
    theme_folder = f"../../skin/{request.theme.replace(' ', '_')}"
    absolute_folder = os.path.abspath(theme_folder)
    os.makedirs(absolute_folder, exist_ok=True)
    
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
    
    theme_match = re.search(r'\*\*Nombre de la Temática:\*\*\s*(.*)', text)
    if not theme_match:
        return {"status": "error", "message": "No se encontró el Nombre de la Temática en el markdown"}
    theme = theme_match.group(1).strip()
    
    elements_prompts = []
    for line in text.split('\n'):
        line = line.strip()
        match = re.match(r'^\d+\.\s*(?:\*\*(.*?)\*\*\s*)?(.*)', line)
        if match:
            content = match.group(2).strip()
            if content:
                elements_prompts.append(content)
                
    bg_match = re.search(r'\*\*Fondo \(Wallpaper\):\*\*\n(.*?)(?=\n\n|\Z)', text, re.DOTALL)
    if bg_match:
        background_prompt = bg_match.group(1).strip()
    else:
        background_prompt = ""
        
    theme_folder = f"../../skin/{theme.replace(' ', '_')}"
    absolute_folder = os.path.abspath(theme_folder)
    os.makedirs(absolute_folder, exist_ok=True)
    
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
