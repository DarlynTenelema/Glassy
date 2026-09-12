import './style.css';
import Matter from 'matter-js';
import * as PIXI from 'pixi.js';
import { GlowFilter } from '@pixi/filter-glow';
import CryptoJS from 'crypto-js';
import { supabase } from './supabase';

// Game Constants and Tiers
const GEMS = [
  { level: 0, name: 'Perla', color: '#f8fafc', radius: 12, points: 0, shape: 'circle', sound: '' },
  { level: 1, name: 'Esmeralda', color: '#4ade80', radius: 18, points: 1, shape: 'rect', sound: '/assets/esmeralda.mp3' },
  { level: 2, name: 'Amatista', color: '#c084fc', radius: 25, points: 2, shape: 'circle', sound: '/assets/amatista.mp3' },
  { level: 3, name: 'Topacio', color: '#fb923c', radius: 35, points: 4, shape: 'circle', sound: '/assets/topacio.mp3' },
  { level: 4, name: 'Rubí Verde', color: '#a3e635', radius: 45, points: 8, shape: 'circle', sound: '/assets/piridoto.mp3' },
  { level: 5, name: 'Zafiro', color: '#60a5fa', radius: 58, points: 16, shape: 'circle', sound: '/assets/zafiro.mp3' },
  { level: 6, name: 'Rubí', color: '#f87171', radius: 72, points: 32, shape: 'rect', sound: '/assets/rubi.mp3' },
  { level: 7, name: 'Diamante', color: '#ffffff', radius: 95, points: 64, shape: 'circle', sound: '/assets/diamante_encontrado.mp3' },
];

// App State
let score = 0;
let lives = 5;
let session: any = null;
let isPlaying = false;

// Audio setup
const bgMusic = new Audio('/assets/bgm.mp3');
bgMusic.loop = true;
bgMusic.volume = 0.4; 

const AUDIO_CACHE = GEMS.reduce((acc, gem) => {
  if (gem.sound) {
    acc[gem.level] = new Audio(gem.sound);
    acc[gem.level].volume = 0.5;
  }
  return acc;
}, {} as Record<number, HTMLAudioElement>);

const dropSound = new Audio('/assets/primera_perla.mp3'); dropSound.volume = 0.3;
const moveSound = new Audio('/assets/movimiento.mp3'); moveSound.volume = 0.2;
const gameOverSound = new Audio('/assets/game_over.mp3'); gameOverSound.volume = 0.6;
const vanishDiamondSound = new Audio('/assets/desvanecer_diamante.mp3'); vanishDiamondSound.volume = 0.7;

// Game Config
const GAME_WIDTH = Math.min(window.innerWidth, 400);
const GAME_HEIGHT = window.innerHeight;
const BOTTLE_WIDTH = GAME_WIDTH * 0.8;
const BOTTLE_NECK_WIDTH = BOTTLE_WIDTH * 0.3;

// Matter.js Aliases
const Engine = Matter.Engine,
      Runner = Matter.Runner,
      Bodies = Matter.Bodies,
      Composite = Matter.Composite,
      Events = Matter.Events;

let engine: Matter.Engine;
let runner: Matter.Runner;
let gameOverTimer: ReturnType<typeof setTimeout> | null = null;

// PixiJS Setup
let pixiApp: PIXI.Application;
let pixiGraphicsMap = new Map<number, PIXI.Container>();

// DOM Elements
const menuLayer = document.getElementById('main-menu')!;
const loginLayer = document.getElementById('login-screen')!;
const gameLayer = document.getElementById('game-ui')!;
const gameOverLayer = document.getElementById('game-over-screen')!;
const leaderboardLayer = document.getElementById('leaderboard-screen')!;
const noLivesModal = document.getElementById('no-lives-modal')!;
const canvasContainer = document.getElementById('canvas-container')!;
const scoreDisplay = document.getElementById('score-value')!;

const configLayer = document.getElementById('config-screen')!;
const storeLayer = document.getElementById('store-screen')!;
const pauseLayer = document.getElementById('pause-screen')!;

