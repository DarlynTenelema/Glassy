// Glassy Story Studio — Frontend Logic

const API_BASE = (window.location.port === '8001' || !window.location.port) 
  ? window.location.origin 
  : 'http://localhost:8001';

// State
let currentGender = 'male';
let voicesData = [];
let isAudioPlaying = false;

// Global Finance & 7 Languages State
let globalScriptsData = {};
let currentActiveLang = 'es';
let activePackData = null;

// DOM Elements
const statusBadge = document.getElementById('statusBadge');
const statusText = document.getElementById('statusText');
const gcpNoticeBanner = document.getElementById('gcpNoticeBanner');
const gcpActivationLink = document.getElementById('gcpActivationLink');

const genderCardMale = document.getElementById('genderCardMale');
const genderCardFemale = document.getElementById('genderCardFemale');
const voiceSelect = document.getElementById('voiceSelect');
const speakingRateInput = document.getElementById('speakingRate');
const rateValueDisplay = document.getElementById('rateValue');
const addPausesCheckbox = document.getElementById('addPausesCheckbox');
const presetButtons = document.querySelectorAll('.preset-btn');

// Tabs & Text
const tabButtons = document.querySelectorAll('.tab-btn');
const tabContents = document.querySelectorAll('.tab-content');
const storyInput = document.getElementById('storyInput');
const wordCounter = document.getElementById('wordCounter');
const durationEstimate = document.getElementById('durationEstimate');
const optimizeDuration = document.getElementById('optimizeDuration');
const btnOptimizeStory = document.getElementById('btnOptimizeStory');

// AI Generator inputs
const aiTopic = document.getElementById('aiTopic');
const aiCategory = document.getElementById('aiCategory');
const aiDuration = document.getElementById('aiDuration');
const btnGenerateStory = document.getElementById('btnGenerateStory');

// Action & Audio Player
const btnSynthesize = document.getElementById('btnSynthesize');
const emptyResultBox = document.getElementById('emptyResultBox');
const resultPlayerBox = document.getElementById('resultPlayerBox');
const resultGenderBadge = document.getElementById('resultGenderBadge');
const resultVoiceName = document.getElementById('resultVoiceName');
const resultProviderBadge = document.getElementById('resultProviderBadge');

const audioPlayer = document.getElementById('audioPlayer');
const btnPlayPause = document.getElementById('btnPlayPause');
const playIcon = document.getElementById('playIcon');
const audioTimeline = document.getElementById('audioTimeline');
const currentTimeDisplay = document.getElementById('currentTime');
const totalTimeDisplay = document.getElementById('totalTime');
const waveform = document.getElementById('waveform');
const btnDownloadAudio = document.getElementById('btnDownloadAudio');
const btnCopyScript = document.getElementById('btnCopyScript');

// History
const historyList = document.getElementById('historyList');
const btnRefreshHistory = document.getElementById('btnRefreshHistory');

// ==================== INICIALIZACIÓN ====================

document.addEventListener('DOMContentLoaded', async () => {
  setupEventListeners();
  await checkSystemStatus();
  await loadVoices();
  await loadHistory();
  await loadFinancePresets();
  await loadLatestPack();
  await loadLatestVideos();
});

// ==================== EVENT LISTENERS ====================

function setupEventListeners() {
  setupFinanceStudioListeners();
  setupVideoStudioListeners();

  // Switch Género: Hombre / Mujer
  genderCardMale.addEventListener('click', () => setGender('male'));
  genderCardFemale.addEventListener('click', () => setGender('female'));

  // Rate Slider & Presets
  speakingRateInput.addEventListener('input', (e) => {
    const val = parseFloat(e.target.value).toFixed(2);
    rateValueDisplay.textContent = `${val}x`;
    updateWordAndDurationStats();
  });

  presetButtons.forEach(btn => {
    btn.addEventListener('click', () => {
      presetButtons.forEach(b => b.classList.remove('active'));
      btn.classList.add('active');
      const rate = btn.getAttribute('data-rate');
      speakingRateInput.value = rate;
      rateValueDisplay.textContent = `${rate}x`;
      updateWordAndDurationStats();
    });
  });

  // Pestañas (Tabs)
  tabButtons.forEach(btn => {
    btn.addEventListener('click', () => {
      tabButtons.forEach(b => b.classList.remove('active'));
      tabContents.forEach(c => c.classList.remove('active'));
      btn.classList.add('active');
      const targetId = btn.getAttribute('data-tab');
      document.getElementById(targetId).classList.add('active');
    });
  });

  // Live Stats
  storyInput.addEventListener('input', updateWordAndDurationStats);

  // Botón Optimizar con Gemini
  btnOptimizeStory.addEventListener('click', handleOptimizeStory);

  // Selector de Duración de Optimización
  if (optimizeDuration) {
    optimizeDuration.addEventListener('change', (e) => {
      const sec = parseInt(e.target.value, 10);
      const minText = sec >= 60 ? `${sec / 60} Minutos` : `${sec}s`;
      btnOptimizeStory.innerHTML = `✨ Optimizar a ${minText} con Gemini`;
    });
  }

  // Botón Generar con IA desde cero
  btnGenerateStory.addEventListener('click', handleGenerateAIStory);

  // Botón Sintetizar Audio
  btnSynthesize.addEventListener('click', handleSynthesizeAudio);

  // Controles de Audio
  btnPlayPause.addEventListener('click', togglePlayAudio);
  audioPlayer.addEventListener('timeupdate', updateAudioProgress);
  audioPlayer.addEventListener('loadedmetadata', updateAudioDuration);
  audioPlayer.addEventListener('ended', onAudioEnded);
  audioTimeline.addEventListener('input', seekAudio);

  // Copiar Guion
  btnCopyScript.addEventListener('click', () => {
    if (storyInput.value.trim()) {
      navigator.clipboard.writeText(storyInput.value.trim());
      btnCopyScript.textContent = '✅ ¡Copiado!';
      setTimeout(() => btnCopyScript.textContent = '📋 Copiar Guion', 2000);
    }
  });

  // Historial Refresh
  btnRefreshHistory.addEventListener('click', loadHistory);
}

