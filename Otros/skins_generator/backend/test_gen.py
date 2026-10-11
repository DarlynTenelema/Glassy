import os
from dotenv import load_dotenv
import vertexai
from vertexai.preview.vision_models import ImageGenerationModel
from main import process_and_save_images

load_dotenv(dotenv_path="../.env")

# Configurar credenciales y Vertex AI manualmente para el test si es necesario
PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
vertexai.init(project=PROJECT_ID, location=LOCATION)

if __name__ == "__main__":
    theme = "Vida Marina"
    elements_prompts = [
        "Plancton minúsculo azul bioluminiscente",
        "Pequeño pez payaso naranja y blanco",
        "Caballito de mar verde esmeralda",
        "Pez globo amarillo espinoso",
        "Estrella de mar naranja brillante",
        "Medusa rosa fosforescente",
        "Pulpo morado con grandes ojos tiernos",
        "Tiburón ballena azul marino gigante majestuoso"
    ]
    background_prompt = "Fondo submarino profundo, oscuro con rayos de luz penetrando desde la superficie, misterioso y hermoso, estilo vibrante"
    
    theme_folder = f"../../skin/{theme.lower().replace(' ', '_')}"
    absolute_folder = os.path.abspath(theme_folder)
    os.makedirs(absolute_folder, exist_ok=True)
    
    print(f"Iniciando prueba de generación de imágenes para: {theme}")
    print(f"Guardando en: {absolute_folder}")
    
    process_and_save_images(theme, elements_prompts, background_prompt, absolute_folder)
    print("Prueba completada.")
