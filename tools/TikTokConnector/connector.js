/**
 * Glassy TikTok Live Connector — Conector Oficial para TikTok Live Streamers
 * 
 * Este puente escucha los eventos en vivo de tu canal de TikTok y los reenvía
 * en milisegundos al juego Glassy para PC (http://localhost:8086).
 * Incluye descarga y conversión acelerada de avatares con Sharp (WebP/JPEG -> PNG).
 */

const http = require('http');
const readline = require('readline');
const fs = require('fs');
const path = require('path');
const sharp = require('sharp');

// Importación robusta nativa de tiktok-live-connector v2
const { TikTokLiveConnection, WebcastEvent } = require('tiktok-live-connector');

// Configuración del servidor del juego (soporta tanto TikTokScene 8085 como TikTokRelaxScene 8086)
const GAME_HOST = '127.0.0.1';
const GAME_PORTS = [8085, 8086];

// Directorio local de almacenamiento de avatares
const AVATARS_DIR = path.join(__dirname, 'avatars');
if (!fs.existsSync(AVATARS_DIR)) {
    fs.mkdirSync(AVATARS_DIR, { recursive: true });
}

// Colores ANSI para la consola de Windows
const RESET = '\x1b[0m';
const BOLD = '\x1b[1m';
const CYAN = '\x1b[36m';
const GREEN = '\x1b[32m';
const YELLOW = '\x1b[33m';
const RED = '\x1b[31m';
const MAGENTA = '\x1b[35m';

function printBanner() {
    console.clear();
    console.log(CYAN + BOLD);
    console.log('╔══════════════════════════════════════════════════════════════╗');
    console.log('║               GLASSY TIKTOK LIVE CONNECTOR                   ║');
    console.log('║       Puente Oficial para Streams Interactivos de Glassy     ║');
    console.log('║        Con Soporte de Fotos de Perfil en Gemas (HD)          ║');
    console.log('╚══════════════════════════════════════════════════════════════╝' + RESET);
    console.log();
}

function sendToGame(urlPath, params = {}) {
    const query = new URLSearchParams(params).toString();
    
    // Enviar a todos los puertos activos de Glassy (8085 y 8086)
    GAME_PORTS.forEach(port => {
        const url = `http://${GAME_HOST}:${port}${urlPath}?${query}`;
        http.get(url, (res) => {
            // Respuesta recibida de Unity
        }).on('error', () => {
            // Silencioso si ese puerto específico no está escuchando
        });
    });
}

/**
 * Obtiene la mejor URL de avatar (prefiere JPEG o PNG antes que WebP para compatibilidad).
 */
function extractBestAvatarUrl(data) {
    const urls = [];
    if (data.profilePictureUrl) urls.push(data.profilePictureUrl);
    if (data.user) {
        if (data.user.avatarLarge && Array.isArray(data.user.avatarLarge.urlList)) urls.push(...data.user.avatarLarge.urlList);
        if (data.user.avatarMedium && Array.isArray(data.user.avatarMedium.urlList)) urls.push(...data.user.avatarMedium.urlList);
        if (data.user.avatarThumb && Array.isArray(data.user.avatarThumb.urlList)) urls.push(...data.user.avatarThumb.urlList);
        if (Array.isArray(data.user.profilePictureUrls)) urls.push(...data.user.profilePictureUrls);
        if (typeof data.user.avatarThumb === 'string') urls.push(data.user.avatarThumb);
    }
    if (data.userDetails && Array.isArray(data.userDetails.profilePictureUrls)) urls.push(...data.userDetails.profilePictureUrls);

    // 1. Buscar variante jpeg / jpg / png
    for (const u of urls) {
        if (typeof u === 'string' && (u.includes('.jpeg') || u.includes('.jpg') || u.includes('.png'))) {
            return u;
        }
    }

    // 2. Si es webp de TikTok CDN, TikTok sirve jpeg si cambiamos la extensión
    let best = urls[0] || '';
    if (typeof best === 'string' && best.includes('.webp')) {
        best = best.replace(/\.webp(\?|$)/i, '.jpeg$1');
    }
    return best;
}