const toggleMusic = document.getElementById('toggle-music') as HTMLInputElement;
const toggleSFX = document.getElementById('toggle-sfx') as HTMLInputElement;
const btnLogout = document.getElementById('btn-logout')!;
const btnCloseConfig = document.getElementById('btn-close-config')!;

const btnGetLives = document.getElementById('btn-get-lives')!;
const btnAdLife = document.getElementById('btn-ad-life')!;
const btnCloseStore = document.getElementById('btn-close-store')!;
const btnBuyPackages = document.querySelectorAll('.btn-buy');

const btnPause = document.getElementById('btn-pause')!;
const btnResume = document.getElementById('btn-resume')!;
const btnQuit = document.getElementById('btn-quit')!;

const nextGemCircle = document.getElementById('next-gem-circle')!;
const btnConfig = document.getElementById('btn-config')!;
const btnBackMenu = document.getElementById('btn-back-menu')!;
const btnGoogleLogin = document.getElementById('btn-google-login')!;
const btnPlay = document.getElementById('btn-play')!;
const btnLeaderboards = document.getElementById('btn-leaderboards')!;
const btnCloseLeaderboard = document.getElementById('btn-close-leaderboard')!;
const btnCloseModal = document.getElementById('btn-close-modal')!;
const hearts = document.querySelectorAll('.heart');

// API CONFIG (using env vars)
const API_URL = import.meta.env.VITE_API_URL || 'http://localhost:8080/api';
const GAME_SECRET = import.meta.env.VITE_GAME_SECRET || 'change-this-to-a-random-string-for-production';



function updateHeartsUI() {
  hearts.forEach((heart, index) => {
    if (index < lives) {
      heart.classList.add('active');
    } else {
      heart.classList.remove('active');
    }
  });
}

async function fetchPlayerState() {
  const { data } = await supabase.auth.getSession();
  session = data.session;

  if (!session) {
    btnGoogleLogin.style.display = 'flex';
    // Ensure login screen is active if not authenticated
    menuLayer.classList.remove('active');
    loginLayer.classList.add('active');
    return;
  }
  btnGoogleLogin.style.display = 'none';
  // Switch to main menu if authenticated
  loginLayer.classList.remove('active');
  menuLayer.classList.add('active');
  
  try {
    const res = await fetch(`${API_URL}/player/state`, {
      headers: { 'Authorization': `Bearer ${session.access_token}` }
    });
    if (res.ok) {
      const data = await res.json();
      lives = data.lives;
      updateHeartsUI();
    }
  } catch (e) {
    console.error('Error fetching state', e);
  }
}

fetchPlayerState();

// Navigation Logic
btnConfig.addEventListener('click', () => { menuLayer.classList.remove('active'); configLayer.classList.add('active'); });
btnCloseConfig.addEventListener('click', () => { configLayer.classList.remove('active'); menuLayer.classList.add('active'); });
btnLogout.addEventListener('click', async () => {
  await supabase.auth.signOut();
  session = null;
  configLayer.classList.remove('active');
  loginLayer.classList.add('active');
});

toggleMusic.addEventListener('change', (e) => { bgMusic.muted = !(e.target as HTMLInputElement).checked; });
toggleSFX.addEventListener('change', (e) => {
  const isMuted = !(e.target as HTMLInputElement).checked;
  Object.values(AUDIO_CACHE).forEach(a => a.muted = isMuted);
  dropSound.muted = isMuted;
  moveSound.muted = isMuted;
  gameOverSound.muted = isMuted;
  vanishDiamondSound.muted = isMuted;
});

btnGetLives.addEventListener('click', () => { menuLayer.classList.remove('active'); storeLayer.classList.add('active'); });
btnCloseStore.addEventListener('click', () => { storeLayer.classList.remove('active'); menuLayer.classList.add('active'); });

