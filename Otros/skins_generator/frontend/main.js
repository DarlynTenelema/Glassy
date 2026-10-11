const API_BASE = 'http://localhost:8000';

// Estado global de la aplicación
let currentGems = [];
let currentTheme = 'Gemas_Predeterminadas';
let isGeneratingBatch = false;

// Proporciones de tamaño en píxeles para el simulador de juego (Tier 1 a 8)
const TIER_SIZES = [36, 44, 52, 60, 68, 76, 86, 96];

// Inicialización
document.addEventListener('DOMContentLoaded', () => {
  setupTabs();
  setupEventListeners();
  loadInitialData();
});

// Configuración de cambio de pestañas
function setupTabs() {
  const tabBtns = document.querySelectorAll('.tab-btn');
  tabBtns.forEach(btn => {
    btn.addEventListener('click', () => {
      const targetId = btn.getAttribute('data-tab');
      
      tabBtns.forEach(b => b.classList.remove('active'));
      document.querySelectorAll('.tab-content').forEach(c => c.classList.remove('active'));
      
      btn.classList.add('active');
      const targetContent = document.getElementById(targetId);
      if (targetContent) targetContent.classList.add('active');
    });
  });
}

// Configuración de listeners globales
function setupEventListeners() {
  const themeInput = document.getElementById('theme_name_input');
  if (themeInput) {
    themeInput.addEventListener('change', (e) => {
      currentTheme = e.target.value.trim().replace(/\s+/g, '_') || 'Gemas_Predeterminadas';
      checkThemeStatus();
    });
  }

  const btnLoadUnity = document.getElementById('btn-load-unity');
  if (btnLoadUnity) {
    btnLoadUnity.addEventListener('click', loadInitialData);
  }

  const btnRefresh = document.getElementById('btn-refresh-status');
  if (btnRefresh) {
    btnRefresh.addEventListener('click', checkThemeStatus);
  }

  const btnGenerateAll = document.getElementById('btn-generate-all');
  if (btnGenerateAll) {
    btnGenerateAll.addEventListener('click', generateAllGemsSequentially);
  }

  // Modal
  const modal = document.getElementById('image-modal');
  const modalClose = document.getElementById('modal-close');
  const modalBackdrop = document.getElementById('modal-backdrop');
  if (modalClose) modalClose.addEventListener('click', () => modal.classList.add('hidden'));
  if (modalBackdrop) modalBackdrop.addEventListener('click', () => modal.classList.add('hidden'));

  // Formulario de Markdown clásico
  setupMarkdownForm();
}

// Cargar gemas por defecto desde el Backend
async function loadInitialData() {
  try {
    const res = await fetch(`${API_BASE}/api/default-gems`);
    if (!res.ok) throw new Error(`HTTP ${res.status}`);
    const data = await res.json();
    
    currentGems = data.map(g => ({
      ...g,
      prompt: g.default_prompt,
      user_ref_base64: null,
      generated_url: null,
      exists: false
    }));

    renderGemsGrid();
    await checkThemeStatus();
  } catch (err) {
    console.error('Error cargando gemas predeterminadas:', err);
    alert('No se pudo conectar con el backend de Python en http://localhost:8000. Asegúrate de que Uvicorn esté activo.');
  }
}

// Consultar qué archivos existen ya generados para esta temática
async function checkThemeStatus() {
  try {
    const res = await fetch(`${API_BASE}/api/theme-status/${encodeURIComponent(currentTheme)}`);
    if (!res.ok) return;
    const status = await res.json();

    status.elements.forEach(elem => {
      const gem = currentGems.find(g => g.id === elem.index);
      if (gem) {
        gem.exists = elem.exists;
        gem.generated_url = elem.exists ? `${API_BASE}${elem.url}` : null;
      }
    });

    updateAllGemCardsUI();
    renderSimulator();
  } catch (err) {
    console.error('Error consultando estado de la temática:', err);
  }
}