/**
 * Descarga y convierte el avatar a un PNG circular nítido de 256x256 guardado en disco.
 */
async function cacheAvatarToDisk(username, avatarUrl) {
    if (!avatarUrl || !avatarUrl.startsWith('http')) return null;

    const cleanName = username.replace(/[^a-zA-Z0-9_-]/g, '_');
    const localFile = path.join(AVATARS_DIR, `${cleanName}.png`);

    try {
        const controller = new AbortController();
        const timeoutId = setTimeout(() => controller.abort(), 4000);

        const res = await fetch(avatarUrl, {
            headers: {
                'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36'
            },
            signal: controller.signal
        });
        clearTimeout(timeoutId);

        if (!res.ok) return null;

        const buffer = Buffer.from(await res.arrayBuffer());
        if (buffer.length === 0) return null;

        // Convertir y guardar en PNG de 256x256 con Sharp
        await sharp(buffer)
            .resize(256, 256, { fit: 'cover' })
            .png()
            .toFile(localFile);

        return localFile.replace(/\\/g, '/');
    } catch (err) {
        // En caso de fallo o timeout de red, devuelve null y Unity usará fallback
        return null;
    }
}

function startConnection(username) {
    username = username.trim().replace(/^@/, '');

    if (!username) {
        console.log(RED + '❌ Debes ingresar un nombre de usuario válido.' + RESET);
        promptUser();
        return;
    }

    // Modo de prueba sin necesidad de estar en vivo en TikTok
    if (username.toLowerCase() === 'test' || username.toLowerCase() === 'demo') {
        runTestSimulation();
        return;
    }

    console.log(YELLOW + `[⏳] Conectando a la transmisión en vivo de @${username}...` + RESET);

    // Conexión libre v2 directa sin requerir planes de terceros
    const tiktokLive = new TikTokLiveConnection(username, {
        processInitialData: false
    });

    tiktokLive.connect().then(state => {
        console.log(GREEN + BOLD + `[✅] ¡CONECTADO EXITOSAMENTE A @${username}!` + RESET);
        console.log(CYAN + `[🎮] Conexión activa. Enviando eventos a Glassy PC.` + RESET);
        console.log('─'.repeat(60));
    }).catch(err => {
        console.log(RED + `[❌] Error al conectar con @${username}: ${err.message}` + RESET);
        console.log(YELLOW + 'Verifica que tu transmisión en vivo esté ACTIVA en TikTok e inténtalo de nuevo.' + RESET);
        setTimeout(promptUser, 4000);
    });

    // 1. CHAT (Comentarios y Emojis)
    tiktokLive.on('chat', data => {
        const user = (data.user && (data.user.uniqueId || data.user.displayId || data.user.nickname)) || data.uniqueId || 'Espectador';
        const comment = data.content || data.comment || '';

        console.log(`${CYAN}💬 [@${user}]:${RESET} ${comment}`);
        sendToGame('/comment', { user, text: comment });
    });

    // 2. LIKES (Retos de la comunidad)
    tiktokLive.on('like', data => {
        const user = (data.user && (data.user.uniqueId || data.user.displayId || data.user.nickname)) || data.uniqueId || 'Espectador';
        const count = data.count || data.likeCount || 1;

        console.log(`${YELLOW}❤️ [@${user}] envió ${count} Likes${RESET}`);
        sendToGame('/likes', { user, count });
    });

    // 3. REGALOS (Gifts monetizados)
    tiktokLive.on('gift', async data => {
        const giftType = (data.giftDetails && data.giftDetails.giftType) || data.giftType;
        const repeatEnd = data.repeatEnd !== undefined ? data.repeatEnd : true;

        // En TikTok Live, repeatEnd indica que la racha de regalos terminó
        if (giftType === 1 && !repeatEnd) {
            return;
        }

        const user = (data.user && (data.user.uniqueId || data.user.displayId || data.user.nickname)) || data.uniqueId || 'Donador';
        const giftName = (data.giftDetails && data.giftDetails.giftName) || data.giftName || (data.gift && data.gift.name) || 'Regalo';
        const repeatCount = data.repeatCount || 1;
        const diamonds = (data.giftDetails && data.giftDetails.diamondCount) || data.diamondCount || (data.gift && data.gift.diamondCount) || 1;
        const totalCoins = diamonds * repeatCount;

        const bestAvatarUrl = extractBestAvatarUrl(data);

        // Estimación estándar de valor en USD por diamante en TikTok (~$0.005 USD/diamante)
        let usdPerUnit = diamonds * 0.005;
        if (giftName.toLowerCase().includes('rosa') || giftName.toLowerCase().includes('rose')) usdPerUnit = 0.05;
        if (giftName.toLowerCase().includes('pesa') || giftName.toLowerCase().includes('weight')) usdPerUnit = 0.10;

        console.log(`${MAGENTA}${BOLD}🎁 [REGALO] @${user} envió ${repeatCount}x ${giftName} (${totalCoins} monedas - $${(usdPerUnit * repeatCount).toFixed(2)} USD)${RESET}`);

        // Enviar evento inmediatamente a Unity con avatarUrl (cero latencia)
        sendToGame('/gift', {
            user: user,
            username: user,
            giftName: giftName,
            coins: totalCoins,
            amount: (usdPerUnit * repeatCount).toFixed(4),
            repeat: repeatCount,
            avatarUrl: bestAvatarUrl
        });

        // Convertir y guardar en segundo plano en disco para máxima nitidez y velocidad de textura
        if (bestAvatarUrl) {
            cacheAvatarToDisk(user, bestAvatarUrl).then(localPath => {
                if (localPath) {
                    console.log(`${GREEN}   └─ [FOTO HD] Avatar guardado para @${user}${RESET}`);
                    sendToGame('/avatar', {
                        user: user,
                        localPath: localPath,
                        avatarUrl: bestAvatarUrl
                    });
                }
            });
        }
    });

    // 4. NUEVOS SEGUIDORES
    tiktokLive.on('follow', data => {
        const user = (data.user && (data.user.uniqueId || data.user.displayId || data.user.nickname)) || data.uniqueId || 'NuevoSeguidor';
        console.log(`${GREEN}🎉 [NUEVO FOLLOWER] @${user} comenzó a seguirte!${RESET}`);
        sendToGame('/follower', { user });
    });

    // 5. FIN DEL STREAM Y DESCONEXIONES
    tiktokLive.on('disconnected', () => {
        console.log(YELLOW + '[⚠️] Conexión pausada con TikTok Live. Reconectando automáticamente...' + RESET);
    });

    tiktokLive.on('streamEnd', () => {
        console.log(RED + BOLD + '\n[🔴] La transmisión en vivo ha finalizado en TikTok.' + RESET);
        setTimeout(promptUser, 4000);
    });

    // Manejo de errores de socket no críticos
    tiktokLive.on('error', err => {
        // Silencioso para no ensuciar la consola con reconexiones momentáneas
    });
}

