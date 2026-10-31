$ProgressPreference = 'SilentlyContinue'
$ErrorActionPreference = 'Stop'

$baseDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$thirdParty = Join-Path $baseDir "third_party"

Write-Host ">>> Descargando stb_image.h..."
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/nothings/stb/master/stb_image.h" -OutFile "$thirdParty\stb\stb_image.h"

Write-Host ">>> Descargando stb_truetype.h..."
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/nothings/stb/master/stb_truetype.h" -OutFile "$thirdParty\stb\stb_truetype.h"

Write-Host ">>> Descargando miniaudio.h..."
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/mackron/miniaudio/master/miniaudio.h" -OutFile "$thirdParty\miniaudio\miniaudio.h"

# SDL2
Write-Host ">>> Descargando SDL2 MinGW..."
$sdlZip = "$env:TEMP\SDL2-mingw.zip"
Invoke-WebRequest -Uri "https://github.com/libsdl-org/SDL/releases/download/release-2.30.12/SDL2-devel-2.30.12-mingw.zip" -OutFile $sdlZip
Write-Host ">>> Descomprimiendo SDL2..."
Expand-Archive -Path $sdlZip -DestinationPath "$env:TEMP\sdl_temp" -Force
$sdlExtracted = Get-ChildItem "$env:TEMP\sdl_temp\SDL2-*" | Select-Object -First 1
$sdlArch = Join-Path $sdlExtracted.FullName "x86_64-w64-mingw32"
New-Item -ItemType Directory -Force -Path "$thirdParty\SDL2" | Out-Null
Copy-Item -Path "$sdlArch\*" -Destination "$thirdParty\SDL2" -Recurse -Force
Remove-Item -Path $sdlZip -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:TEMP\sdl_temp" -Recurse -Force -ErrorAction SilentlyContinue

# Box2D
Write-Host ">>> Descargando Box2D v2.4.1..."
$boxZip = "$env:TEMP\box2d.zip"
Invoke-WebRequest -Uri "https://github.com/erincatto/box2d/archive/refs/tags/v2.4.1.zip" -OutFile $boxZip
Write-Host ">>> Descomprimiendo Box2D..."
Expand-Archive -Path $boxZip -DestinationPath "$env:TEMP\box_temp" -Force
$boxExtracted = Get-ChildItem "$env:TEMP\box_temp\box2d-*" | Select-Object -First 1
New-Item -ItemType Directory -Force -Path "$thirdParty\box2d" | Out-Null
Copy-Item -Path "$boxExtracted\include" -Destination "$thirdParty\box2d" -Recurse -Force
Copy-Item -Path "$boxExtracted\src" -Destination "$thirdParty\box2d" -Recurse -Force
Copy-Item -Path "$boxExtracted\CMakeLists.txt" -Destination "$thirdParty\box2d\CMakeLists.txt" -Force -ErrorAction SilentlyContinue
Remove-Item -Path $boxZip -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:TEMP\box_temp" -Recurse -Force -ErrorAction SilentlyContinue

Write-Host ">>> Todas las dependencias han sido instaladas con exito en glassy_native/third_party!"