// ==================== LÓGICA DE GÉNERO Y VOCES ====================

function setGender(gender) {
  currentGender = gender;
  if (gender === 'male') {
    genderCardMale.classList.add('active');
    genderCardFemale.classList.remove('active');
  } else {
    genderCardFemale.classList.add('active');
    genderCardMale.classList.remove('active');
  }
  populateVoiceSelect();
}

async function loadVoices() {
  try {
    const res = await fetch(`${API_BASE}/api/voices`);
    const data = await res.json();
    voicesData = data.voices || [];
    populateVoiceSelect();
  } catch (err) {
    console.error('Error cargando catálogo de voces:', err);
  }
}

function populateVoiceSelect() {
  voiceSelect.innerHTML = '';
  const filtered = voicesData.filter(v => v.gender === currentGender);

  filtered.forEach(v => {
    const option = document.createElement('option');
    option.value = v.id;
    option.textContent = `${v.name} — ${v.accent} (${v.gcp_voice_name})`;
    if (v.recommended) option.selected = true;
    voiceSelect.appendChild(option);
  });
}

// ==================== ESTADO DEL SISTEMA ====================

async function checkSystemStatus() {
  try {
    const res = await fetch(`${API_BASE}/api/status`);
    const data = await res.json();

    if (data.gcp_tts_enabled) {
      statusBadge.className = 'status-badge online';
      statusText.textContent = `Google Cloud TTS: Activo`;
      gcpNoticeBanner.classList.add('hidden');
    } else {
      statusBadge.className = 'status-badge loading';
      statusText.textContent = `Google Cloud: Requiere Activación`;
      gcpNoticeBanner.classList.remove('hidden');
      if (data.activation_url) {
        gcpActivationLink.href = data.activation_url;
      }
    }
  } catch (err) {
    statusBadge.className = 'status-badge';
    statusText.textContent = 'Modo Local';
  }
}

// ==================== STATS Y CONTEO ====================

function updateWordAndDurationStats() {
  const text = storyInput.value.trim();
  const words = text ? text.split(/\s+/).length : 0;
  wordCounter.textContent = words;

  const rate = parseFloat(speakingRateInput.value) || 1.05;
  // Aprox 135 palabras por minuto a 1.0x
  const seconds = Math.round((words / (135 * rate)) * 60);
  const minutes = Math.floor(seconds / 60);
  const remSec = seconds % 60;
  const timeFormatted = minutes > 0 ? `${minutes}m ${remSec}s (${seconds}s)` : `${seconds}s`;
  durationEstimate.textContent = timeFormatted;

  if (seconds > 240) {
    durationEstimate.style.color = '#f59e0b';
    durationEstimate.title = 'Aviso: Más de 4 minutos puede requerir dividirlo en Partes';
  } else {
    durationEstimate.style.color = '#38bdf8';
    durationEstimate.title = '';
  }
}

// ==================== GEMINI: OPTIMIZACIÓN ====================

async function handleOptimizeStory() {
  const raw = storyInput.value.trim();
  if (!raw) {
    alert('Por favor pega primero un texto o historia en el área de texto.');
    return;
  }

  const targetSec = optimizeDuration ? parseInt(optimizeDuration.value, 10) : 180;
  const minText = targetSec >= 60 ? `${targetSec / 60} min` : `${targetSec}s`;

  btnOptimizeStory.disabled = true;
  const originalText = btnOptimizeStory.innerHTML;
  btnOptimizeStory.innerHTML = `⏳ Optimizando a ${minText} con Gemini...`;

  try {
    const res = await fetch(`${API_BASE}/api/optimize-story`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        raw_story: raw,
        target_seconds: targetSec,
        style: 'suspense',
        include_glassy_hook: true
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error en optimización');
    }

    const data = await res.json();
    storyInput.value = data.body || raw;
    updateWordAndDurationStats();
  } catch (err) {
    alert(`Aviso: ${err.message}`);
  } finally {
    btnOptimizeStory.disabled = false;
    btnOptimizeStory.innerHTML = originalText;
  }
}