// --- Monetization Stubs for Google Play & AdMob ---
btnAdLife.addEventListener('click', () => {
  // TODO: Replace with Capacitor AdMob implementation (e.g., AdMob.showRewardVideoAd())
  alert('[STUB] Mostrando Anuncio Rewarded de AdMob...');
  setTimeout(() => {
    lives = Math.min(5, lives + 1);
    updateHeartsUI();
    alert('¡Anuncio visto! Ganaste 1 vida.');
  }, 1000);
});

btnBuyPackages.forEach(btn => {
  btn.addEventListener('click', async (e) => {
    const target = (e.target as HTMLButtonElement).closest('.btn-buy') as HTMLButtonElement;
    const price = target.dataset.price;
    const isPremium = price === '4.99';
    const productId = isPremium ? 'premium_no_ads' : 'lives_pack_1';

    // TODO: Replace with Capacitor Google Play Billing implementation
    alert(`[STUB] Iniciando compra en Google Play Billing para ${productId} ($${price})...`);
    
    // Simulate successful Google Play response
    const mockPurchaseToken = "test_google_play_token_12345"; 
    
    try {
      if (!session) return;
      const res = await fetch(`${API_URL}/player/verify-purchase`, {
        method: 'POST',
        headers: { 'Authorization': `Bearer ${session.access_token}`, 'Content-Type': 'application/json' },
        body: JSON.stringify({ purchase_token: mockPurchaseToken, product_id: productId })
      });
      if (res.ok) {
        alert('¡Compra verificada con éxito en el backend!');
        fetchPlayerState(); // Refresh lives
      } else {
        alert('Error verificando la compra en el servidor.');
      }
    } catch(err) {
      console.error(err);
    }
  });
});

// Pause Logic
btnPause.addEventListener('click', () => {
  if (!isPlaying) return;
  isPlaying = false;
  Runner.stop(runner);
  bgMusic.pause();
  gameLayer.classList.remove('active');
  pauseLayer.classList.add('active');
});

btnResume.addEventListener('click', () => {
  pauseLayer.classList.remove('active');
  gameLayer.classList.add('active');
  isPlaying = true;
  Runner.run(runner, engine);
  if (toggleMusic.checked) bgMusic.play().catch(()=>{});
});

btnQuit.addEventListener('click', () => {
  pauseLayer.classList.remove('active');
  menuLayer.classList.add('active');
  if (engine) {
    Engine.clear(engine);
    if (runner) Runner.stop(runner);
    if (pixiApp) {
      pixiApp.destroy(true, { children: true });
    }
    pixiGraphicsMap.clear();
    canvasContainer.innerHTML = '';
  }
  bgMusic.pause();
});

btnBackMenu.addEventListener('click', () => { loginLayer.classList.remove('active'); menuLayer.classList.add('active'); });

btnGoogleLogin.addEventListener('click', async () => {
  await supabase.auth.signInWithOAuth({ provider: 'google' });
});

btnPlay.addEventListener('click', async () => {
  if (!session) {
    menuLayer.classList.remove('active');
    loginLayer.classList.add('active');
    return;
  }

  try {
    const res = await fetch(`${API_URL}/player/use-life`, {
      method: 'POST',
      headers: { 'Authorization': `Bearer ${session.access_token}` }
    });
    if (res.ok) {
      const data = await res.json();
      if (data.lives_remaining !== undefined) {
        lives = data.lives_remaining;
        updateHeartsUI();
      }
      menuLayer.classList.remove('active');
      gameLayer.classList.add('active');
      initGame();
    } else if (res.status === 403) {
      noLivesModal.classList.add('active');
    }
  } catch (e) {
    console.error('Error using life', e);
  }
});

btnCloseModal.addEventListener('click', () => { noLivesModal.classList.remove('active'); });

