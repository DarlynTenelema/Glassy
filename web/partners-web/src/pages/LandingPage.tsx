import { useState, useEffect, useRef, useCallback } from 'react';
import { useNavigate } from 'react-router-dom';
import { 
  ChevronDown, Globe, Flame, ArrowUp, Zap, Gem, 
  Radio
} from 'lucide-react';
import { supabase } from '../api/client';
import { translations, type Language } from '../i18n';

// Definición geométrica de los fragmentos de cristal basados en el Boceto 3
interface CrystalShard {
  id: number;
  type: 'rhombus' | 'triangle-up' | 'triangle-down' | 'triangle-left' | 'triangle-right';
  top: string;
  left: string;
  width: string;
  height: string;
  // Vectores de dispersión 3D
  dx: number;
  dy: number;
  dz: number;
  rotX: number;
  rotY: number;
  rotZ: number;
}

const CRYSTAL_SHARDS: CrystalShard[] = [
  // Fila Superior (Triángulos superiores y bordes)
  { id: 1, type: 'triangle-down', top: '0%', left: '0%', width: '25%', height: '32%', dx: -180, dy: -220, dz: 380, rotX: 45, rotY: -35, rotZ: -20 },
  { id: 2, type: 'triangle-down', top: '0%', left: '25%', width: '25%', height: '32%', dx: -60, dy: -260, dz: 440, rotX: 60, rotY: -15, rotZ: 15 },
  { id: 3, type: 'triangle-down', top: '0%', left: '50%', width: '25%', height: '32%', dx: 60, dy: -260, dz: 460, rotX: 55, rotY: 20, rotZ: -10 },
  { id: 4, type: 'triangle-down', top: '0%', left: '75%', width: '25%', height: '32%', dx: 190, dy: -210, dz: 390, rotX: 40, rotY: 35, rotZ: 25 },

  // Fila Central Superior: Rombos / Diamantes completos (Núcleo del Boceto 3)
  { id: 5, type: 'rhombus', top: '15%', left: '0%', width: '26%', height: '45%', dx: -280, dy: -50, dz: 480, rotX: 25, rotY: -55, rotZ: -30 },
  { id: 6, type: 'rhombus', top: '15%', left: '25%', width: '26%', height: '45%', dx: -90, dy: -30, dz: 540, rotX: -30, rotY: -25, rotZ: 20 },
  { id: 7, type: 'rhombus', top: '15%', left: '50%', width: '26%', height: '45%', dx: 90, dy: -30, dz: 560, rotX: 35, rotY: 30, rotZ: -25 },
  { id: 8, type: 'rhombus', top: '15%', left: '74%', width: '26%', height: '45%', dx: 280, dy: -50, dz: 490, rotX: -25, rotY: 55, rotZ: 35 },

  // Fila Central Inferior: Rombos alternados
  { id: 9, type: 'rhombus', top: '40%', left: '12%', width: '26%', height: '45%', dx: -180, dy: 60, dz: 500, rotX: -35, rotY: -40, rotZ: 15 },
  { id: 10, type: 'rhombus', top: '40%', left: '37%', width: '26%', height: '45%', dx: -40, dy: 50, dz: 550, rotX: 40, rotY: 20, rotZ: -20 },
  { id: 11, type: 'rhombus', top: '40%', left: '62%', width: '26%', height: '45%', dx: 180, dy: 60, dz: 510, rotX: -35, rotY: 40, rotZ: -15 },

  // Bordes Laterales: Triángulos apuntando hacia adentro
  { id: 12, type: 'triangle-right', top: '35%', left: '0%', width: '13%', height: '35%', dx: -260, dy: 0, dz: 380, rotX: 15, rotY: -65, rotZ: -15 },
  { id: 13, type: 'triangle-left', top: '35%', left: '87%', width: '13%', height: '35%', dx: 260, dy: 0, dz: 380, rotX: -15, rotY: 65, rotZ: 15 },

  // Fila Inferior (Triángulos inferiores y esquinas)
  { id: 14, type: 'triangle-up', top: '68%', left: '0%', width: '25%', height: '32%', dx: -190, dy: 220, dz: 360, rotX: -45, rotY: -30, rotZ: 25 },
  { id: 15, type: 'triangle-up', top: '68%', left: '25%', width: '25%', height: '32%', dx: -70, dy: 260, dz: 420, rotX: -60, rotY: -15, rotZ: -15 },
  { id: 16, type: 'triangle-up', top: '68%', left: '50%', width: '25%', height: '32%', dx: 70, dy: 260, dz: 440, rotX: -55, rotY: 20, rotZ: 20 },
  { id: 17, type: 'triangle-up', top: '68%', left: '75%', width: '25%', height: '32%', dx: 200, dy: 230, dz: 380, rotX: -40, rotY: 35, rotZ: -30 },
];

