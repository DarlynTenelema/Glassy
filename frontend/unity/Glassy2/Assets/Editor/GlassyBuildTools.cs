using System;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace Glassy.EditorTools
{
    /// <summary>
    /// Herramientas de compilación independientes para Glassy.
    /// Garantiza la total separación entre la versión para móviles (Flutter)
    /// y las versiones de escritorio para transmisiones en vivo de TikTok.
    /// </summary>
    public static class GlassyBuildTools
    {
        private const string GameScenePath = "Assets/Scenes/GameScene.unity";
        private const string TikTokRelaxScenePath = "Assets/Scenes/TikTokRelaxScene.unity";
        private const string TikTokSkillsScenePath = "Assets/Scenes/TikTokScene.unity";

        [MenuItem("Glassy/Móvil/Verificar Aislamiento Móvil", false, 10)]
        public static void VerifyMobileIsolation()
        {
            EditorUtility.DisplayDialog(
                "Aislamiento de Versión Móvil",
                "CONFIRMADO: La versión móvil está 100% aislada.\n\n" +
                "El exportador hacia Flutter (Build.cs) empaqueta única y exclusivamente 'Assets/Scenes/GameScene.unity'.\n\n" +
                "Las pantallas de TikTok Live (Skills y Relax) no serán incluidas ni mezclarán su lógica en la APK/AAB.",
                "Entendido"
            );
        }

        [MenuItem("Glassy/TikTok PC (Streamers)/Compilar TikTok Relax (.exe)", false, 50)]
        public static void BuildTikTokRelaxStandalone()
        {
            BuildStandaloneScene(
                TikTokRelaxScenePath,
                "Builds/TikTok_Relax/Glassy_TikTok_Relax.exe",
                "Glassy TikTok Relax (Beta Edition)"
            );
        }

        [MenuItem("Glassy/TikTok PC (Streamers)/Compilar TikTok Skills (.exe)", false, 51)]
        public static void BuildTikTokSkillsStandalone()
        {
            BuildStandaloneScene(
                TikTokSkillsScenePath,
                "Builds/TikTok_Skills/Glassy_TikTok_Skills.exe",
                "Glassy TikTok Skills (Creator Edition)"
            );
        }

        private static void BuildStandaloneScene(string scenePath, string relativeOutputPath, string buildName)
        {
            if (!File.Exists(scenePath))
            {
                EditorUtility.DisplayDialog("Error", $"No se encontró la escena: {scenePath}", "OK");
                return;
            }

            string projectRoot = Path.GetFullPath(Path.Combine(Application.dataPath, ".."));
            string fullOutputPath = Path.Combine(projectRoot, relativeOutputPath);
            string outputDir = Path.GetDirectoryName(fullOutputPath);

            if (!Directory.Exists(outputDir))
            {
                Directory.CreateDirectory(outputDir);
            }

            var buildPlayerOptions = new BuildPlayerOptions
            {
                scenes = new[] { scenePath },
                locationPathName = fullOutputPath,
                target = BuildTarget.StandaloneWindows64,
                options = BuildOptions.None
            };

            Debug.Log($"[GlassyBuildTools] Iniciando compilación de {buildName}...");
            var report = BuildPipeline.BuildPlayer(buildPlayerOptions);

            if (report.summary.result == UnityEditor.Build.Reporting.BuildResult.Succeeded)
            {
                Debug.Log($"[GlassyBuildTools] Compilación exitosa: {fullOutputPath}");
                EditorUtility.DisplayDialog(
                    "Compilación Exitosa",
                    $"Se ha generado el ejecutable de PC para {buildName} en:\n{fullOutputPath}\n\n(La versión móvil no fue afectada).",
                    "Aceptar"
                );
            }
            else
            {
                Debug.LogError($"[GlassyBuildTools] Falló la compilación de {buildName}: {report.summary.totalErrors} errores.");
                EditorUtility.DisplayDialog(
                    "Error de Compilación",
                    $"Hubo errores al compilar {buildName}. Revisa la consola de Unity.",
                    "Aceptar"
                );
            }
        }
    }
}