// ==================== GEMINI: GENERACIÓN DESDE CERO ====================

async function handleGenerateAIStory() {
  const topic = aiTopic.value.trim();
  const category = aiCategory.value;
  const duration = parseInt(aiDuration.value, 10);

  btnGenerateStory.disabled = true;
  const originalText = btnGenerateStory.innerHTML;
  btnGenerateStory.innerHTML = '⏳ Creando historia viral...';

  try {
    const res = await fetch(`${API_BASE}/api/generate-story`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        topic: topic,
        category: category,
        target_seconds: duration,
        include_glassy_hook: true
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error generando historia');
    }

    const data = await res.json();
    storyInput.value = data.body;
    updateWordAndDurationStats();

    // Cambiar a la pestaña de texto para ver la historia
    tabButtons[0].click();
  } catch (err) {
    alert(`Error: ${err.message}`);
  } finally {
    btnGenerateStory.disabled = false;
    btnGenerateStory.innerHTML = originalText;
  }
}

// ==================== SÍNTESIS DE AUDIO (GOOGLE CLOUD TTS) ====================

async function handleSynthesizeAudio() {
  const text = storyInput.value.trim();
  if (!text) {
    alert('Escribe o pega una historia antes de generar la voz.');
    return;
  }

  const voiceId = voiceSelect.value;
  const rate = parseFloat(speakingRateInput.value) || 1.05;
  const pauses = addPausesCheckbox.checked;

  btnSynthesize.disabled = true;
  const spinner = btnSynthesize.querySelector('.btn-spinner');
  const btnText = btnSynthesize.querySelector('.btn-text');
  spinner.classList.remove('hidden');
  btnText.textContent = `Generando voz de ${currentGender === 'male' ? 'Hombre' : 'Mujer'}...`;

  try {
    const res = await fetch(`${API_BASE}/api/synthesize`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        text: text,
        gender: currentGender,
        voice_id: voiceId,
        speaking_rate: rate,
        pitch: 0.0,
        add_dramatic_pauses: pauses
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error al sintetizar');
    }

    const result = await res.json();
    renderAudioResult(result);
    await loadHistory();
    await checkSystemStatus();
  } catch (err) {
    alert(`Error: ${err.message}`);
  } finally {
    btnSynthesize.disabled = false;
    spinner.classList.add('hidden');
    btnText.textContent = 'Generar Voz de Historia (MP3)';
  }
}

function renderAudioResult(result) {
  emptyResultBox.classList.add('hidden');
  resultPlayerBox.classList.remove('hidden');

  resultGenderBadge.className = `badge-gender ${result.gender}`;
  resultGenderBadge.textContent = result.gender_label || (result.gender === 'male' ? 'Hombre' : 'Mujer');
  resultVoiceName.textContent = result.voice_display || result.voice_name;

  if (result.provider === 'google_cloud') {
    resultProviderBadge.textContent = 'Google Cloud TTS (DeepMind)';
    resultProviderBadge.style.color = '#38bdf8';
  } else {
    resultProviderBadge.textContent = 'Neural TTS';
    resultProviderBadge.style.color = '#a855f7';
  }

  // Cargar Audio
  audioPlayer.src = result.audio_url;
  btnDownloadAudio.href = result.audio_url;
  btnDownloadAudio.setAttribute('download', result.filename);

  // Reproducir automáticamente
  audioPlayer.play().then(() => {
    isAudioPlaying = true;
    playIcon.textContent = '⏸';
    waveform.classList.add('playing');
  }).catch(() => {
    // Autoplay bloqueado por el navegador
    isAudioPlaying = false;
    playIcon.textContent = '▶';
    waveform.classList.remove('playing');
  });
}

// ==================== REPRODUCTOR DE AUDIO ====================

function togglePlayAudio() {
  if (!audioPlayer.src) return;

  if (audioPlayer.paused) {
    audioPlayer.play();
    isAudioPlaying = true;
    playIcon.textContent = '⏸';
    waveform.classList.add('playing');
  } else {
    audioPlayer.pause();
    isAudioPlaying = false;
    playIcon.textContent = '▶';
    waveform.classList.remove('playing');
  }
}

function updateAudioProgress() {
  if (audioPlayer.duration) {
    const progress = (audioPlayer.currentTime / audioPlayer.duration) * 100;
    audioTimeline.value = progress;
    currentTimeDisplay.textContent = formatTime(audioPlayer.currentTime);
  }
}

function updateAudioDuration() {
  totalTimeDisplay.textContent = formatTime(audioPlayer.duration);
}

function onAudioEnded() {
  isAudioPlaying = false;
  playIcon.textContent = '▶';
  waveform.classList.remove('playing');
  audioTimeline.value = 0;
  currentTimeDisplay.textContent = '00:00';
}

function seekAudio(e) {
  if (audioPlayer.duration) {
    const seekTime = (e.target.value / 100) * audioPlayer.duration;
    audioPlayer.currentTime = seekTime;
  }
}