// Renderizar el Grid con los 8 slots
function renderGemsGrid() {
  const container = document.getElementById('gems-grid');
  if (!container) return;
  container.innerHTML = '';

  currentGems.forEach(gem => {
    const card = document.createElement('div');
    card.className = 'gem-card';
    card.id = `gem-card-${gem.id}`;
    card.style.setProperty('--gem-color', gem.color);
    card.style.setProperty('--gem-glow', `${gem.color}33`);

    const refUrl = gem.user_ref_base64 || (gem.unity_url ? `${API_BASE}${gem.unity_url}` : null);
    const genUrl = gem.generated_url;

    card.innerHTML = `
      <div class="card-header">
        <div class="gem-badge">
          <span class="tier-pill">Tier ${gem.tier}</span>
          <span style="color: ${gem.color}">${gem.name}</span>
        </div>
        <span class="card-status-badge ${gem.exists ? 'status-ok' : 'status-pending'}" id="status-badge-${gem.id}">
          ${gem.exists ? '✓ Generada' : 'Pendiente'}
        </span>
      </div>

      <div class="comparison-box">
        <!-- SLOT REFERENCIA -->
        <div class="img-slot">
          <div class="slot-label">
            <span>Referencia</span>
            <label class="file-input-label" for="file-ref-${gem.id}">Cambiar</label>
            <input type="file" id="file-ref-${gem.id}" class="file-input-hidden" accept="image/*" />
          </div>
          <div class="img-canvas" id="canvas-ref-${gem.id}" title="Ver referencia en grande">
            ${refUrl ? `<img src="${refUrl}" alt="${gem.name} Ref" id="img-ref-${gem.id}" />` : `<span class="img-placeholder">Sin referencia</span>`}
          </div>
        </div>

        <!-- SLOT GENERADA -->
        <div class="img-slot">
          <div class="slot-label">
            <span>Generada (IA)</span>
          </div>
          <div class="img-canvas" id="canvas-gen-${gem.id}" title="Ver resultado en grande">
            <div class="canvas-spinner hidden" id="spinner-${gem.id}">
              <div class="spinner"></div>
              <span>Generando...</span>
            </div>
            ${genUrl ? `<img src="${genUrl}" alt="${gem.name} IA" id="img-gen-${gem.id}" />` : `<span class="img-placeholder" id="placeholder-gen-${gem.id}">Aún no generada</span>`}
          </div>
        </div>
      </div>

      <!-- EDITOR DE PROMPT -->
      <div class="prompt-area">
        <label for="prompt-input-${gem.id}">Instrucciones de estilo y diseño:</label>
        <textarea id="prompt-input-${gem.id}" class="gem-prompt-input" rows="3">${gem.prompt}</textarea>
      </div>

      <!-- BOTÓN GENERAR INDIVIDUAL -->
      <div class="card-actions">
        <button type="button" class="btn btn-generate-single" id="btn-gen-${gem.id}">
          <span>⚡</span> ${gem.exists ? 'Regenerar esta gema' : 'Generar esta gema'}
        </button>
      </div>
    `;

    container.appendChild(card);

    // Eventos de la tarjeta
    setupCardEvents(gem);
  });

  renderSimulator();
}

// Configurar eventos individuales para cada tarjeta
function setupCardEvents(gem) {
  // Input de archivo para cambiar imagen de referencia
  const fileInput = document.getElementById(`file-ref-${gem.id}`);
  if (fileInput) {
    fileInput.addEventListener('change', (e) => {
      const file = e.target.files[0];
      if (!file) return;
      const reader = new FileReader();
      reader.onload = (evt) => {
        gem.user_ref_base64 = evt.target.result;
        const canvas = document.getElementById(`canvas-ref-${gem.id}`);
        if (canvas) {
          canvas.innerHTML = `<img src="${gem.user_ref_base64}" alt="${gem.name} Ref" id="img-ref-${gem.id}" />`;
          setupCanvasZoom(canvas, gem.user_ref_base64, `${gem.name} (Referencia personalizada)`);
        }
      };
      reader.readAsDataURL(file);
    });
  }

  // Textarea de prompt
  const promptTextarea = document.getElementById(`prompt-input-${gem.id}`);
  if (promptTextarea) {
    promptTextarea.addEventListener('input', (e) => {
      gem.prompt = e.target.value;
    });
  }

  // Botón Generar Individual
  const btnGen = document.getElementById(`btn-gen-${gem.id}`);
  if (btnGen) {
    btnGen.addEventListener('click', () => generateSingleGem(gem));
  }

  // Modal zoom en canvas
  const canvasRef = document.getElementById(`canvas-ref-${gem.id}`);
  const initialRefUrl = gem.user_ref_base64 || (gem.unity_url ? `${API_BASE}${gem.unity_url}` : null);
  if (canvasRef && initialRefUrl) {
    setupCanvasZoom(canvasRef, initialRefUrl, `${gem.name} (Referencia Original)`);
  }

  const canvasGen = document.getElementById(`canvas-gen-${gem.id}`);
  if (canvasGen && gem.generated_url) {
    setupCanvasZoom(canvasGen, gem.generated_url, `${gem.name} (Resultado Generado)`);
  }
}