btnLeaderboards.addEventListener('click', async () => {
  menuLayer.classList.remove('active');
  leaderboardLayer.classList.add('active');
  
  const tbody = document.getElementById('leaderboard-body')!;
  tbody.innerHTML = '<tr><td colspan="3" style="text-align: center;">Cargando...</td></tr>';
  
  try {
    const res = await fetch(`${API_URL}/leaderboard/global`);
    if (res.ok) {
      const data = await res.json();
      tbody.innerHTML = '';
      data.forEach((row: any) => {
        tbody.innerHTML += `
          <tr>
            <td>
              <div style="display: flex; align-items: center; gap: 10px;">
                <img src="${row.avatar_url || ''}" style="width: 24px; height: 24px; border-radius: 50%;">
                ${row.name}
              </div>
            </td>
            <td style="color: #4ade80; font-weight: bold;">${row.score}</td>
            <td>${new Date(row.achieved_at).toLocaleDateString()}</td>
          </tr>
        `;
      });
    }
  } catch (e) {
    tbody.innerHTML = '<tr><td colspan="3" style="text-align: center;">Error al cargar</td></tr>';
  }
});

btnCloseLeaderboard.addEventListener('click', () => { leaderboardLayer.classList.remove('active'); menuLayer.classList.add('active'); });

let nextGemLevel = 0;

function getRandomGemLevel() { return Math.floor(Math.random() * 3); }

function updateNextGemUI() {
  const gemData = GEMS[nextGemLevel];
  if (gemData.shape === 'circle') {
    nextGemCircle.style.borderRadius = '50%';
  } else {
    nextGemCircle.style.borderRadius = '4px';
  }
  nextGemCircle.style.background = gemData.color;
  nextGemCircle.style.boxShadow = `0 2px 8px ${gemData.color}`;
}

async function initGame() {
  if (engine) {
    Engine.clear(engine);
    if (runner) Runner.stop(runner);
    if (pixiApp) {
      pixiApp.destroy(true, { children: true });
    }
    pixiGraphicsMap.clear();
    canvasContainer.innerHTML = '';
  }

  score = 0;
  updateScore();
  nextGemLevel = getRandomGemLevel();
  updateNextGemUI();

  engine = Engine.create();
  engine.world.gravity.y = 1;

  // Initialize PixiJS Application
  pixiApp = new PIXI.Application();
  await pixiApp.init({
    width: GAME_WIDTH,
    height: GAME_HEIGHT,
    backgroundAlpha: 0,
    resolution: window.devicePixelRatio || 1,
    autoDensity: true
  });
  canvasContainer.appendChild(pixiApp.canvas as HTMLCanvasElement);

  // Sync Pixi with Matter
  Events.on(engine, 'afterUpdate', () => {
    const bodies = Composite.allBodies(engine.world);
    
    // Add new PIXI graphics for new bodies
    for (let body of bodies) {
      if (!pixiGraphicsMap.has(body.id)) {
        if (body.label.startsWith('gem_')) {
          createPixiGem(body);
        }
      }
      
      // Update positions
      if (pixiGraphicsMap.has(body.id)) {
        const gfx = pixiGraphicsMap.get(body.id)!;
        gfx.position.set(body.position.x, body.position.y);
        gfx.rotation = body.angle;
      }
    }
  });

  // Create boundaries (The Bottle) - Rendered with PIXI manually below
  const wallOptions = { isStatic: true, render: { fillStyle: 'rgba(255,255,255,0.1)', strokeStyle: '#c084fc', lineWidth: 2 } };
  
  const ground = Bodies.rectangle(GAME_WIDTH / 2, GAME_HEIGHT - 50, BOTTLE_WIDTH, 20, wallOptions);
  const leftWall = Bodies.rectangle(GAME_WIDTH / 2 - BOTTLE_WIDTH / 2, GAME_HEIGHT - 250, 20, 400, wallOptions);
  const rightWall = Bodies.rectangle(GAME_WIDTH / 2 + BOTTLE_WIDTH / 2, GAME_HEIGHT - 250, 20, 400, wallOptions);
  const neckLeft = Bodies.rectangle(GAME_WIDTH / 2 - BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 550, 20, 200, wallOptions);
  const neckRight = Bodies.rectangle(GAME_WIDTH / 2 + BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 550, 20, 200, wallOptions);
  const funnelLeft = Bodies.rectangle(GAME_WIDTH / 2 - BOTTLE_WIDTH / 4 - 20, GAME_HEIGHT - 450, 150, 20, { ...wallOptions, angle: Math.PI / 4 });
  const funnelRight = Bodies.rectangle(GAME_WIDTH / 2 + BOTTLE_WIDTH / 4 + 20, GAME_HEIGHT - 450, 150, 20, { ...wallOptions, angle: -Math.PI / 4 });

  Composite.add(engine.world, [ground, leftWall, rightWall, neckLeft, neckRight, funnelLeft, funnelRight]);

  // Draw the bottle lines in PIXI once
  drawPixiBottle();

  runner = Runner.create();
  Runner.run(runner, engine);

  setupCollisions();
  setupGameOverCheck();
  isPlaying = true;
  setupInteractions();
}

