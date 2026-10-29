// Nostalgia Studio — Frontend Logic & Video Engine Controller

document.addEventListener("DOMContentLoaded", () => {
  initApp();
});

let isGenerating = false;

async function initApp() {
  loadStatus();
  loadHistory();

  // Listeners
  document.getElementById("btn-generate").addEventListener("click", handleGenerateBatch);
  document.getElementById("btn-open-folder").addEventListener("click", handleOpenFolder);
  document.getElementById("btn-refresh-history").addEventListener("click", loadHistory);
}

// Cargar estado de la API
async function loadStatus() {
  try {
    const res = await fetch("/api/status");
    const data = await res.json();
    
    document.getElementById("status-videos-count").textContent = `${data.total_videos_created} Videos Creados`;
    document.getElementById("status-bgs-count").textContent = `${data.available_backgrounds} Paisajes Pixel Art`;
    
    if (data.gemini_ready && data.ffmpeg_ready) {
      document.getElementById("status-badge").innerHTML = `<span class="badge-dot"></span> Motor IA & Render Listo`;
    }
  } catch (e) {
    console.error("Error al cargar status:", e);
  }
}

// Abrir carpeta en Windows Explorer
async function handleOpenFolder() {
  try {
    const res = await fetch("/api/open-folder", { method: "POST" });
    const data = await res.json();
    showToast("📂 Carpeta abierta en el Explorador de Windows.");
  } catch (e) {
    showToast("⚠️ No se pudo abrir la carpeta automáticamente.", true);
  }
}

// Cargar historial de videos y temas usados
async function loadHistory() {
  try {
    const res = await fetch("/api/history");
    const data = await res.json();
    
    renderVideosGrid(data.items);
    renderVaultTable(data.items);
  } catch (e) {
    console.error("Error cargando historial:", e);
  }
}

// Renderizar tarjetas de videos en la cuadrícula principal
function renderVideosGrid(videos) {
  const container = document.getElementById("videos-grid");
  if (!videos || videos.length === 0) {
    container.innerHTML = `
      <div class="empty-state" style="grid-column: 1 / -1;">
        <div class="empty-state-icon">🎮</div>
        <h3>Aún no has generado ningún video</h3>
        <p>Presiona el botón dorado de arriba para crear tus primeros 3 videos de nostalgia.</p>
      </div>
    `;
    return;
  }

  container.innerHTML = videos.map(v => {
    return `
      <div class="video-card" id="card-${v.id}">
        <div class="video-preview-wrapper">
          <video src="${v.video_path ? `/videos-stream/${v.filename}` : ''}" controls preload="metadata" playsinline></video>
          <span class="video-badge-game">🕹️ ${escapeHtml(v.game_reference || 'Gamer')}</span>
          <span class="video-badge-duration">⏱️ ${v.duration_seconds || '68'}s</span>
        </div>
        <div class="video-info">
          <h4 class="video-title">${escapeHtml(v.title)}</h4>
          <p class="video-hook">"${escapeHtml(v.hook)}"</p>
          <div class="video-meta">
            <span>🎵 ${escapeHtml(v.voice || 'Audio Ambiental (Lluvia/Noche)')}</span>
            <span>📅 ${escapeHtml(v.created_at || '')}</span>
          </div>
          <div class="video-actions">
            <a href="/api/download/${encodeURIComponent(v.filename)}" download class="btn-download">
              ⬇️ Descargar MP4
            </a>
            <button class="btn-icon-action" title="Copiar Gancho" onclick="copyToClipboard('${escapeHtml(v.hook)}')">
              📋
            </button>
            <button class="btn-icon-action" title="Eliminar" onclick="handleDeleteVideo('${v.id}')">
              🗑️
            </button>
          </div>
        </div>
      </div>
    `;
  }).join("");
}

// Renderizar tabla del archivo de temas usados (Garantía Cero Repeticiones)
function renderVaultTable(videos) {
  const tbody = document.getElementById("vault-tbody");
  if (!videos || videos.length === 0) {
    tbody.innerHTML = `
      <tr>
        <td colspan="5" style="text-align: center; color: var(--text-dim); padding: 2rem;">
          No hay registros en la memoria aún.
        </td>
      </tr>
    `;
    return;
  }

  tbody.innerHTML = videos.map((v, idx) => `
    <tr>
      <td style="color: var(--accent-gold); font-weight: 700;">#${videos.length - idx}</td>
      <td><span class="game-pill">${escapeHtml(v.game_reference || 'Gamer')}</span></td>
      <td style="font-weight: 600;">${escapeHtml(v.title)}</td>
      <td style="color: var(--text-muted); font-size: 0.85rem; max-width: 380px;">"${escapeHtml(v.hook)}"</td>
      <td style="color: var(--text-dim); font-size: 0.8rem;">${escapeHtml(v.created_at || '')}</td>
    </tr>
  `).join("");
}