const LandingPage = () => {
  const navigate = useNavigate();
  const [lang, setLang] = useState<Language>('ES');
  const [isLoggingIn, setIsLoggingIn] = useState(false);

  // Progreso continuo de la animación (0.0 = Login, 1.0 = Work with us)
  const [scrollProgress, setScrollProgress] = useState(0);
  const targetProgress = useRef(0);
  const rafId = useRef<number | null>(null);
  const snapTimeout = useRef<number | null>(null);

  // Parallax suave con el ratón para las siluetas flotantes
  const [mouseOffset, setMouseOffset] = useState({ x: 0, y: 0 });

  const t = translations[lang];

  // ¿Está la animación en pleno vuelo? (0 < progress < 1)
  // Durante este estado, se bloquea la interactividad según tu requerimiento
  const isTransitioning = scrollProgress > 0.02 && scrollProgress < 0.98;
  const activeScreen: 0 | 1 = scrollProgress >= 0.5 ? 1 : 0;

  // Ciclo fluido de interpolación (Smooth Spring/Lerp)
  const updatePhysics = useCallback(() => {
    setScrollProgress(prev => {
      const diff = targetProgress.current - prev;
      if (Math.abs(diff) < 0.0015) {
        return targetProgress.current;
      }
      return prev + diff * 0.18;
    });

    rafId.current = requestAnimationFrame(updatePhysics);
  }, []);

  useEffect(() => {
    rafId.current = requestAnimationFrame(updatePhysics);
    return () => {
      if (rafId.current) cancelAnimationFrame(rafId.current);
    };
  }, [updatePhysics]);

  // Sistema Inteligente de Autocompletado (Magnetic Snap)
  // Si el usuario deja la rueda a mitad de camino, se completa automáticamente
  const triggerAutoSnap = useCallback(() => {
    if (snapTimeout.current) clearTimeout(snapTimeout.current);

    snapTimeout.current = window.setTimeout(() => {
      if (targetProgress.current > 0.02 && targetProgress.current < 0.98) {
        if (targetProgress.current >= 0.5) {
          targetProgress.current = 1.0;
        } else {
          targetProgress.current = 0.0;
        }
      }
    }, 180);
  }, []);

  // Manejador de la rueda del ratón (Wheel)
  useEffect(() => {
    const handleWheel = (e: WheelEvent) => {
      // Sensibilidad calculada para transición fluida y natural
      const delta = e.deltaY;
      const nextProgress = Math.min(1, Math.max(0, targetProgress.current + delta * 0.0016));
      targetProgress.current = nextProgress;
      triggerAutoSnap();
    };

    window.addEventListener('wheel', handleWheel, { passive: true });
    return () => window.removeEventListener('wheel', handleWheel);
  }, [triggerAutoSnap]);

  // Soporte táctil y Swipe para móviles y touchpads
  useEffect(() => {
    let startY = 0;
    const handleTouchStart = (e: TouchEvent) => {
      startY = e.touches[0].clientY;
    };
    const handleTouchMove = (e: TouchEvent) => {
      const currentY = e.touches[0].clientY;
      const diff = startY - currentY;
      startY = currentY;
      targetProgress.current = Math.min(1, Math.max(0, targetProgress.current + diff * 0.0035));
      triggerAutoSnap();
    };
    const handleTouchEnd = () => {
      triggerAutoSnap();
    };

    window.addEventListener('touchstart', handleTouchStart, { passive: true });
    window.addEventListener('touchmove', handleTouchMove, { passive: true });
    window.addEventListener('touchend', handleTouchEnd, { passive: true });
    return () => {
      window.removeEventListener('touchstart', handleTouchStart);
      window.removeEventListener('touchmove', handleTouchMove);
      window.removeEventListener('touchend', handleTouchEnd);
    };
  }, [triggerAutoSnap]);

  // Efecto Parallax interactivo del ratón
  useEffect(() => {
    const handleMouseMove = (e: MouseEvent) => {
      const x = (e.clientX / window.innerWidth - 0.5) * 20;
      const y = (e.clientY / window.innerHeight - 0.5) * 20;
      setMouseOffset({ x, y });
    };

    window.addEventListener('mousemove', handleMouseMove);
    return () => window.removeEventListener('mousemove', handleMouseMove);
  }, []);

  // Cambio de pantalla manual (vía cápsula lateral o botón)
  const snapToScreen = (target: 0 | 1) => {
    targetProgress.current = target;
  };

  const cycleLanguage = () => {
    const next: Record<Language, Language> = { ES: 'EN', EN: 'PT', PT: 'ES' };
    setLang(next[lang]);
  };

  const handleGoogleLogin = async () => {
    if (isTransitioning) return; // Bloqueo si la pantalla está a mitad de rotura
    setIsLoggingIn(true);
    try {
      if (import.meta.env.VITE_SUPABASE_URL && !import.meta.env.VITE_SUPABASE_URL.includes('xyzcompany')) {
        const { error } = await supabase.auth.signInWithOAuth({
          provider: 'google',
          options: {
            redirectTo: window.location.origin + '/dashboard',
          },
        });
        if (error) throw error;
      } else {
        setTimeout(() => {
          setIsLoggingIn(false);
          navigate('/dashboard');
        }, 600);
      }
    } catch {
      setIsLoggingIn(false);
      navigate('/dashboard');
    }
  };

  // Cálculo de intensidad de rotura (Pico máximo en 0.5)
  const shatterFactor = Math.sin(scrollProgress * Math.PI);

  return (
    <div className="shatter-perspective-stage">

      {/* ==================================================================== */}
      {/* 1. SILUETAS DINÁMICAS FLOTANTES (Moviéndose continuamente)            */}
      {/* ==================================================================== */}
      <div className="ambient-silhouettes-container" aria-hidden="true">
        
        {/* Silueta 1: TikTok Logo (Arriba a la Izquierda) */}
        <div 
          className={`floating-silhouette anim-drift-a ${activeScreen === 0 ? 'silhouette-light' : 'silhouette-dark'}`}
          style={{
            top: '10%',
            left: '7%',
            width: '84px',
            height: '84px',
            transform: `translate3d(${mouseOffset.x * 0.8}px, ${mouseOffset.y * 0.8}px, 0)`
          }}
        >
          <img 
            src="/assets/silhouettes/tiktok.png" 
            alt="TikTok Partner" 
            style={{ width: '100%', height: '100%', objectFit: 'contain' }}
          />
        </div>

        {/* Silueta 2: Emoji Dinero / Bolsa de Dinero (Arriba a la Derecha) */}
        <div 
          className={`floating-silhouette anim-drift-b ${activeScreen === 0 ? 'silhouette-light' : 'silhouette-dark'}`}
          style={{
            top: '15%',
            right: '11%',
            width: '98px',
            height: '98px',
            transform: `translate3d(${mouseOffset.x * -0.9}px, ${mouseOffset.y * -0.9}px, 0)`
          }}
        >
          <img 
            src="/assets/silhouettes/money.png" 
            alt="Money Earnings" 
            style={{ width: '100%', height: '100%', objectFit: 'contain' }}
          />
        </div>

        {/* Silueta 3: Diamante Glassy (Abajo a la Izquierda) */}
        <div 
          className={`floating-silhouette anim-drift-c ${activeScreen === 0 ? 'silhouette-light' : 'silhouette-dark'}`}
          style={{
            bottom: '14%',
            left: '9%',
            width: '88px',
            height: '88px',
            transform: `translate3d(${mouseOffset.x * 0.7}px, ${mouseOffset.y * 0.7}px, 0)`
          }}
        >
          <img 
            src="/assets/silhouettes/diamond.png" 
            alt="Glassy Diamond" 
            style={{ width: '100%', height: '100%', objectFit: 'contain' }}
          />
        </div>

        {/* Silueta 4: Streamer Gamepad (Abajo a la Derecha) */}
        <div 
          className={`floating-silhouette anim-drift-d ${activeScreen === 0 ? 'silhouette-light' : 'silhouette-dark'}`}
          style={{
            bottom: '16%',
            right: '8%',
            width: '100px',
            height: '100px',
            transform: `translate3d(${mouseOffset.x * -0.8}px, ${mouseOffset.y * -0.8}px, 0)`
          }}
        >
          <img 
            src="/assets/silhouettes/streamer.png" 
            alt="Streamer Live" 
            style={{ width: '100%', height: '100%', objectFit: 'contain' }}
          />
        </div>

      </div>

      {/* ==================================================================== */}
      {/* 2. MALLA DE CRISTALES 3D (Rombos y Triángulos - Boceto 3)            */}
      {/* ==================================================================== */}
      <div 
        className="crystal-shatter-mosaic" 
        style={{ 
          opacity: shatterFactor > 0.01 ? Math.min(1, shatterFactor * 1.4) : 0,
          pointerEvents: 'none'
        }}
      >
        {CRYSTAL_SHARDS.map((shard) => {
          const curDx = shard.dx * shatterFactor;
          const curDy = shard.dy * shatterFactor;
          const curDz = shard.dz * shatterFactor;
          const curRotX = shard.rotX * shatterFactor;
          const curRotY = shard.rotY * shatterFactor;
          const curRotZ = shard.rotZ * shatterFactor;

          const clipClass = `clip-${shard.type}`;

          return (
            <div
              key={shard.id}
              className={`crystal-shard-item ${clipClass}`}
              style={{
                top: shard.top,
                left: shard.left,
                width: shard.width,
                height: shard.height,
                transform: `translate3d(${curDx}px, ${curDy}px, ${curDz}px) rotateX(${curRotX}deg) rotateY(${curRotY}deg) rotateZ(${curRotZ}deg) scale(${1 + shatterFactor * 0.12})`,
              }}
            />
          );
        })}
      </div>

      {/* ==================================================================== */}
      {/* 3. PANTALLA 1: LOGIN (Boceto 1 - Blanco, Azul y Negro)                */}
      {/* ==================================================================== */}
      <section 
        className={`stage-screen stage-login ${isTransitioning ? 'stage-locked-flat' : ''}`}
        style={{
          transform: `perspective(1200px) rotateX(${scrollProgress * 32}deg) scale(${1 - scrollProgress * 0.16}) translateZ(${-scrollProgress * 250}px)`,
          opacity: Math.max(0, 1 - scrollProgress * 1.7),
          filter: `blur(${scrollProgress * 5}px)`,
          pointerEvents: scrollProgress <= 0.05 ? 'auto' : 'none',
          zIndex: scrollProgress <= 0.5 ? 15 : 5,
        }}
      >
        {/* Barra superior con selector de Idioma */}
        <header style={{ 
          width: '100%', 
          maxWidth: '1100px', 
          display: 'flex', 
          justifyContent: 'space-between', 
          alignItems: 'center',
          paddingTop: '0.25rem'
        }}>
          <span className="badge-clean">
            <Zap size={14} color="#1d4ed8" /> TikTok LIVE Official Partner 2026
          </span>

          <div style={{ position: 'relative' }}>
            <button 
              type="button"
              className="capsule-lang"
              onClick={cycleLanguage}
              title="Clic para cambiar de idioma"
            >
              <Globe size={15} color="#1d4ed8" />
              <span>{t.languageName}: {lang}</span>
            </button>
          </div>
        </header>

        {/* Centro de la Pantalla: Glassy + Web Studio + Botón Google */}
        <main style={{ 
          display: 'flex', 
          flexDirection: 'column', 
          alignItems: 'center', 
          textAlign: 'center',
          maxWidth: '720px',
          margin: 'auto 0'
        }}>
          <div style={{ display: 'inline-flex', flexDirection: 'column', alignItems: 'center' }}>
            <h1 className="modern-brand-logo">
              Glassy
            </h1>
            <div className="modern-brand-tag">
              <Gem size={20} color="#1d4ed8" />
              <span>{t.webStudioSub}</span>
            </div>
          </div>

          <p style={{ 
            color: '#334155', 
            fontSize: '1.1rem', 
            maxWidth: '540px',
            lineHeight: 1.6,
            margin: '1.5rem auto 0',
            fontWeight: 500
          }}>
            La plataforma oficial para creadores y streamers en TikTok LIVE. Monetiza tu audiencia con comisiones directas y herramientas exclusivas para tus directos.
          </p>

          {/* Botón Google Cápsula Moderno (Boceto 1) */}
          <div style={{ marginTop: '2.5rem', display: 'flex', flexDirection: 'column', alignItems: 'center', gap: '0.85rem' }}>
            <button 
              type="button"
              className="btn-google-modern"
              onClick={handleGoogleLogin}
              disabled={isLoggingIn || isTransitioning}
            >
              <svg width="24" height="24" viewBox="0 0 24 24">
                <path
                  fill="#4285F4"
                  d="M22.56 12.25c0-.78-.07-1.53-.2-2.25H12v4.26h5.92c-.26 1.37-1.04 2.53-2.21 3.31v2.77h3.57c2.08-1.92 3.28-4.74 3.28-8.09z"
                />
                <path
                  fill="#34A853"
                  d="M12 23c2.97 0 5.46-.98 7.28-2.66l-3.57-2.77c-.98.66-2.23 1.06-3.71 1.06-2.86 0-5.29-1.93-6.16-4.53H2.18v2.84C3.99 20.53 7.7 23 12 23z"
                />
                <path
                  fill="#FBBC05"
                  d="M5.84 14.09c-.22-.66-.35-1.36-.35-2.09s.13-1.43.35-2.09V7.06H2.18C1.43 8.55 1 10.22 1 12s.43 3.45 1.18 4.94l2.85-2.22.81-.63z"
                />
                <path
                  fill="#EA4335"
                  d="M12 5.38c1.62 0 3.06.56 4.21 1.64l3.15-3.15C17.45 2.09 14.97 1 12 1 7.7 1 3.99 3.47 2.18 7.06l3.66 2.84c.87-2.6 3.3-4.52 6.16-4.52z"
                />
              </svg>
              <span>{isLoggingIn ? t.loggingIn : t.loginGoogle}</span>
            </button>

            <button
              type="button"
              onClick={() => navigate('/dashboard')}
              style={{
                background: 'transparent',
                border: 'none',
                color: '#64748b',
                fontSize: '0.88rem',
                textDecoration: 'underline',
                cursor: 'pointer',
                fontWeight: 600,
                marginTop: '0.2rem'
              }}
            >
              {t.quickDemo}
            </button>
          </div>
        </main>

        {/* Pie de pantalla: Indicador de Scroll */}
        <footer style={{ paddingBottom: '0.75rem', textAlign: 'center' }}>
          <button
            type="button"
            onClick={() => snapToScreen(1)}
            style={{
              background: 'transparent',
              border: 'none',
              color: '#1d4ed8',
              cursor: 'pointer',
              display: 'flex',
              flexDirection: 'column',
              alignItems: 'center',
              gap: '0.25rem',
              fontSize: '0.92rem',
              fontWeight: 700
            }}
          >
            <span>{t.scrollHint}</span>
            <ChevronDown size={22} className="animate-bounce-subtle" />
          </button>
        </footer>
      </section>

      {/* ==================================================================== */}
      {/* 4. PANTALLA 2: WORK WITH US (Boceto 2 Simplificado - Azul Profundo)  */}
      {/* ==================================================================== */}
      <section 
        className={`stage-screen stage-work ${isTransitioning ? 'stage-locked-flat' : ''}`}
        style={{
          transform: `perspective(1200px) rotateX(${(1 - scrollProgress) * -32}deg) scale(${0.84 + scrollProgress * 0.16}) translateZ(${(1 - scrollProgress) * -250}px)`,
          opacity: Math.max(0, scrollProgress * 1.8 - 0.7),
          filter: `blur(${(1 - scrollProgress) * 5}px)`,
          pointerEvents: scrollProgress >= 0.95 ? 'auto' : 'none',
          zIndex: scrollProgress > 0.5 ? 15 : 5,
        }}
      >
        {/* Cabecera de Work with us */}
        <header style={{ 
          width: '100%', 
          maxWidth: '1100px', 
          display: 'flex', 
          justifyContent: 'space-between', 
          alignItems: 'center',
          paddingTop: '0.25rem'
        }}>
          <button
            type="button"
            onClick={() => snapToScreen(0)}
            style={{
              display: 'flex',
              alignItems: 'center',
              gap: '0.45rem',
              background: 'rgba(255, 255, 255, 0.15)',
              border: '1px solid rgba(255, 255, 255, 0.3)',
              color: '#ffffff',
              padding: '0.45rem 1rem',
              borderRadius: '9999px',
              fontWeight: 700,
              cursor: 'pointer',
              fontSize: '0.88rem',
              backdropFilter: 'blur(8px)'
            }}
          >
            <ArrowUp size={16} />
            <span>Volver al Login</span>
          </button>

          <button 
            type="button"
            className="capsule-lang"
            onClick={cycleLanguage}
            title="Cambiar idioma"
          >
            <Globe size={15} color="#1d4ed8" />
            <span>{t.languageName}: {lang}</span>
          </button>
        </header>

        {/* Contenido Central: Explicación Limpia y Directa (Boceto 2) */}
        <main style={{ 
          width: '100%', 
          maxWidth: '1100px', 
          margin: 'auto 0',
          padding: '0.5rem 0',
          textAlign: 'center'
        }}>
          <h2 style={{ 
            fontSize: '3rem', 
            fontWeight: 900,
            color: '#ffffff',
            marginBottom: '0.35rem',
            letterSpacing: '-0.035em',
            fontFamily: 'var(--font-display)'
          }}>
            {t.workWithUsTitle}
          </h2>
          <p style={{ color: '#cbd5e1', fontSize: '1.1rem', fontWeight: 500, marginBottom: '2rem' }}>
            {t.workWithUsSubtitle}
          </p>

          {/* Dos Explicaciones Limpias: Para Influencers y Para Gamers */}
          <div style={{ 
            display: 'grid', 
            gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))', 
            gap: '1.75rem',
            textAlign: 'left'
          }}>
            
            {/* SECCIÓN 1: FOR INFLUENCERS (Boceto 2) */}
            <div className="glass-feature-card" style={{ borderLeft: '6px solid #1d4ed8' }}>
              <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem', marginBottom: '0.5rem' }}>
                <Flame size={22} color="#1d4ed8" />
                <h3 className="glass-feature-title" style={{ margin: 0 }}>
                  - {t.forInfluencersTitle}:
                </h3>
              </div>
              <p className="glass-feature-desc">
                {t.forInfluencersDesc}
              </p>

              <ul className="glass-bullet-list">
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" />
                  <span><strong>25% de RevShare directo:</strong> Comisiones de por vida sobre todas las compras de cristales de tus seguidores en el juego móvil.</span>
                </li>
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" />
                  <span><strong>Código de Creador (#TU_NOMBRE):</strong> Tus seguidores reciben 100 cristales de regalo de bienvenida al apoyar tu perfil.</span>
                </li>
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" />
                  <span><strong>Cero fricción técnica:</strong> Enlace listo para tu biografía en TikTok, Instagram o YouTube con cobros automáticos a tu cuenta.</span>
                </li>
              </ul>
            </div>

            {/* SECCIÓN 2: FOR GAMERS & STREAMERS (Boceto 2) */}
            <div className="glass-feature-card" style={{ borderLeft: '6px solid #2563eb' }}>
              <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem', marginBottom: '0.5rem' }}>
                <Radio size={22} color="#1d4ed8" />
                <h3 className="glass-feature-title" style={{ margin: 0 }}>
                  - {t.forGamersTitle}:
                </h3>
              </div>
              <p className="glass-feature-desc">
                {t.forGamersDesc}
              </p>

              <ul className="glass-bullet-list">
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" style={{ background: '#2563eb' }} />
                  <span><strong>TikTok LIVE Studio en PC:</strong> Formato vertical nativo 1080p compatible al instante con OBS sin configuraciones complejas.</span>
                </li>
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" style={{ background: '#2563eb' }} />
                  <span><strong>Interacción real con regalos:</strong> Los cuarzos y regalos de tu público en el chat caen directamente como gemas dentro de tu partida en vivo.</span>
                </li>
                <li className="glass-bullet-item">
                  <span className="glass-bullet-dot" style={{ background: '#2563eb' }} />
                  <span><strong>Piloto Automático con IA:</strong> Asistente multi-agente que juega por ti durante transmisiones largas para que interactúes con tu comunidad.</span>
                </li>
              </ul>
            </div>

          </div>
        </main>

        {/* Pie de pantalla: Acciones directas */}
        <footer style={{ paddingBottom: '0.85rem', display: 'flex', gap: '1rem', alignItems: 'center' }}>
          <button 
            type="button"
            className="btn-google-modern"
            onClick={handleGoogleLogin}
            disabled={isLoggingIn || isTransitioning}
            style={{ padding: '0.85rem 2.5rem', fontSize: '1rem' }}
          >
            <span>{t.startNowBtn}</span>
          </button>
          <button
            type="button"
            onClick={() => snapToScreen(0)}
            style={{
              background: 'rgba(255, 255, 255, 0.15)',
              border: '1px solid rgba(255, 255, 255, 0.3)',
              color: '#ffffff',
              padding: '0.85rem 1.75rem',
              borderRadius: '9999px',
              fontWeight: 700,
              cursor: 'pointer',
              fontSize: '0.95rem',
              display: 'inline-flex',
              alignItems: 'center',
              gap: '0.45rem',
              backdropFilter: 'blur(8px)'
            }}
          >
            <ArrowUp size={16} />
            <span>Volver al Login</span>
          </button>
        </footer>
      </section>

      {/* ==================================================================== */}
      {/* 5. INDICADOR CÁPSULA VERTICAL (Borde Derecho, Bocetos 1 y 2)         */}
      {/* ==================================================================== */}
      <aside 
        className="stage-capsule-nav"
        onClick={() => snapToScreen(activeScreen === 0 ? 1 : 0)}
        title={activeScreen === 0 ? "Deslizar a Work with us" : "Volver a Login"}
        aria-label="Indicador interactivo de pantalla"
      >
        <div 
          className="stage-capsule-nav-thumb"
          style={{ 
            transform: `translateY(${scrollProgress * 54}px)`
          }} 
        />
      </aside>

    </div>
  );
};

export default LandingPage;