function formatTime(secs) {
  if (isNaN(secs)) return '00:00';
  const m = Math.floor(secs / 60);
  const s = Math.floor(secs % 60);
  return `${m.toString().padStart(2, '0')}:${s.toString().padStart(2, '0')}`;
}

// ==================== HISTORIAL DE AUDIOS ====================

async function loadHistory() {
  try {
    const res = await fetch(`${API_BASE}/api/history`);
    const data = await res.json();
    renderHistory(data.history || []);
  } catch (err) {
    console.error('Error cargando historial:', err);
  }
}

function renderHistory(items) {
  historyList.innerHTML = '';
  if (items.length === 0) {
    historyList.innerHTML = '<div class="history-empty">No hay audios generados aún.</div>';
    return;
  }

  items.forEach(item => {
    const div = document.createElement('div');
    div.className = 'history-item';
    const isMale = item.gender === 'Hombre';

    div.innerHTML = `
      <div class="history-item-left">
        <span class="history-gender-badge ${isMale ? 'male' : 'female'}">
          ${isMale ? '👨 Hombre' : '👩 Mujer'}
        </span>
        <div class="history-item-info">
          <span class="history-filename">${item.filename}</span>
          <span class="history-meta">${item.created_at} • ${item.size_kb} KB</span>
        </div>
      </div>
      <button type="button" class="history-play-btn" title="Reproducir">▶</button>
    `;

    const playBtn = div.querySelector('.history-play-btn');
    playBtn.addEventListener('click', () => {
      emptyResultBox.classList.add('hidden');
      resultPlayerBox.classList.remove('hidden');
      resultGenderBadge.className = `badge-gender ${isMale ? 'male' : 'female'}`;
      resultGenderBadge.textContent = item.gender;
      resultVoiceName.textContent = item.filename;
      resultProviderBadge.textContent = 'Audio Guardado';

      audioPlayer.src = item.audio_url;
      btnDownloadAudio.href = item.audio_url;
      btnDownloadAudio.setAttribute('download', item.filename);

      audioPlayer.play().then(() => {
        isAudioPlaying = true;
        playIcon.textContent = '⏸';
        waveform.classList.add('playing');
      });
    });

    historyList.appendChild(div);
  });
}

// ==================== GLOBAL FINANCE & 7 LANGUAGES STUDIO ====================

const financePresetsChips = document.getElementById('financePresetsChips');
const financeTopicInput = document.getElementById('financeTopicInput');
const financeCategorySelect = document.getElementById('financeCategorySelect');
const financeGlassyHook = document.getElementById('financeGlassyHook');
const btnAutoGenerateFinance = document.getElementById('btnAutoGenerateFinance');
const btnGenerateFinanceScripts = document.getElementById('btnGenerateFinanceScripts');
const spinnerFinanceScripts = document.getElementById('spinnerFinanceScripts');

const financeScriptsContainer = document.getElementById('financeScriptsContainer');
const financeGeneratedTopicTitle = document.getElementById('financeGeneratedTopicTitle');
const langTabsNav = document.getElementById('langTabsNav');
const activeLangHook = document.getElementById('activeLangHook');
const activeLangBody = document.getElementById('activeLangBody');
const activeLangWords = document.getElementById('activeLangWords');
const activeLangDuration = document.getElementById('activeLangDuration');
const btnCopyActiveScript = document.getElementById('btnCopyActiveScript');

const packGenderMale = document.getElementById('packGenderMale');
const packGenderFemale = document.getElementById('packGenderFemale');
const packGenderMaleLabel = document.getElementById('packGenderMaleLabel');
const packGenderFemaleLabel = document.getElementById('packGenderFemaleLabel');
const btnSynthesizePack = document.getElementById('btnSynthesizePack');
const spinnerSynthesizePack = document.getElementById('spinnerSynthesizePack');

const packResultBox = document.getElementById('packResultBox');
const packResultTopic = document.getElementById('packResultTopic');
const packResultGender = document.getElementById('packResultGender');
const packResultDate = document.getElementById('packResultDate');
const btnDownloadPackZip = document.getElementById('btnDownloadPackZip');
const packAudiosList = document.getElementById('packAudiosList');

async function loadFinancePresets() {
  try {
    const res = await fetch(`${API_BASE}/api/finance/presets`);
    const data = await res.json();
    renderFinancePresets(data.presets || []);
  } catch (err) {
    console.error('Error cargando presets de finanzas:', err);
  }
}

function renderFinancePresets(categories) {
  if (!financePresetsChips) return;
  financePresetsChips.innerHTML = '';
  
  categories.forEach(cat => {
    cat.topics.forEach((topic, idx) => {
      const chip = document.createElement('button');
      chip.type = 'button';
      chip.className = 'finance-chip';
      if (idx === 0 && cat.category.includes('Libros')) chip.classList.add('active');
      chip.textContent = topic;
      chip.addEventListener('click', () => {
        document.querySelectorAll('.finance-chip').forEach(c => c.classList.remove('active'));
        chip.classList.add('active');
        financeTopicInput.value = topic;
        financeCategorySelect.value = cat.category;
      });
      financePresetsChips.appendChild(chip);
    });
  });

  const firstChip = financePresetsChips.querySelector('.finance-chip.active') || financePresetsChips.querySelector('.finance-chip');
  if (firstChip && !financeTopicInput.value) {
    firstChip.click();
  }
}

