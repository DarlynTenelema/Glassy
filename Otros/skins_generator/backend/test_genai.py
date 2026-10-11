import os
import io
from dotenv import load_dotenv
from google import genai
from google.genai import types
from PIL import Image

load_dotenv(dotenv_path="../.env")
PROJECT_ID = os.getenv("GOOGLE_CLOUD_PROJECT")
LOCATION = os.getenv("GOOGLE_CLOUD_LOCATION", "us-central1")
client = genai.Client(vertexai=True, project=PROJECT_ID, location=LOCATION)

try:
    print("Testing generate_content for image...")
    response = client.models.generate_content(
        model="gemini-2.5-flash-image",
        contents="A cute white cat pixel art",
        config=types.GenerateContentConfig(
            response_modalities=["IMAGE"],
            image_config=types.ImageConfig(aspect_ratio="1:1")
        )
    )
    if response.candidates and response.candidates[0].content.parts[0].inline_data:
        print("SUCCESS!")
    else:
        print("No image data returned.")
except Exception as e:
    print(f"FAILED: {e}")