function drawPixiBottle() {
  const bottleGfx = new PIXI.Graphics();
  // Using standard PixiJS v8 line style if it exists, otherwise polyfill for now.
  bottleGfx.setStrokeStyle({ width: 2, color: 0xc084fc, alpha: 0.8 });
  
  // Left neck to funnel to wall
  bottleGfx.moveTo(GAME_WIDTH / 2 - BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 650);
  bottleGfx.lineTo(GAME_WIDTH / 2 - BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 450);
  bottleGfx.lineTo(GAME_WIDTH / 2 - BOTTLE_WIDTH / 2, GAME_HEIGHT - 450);
  bottleGfx.lineTo(GAME_WIDTH / 2 - BOTTLE_WIDTH / 2, GAME_HEIGHT - 50);
  
  // Bottom
  bottleGfx.lineTo(GAME_WIDTH / 2 + BOTTLE_WIDTH / 2, GAME_HEIGHT - 50);
  
  // Right wall to funnel to neck
  bottleGfx.lineTo(GAME_WIDTH / 2 + BOTTLE_WIDTH / 2, GAME_HEIGHT - 450);
  bottleGfx.lineTo(GAME_WIDTH / 2 + BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 450);
  bottleGfx.lineTo(GAME_WIDTH / 2 + BOTTLE_NECK_WIDTH / 2, GAME_HEIGHT - 650);
  
  bottleGfx.stroke();
  
  // Add an ASMR Glow to the bottle
  bottleGfx.filters = [new GlowFilter({ distance: 10, outerStrength: 1.5, innerStrength: 0, color: 0xc084fc, quality: 0.2 }) as any];
  
  pixiApp.stage.addChild(bottleGfx);
}

function createPixiGem(body: Matter.Body) {
  const level = parseInt(body.label.split('_')[1]);
  const gemData = GEMS[level];
  
  const container = new PIXI.Container();
  const gfx = new PIXI.Graphics();
  
  const colorNum = parseInt(gemData.color.replace('#', '0x'), 16);
  
  if (gemData.shape === 'circle') {
    const r = gemData.radius;
    gfx.roundRect(0, 0, 0, 0, 0); // Reset
    gfx.circle(0, 0, r);
    gfx.fill({ color: colorNum, alpha: 0.8 });
    gfx.stroke({ width: 2, color: 0xffffff, alpha: 0.6 });
    
    // Simple 3D facet lines for levels > 1
    if (level > 1) {
      gfx.moveTo(0, -r*0.5);
      gfx.lineTo(r*0.4, -r*0.2);
      gfx.lineTo(r*0.4, r*0.2);
      gfx.lineTo(0, r*0.5);
      gfx.lineTo(-r*0.4, r*0.2);
      gfx.lineTo(-r*0.4, -r*0.2);
      gfx.lineTo(0, -r*0.5);
      gfx.stroke({ width: 1, color: 0xffffff, alpha: 0.4 });
    }
  } else {
    const w = gemData.radius * 1.8;
    const h = gemData.radius * 1.5;
    gfx.roundRect(-w/2, -h/2, w, h, 5);
    gfx.fill({ color: colorNum, alpha: 0.8 });
    gfx.stroke({ width: 2, color: 0xffffff, alpha: 0.6 });
    
    gfx.rect(-w/2 + 5, -h/2 + 5, w - 10, h - 10);
    gfx.stroke({ width: 1, color: 0xffffff, alpha: 0.4 });
  }
  
  // Add Glow Filter for ASMR feel
  const glow = new GlowFilter({ distance: 15, outerStrength: 1.5, innerStrength: 0.5, color: colorNum, quality: 0.5 });
  container.filters = [glow as any];
  
  container.addChild(gfx);
  pixiApp.stage.addChild(container);
  
  pixiGraphicsMap.set(body.id, container);
}