function setupFinanceStudioListeners() {
  if (packGenderMale && packGenderFemale) {
    packGenderMale.addEventListener('change', () => {
      packGenderMaleLabel.classList.add('active');
      packGenderFemaleLabel.classList.remove('active');
    });
    packGenderFemale.addEventListener('change', () => {
      packGenderFemaleLabel.classList.add('active');
      packGenderMaleLabel.classList.remove('active');
    });
  }

  if (btnAutoGenerateFinance) {
    btnAutoGenerateFinance.addEventListener('click', () => {
      financeTopicInput.value = '';
      generateFinanceScripts(true);
    });
  }

  if (btnGenerateFinanceScripts) {
    btnGenerateFinanceScripts.addEventListener('click', () => {
      generateFinanceScripts(false);
    });
  }

  if (langTabsNav) {
    const langBtns = langTabsNav.querySelectorAll('.lang-tab-btn');
    langBtns.forEach(btn => {
      btn.addEventListener('click', () => {
        const lang = btn.getAttribute('data-lang');
        switchActiveLang(lang);
      });
    });
  }

  if (activeLangBody) {
    activeLangBody.addEventListener('input', () => {
      if (globalScriptsData[currentActiveLang]) {
        globalScriptsData[currentActiveLang].body = activeLangBody.value;
        const words = activeLangBody.value.trim().split(/\s+/).filter(Boolean).length;
        activeLangWords.textContent = words;
        activeLangDuration.textContent = `${Math.round((words / 140) * 60)}s`;
      }
    });
  }

  if (btnCopyActiveScript) {
    btnCopyActiveScript.addEventListener('click', () => {
      if (activeLangBody && activeLangBody.value) {
        navigator.clipboard.writeText(activeLangBody.value).then(() => {
          btnCopyActiveScript.textContent = '✅ ¡Copiado!';
          setTimeout(() => { btnCopyActiveScript.textContent = '📋 Copiar'; }, 2000);
        });
      }
    });
  }

  if (btnSynthesizePack) {
    btnSynthesizePack.addEventListener('click', synthesizePack);
  }
}

async function generateFinanceScripts(isAutonomous = false) {
  let topic = financeTopicInput.value.trim();
  if (isAutonomous) {
    topic = '';
  }

  setFinanceGeneratingState(true, isAutonomous);

  try {
    const res = await fetch(`${API_BASE}/api/finance/generate-scripts`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        topic: topic,
        category: financeCategorySelect.value,
        include_glassy_hook: financeGlassyHook.checked
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error al generar los guiones.');
    }

    const data = await res.json();
    globalScriptsData = data.languages || {};

    const finalTopic = data.topic || topic || 'Historia Viral';
    financeTopicInput.value = finalTopic;
    financeGeneratedTopicTitle.textContent = `Guiones: ${finalTopic.slice(0, 45)}...`;
    financeScriptsContainer.classList.remove('hidden');

    switchActiveLang('es');
    financeScriptsContainer.scrollIntoView({ behavior: 'smooth', block: 'start' });

  } catch (err) {
    alert(`Error: ${err.message}`);
  } finally {
    setFinanceGeneratingState(false, isAutonomous);
  }
}

function switchActiveLang(langKey) {
  currentActiveLang = langKey;

  if (langTabsNav) {
    langTabsNav.querySelectorAll('.lang-tab-btn').forEach(b => {
      b.classList.toggle('active', b.getAttribute('data-lang') === langKey);
    });
  }

  const scriptItem = globalScriptsData[langKey];
  if (!scriptItem) return;

  activeLangHook.textContent = `"${scriptItem.hook}"`;
  activeLangBody.value = scriptItem.body;

  const words = scriptItem.body.trim().split(/\s+/).filter(Boolean).length;
  activeLangWords.textContent = words;
  activeLangDuration.textContent = `${Math.round((words / 140) * 60)}s`;
}

function setFinanceGeneratingState(loading, isAutonomous = false) {
  if (btnAutoGenerateFinance) btnAutoGenerateFinance.disabled = loading;
  if (btnGenerateFinanceScripts) btnGenerateFinanceScripts.disabled = loading;

  const textSpan = btnGenerateFinanceScripts ? btnGenerateFinanceScripts.querySelector('.btn-text') : null;
  const spinner = btnGenerateFinanceScripts ? btnGenerateFinanceScripts.querySelector('.btn-spinner') : null;
  const autoTextSpan = btnAutoGenerateFinance ? btnAutoGenerateFinance.querySelector('.btn-text') : null;

  if (loading) {
    if (isAutonomous && autoTextSpan) {
      autoTextSpan.textContent = 'Inventando historia 100% autónoma...';
    }
    if (textSpan) textSpan.textContent = 'Creando y traduciendo a los 7 idiomas...';
    if (spinner) spinner.classList.remove('hidden');
  } else {
    if (autoTextSpan) autoTextSpan.textContent = 'Inventar Historia 100% Autónoma con IA';
    if (textSpan) textSpan.textContent = 'Generar Guiones (7 Idiomas)';
    if (spinner) spinner.classList.add('hidden');
  }
}

