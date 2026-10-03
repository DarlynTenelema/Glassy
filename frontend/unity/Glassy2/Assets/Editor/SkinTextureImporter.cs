using UnityEditor;
using UnityEngine;

public class SkinTextureImporter : AssetPostprocessor
{
    void OnPreprocessTexture()
    {
        // Solo aplicar a las texturas que estén dentro de la carpeta Skins
        if (assetPath.Contains("Resources/Skins"))
        {
            TextureImporter textureImporter = (TextureImporter)assetImporter;
            
            // Forzar habilitación de lectura/escritura en los sprites
            if (!textureImporter.isReadable)
            {
                textureImporter.isReadable = true;
            }
        }
    }
}