// Protección contra caídas inesperadas en transmisiones de larga duración (24/7)
process.on('uncaughtException', (err) => {
    console.error(RED + '[⚠️ Protección de Proceso] Error leve interceptado: ' + err.message + RESET);
});
process.on('unhandledRejection', (reason) => {
    // Ignorar rechazos de promesas de red no críticos
});

/**
 * Genera avatares de prueba locales nítidos con Sharp para simulación completa.
 */
async function generateDemoAvatars() {
    const demos = [
        {
            name: 'Fan_Rosa',
            svg: `<svg width="256" height="256" viewBox="0 0 256 256" xmlns="http://www.w3.org/2000/svg">
              <defs><radialGradient id="g1" cx="50%" cy="50%" r="50%"><stop offset="0%" stop-color="#FF69B4"/><stop offset="100%" stop-color="#C71585"/></radialGradient></defs>
              <circle cx="128" cy="128" r="120" fill="url(#g1)" stroke="#FFFFFF" stroke-width="8"/>
              <text x="128" y="155" font-size="95" text-anchor="middle" fill="#FFFFFF">🌹</text>
            </svg>`
        },
        {
            name: 'Gamer_Pro',
            svg: `<svg width="256" height="256" viewBox="0 0 256 256" xmlns="http://www.w3.org/2000/svg">
              <defs><radialGradient id="g2" cx="50%" cy="50%" r="50%"><stop offset="0%" stop-color="#00FFAA"/><stop offset="100%" stop-color="#008855"/></radialGradient></defs>
              <circle cx="128" cy="128" r="120" fill="url(#g2)" stroke="#FFFFFF" stroke-width="8"/>
              <text x="128" y="155" font-size="95" text-anchor="middle" fill="#FFFFFF">🎮</text>
            </svg>`
        },
        {
            name: 'Darlyn_VIP',
            svg: `<svg width="256" height="256" viewBox="0 0 256 256" xmlns="http://www.w3.org/2000/svg">
              <defs><radialGradient id="g3" cx="50%" cy="50%" r="50%"><stop offset="0%" stop-color="#00E5FF"/><stop offset="100%" stop-color="#0055AA"/></radialGradient></defs>
              <circle cx="128" cy="128" r="120" fill="url(#g3)" stroke="#FFD700" stroke-width="10"/>
              <text x="128" y="155" font-size="95" text-anchor="middle" fill="#FFFFFF">💎</text>
            </svg>`
        }
    ];

    const results = {};
    for (const d of demos) {
        const dest = path.join(AVATARS_DIR, `demo_${d.name}.png`);
        await sharp(Buffer.from(d.svg)).png().toFile(dest);
        results[d.name] = dest.replace(/\\/g, '/');
    }
    return results;
}