async function synthesizePack() {
  if (!globalScriptsData || Object.keys(globalScriptsData).length === 0) {
    alert('Primero genera los guiones antes de sintetizar.');
    return;
  }

  setPackSynthesizingState(true);

  const selectedGender = packGenderFemale.checked ? 'female' : 'male';
  const topic = financeTopicInput.value.trim() || 'Historia Global';

  try {
    const res = await fetch(`${API_BASE}/api/finance/synthesize-pack`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        topic: topic,
        scripts: globalScriptsData,
        gender: selectedGender,
        speaking_rate: 1.05,
        add_dramatic_pauses: true
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error al sintetizar el paquete.');
    }

    const packData = await res.json();
    renderPackResult(packData);

  } catch (err) {
    alert(`Error sintetizando pack: ${err.message}`);
  } finally {
    setPackSynthesizingState(false);
  }
}

function setPackSynthesizingState(loading) {
  if (!btnSynthesizePack) return;
  btnSynthesizePack.disabled = loading;
  const textSpan = btnSynthesizePack.querySelector('.btn-text');
  const spinner = btnSynthesizePack.querySelector('.btn-spinner');

  if (loading) {
    textSpan.textContent = 'Locutando los 7 idiomas simultáneamente...';
    spinner.classList.remove('hidden');
  } else {
    textSpan.textContent = 'Sintetizar Pack de 7 Audios (MP3)';
    spinner.classList.add('hidden');
  }
}

function renderPackResult(pack, shouldScroll = true) {
  activePackData = pack;

  emptyResultBox.classList.add('hidden');
  packResultBox.classList.remove('hidden');

  packResultTopic.textContent = pack.topic;
  packResultGender.textContent = pack.gender === 'male' ? '👨 Voces Masculinas' : '👩 Voces Femeninas';
  packResultGender.className = `badge-gender ${pack.gender}`;
  packResultDate.textContent = `Generado el ${pack.created_at} • ${pack.audios_count} Audios MP3`;

  btnDownloadPackZip.href = `${API_BASE}${pack.zip_url}`;
  btnDownloadPackZip.setAttribute('download', `Glassy_Stories_${pack.pack_id}.zip`);

  packAudiosList.innerHTML = '';
  pack.audios.forEach(item => {
    const card = document.createElement('div');
    card.className = 'pack-audio-item';
    card.innerHTML = `
      <div class="pack-audio-info">
        <div class="pack-lang-title">
          <span>${item.flag || '🌐'}</span>
          <strong>${item.lang_name}</strong>
          <span style="color: var(--accent-blue); font-size: 0.75rem;">(${item.voice_name})</span>
        </div>
        <div class="pack-audio-meta">
          ${item.filename} • ${item.file_size_kb} KB • ~${item.estimated_duration_seconds}s
        </div>
      </div>
      <div class="pack-audio-actions">
        <button type="button" class="pack-mini-play" title="Escuchar audio">▶</button>
        <a href="${API_BASE}${item.audio_url}" download="${item.filename}" class="pack-mini-download" title="Descargar este MP3">⬇️</a>
      </div>
    `;

    const playBtn = card.querySelector('.pack-mini-play');
    playBtn.addEventListener('click', () => {
      audioPlayer.src = `${API_BASE}${item.audio_url}`;
      audioPlayer.play().then(() => {
        isAudioPlaying = true;
        document.querySelectorAll('.pack-mini-play').forEach(b => b.textContent = '▶');
        playBtn.textContent = '⏸';
      });
    });

    packAudiosList.appendChild(card);
  });

  // Si ya subió un video de fondo, habilitar el botón de render de video
  if (uploadedBackgroundVideo && uploadedBackgroundVideo.filename) {
    if (btnGenerateTikTokVideos) btnGenerateTikTokVideos.removeAttribute('disabled');
  }

  if (shouldScroll) {
    packResultBox.scrollIntoView({ behavior: 'smooth', block: 'start' });
  }
}

async function loadLatestPack() {
  try {
    const res = await fetch(`${API_BASE}/api/finance/packs`);
    if (!res.ok) return;
    const data = await res.json();
    if (data.packs && data.packs.length > 0) {
      renderPackResult(data.packs[0], false);
      if (uploadedBackgroundVideo && uploadedBackgroundVideo.filename) {
        if (btnGenerateTikTokVideos) btnGenerateTikTokVideos.removeAttribute('disabled');
      }
    }
  } catch (err) {
    console.error('Error cargando paquetes recientes:', err);
  }
}