function setupCanvasZoom(canvas, imgUrl, title) {
  canvas.onclick = () => {
    const modal = document.getElementById('image-modal');
    const modalImg = document.getElementById('modal-img');
    const modalTitle = document.getElementById('modal-title');
    if (modal && modalImg) {
      modalImg.src = imgUrl;
      if (modalTitle) modalTitle.textContent = title;
      modal.classList.remove('hidden');
    }
  };
}

// Actualizar la interfaz visual de una tarjeta
function updateCardUI(gem) {
  const badge = document.getElementById(`status-badge-${gem.id}`);
  const canvasGen = document.getElementById(`canvas-gen-${gem.id}`);
  const btnGen = document.getElementById(`btn-gen-${gem.id}`);

  if (badge) {
    badge.className = `card-status-badge ${gem.exists ? 'status-ok' : 'status-pending'}`;
    badge.textContent = gem.exists ? '✓ Generada' : 'Pendiente';
  }

  if (canvasGen && gem.generated_url) {
    canvasGen.innerHTML = `
      <div class="canvas-spinner hidden" id="spinner-${gem.id}">
        <div class="spinner"></div>
        <span>Generando...</span>
      </div>
      <img src="${gem.generated_url}" alt="${gem.name} IA" id="img-gen-${gem.id}" />
    `;
    setupCanvasZoom(canvasGen, gem.generated_url, `${gem.name} (Resultado Generado)`);
  }

  if (btnGen) {
    btnGen.innerHTML = `<span>⚡</span> ${gem.exists ? 'Regenerar esta gema' : 'Generar esta gema'}`;
  }
}

function updateAllGemCardsUI() {
  currentGems.forEach(updateCardUI);
}

// Renderizar el simulador de juego (escala de 1 a 8)
function renderSimulator() {
  const board = document.getElementById('simulator-board');
  if (!board) return;
  board.innerHTML = '';

  currentGems.forEach((gem, idx) => {
    const size = TIER_SIZES[idx] || 50;
    const slot = document.createElement('div');
    slot.className = 'sim-slot';
    slot.title = `Tier ${gem.tier}: ${gem.name} (Clic para ir a su tarjeta)`;

    const imgUrl = gem.generated_url || (gem.unity_url ? `${API_BASE}${gem.unity_url}` : null);
    const opacityStyle = gem.generated_url ? '1' : '0.45';

    slot.innerHTML = `
      <div class="sim-gem-circle" style="width: ${size}px; height: ${size}px; border-color: ${gem.color}88; box-shadow: 0 0 14px ${gem.color}33;">
        ${imgUrl ? `<img src="${imgUrl}" alt="${gem.name}" style="opacity: ${opacityStyle}" />` : ''}
      </div>
      <span class="sim-slot-name" style="color: ${gem.color}">${gem.name}</span>
    `;

    slot.addEventListener('click', () => {
      const card = document.getElementById(`gem-card-${gem.id}`);
      if (card) {
        card.scrollIntoView({ behavior: 'smooth', block: 'center' });
        card.style.borderColor = 'var(--primary)';
        setTimeout(() => card.style.borderColor = '', 1500);
      }
    });

    board.appendChild(slot);
  });
}

// Generación de una gema individual
async function generateSingleGem(gem) {
  const spinner = document.getElementById(`spinner-${gem.id}`);
  const btn = document.getElementById(`btn-gen-${gem.id}`);
  const badge = document.getElementById(`status-badge-${gem.id}`);

  if (spinner) spinner.classList.remove('hidden');
  if (btn) btn.disabled = true;
  if (badge) {
    badge.className = 'card-status-badge status-loading';
    badge.textContent = 'Generando...';
  }

  const promptInput = document.getElementById(`prompt-input-${gem.id}`);
  const finalPrompt = promptInput ? promptInput.value.trim() : gem.prompt;

  const payload = {
    theme: currentTheme,
    element_index: gem.id,
    prompt: finalPrompt,
    reference_unity_gem: gem.user_ref_base64 ? null : gem.unity_file,
    reference_base64: gem.user_ref_base64 || null
  };

  try {
    const res = await fetch(`${API_BASE}/api/generate-single-element`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify(payload)
    });

    if (!res.ok) {
      const errData = await res.json().catch(() => ({ detail: res.statusText }));
      throw new Error(errData.detail || `Error HTTP ${res.status}`);
    }

    const data = await res.json();
    gem.exists = true;
    gem.generated_url = `${API_BASE}${data.url}`;

    updateCardUI(gem);
    renderSimulator();
  } catch (err) {
    console.error(`Error generando ${gem.name}:`, err);
    alert(`Error al generar ${gem.name}: ${err.message}`);
    if (badge) {
      badge.className = 'card-status-badge status-pending';
      badge.textContent = 'Error';
    }
  } finally {
    if (spinner) spinner.classList.add('hidden');
    if (btn) btn.disabled = false;
  }
}