function setupCollisions() {
  Events.on(engine, 'collisionStart', (event) => {
    const pairs = event.pairs;

    for (let i = 0; i < pairs.length; i++) {
      const { bodyA, bodyB } = pairs[i];

      if (bodyA.label.startsWith('gem_') && bodyA.label === bodyB.label) {
        if ((bodyA as any).isMerging || (bodyB as any).isMerging) continue;

        (bodyA as any).isMerging = true;
        (bodyB as any).isMerging = true;

        const level = parseInt(bodyA.label.split('_')[1]);
        
        Composite.remove(engine.world, [bodyA, bodyB]);
        
        // Remove from Pixi
        if (pixiGraphicsMap.has(bodyA.id)) {
          pixiApp.stage.removeChild(pixiGraphicsMap.get(bodyA.id)!);
          pixiGraphicsMap.delete(bodyA.id);
        }
        if (pixiGraphicsMap.has(bodyB.id)) {
          pixiApp.stage.removeChild(pixiGraphicsMap.get(bodyB.id)!);
          pixiGraphicsMap.delete(bodyB.id);
        }

        if (level < GEMS.length - 1) {
          const nextLevel = level + 1;
          const newX = (bodyA.position.x + bodyB.position.x) / 2;
          const newY = (bodyA.position.y + bodyB.position.y) / 2;
          
          updateScore(GEMS[nextLevel].points);
          
          const mergeSound = AUDIO_CACHE[nextLevel];
          if (mergeSound) {
            mergeSound.currentTime = 0;
            mergeSound.play().catch(() => {});
          }

          if (nextLevel === GEMS.length - 1) {
            const diamond = Bodies.circle(newX, newY, GEMS[nextLevel].radius, {
              isStatic: true, label: `gem_${nextLevel}`
            });
            Composite.add(engine.world, diamond);
            
            setTimeout(() => {
              Composite.remove(engine.world, diamond);
              if (pixiGraphicsMap.has(diamond.id)) {
                pixiApp.stage.removeChild(pixiGraphicsMap.get(diamond.id)!);
                pixiGraphicsMap.delete(diamond.id);
              }
              vanishDiamondSound.currentTime = 0;
              vanishDiamondSound.play().catch(() => {});
              updateScore(GEMS[nextLevel].points);
            }, 500);
          } else {
            dropGem(newX, newY, nextLevel);
          }
        }
      }
    }
  });
}

function setupGameOverCheck() {
  const DEATH_Y = GAME_HEIGHT - 500;
  Events.on(engine, 'beforeUpdate', () => {
    if (!isPlaying) return;
    let isOverLimit = false;
    const bodies = Composite.allBodies(engine.world);

    for (let body of bodies) {
      if (body.label.startsWith('gem_')) {
        if (body.position.y < DEATH_Y && Math.abs(body.velocity.y) < 1 && Math.abs(body.velocity.x) < 1) {
          isOverLimit = true;
          break;
        }
      }
    }

    if (isOverLimit) {
      if (gameOverTimer === null) {
        gameOverTimer = setTimeout(() => { triggerGameOver(); }, 2000);
      }
    } else {
      if (gameOverTimer !== null) {
        clearTimeout(gameOverTimer);
        gameOverTimer = null;
      }
    }
  });
}

