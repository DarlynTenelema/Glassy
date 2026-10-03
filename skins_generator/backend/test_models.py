import os
from dotenv import load_dotenv
import vertexai
from vertexai.preview.vision_models import ImageGenerationModel

load_dotenv(dotenv_path="../.env")

PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
vertexai.init(project=PROJECT_ID, location=LOCATION)

models = [
    "imagegeneration@005",
    "imagegeneration@002",
    "imagen-3.0-fast-generate-001",
    "imagegeneration"
]

for m in models:
    print(f"Probando {m}...")
    try:
        model = ImageGenerationModel.from_pretrained(m)
        print(f"Exito cargando {m}")
        break
    except Exception as e:
        print(f"Error con {m}: {e}")
