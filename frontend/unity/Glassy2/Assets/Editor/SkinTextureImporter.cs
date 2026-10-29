using UnityEditor;
using UnityEngine;
using System.IO;

public class SkinTextureImporter : AssetPostprocessor
{
    // Pixels Per Unit óptimo para que las imágenes de 1024x1024 tengan el mismo tamaño físico (3.5 unidades) que las gemas base
    public const float TARGET_PPU = 292f;
    public const int TARGET_CONTENT_SIZE = 820; // ~80% de 1024x1024 para igualar las gemas base
    public const int CANVAS_SIZE = 1024;

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
            textureImporter.alphaIsTransparency = true;
        }
    }

    [MenuItem("Glassy/Skins/Sincronizar y Calibrar Todas las Skins (1 Clic)")]
    public static void SyncAllSkins()
    {
        string[] guids = AssetDatabase.FindAssets("t:Texture2D", new[] { "Assets/Resources/Skins" });
        int count = 0;
        int normalizedCount = 0;

        EditorUtility.DisplayProgressBar("Calibrando Skins de Glassy", "Analizando y calibrando escala de todas las skins...", 0f);

        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                string path = AssetDatabase.GUIDToAssetPath(guids[i]);
                if (path.EndsWith(".png", System.StringComparison.OrdinalIgnoreCase) && !path.ToLower().Contains("wallpaper"))
                {
                    bool wasNormalized = NormalizeTextureIfNeeded(path);
                    if (wasNormalized) normalizedCount++;

                    TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
                    if (importer != null)
                    {
                        importer.textureType = TextureImporterType.Sprite;
                        importer.spriteImportMode = SpriteImportMode.Single;
                        importer.spritePixelsPerUnit = TARGET_PPU;
                        importer.isReadable = true;
                        importer.alphaIsTransparency = true;
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
        Debug.Log($"<color=#00d2ff><b>[SkinTextureImporter]</b> ¡Éxito! Se calibraron {count} texturas (Normalizadas: {normalizedCount}) con Pixels Per Unit = {TARGET_PPU} y contenido estándar a {TARGET_CONTENT_SIZE}px.</color>");
        EditorUtility.DisplayDialog("Calibración Completada", $"Se han calibrado {count} texturas de skins.\n- Normalizadas a escala estándar: {normalizedCount}\n- Pixels Per Unit: {TARGET_PPU}\n\nTodas las skins ahora tienen exactamente el mismo tamaño, colisionadores y progresión que las gemas clásicas.", "Excelente");
    }

    /// <summary>
    /// Detecta si una textura tiene un tamaño de dibujo menor a la norma y la re-centra y normaliza al 80% (820px)
    /// </summary>
    private static bool NormalizeTextureIfNeeded(string assetPath)
    {
        byte[] fileData = File.ReadAllBytes(assetPath);
        Texture2D tex = new Texture2D(2, 2);
        if (!tex.LoadImage(fileData)) return false;

        int w = tex.width;
        int h = tex.height;
        if (w < 100 || h < 100) return false;

        Color32[] pixels = tex.GetPixels32();
        int minX = w, maxX = 0, minY = h, maxY = 0;
        bool hasVisiblePixels = false;

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                if (pixels[y * w + x].a > 10) // Umbral de transparencia
                {
                    hasVisiblePixels = true;
                    if (x < minX) minX = x;
                    if (x > maxX) maxX = x;
                    if (y < minY) minY = y;
                    if (y > maxY) maxY = y;
                }
            }
        }

        if (!hasVisiblePixels) return false;

        int contentW = maxX - minX + 1;
        int contentH = maxY - minY + 1;
        int maxDim = Mathf.Max(contentW, contentH);

        // Si ya está cerca del tamaño objetivo (entre 800 y 850) y centrado, no requiere re-escalado
        int centerX = (minX + maxX) / 2;
        int centerY = (minY + maxY) / 2;
        bool isSizeOk = maxDim >= (TARGET_CONTENT_SIZE - 20) && maxDim <= (TARGET_CONTENT_SIZE + 20);
        bool isCentered = Mathf.Abs(centerX - w / 2) < 20 && Mathf.Abs(centerY - h / 2) < 20;

        if (isSizeOk && isCentered && w == CANVAS_SIZE && h == CANVAS_SIZE)
        {
            return false;
        }

        // Re-escalar y re-centrar
        float scale = (float)TARGET_CONTENT_SIZE / maxDim;
        int targetW = Mathf.RoundToInt(contentW * scale);
        int targetH = Mathf.RoundToInt(contentH * scale);

        Texture2D result = new Texture2D(CANVAS_SIZE, CANVAS_SIZE, TextureFormat.RGBA32, false);
        Color32[] clearPixels = new Color32[CANVAS_SIZE * CANVAS_SIZE];
        result.SetPixels32(clearPixels);

        int destStartX = (CANVAS_SIZE - targetW) / 2;
        int destStartY = (CANVAS_SIZE - targetH) / 2;

        for (int dy = 0; dy < targetH; dy++)
        {
            float srcY = minY + ((float)dy / targetH) * contentH;
            int sy0 = Mathf.Clamp(Mathf.FloorToInt(srcY), 0, h - 1);
            int sy1 = Mathf.Clamp(sy0 + 1, 0, h - 1);
            float ty = srcY - sy0;

            for (int dx = 0; dx < targetW; dx++)
            {
                float srcX = minX + ((float)dx / targetW) * contentW;
                int sx0 = Mathf.Clamp(Mathf.FloorToInt(srcX), 0, w - 1);
                int sx1 = Mathf.Clamp(sx0 + 1, 0, w - 1);
                float tx = srcX - sx0;

                // Muestreo bilineal suave
                Color c00 = pixels[sy0 * w + sx0];
                Color c10 = pixels[sy0 * w + sx1];
                Color c01 = pixels[sy1 * w + sx0];
                Color c11 = pixels[sy1 * w + sx1];

                Color interpolated = Color.Lerp(Color.Lerp(c00, c10, tx), Color.Lerp(c01, c11, tx), ty);
                if (interpolated.a > 0.01f)
                {
                    result.SetPixel(destStartX + dx, destStartY + dy, interpolated);
                }
            }
        }

        result.Apply();
        byte[] pngData = result.EncodeToPNG();
        File.WriteAllBytes(assetPath, pngData);

        return true;
    }
}