function triggerGameOver() {
  isPlaying = false;
  if (gameOverTimer) clearTimeout(gameOverTimer);
  gameOverTimer = null;
  
  gameOverSound.currentTime = 0;
  gameOverSound.play().catch(() => {});

  const bodies = Composite.allBodies(engine.world);
  for (let body of bodies) {
    if (body.label.startsWith('gem_')) {
      const level = parseInt(body.label.split('_')[1]);
      score += GEMS[level].points;
    }
  }

  document.getElementById('final-score-value')!.innerText = score.toString();
  gameOverLayer.classList.add('active');

  // Anti-Cheat: Sign the score
  if (session && score > 0) {
    const userId = session.user.id;
    
    // Hash: "score={score}&user={userID}" using GAME_SECRET
    const dataToHash = `score=${score}&user=${userId}`;
    const hash = CryptoJS.HmacSHA256(dataToHash, GAME_SECRET).toString(CryptoJS.enc.Hex);

    fetch(`${API_URL}/leaderboard`, {
      method: 'POST',
      headers: { 'Authorization': `Bearer ${session.access_token}`, 'Content-Type': 'application/json' },
      body: JSON.stringify({ score, hash })
    }).catch(e => console.error('Failed to submit score', e));
  }
}

function setupInteractions() {
  let isDropping = false;

  canvasContainer.addEventListener('mousemove', (e) => {
    if (!isPlaying) return;
    const rect = pixiApp.canvas.getBoundingClientRect();
    const x = e.clientX - rect.left;
    const clampedX = Math.max(GAME_WIDTH / 2 - BOTTLE_NECK_WIDTH/2 + 20, Math.min(x, GAME_WIDTH / 2 + BOTTLE_NECK_WIDTH/2 - 20));

    const lastX = (canvasContainer as any).dataset.lastX ? parseFloat((canvasContainer as any).dataset.lastX) : clampedX;
    if (Math.abs(clampedX - lastX) > 15) {
      moveSound.currentTime = 0;
      moveSound.play().catch(() => {});
      (canvasContainer as any).dataset.lastX = clampedX.toString();
    }
  });

  canvasContainer.addEventListener('click', (e) => {
    if (!isPlaying || isDropping) return;
    if (bgMusic.paused) bgMusic.play().catch(() => {});
    
    isDropping = true;
    const rect = pixiApp.canvas.getBoundingClientRect();
    const x = e.clientX - rect.left;
    const clampedX = Math.max(GAME_WIDTH / 2 - BOTTLE_NECK_WIDTH/2 + 20, Math.min(x, GAME_WIDTH / 2 + BOTTLE_NECK_WIDTH/2 - 20));

    dropGem(clampedX, GAME_HEIGHT - 600, nextGemLevel);
    
    nextGemLevel = getRandomGemLevel();
    updateNextGemUI();
    
    setTimeout(() => isDropping = false, 1000);
  });
}

function dropGem(x: number, y: number, level: number) {
  const gemData = GEMS[level];
  let gem;
  if (gemData.shape === 'rect') {
    gem = Bodies.rectangle(x, y, gemData.radius * 1.8, gemData.radius * 1.5, {
      restitution: 0.2, friction: 0.1, density: 0.001,
      label: `gem_${level}`, chamfer: { radius: 5 }
    });
  } else {
    gem = Bodies.circle(x, y, gemData.radius, {
      restitution: 0.2, friction: 0.1, density: 0.001,
      label: `gem_${level}`
    });
  }

  Composite.add(engine.world, gem);
  dropSound.currentTime = 0;
  dropSound.play().catch(() => {});
}

function updateScore(points = 0) {
  score += points;
  scoreDisplay.innerText = score.toString();
}

document.getElementById('btn-home')?.addEventListener('click', () => {
  gameOverLayer.classList.remove('active');
  menuLayer.classList.add('active');
});

document.getElementById('btn-restart')?.addEventListener('click', () => {
  gameOverLayer.classList.remove('active');
  initGame();
});
