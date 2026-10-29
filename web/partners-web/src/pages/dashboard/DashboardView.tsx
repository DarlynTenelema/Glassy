import React, { useState } from 'react';
import { 
  Sparkles, Copy, Check, QrCode, ArrowUpRight, TrendingUp, 
  Users, DollarSign, Download, Radio, ExternalLink 
} from 'lucide-react';
import type { PartnerUser, MainTab } from '../../types/partner';

interface DashboardViewProps {
  partner: PartnerUser;
  onNavigateTab: (tab: MainTab) => void;
}

export const DashboardView: React.FC<DashboardViewProps> = ({ partner, onNavigateTab }) => {
  const [copiedLink, setCopiedLink] = useState(false);
  const [copiedRules, setCopiedRules] = useState(false);
  const [showQrModal, setShowQrModal] = useState(false);

  const partnerLink = `https://glassy.gg/play?ref=${partner.partner_code}`;

  const handleCopyLink = () => {
    navigator.clipboard.writeText(partnerLink);
    setCopiedLink(true);
    setTimeout(() => setCopiedLink(false), 2000);
  };

  const handleCopyRules = () => {
    const rules = `💎 DINÁMICAS GLASSY TIKTOK LIVE:
• 100 Likes = 1 Esmeralda | 1,000 Likes = 1 Zafiro
• Comenta 🤍 = 1 Cuarzo | Comenta 🖤 = 1 Piedra Troll
🎁 Regalos en vivo:
• $0.05 = Cuarzo (+20 pts)
• $0.10 = Piedra Troll (+30 pts al romper)
• $0.20 = +30 seg a la micro-misión
• $0.25 = ¡AUTO-COMPLETA LA MISIÓN!
👑 ¡Descarga Glassy con mi código ${partner.partner_code} para 100 gemas gratis!`;
    navigator.clipboard.writeText(rules);
    setCopiedRules(true);
    setTimeout(() => setCopiedRules(false), 2000);
  };

  return (
    <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
      
      {/* 1. HERO BANNER DE CONTROL */}
      <div style={{
        background: 'linear-gradient(135deg, #1e40af 0%, #1d4ed8 60%, #2563eb 100%)',
        borderRadius: '16px',
        padding: '1.75rem',
        color: '#ffffff',
        boxShadow: '0 12px 30px -5px rgba(29, 78, 216, 0.25)',
        display: 'flex',
        flexDirection: 'column',
        gap: '1.25rem'
      }}>
        <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'flex-start', flexWrap: 'wrap', gap: '1rem' }}>
          <div>
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem', marginBottom: '0.4rem' }}>
              <span style={{
                backgroundColor: 'rgba(255, 255, 255, 0.2)',
                backdropFilter: 'blur(4px)',
                padding: '0.2rem 0.6rem',
                borderRadius: '9999px',
                fontSize: '0.75rem',
                fontWeight: 800,
                letterSpacing: '0.04em',
                textTransform: 'uppercase'
              }}>
                🏆 Partner Nivel {partner.tier} ({partner.commission_rate * 100}% Rev-Share)
              </span>
              <span style={{ fontSize: '0.8rem', opacity: 0.9 }}>• ID: {partner.partner_code}</span>
            </div>
            <h2 style={{ fontSize: '1.85rem', fontWeight: 900, letterSpacing: '-0.02em', color: '#ffffff', margin: 0 }}>
              ¡Hola de nuevo, {partner.name}! 👋
            </h2>
            <p style={{ margin: '0.35rem 0 0', opacity: 0.92, fontSize: '0.95rem' }}>
              Tu panel de control inteligente para monetizar con directos de TikTok y seguidores de Glassy.
            </p>
          </div>

          <div style={{ display: 'flex', gap: '0.5rem', flexWrap: 'wrap' }}>
            <button
              type="button"
              onClick={() => onNavigateTab('gamers')}
              style={{
                backgroundColor: '#ffffff',
                color: '#1d4ed8',
                border: 'none',
                borderRadius: '10px',
                padding: '0.65rem 1.1rem',
                fontWeight: 800,
                fontSize: '0.88rem',
                cursor: 'pointer',
                display: 'flex',
                alignItems: 'center',
                gap: '0.45rem',
                boxShadow: '0 4px 12px rgba(0,0,0,0.1)'
              }}
            >
              <Radio size={16} />
              <span>Modo Streamer TikTok</span>
            </button>
          </div>
        </div>

        {/* Caja de Enlace y Código Rápido */}
        <div style={{
          backgroundColor: 'rgba(255, 255, 255, 0.12)',
          backdropFilter: 'blur(8px)',
          borderRadius: '12px',
          padding: '0.85rem 1.15rem',
          display: 'flex',
          alignItems: 'center',
          justifyContent: 'space-between',
          flexWrap: 'wrap',
          gap: '0.75rem',
          border: '1px solid rgba(255, 255, 255, 0.25)'
        }}>
          <div style={{ display: 'flex', alignItems: 'center', gap: '0.75rem', minWidth: '240px' }}>
            <span style={{ fontSize: '0.85rem', fontWeight: 700, opacity: 0.95 }}>Enlace de Afiliado:</span>
            <code style={{
              backgroundColor: 'rgba(0, 0, 0, 0.25)',
              padding: '0.3rem 0.6rem',
              borderRadius: '6px',
              fontSize: '0.88rem',
              fontWeight: 700,
              letterSpacing: '0.02em'
            }}>
              {partnerLink}
            </code>
          </div>

          <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
            <button
              type="button"
              onClick={handleCopyLink}
              style={{
                backgroundColor: '#ffffff',
                color: '#0f172a',
                border: 'none',
                borderRadius: '8px',
                padding: '0.45rem 0.85rem',
                fontSize: '0.82rem',
                fontWeight: 800,
                cursor: 'pointer',
                display: 'flex',
                alignItems: 'center',
                gap: '0.35rem'
              }}
            >
              {copiedLink ? <Check size={14} color="#16a34a" /> : <Copy size={14} />}
              <span>{copiedLink ? '¡Enlace Copiado!' : 'Copiar Enlace'}</span>
            </button>

            <button
              type="button"
              onClick={() => setShowQrModal(true)}
              style={{
                backgroundColor: 'rgba(255, 255, 255, 0.2)',
                color: '#ffffff',
                border: '1px solid rgba(255, 255, 255, 0.4)',
                borderRadius: '8px',
                padding: '0.45rem 0.75rem',
                fontSize: '0.82rem',
                fontWeight: 700,
                cursor: 'pointer',
                display: 'flex',
                alignItems: 'center',
                gap: '0.35rem'
              }}
            >
              <QrCode size={14} />
              <span>Ver QR para Stream</span>
            </button>
          </div>
        </div>
      </div>

      {/* 2. TARJETAS DE MÉTRICAS CLAVE (KPIs) */}
      <div style={{
        display: 'grid',
        gridTemplateColumns: 'repeat(auto-fit, minmax(230px, 1fr))',
        gap: '1rem'
      }}>
        {/* KPI 1: Saldo Disponible */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1.5px solid #bfdbfe',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          justifyContent: 'space-between',
          boxShadow: '0 4px 14px rgba(29, 78, 216, 0.05)'
        }}>
          <div>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.5rem' }}>
              <span style={{ fontSize: '0.82rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Balance Disponible
              </span>
              <div style={{ width: '28px', height: '28px', borderRadius: '50%', backgroundColor: '#eff6ff', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                <DollarSign size={16} color="#1d4ed8" />
              </div>
            </div>
            <div style={{ fontSize: '1.85rem', fontWeight: 900, color: '#1d4ed8' }}>
              ${partner.available_balance.toFixed(2)}
              <span style={{ fontSize: '0.9rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>USD</span>
            </div>
            <p style={{ fontSize: '0.78rem', color: '#64748b', margin: '0.25rem 0 0' }}>
              +${partner.pending_balance.toFixed(2)} en validación (48h)
            </p>
          </div>

          <button
            type="button"
            onClick={() => onNavigateTab('wallet')}
            style={{
              marginTop: '1rem',
              backgroundColor: '#1d4ed8',
              color: '#ffffff',
              border: 'none',
              borderRadius: '8px',
              padding: '0.55rem',
              fontWeight: 800,
              fontSize: '0.82rem',
              cursor: 'pointer',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              gap: '0.35rem',
              transition: 'background 0.15s'
            }}
          >
            <span>Retirar Fondos</span>
            <ArrowUpRight size={14} />
          </button>
        </div>

        {/* KPI 2: Ganancias del Mes */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1px solid #e2e8f0',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          justifyContent: 'space-between'
        }}>
          <div>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.5rem' }}>
              <span style={{ fontSize: '0.82rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Generado este Mes
              </span>
              <div style={{ width: '28px', height: '28px', borderRadius: '50%', backgroundColor: '#f0fdf4', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                <TrendingUp size={16} color="#16a34a" />
              </div>
            </div>
            <div style={{ fontSize: '1.85rem', fontWeight: 900, color: '#0f172a' }}>
              $640.00
              <span style={{ fontSize: '0.9rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>USD</span>
            </div>
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.8rem', fontWeight: 700, color: '#16a34a' }}>
              <span>▲ +18.4%</span>
              <span style={{ color: '#64748b', fontWeight: 500 }}>vs mes anterior</span>
            </div>
          </div>
          <p style={{ fontSize: '0.78rem', color: '#64748b', margin: '0.75rem 0 0' }}>
            Total histórico: ${partner.total_earnings.toFixed(2)} USD
          </p>
        </div>

        {/* KPI 3: Jugadores Referidos */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1px solid #e2e8f0',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          justifyContent: 'space-between'
        }}>
          <div>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.5rem' }}>
              <span style={{ fontSize: '0.82rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Jugadores Activos
              </span>
              <div style={{ width: '28px', height: '28px', borderRadius: '50%', backgroundColor: '#eff6ff', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                <Users size={16} color="#1d4ed8" />
              </div>
            </div>
            <div style={{ fontSize: '1.85rem', fontWeight: 900, color: '#0f172a' }}>
              {partner.active_players}
            </div>
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.8rem', color: '#64748b' }}>
              <span>De <strong>{partner.total_referrals}</strong> registrados con tu código</span>
            </div>
          </div>
          <button
            type="button"
            onClick={() => onNavigateTab('influencers')}
            style={{
              marginTop: '1rem',
              backgroundColor: '#f8fafc',
              border: '1px solid #e2e8f0',
              color: '#334155',
              borderRadius: '8px',
              padding: '0.5rem',
              fontWeight: 700,
              fontSize: '0.82rem',
              cursor: 'pointer'
            }}
          >
            Ver lista de seguidores
          </button>
        </div>

        {/* KPI 4: Tasa de Conversión */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1px solid #e2e8f0',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          justifyContent: 'space-between'
        }}>
          <div>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.5rem' }}>
              <span style={{ fontSize: '0.82rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Conversión de Venta
              </span>
              <div style={{ width: '28px', height: '28px', borderRadius: '50%', backgroundColor: '#fef3c7', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                <Sparkles size={16} color="#d97706" />
              </div>
            </div>
            <div style={{ fontSize: '1.85rem', fontWeight: 900, color: '#0f172a' }}>
              27.0%
            </div>
            <p style={{ fontSize: '0.78rem', color: '#64748b', margin: '0.25rem 0 0' }}>
              1 de cada 4 fans compra paquetes de cristales.
            </p>
          </div>
          <div style={{
            fontSize: '0.75rem',
            fontWeight: 800,
            color: '#1d4ed8',
            backgroundColor: '#eff6ff',
            padding: '0.45rem',
            borderRadius: '6px',
            textAlign: 'center',
            marginTop: '1rem'
          }}>
            Comisión Activa: 25% por compra
          </div>
        </div>
      </div>

      {/* 3. GRÁFICO RESUMEN Y ACCIONES RÁPIDAS */}
      <div style={{
        display: 'grid',
        gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))',
        gap: '1.25rem'
      }}>
        {/* Gráfico Simple de Correlación Stream/Ventas */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1px solid #e2e8f0',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          gap: '1rem'
        }}>
          <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center' }}>
            <div>
              <h3 style={{ fontSize: '1.05rem', fontWeight: 800, color: '#0f172a', margin: 0 }}>
                Rendimiento de los Últimos 7 Días
              </h3>
              <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                Picos más altos coinciden con tus transmisiones de TikTok LIVE.
              </p>
            </div>
            <span style={{ fontSize: '0.75rem', fontWeight: 700, backgroundColor: '#eff6ff', color: '#1d4ed8', padding: '0.25rem 0.5rem', borderRadius: '6px' }}>
              En Vivo: 3 directos
            </span>
          </div>

          {/* Simulación visual de gráfico SVG limpio */}
          <div style={{ height: '160px', width: '100%', position: 'relative' }}>
            <svg viewBox="0 0 500 150" style={{ width: '100%', height: '100%', overflow: 'visible' }}>
              <defs>
                <linearGradient id="chartGradient" x1="0" y1="0" x2="0" y2="1">
                  <stop offset="0%" stopColor="#2563eb" stopOpacity="0.3" />
                  <stop offset="100%" stopColor="#2563eb" stopOpacity="0.0" />
                </linearGradient>
              </defs>
              {/* Líneas guía */}
              <line x1="0" y1="120" x2="500" y2="120" stroke="#f1f5f9" strokeWidth="1" />
              <line x1="0" y1="70" x2="500" y2="70" stroke="#f1f5f9" strokeWidth="1" />
              <line x1="0" y1="20" x2="500" y2="20" stroke="#f1f5f9" strokeWidth="1" />

              {/* Área y Línea */}
              <path
                d="M 10 110 L 80 95 L 160 30 L 240 75 L 320 20 L 400 60 L 490 25 L 490 140 L 10 140 Z"
                fill="url(#chartGradient)"
              />
              <path
                d="M 10 110 L 80 95 L 160 30 L 240 75 L 320 20 L 400 60 L 490 25"
                fill="none"
                stroke="#1d4ed8"
                strokeWidth="3.5"
                strokeLinecap="round"
              />

              {/* Puntos de directos */}
              <circle cx="160" cy="30" r="5" fill="#2563eb" stroke="#ffffff" strokeWidth="2" />
              <circle cx="320" cy="20" r="5" fill="#2563eb" stroke="#ffffff" strokeWidth="2" />
              <circle cx="490" cy="25" r="5" fill="#2563eb" stroke="#ffffff" strokeWidth="2" />
            </svg>
            <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.72rem', color: '#94a3b8', marginTop: '0.5rem', fontWeight: 600 }}>
              <span>Lun (No stream)</span>
              <span>Mar</span>
              <span style={{ color: '#1d4ed8', fontWeight: 800 }}>Mié (Stream 3h)</span>
              <span>Jue</span>
              <span style={{ color: '#1d4ed8', fontWeight: 800 }}>Vie (Stream 4h)</span>
              <span>Sáb</span>
              <span style={{ color: '#1d4ed8', fontWeight: 800 }}>Hoy (Stream 2h)</span>
            </div>
          </div>
        </div>

        {/* Toolkit de Acciones Rápidas */}
        <div style={{
          backgroundColor: '#ffffff',
          borderRadius: '14px',
          border: '1px solid #e2e8f0',
          padding: '1.25rem',
          display: 'flex',
          flexDirection: 'column',
          gap: '0.85rem'
        }}>
          <h3 style={{ fontSize: '1.05rem', fontWeight: 800, color: '#0f172a', margin: 0 }}>
            Herramientas Rápidas de Partner
          </h3>
          <p style={{ fontSize: '0.8rem', color: '#64748b', margin: 0 }}>
            Accesos directos para potenciar tu directo en 1 clic.
          </p>

          <button
            type="button"
            onClick={handleCopyRules}
            style={{
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'space-between',
              padding: '0.75rem 1rem',
              backgroundColor: '#eff6ff',
              border: '1px solid #bfdbfe',
              borderRadius: '10px',
              cursor: 'pointer',
              color: '#1d4ed8',
              fontWeight: 700,
              fontSize: '0.86rem',
              textAlign: 'left'
            }}
          >
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.65rem' }}>
              <Copy size={16} />
              <div>
                <div>Copiar Reglas de Donación para Chat</div>
                <div style={{ fontSize: '0.72rem', fontWeight: 500, color: '#3b82f6' }}>Pégalas en TikTok Studio o moderador de chat</div>
              </div>
            </div>
            {copiedRules ? <Check size={16} color="#16a34a" /> : <span style={{ fontSize: '0.75rem' }}>Copiar</span>}
          </button>

          <button
            type="button"
            onClick={() => onNavigateTab('gamers')}
            style={{
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'space-between',
              padding: '0.75rem 1rem',
              backgroundColor: '#f8fafc',
              border: '1px solid #e2e8f0',
              borderRadius: '10px',
              cursor: 'pointer',
              color: '#334155',
              fontWeight: 700,
              fontSize: '0.86rem',
              textAlign: 'left'
            }}
          >
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.65rem' }}>
              <Radio size={16} color="#1d4ed8" />
              <div>
                <div>Configurar Browser Source para OBS</div>
                <div style={{ fontSize: '0.72rem', fontWeight: 500, color: '#64748b' }}>Barra de likes, alertas y muro de donadores</div>
              </div>
            </div>
            <ArrowUpRight size={16} color="#94a3b8" />
          </button>

          <a
            href="https://github.com/DarlynTenelema/Glassy/releases/latest"
            target="_blank"
            rel="noreferrer"
            style={{
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'space-between',
              padding: '0.75rem 1rem',
              backgroundColor: '#f8fafc',
              border: '1px solid #e2e8f0',
              borderRadius: '10px',
              textDecoration: 'none',
              color: '#334155',
              fontWeight: 700,
              fontSize: '0.86rem'
            }}
          >
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.65rem' }}>
              <Download size={16} color="#16a34a" />
              <div>
                <div>Descargar Glassy Streamer PC (.exe)</div>
                <div style={{ fontSize: '0.72rem', fontWeight: 500, color: '#64748b' }}>Edición vertical optimizada para Windows</div>
              </div>
            </div>
            <ExternalLink size={16} color="#94a3b8" />
          </a>
        </div>
      </div>

      {/* MODAL QR DE COMPARTIR */}
      {showQrModal && (
        <div 
          onClick={() => setShowQrModal(false)}
          style={{
            position: 'fixed',
            inset: 0,
            backgroundColor: 'rgba(15, 23, 42, 0.6)',
            backdropFilter: 'blur(4px)',
            display: 'flex',
            alignItems: 'center',
            justifyContent: 'center',
            zIndex: 110,
            padding: '1rem'
          }}
        >
          <div 
            onClick={(e) => e.stopPropagation()}
            style={{
              backgroundColor: '#ffffff',
              borderRadius: '16px',
              padding: '1.75rem',
              maxWidth: '380px',
              width: '100%',
              textAlign: 'center',
              boxShadow: '0 20px 40px rgba(0,0,0,0.2)'
            }}
          >
            <div style={{
              width: '48px',
              height: '48px',
              borderRadius: '50%',
              backgroundColor: '#eff6ff',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              margin: '0 auto 1rem',
              color: '#1d4ed8'
            }}>
              <QrCode size={26} />
            </div>
            <h3 style={{ fontSize: '1.25rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.5rem' }}>
              Código QR de Tu Stream
            </h3>
            <p style={{ fontSize: '0.85rem', color: '#64748b', margin: '0 0 1.25rem' }}>
              Coloca este código en una esquina de tu directo para que los espectadores lo escaneen y descarguen Glassy con tu ID: <strong>{partner.partner_code}</strong>.
            </p>

            <div style={{
              backgroundColor: '#f8fafc',
              border: '2px dashed #cbd5e1',
              borderRadius: '12px',
              padding: '1.5rem',
              display: 'flex',
              flexDirection: 'column',
              alignItems: 'center',
              gap: '0.5rem'
            }}>
              <img
                src={`https://api.qrserver.com/v1/create-qr-code/?size=180x180&data=${encodeURIComponent(partnerLink)}`}
                alt="QR Code"
                style={{ width: '180px', height: '180px', borderRadius: '8px' }}
              />
              <span style={{ fontSize: '0.75rem', fontWeight: 700, color: '#64748b' }}>
                Escanea para descargar Glassy
              </span>
            </div>

            <button
              type="button"
              onClick={() => setShowQrModal(false)}
              style={{
                marginTop: '1.25rem',
                width: '100%',
                backgroundColor: '#1d4ed8',
                color: '#ffffff',
                border: 'none',
                borderRadius: '8px',
                padding: '0.65rem',
                fontWeight: 800,
                fontSize: '0.88rem',
                cursor: 'pointer'
              }}
            >
              Listo, cerrar
            </button>
          </div>
        </div>
      )}

    </div>
  );
};