// Flujo Principal: Crear lote de videos
async function handleGenerateBatch() {
  if (isGenerating) return;

  const count = parseInt(document.getElementById("select-count").value, 10) || 3;
  const landscape = document.getElementById("select-landscape").value;
  const customTheme = document.getElementById("input-custom-theme").value.trim();

  isGenerating = true;
  const btn = document.getElementById("btn-generate");
  btn.disabled = true;

  // Mostrar caja de progreso
  const progressBox = document.getElementById("progress-card");
  progressBox.style.display = "block";
  progressBox.scrollIntoView({ behavior: "smooth", block: "nearest" });

  setStepStatus(1, "active", `Pensando ${count} reflexiones inéditas de 65-70s con Gemini...`);
  setStepStatus(2, "pending", "Componiendo música y audio ambiental relajante...");
  setStepStatus(3, "pending", "Renderizando videos MP4 con paneo y subtítulos...");

  try {
    const stepTimer = setTimeout(() => {
      setStepStatus(1, "done", `Guiones generados con éxito (cero repeticiones garantizadas).`);
      setStepStatus(2, "active", `Preparando atmósfera pixel art y sonido ambiental...`);
    }, 3500);

    const stepTimer2 = setTimeout(() => {
      setStepStatus(2, "done", `Ambiente sonoro listo.`);
      setStepStatus(3, "active", `Renderizando videos 1080x1920 con efectos y subtítulos...`);
    }, 7000);

    const res = await fetch("/api/generate-batch", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({
        count: count,
        landscape_type: landscape,
        custom_theme: customTheme || null
      })
    });

    clearTimeout(stepTimer);
    clearTimeout(stepTimer2);

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || "Error en el servidor al generar los videos.");
    }

    const data = await res.json();
    setStepStatus(1, "done");
    setStepStatus(2, "done");
    setStepStatus(3, "done", `¡Completado! ${data.total_rendered} videos listos y guardados en Nostalgia.`);

    showToast(`🎉 ¡${data.total_rendered} videos nuevos listos para descargar!`);
    loadHistory();
    loadStatus();

    setTimeout(() => {
      progressBox.style.display = "none";
    }, 6000);

  } catch (e) {
    console.error("Error generando videos:", e);
    showToast(`❌ Error: ${e.message}`, true);
    setStepStatus(1, "error", `Error: ${e.message}`);
  } finally {
    isGenerating = false;
    btn.disabled = false;
  }
}

function setStepStatus(stepNum, state, customText) {
  const stepEl = document.getElementById(`step-${stepNum}`);
  if (!stepEl) return;
  stepEl.className = `step-item ${state}`;
  if (customText) {
    const textEl = stepEl.querySelector(".step-text");
    if (textEl) textEl.textContent = customText;
  }
  const bullet = stepEl.querySelector(".step-bullet");
  if (state === "done") bullet.textContent = "✓";
  else if (state === "error") bullet.textContent = "✕";
  else bullet.textContent = stepNum;
}

// Eliminar video
async function handleDeleteVideo(id) {
  if (!confirm("¿Deseas eliminar este video del historial y del disco?")) return;
  try {
    const res = await fetch(`/api/history/${id}`, { method: "DELETE" });
    if (res.ok) {
      showToast("🗑️ Video eliminado.");
      const card = document.getElementById(`card-${id}`);
      if (card) card.remove();
      loadStatus();
      loadHistory();
    }
  } catch (e) {
    showToast("Error al eliminar el video.", true);
  }
}

// Copiar gancho
function copyToClipboard(text) {
  navigator.clipboard.writeText(text).then(() => {
    showToast("📋 ¡Gancho copiado al portapapeles!");
  }).catch(() => {
    prompt("Copia el texto:", text);
  });
}

// Toast
function showToast(msg, isError = false) {
  const container = document.getElementById("toast-container");
  const t = document.createElement("div");
  t.className = "toast";
  if (isError) t.style.borderColor = "#ef4444";
  t.innerHTML = `<span>${msg}</span>`;
  container.appendChild(t);
  setTimeout(() => {
    t.style.opacity = "0";
    setTimeout(() => t.remove(), 300);
  }, 4000);
}

function escapeHtml(text) {
  if (!text) return "";
  return text
    .replace(/&/g, "&amp;")
    .replace(/</g, "&lt;")
    .replace(/>/g, "&gt;")
    .replace(/"/g, "&quot;")
    .replace(/'/g, "&#039;");
}