async function loadLatestVideos() {
  try {
    const res = await fetch(`${API_BASE}/api/video/latest-videos`);
    if (!res.ok) return;
    const data = await res.json();
    if (data.videos && data.videos.length > 0) {
      renderFinishedVideos(data.videos, false);
    }
  } catch (err) {
    console.error('Error cargando videos recientes:', err);
  }
}

// ==================== FASE 2: VIDEO STUDIO & TIKTOK RENDERING ====================

let uploadedBackgroundVideo = null;

const videoDropZone = document.getElementById('videoDropZone');
const videoFileInput = document.getElementById('videoFileInput');
const btnBrowseVideo = document.getElementById('btnBrowseVideo');
const dropzoneTitle = document.getElementById('dropzoneTitle');
const dropzoneSubtitle = document.getElementById('dropzoneSubtitle');
const uploadedVideoBadge = document.getElementById('uploadedVideoBadge');
const uploadedVideoName = document.getElementById('uploadedVideoName');
const uploadedVideoMeta = document.getElementById('uploadedVideoMeta');

const videoCutOffset = document.getElementById('videoCutOffset');
const videoSubtitleColor = document.getElementById('videoSubtitleColor');
const btnGenerateTikTokVideos = document.getElementById('btnGenerateTikTokVideos');
const spinnerTikTokVideos = document.getElementById('spinnerTikTokVideos');
const videoRenderProgressText = document.getElementById('videoRenderProgressText');
const renderStatusMessage = document.getElementById('renderStatusMessage');

const finishedVideosCard = document.getElementById('finishedVideosCard');
const finishedVideosList = document.getElementById('finishedVideosList');
const btnOpenVideosFolder = document.getElementById('btnOpenVideosFolder');

function setupVideoStudioListeners() {
  if (!videoDropZone || !videoFileInput) return;

  const btnHeaderUploadVideo = document.getElementById('btnHeaderUploadVideo');
  const btnCtaSelectVideo = document.getElementById('btnCtaSelectVideo');
  const videoStudioSection = document.getElementById('videoStudioSection');

  function triggerVideoSelectAndHighlight() {
    if (videoStudioSection) {
      videoStudioSection.scrollIntoView({ behavior: 'smooth', block: 'center' });
      videoStudioSection.classList.add('pulse-highlight');
      setTimeout(() => videoStudioSection.classList.remove('pulse-highlight'), 3000);
    }
    videoFileInput.click();
  }

  if (btnHeaderUploadVideo) {
    btnHeaderUploadVideo.addEventListener('click', (e) => {
      e.preventDefault();
      triggerVideoSelectAndHighlight();
    });
  }

  if (btnCtaSelectVideo) {
    btnCtaSelectVideo.addEventListener('click', (e) => {
      e.preventDefault();
      triggerVideoSelectAndHighlight();
    });
  }

  // Botón visible de examinar video
  if (btnBrowseVideo) {
    btnBrowseVideo.addEventListener('click', (e) => {
      e.preventDefault();
      e.stopPropagation();
      videoFileInput.click();
    });
  }

  // Click en zona abre selector de archivo
  videoDropZone.addEventListener('click', (e) => {
    if (e.target !== videoFileInput && e.target !== btnBrowseVideo) {
      videoFileInput.click();
    }
  });

  // Drag & drop visuales
  ['dragenter', 'dragover'].forEach(eventName => {
    videoDropZone.addEventListener(eventName, (e) => {
      e.preventDefault();
      e.stopPropagation();
      videoDropZone.classList.add('dragover');
    });
  });

  ['dragleave', 'drop'].forEach(eventName => {
    videoDropZone.addEventListener(eventName, (e) => {
      e.preventDefault();
      e.stopPropagation();
      videoDropZone.classList.remove('dragover');
    });
  });

  // Manejo de archivo soltado
  videoDropZone.addEventListener('drop', (e) => {
    const files = e.dataTransfer.files;
    if (files && files.length > 0) {
      handleVideoUpload(files[0]);
    }
  });

  // Manejo de archivo seleccionado
  videoFileInput.addEventListener('change', (e) => {
    if (e.target.files && e.target.files.length > 0) {
      handleVideoUpload(e.target.files[0]);
    }
  });

  // Botón Generar 7 Videos
  if (btnGenerateTikTokVideos) {
    btnGenerateTikTokVideos.addEventListener('click', generateTikTokVideos);
  }

  // Botón Abrir Carpeta en Windows
  if (btnOpenVideosFolder) {
    btnOpenVideosFolder.addEventListener('click', async () => {
      try {
        await fetch(`${API_BASE}/api/video/open-folder`, { method: 'POST' });
      } catch (err) {
        console.error('Error abriendo carpeta:', err);
      }
    });
  }
}