// Generar todas las gemas en secuencia (con barra de progreso)
async function generateAllGemsSequentially() {
  if (isGeneratingBatch) return;
  if (!confirm(`¿Deseas generar los 8 elementos en secuencia para '${currentTheme}'?\nSe aplicará una pausa de 15s entre cada elemento para respetar la cuota de la API.`)) {
    return;
  }

  isGeneratingBatch = true;
  const progressContainer = document.getElementById('batch-progress-container');
  const progressBar = document.getElementById('batch-progress-bar');
  const progressText = document.getElementById('batch-progress-text');
  const progressPercent = document.getElementById('batch-progress-percent');
  const btnGenerateAll = document.getElementById('btn-generate-all');

  if (progressContainer) progressContainer.classList.remove('hidden');
  if (btnGenerateAll) btnGenerateAll.disabled = true;

  for (let i = 0; i < currentGems.length; i++) {
    const gem = currentGems[i];
    const pct = Math.round((i / currentGems.length) * 100);

    if (progressText) progressText.textContent = `Generando Elemento ${gem.id}/8: ${gem.name}...`;
    if (progressPercent) progressPercent.textContent = `${pct}%`;
    if (progressBar) progressBar.style.width = `${pct}%`;

    await generateSingleGem(gem);

    // Pausa entre elementos
    if (i < currentGems.length - 1) {
      for (let s = 15; s > 0; s--) {
        if (progressText) progressText.textContent = `Pausa de cuota: esperando ${s}s antes de la gema ${i + 2}...`;
        await new Promise(r => setTimeout(r, 1000));
      }
    }
  }

  if (progressBar) progressBar.style.width = '100%';
  if (progressPercent) progressPercent.textContent = '100%';
  if (progressText) progressText.textContent = '¡Todos los elementos se generaron con éxito!';

  setTimeout(() => {
    if (progressContainer) progressContainer.classList.add('hidden');
    if (btnGenerateAll) btnGenerateAll.disabled = false;
    isGeneratingBatch = false;
  }, 4000);
}

// Lógica de formulario Markdown clásico
function setupMarkdownForm() {
  const form = document.getElementById('generator-form');
  if (!form) return;

  form.addEventListener('submit', async (e) => {
    e.preventDefault();
    const markdownText = document.getElementById('markdown_input').value;
    const btn = document.getElementById('generate-btn');
    const statusDiv = document.getElementById('status');
    const statusMsg = document.getElementById('status-message');

    btn.disabled = true;
    btn.textContent = 'Iniciando generación...';
    statusDiv.classList.remove('hidden');

    try {
      const response = await fetch(`${API_BASE}/generate-from-md`, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ markdown_text: markdownText })
      });

      const data = await response.json();
      if (!response.ok) throw new Error(data.message || 'Error en el servidor');

      statusMsg.textContent = `Generando en segundo plano en: ${data.folder}`;
      alert(`Generación iniciada con éxito.\nCarpeta: ${data.folder}\nPuedes monitorear los resultados en la pestaña del Estudio o esperar.`);

      // Extraer el nombre de temática del texto para actualizar estado
      const match = markdownText.match(/\*\*Nombre de la Temática:\*\*\s*(.*)/);
      if (match) {
        currentTheme = match[1].trim().replace(/\s+/g, '_');
        const themeInput = document.getElementById('theme_name_input');
        if (themeInput) themeInput.value = currentTheme;
      }
    } catch (error) {
      console.error('Error:', error);
      alert(`Error al conectar con el servidor: ${error.message}`);
    } finally {
      btn.disabled = false;
      btn.innerHTML = '<span>⚡</span> Generar Temática Completa';
      statusDiv.classList.add('hidden');
    }
  });
}
