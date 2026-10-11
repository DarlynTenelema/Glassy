using UnityEditor;
using UnityEngine;
using System.IO;

public class SkinTextureImporter : AssetPostprocessor
{
    // Pixels Per Unit óptimo para que las imágenes de 1024x1024 tengan el mismo tamaño físico (3.5 unidades) que las gemas base
    public const float TARGET_PPU = 292f;

    void OnPreprocessTexture()
    {
        // Solo aplicar a las texturas que estén dentro de la carpeta Skins
        if (assetPath.Contains("Resources/Skins") && assetPath.EndsWith(".png", System.StringComparison.OrdinalIgnoreCase))
        {
            // Omitir wallpapers para no alterar fondos verticales
            if (assetPath.ToLower().Contains("wallpaper")) return;

            TextureImporter textureImporter = (TextureImporter)assetImporter;
            textureImporter.textureType = TextureImporterType.Sprite;
            textureImporter.spriteImportMode = SpriteImportMode.Single;
            textureImporter.spritePixelsPerUnit = TARGET_PPU;
            textureImporter.isReadable = true;
        }
    }

    [MenuItem("Glassy/Skins/Sincronizar y Calibrar Todas las Skins (1 Clic)")]
    public static void SyncAllSkins()
    {
        string[] guids = AssetDatabase.FindAssets("t:Texture2D", new[] { "Assets/Resources/Skins" });
        int count = 0;

        EditorUtility.DisplayProgressBar("Calibrando Skins de Glassy", "Configurando resolución, PPU y modo Sprite en todas las skins...", 0f);

        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                string path = AssetDatabase.GUIDToAssetPath(guids[i]);
                if (path.EndsWith(".png", System.StringComparison.OrdinalIgnoreCase) && !path.ToLower().Contains("wallpaper"))
                {
                    TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
                    if (importer != null)
                    {
                        importer.textureType = TextureImporterType.Sprite;
                        importer.spriteImportMode = SpriteImportMode.Single;
                        importer.spritePixelsPerUnit = TARGET_PPU;
                        importer.isReadable = true;
                        importer.SaveAndReimport();
                        count++;
                    }
                }

                EditorUtility.DisplayProgressBar("Calibrando Skins de Glassy", $"Procesando {Path.GetFileName(path)}...", (float)i / guids.Length);
            }
        }
        finally
        {
            EditorUtility.ClearProgressBar();
        }

        AssetDatabase.Refresh();
        Debug.Log($"<color=#00d2ff><b>[SkinTextureImporter]</b> ¡Éxito! Se calibraron automáticamente {count} texturas de skins con Pixels Per Unit = {TARGET_PPU}.</color>");
        EditorUtility.DisplayDialog("Calibración Completada", $"Se han calibrado automáticamente {count} skins a Pixels Per Unit {TARGET_PPU}.\nAhora todas las skins tendrán el mismo tamaño y zona táctil que las gemas predeterminadas.", "Entendido");
    }
}