async function handleVideoUpload(file) {
  if (!file.type.includes('video') && !file.name.match(/\.(mp4|mov|mkv|webm)$/i)) {
    alert('Por favor selecciona un archivo de video válido (.mp4, .mov, etc.)');
    return;
  }

  dropzoneTitle.textContent = 'Subiendo video de gameplay...';
  dropzoneSubtitle.textContent = `${file.name} (${(file.size / (1024 * 1024)).toFixed(1)} MB)`;

  const formData = new FormData();
  formData.append('file', file);

  try {
    const res = await fetch(`${API_BASE}/api/video/upload-background`, {
      method: 'POST',
      body: formData
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error al subir el video.');
    }

    const data = await res.json();
    uploadedBackgroundVideo = data;

    // Actualizar UI
    dropzoneTitle.textContent = '¡Video de Gameplay cargado con éxito!';
    dropzoneSubtitle.textContent = 'Haz clic en el botón para cambiarlo por otro video si lo deseas';
    uploadedVideoName.textContent = data.original_name;
    uploadedVideoMeta.textContent = `${data.duration_formatted} min • ${data.size_mb} MB`;
    uploadedVideoBadge.classList.remove('hidden');

    // Habilitar botón de render si hay un pack activo
    if (activePackData && activePackData.pack_id) {
      btnGenerateTikTokVideos.removeAttribute('disabled');
      btnGenerateTikTokVideos.title = 'Listo para generar los 7 videos';
    } else {
      btnGenerateTikTokVideos.title = 'Genera primero los audios en el Paso 2';
    }

  } catch (err) {
    alert(`Error subiendo video: ${err.message}`);
    dropzoneTitle.textContent = 'Arrastra tu video de gameplay aquí';
    dropzoneSubtitle.textContent = 'o haz clic en el botón de abajo para seleccionarlo desde tu PC (MP4, MOV)';
  }
}

async function generateTikTokVideos() {
  if (!uploadedBackgroundVideo || !uploadedBackgroundVideo.filename) {
    alert('Por favor selecciona primero tu video de gameplay haciendo clic en "Seleccionar Video de mi PC".');
    return;
  }

  if (!activePackData || !activePackData.pack_id) {
    alert('Primero sintetiza el pack de audios de 7 idiomas en el Paso 2 para tener las locuciones listas.');
    return;
  }

  setVideoRenderingState(true);

  const startOffset = parseFloat(videoCutOffset.value) || 0.0;
  const subtitleColor = videoSubtitleColor.value || 'yellow';

  try {
    const res = await fetch(`${API_BASE}/api/video/generate-pack-videos`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        pack_id: activePackData.pack_id,
        video_filename: uploadedBackgroundVideo.filename,
        start_offset_seconds: startOffset,
        subtitle_color: subtitleColor
      })
    });

    if (!res.ok) {
      const err = await res.json();
      throw new Error(err.detail || 'Error renderizando los videos.');
    }

    const data = await res.json();
    renderFinishedVideos(data.videos || [], true);

  } catch (err) {
    alert(`Error en render de video: ${err.message}`);
  } finally {
    setVideoRenderingState(false);
  }
}

function setVideoRenderingState(loading) {
  if (!btnGenerateTikTokVideos) return;
  btnGenerateTikTokVideos.disabled = loading;
  const textSpan = btnGenerateTikTokVideos.querySelector('.btn-text');
  const spinner = btnGenerateTikTokVideos.querySelector('.btn-spinner');

  if (loading) {
    textSpan.textContent = 'Renderizando los 7 videos con FFmpeg (puede tardar 15-30s)...';
    spinner.classList.remove('hidden');
    videoRenderProgressText.classList.remove('hidden');
    renderStatusMessage.textContent = 'Recortando gameplay, escalando a 1080x1920 y quemando subtítulos dinámicos...';
  } else {
    textSpan.textContent = 'Generar los 7 Videos para TikTok (con Subtítulos Dinámicos)';
    spinner.classList.add('hidden');
    videoRenderProgressText.classList.add('hidden');
  }
}

function renderFinishedVideos(videos, shouldScroll = true) {
  finishedVideosCard.classList.remove('hidden');
  finishedVideosList.innerHTML = '';

  videos.forEach(v => {
    const item = document.createElement('div');
    item.className = 'finished-video-item';

    item.innerHTML = `
      <div class="finished-video-info">
        <div class="finished-lang-title">
          <span>${v.flag || '🎬'}</span>
          <span>${v.lang_name || v.filename}</span>
          <span style="color: var(--accent-blue); font-size: 0.76rem;">(${v.filename})</span>
        </div>
        <div class="finished-video-meta">
          ${v.duration ? `Duración: ~${v.duration}s • ` : ''}Tamaño: ${v.size_mb} MB • 1080x1920 Vertical
        </div>
      </div>
      <div class="finished-video-actions">
        <a href="${API_BASE}${v.video_url}" target="_blank" class="btn-mini-action" title="Previsualizar video">
          ▶️ Ver
        </a>
        <a href="${API_BASE}${v.video_url}" download="${v.filename}" class="btn-mini-action" title="Descargar MP4">
          ⬇️ Guardar
        </a>
      </div>
    `;

    finishedVideosList.appendChild(item);
  });

  if (shouldScroll) {
    finishedVideosCard.scrollIntoView({ behavior: 'smooth', block: 'start' });
  }
}