async function runTestSimulation() {
    console.log(GREEN + BOLD + '🧪 [MODO DE PRUEBA LOCAL INICIADO]' + RESET);
    console.log(CYAN + 'Conectado localmente a Glassy en http://127.0.0.1:8086' + RESET);
    console.log('Generando avatares HD de prueba...\n');

    const demoPaths = await generateDemoAvatars();

    setTimeout(() => {
        console.log(MAGENTA + '🎁 1. Enviando Rosa (1 moneda) de @Fan_Rosa con foto HD...' + RESET);
        sendToGame('/gift', {
            user: 'Fan_Rosa',
            username: 'Fan_Rosa',
            giftName: 'Rosa',
            coins: 1,
            localPath: demoPaths['Fan_Rosa']
        });
    }, 1500);

    setTimeout(() => {
        console.log(GREEN + '🎁 2. Enviando Esmeralda (5 monedas) de @Gamer_Pro con foto HD (1 min)...' + RESET);
        sendToGame('/gift', {
            user: 'Gamer_Pro',
            username: 'Gamer_Pro',
            giftName: 'Esmeralda',
            coins: 5,
            localPath: demoPaths['Gamer_Pro']
        });
    }, 3500);

    setTimeout(() => {
        console.log(CYAN + BOLD + '💎 3. Enviando Diamante VIP (50 monedas) de @Darlyn_VIP con foto HD (15 min)...' + RESET);
        sendToGame('/gift', {
            user: 'Darlyn_VIP',
            username: 'Darlyn_VIP',
            giftName: 'Diamante',
            coins: 50,
            localPath: demoPaths['Darlyn_VIP']
        });
        console.log(YELLOW + '\n¡Revisa la pantalla de Glassy para ver las gemas transformadas y el Top 3!' + RESET);
    }, 5500);
}

function promptUser() {
    printBanner();
    console.log(YELLOW + 'Tip: Puedes escribir "test" para probar la conexión local sin abrir directo en TikTok.\n' + RESET);
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question(BOLD + 'Ingresa tu usuario de TikTok Live (@tucuenta): ' + RESET, (username) => {
        rl.close();
        startConnection(username);
    });
}

// Inicialización
const argUser = process.argv[2];
if (argUser) {
    printBanner();
    startConnection(argUser);
} else {
    promptUser();
}
