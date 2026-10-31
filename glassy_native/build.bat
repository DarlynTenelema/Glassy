@echo off
setlocal

set CMAKE_PATH="C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

if not exist %CMAKE_PATH% (
    set CMAKE_PATH=cmake
)

echo ===================================================
echo   Compilando Glassy Native Engine con MinGW...
echo ===================================================

%CMAKE_PATH% -B build -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
if %ERRORLEVEL% neq 0 (
    echo [ERROR] Fallo en la configuracion de CMake.
    exit /b %ERRORLEVEL%
)

%CMAKE_PATH% --build build --config Release -j
if %ERRORLEVEL% neq 0 (
    echo [ERROR] Fallo en la compilacion.
    exit /b %ERRORLEVEL%
)

echo.
echo ===================================================
echo   COMPILACION COMPLETADA CON EXITO!
echo   Ejecutable: build\GlassyNative.exe
echo ===================================================

