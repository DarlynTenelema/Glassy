import { useState } from 'react';
import { 
  Sparkles, Check, Copy, Tv, Shield, UserCheck, Download, Play 
} from 'lucide-react';
import type { PartnerUser, GamersSubTab, StreamerSkill } from '../../types/partner';
import { INITIAL_SKILLS, INITIAL_SOCIALS } from '../../data/mockPartner';

interface GamersViewProps {
  partner: PartnerUser;
  subTab: GamersSubTab;
}

export const GamersView: React.FC<GamersViewProps> = ({ partner, subTab }) => {
  const [skills, setSkills] = useState<StreamerSkill[]>(INITIAL_SKILLS);
  const [socials] = useState(INITIAL_SOCIALS);
  const [copiedOverlayUrl, setCopiedOverlayUrl] = useState(false);
  const [copiedRules, setCopiedRules] = useState(false);
  const [purchaseMsg, setPurchaseMsg] = useState<string | null>(null);
  const [botProfile, setBotProfile] = useState<'pro' | 'casual' | 'entertainer'>('pro');
  const [showCursor, setShowCursor] = useState(true);
  const [activeWidgetPreview, setActiveWidgetPreview] = useState<'goal' | 'donors' | 'alert'>('goal');
  const [simulatedLikes, setSimulatedLikes] = useState(450);
  const [simulatedAlertActive, setSimulatedAlertActive] = useState(false);

  const overlayUrl = `https://glassy.gg/overlay/${partner.partner_code}`;

  const handleToggleSkill = (skillId: string) => {
    setSkills(prev => prev.map(s => s.id === skillId ? { ...s, is_active: !s.is_active } : s));
  };

  const handleBuySkill = (skillId: string) => {
    setSkills(prev => prev.map(s => s.id === skillId ? { ...s, is_owned: true, is_active: true } : s));
    setPurchaseMsg('¡Suscripción mensual activada con éxito y vinculada a tu transmisión de Glassy!');
    setTimeout(() => setPurchaseMsg(null), 3500);
  };

  const handleCopyOverlayUrl = () => {
    navigator.clipboard.writeText(overlayUrl);
    setCopiedOverlayUrl(true);
    setTimeout(() => setCopiedOverlayUrl(false), 2000);
  };

  const handleCopyRules = () => {
    const rules = `🎮 DINÁMICA GLASSY TIKTOK LIVE:
💎 Likes: 100=Esmeralda | 200=Amatista | 400=Topacio | 800=Peridoto | 1,000=Zafiro | 1,200=Rubí
🤍 5 Blancos = 1 Cuarzo | 🖤 10 Negros = 1 Piedra | 💚 10 Verdes = 10 Esmeraldas | 💜 20 Morados = 10 Amatistas
🎁 REGALOS & MISIONES:
• $0.05 = Limpia Topacio a Rubí (+pts) + 1 Cuarzo
• $0.10 = Limpia TODO el tablero (+pts) + 1 Piedra
• $0.15 = Corta el combo del streamer a CERO
• $0.20 = Suma +30s al tiempo de la misión
• $0.25 = ¡AUTO-COMPLETA LA MISIÓN EN VIVO!
👑 Super Fan: >5k Likes + 500 Coms + $1.00 donado -> ¡Muro de la Fama!`;
    navigator.clipboard.writeText(rules);
    setCopiedRules(true);
    setTimeout(() => setCopiedRules(false), 2000);
  };

  const triggerAlertSimulation = () => {
    setSimulatedAlertActive(true);
    setTimeout(() => setSimulatedAlertActive(false), 3500);
  };

  return (
    <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>

      {/* ==================================================================== */}
      {/* PESTAÑA 1: SKILLS FOR TIKTOK                                         */}
      {/* ==================================================================== */}
      {subTab === 'skills' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          {/* Banner de Modelo de Negocio Claro */}
          <div style={{
            background: 'linear-gradient(135deg, #0f172a 0%, #1e3a8a 100%)',
            borderRadius: '14px',
            padding: '1.5rem',
            color: '#ffffff',
            display: 'flex',
            justifyContent: 'space-between',
            alignItems: 'center',
            flexWrap: 'wrap',
            gap: '1rem'
          }}>
            <div>
              <div style={{ display: 'flex', alignItems: 'center', gap: '0.4rem', marginBottom: '0.35rem' }}>
                <span style={{ backgroundColor: '#2563eb', padding: '0.2rem 0.55rem', borderRadius: '6px', fontSize: '0.72rem', fontWeight: 800 }}>
                  TikTok LIVE Gamers
                </span>
                <span style={{ fontSize: '0.8rem', opacity: 0.9 }}>• Tú te quedas con el 100% de tus regalos</span>
              </div>
              <h2 style={{ fontSize: '1.45rem', fontWeight: 900, color: '#ffffff', margin: 0 }}>
                Skills & Superpoderes para Streamers
              </h2>
              <p style={{ fontSize: '0.86rem', opacity: 0.85, margin: '0.3rem 0 0', maxWidth: '650px' }}>
                TikTok te paga a ti tus donaciones y diamantes completos. En Glassy puedes adquirir skills especiales como cambiar la textura de las gemas por la foto de tu seguidor para incentivar más regalos.
              </p>
            </div>

            <button
              type="button"
              onClick={handleCopyRules}
              style={{
                backgroundColor: '#ffffff',
                color: '#1d4ed8',
                border: 'none',
                borderRadius: '8px',
                padding: '0.65rem 1rem',
                fontWeight: 800,
                fontSize: '0.85rem',
                cursor: 'pointer',
                display: 'flex',
                alignItems: 'center',
                gap: '0.4rem'
              }}
            >
              {copiedRules ? <Check size={16} color="#16a34a" /> : <Copy size={16} />}
              <span>{copiedRules ? '¡Reglas Copiadas!' : 'Copiar Reglas para el Chat'}</span>
            </button>
          {/* Notificación de compra exitosa */}
          {purchaseMsg && (
            <div style={{
              backgroundColor: '#ecfdf5',
              border: '1.5px solid #a7f3d0',
              borderRadius: '10px',
              padding: '0.85rem 1.25rem',
              color: '#065f46',
              fontWeight: 700,
              fontSize: '0.9rem',
              display: 'flex',
              alignItems: 'center',
              gap: '0.5rem'
            }}>
              <Check size={18} color="#059669" />
              <span>{purchaseMsg}</span>
            </div>
          )}

          {/* Catálogo de Skills */}
          <div style={{
            display: 'grid',
            gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))',
            gap: '1.25rem'
          }}>
            {skills.map(skill => (
              <div
                key={skill.id}
                style={{
                  backgroundColor: '#ffffff',
                  borderRadius: '14px',
                  border: skill.is_owned && skill.is_active ? '1.5px solid #2563eb' : '1px solid #e2e8f0',
                  padding: '1.25rem',
                  display: 'flex',
                  flexDirection: 'column',
                  justifyContent: 'space-between',
                  gap: '1rem',
                  boxShadow: skill.is_owned && skill.is_active ? '0 4px 14px rgba(37, 99, 235, 0.1)' : 'none'
                }}
              >
                <div>
                  <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'flex-start', marginBottom: '0.75rem' }}>
                    <div style={{
                      width: '38px',
                      height: '38px',
                      borderRadius: '10px',
                      backgroundColor: skill.is_owned ? '#eff6ff' : '#f8fafc',
                      color: skill.is_owned ? '#1d4ed8' : '#64748b',
                      display: 'flex',
                      alignItems: 'center',
                      justifyContent: 'center'
                    }}>
                      {skill.icon === 'Play' && <Play size={20} />}
                      {skill.icon === 'UserCheck' && <UserCheck size={20} />}
                      {skill.icon === 'Shield' && <Shield size={20} />}
                      {skill.icon === 'Sparkles' && <Sparkles size={20} />}
                      {skill.icon === 'Volume2' && <Tv size={20} />}
                    </div>

                    {skill.is_owned ? (
                      <span style={{
                        fontSize: '0.72rem',
                        fontWeight: 800,
                        backgroundColor: skill.is_active ? '#f0fdf4' : '#f8fafc',
                        color: skill.is_active ? '#16a34a' : '#64748b',
                        border: skill.is_active ? '1px solid #bbf7d0' : '1px solid #e2e8f0',
                        padding: '0.2rem 0.55rem',
                        borderRadius: '9999px'
                      }}>
                        {skill.is_active ? '● Activo en Stream' : '○ Pausado'}
                      </span>
                    ) : (
                      <span style={{
                        fontSize: '0.75rem',
                        fontWeight: 900,
                        color: '#1d4ed8',
                        backgroundColor: '#eff6ff',
                        padding: '0.25rem 0.5rem',
                        borderRadius: '6px'
                      }}>
                        ${skill.price_usd} USD / mes
                      </span>
                    )}
                  </div>

                  <h3 style={{ fontSize: '1.1rem', fontWeight: 800, color: '#0f172a', margin: '0 0 0.35rem' }}>
                    {skill.name}
                  </h3>
                  <p style={{ fontSize: '0.84rem', color: '#64748b', margin: 0, lineHeight: 1.45 }}>
                    {skill.description}
                  </p>

                  {/* Panel de configuración exclusiva del Bot IA Humano */}
                  {skill.id === 'skill_auto_player' && skill.is_owned && skill.is_active && (
                    <div style={{
                      marginTop: '0.85rem',
                      padding: '0.75rem',
                      backgroundColor: '#f8fafc',
                      borderRadius: '8px',
                      border: '1px solid #e2e8f0',
                      fontSize: '0.78rem'
                    }}>
                      <div style={{ fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
                        🧠 Estilo de Juego Humanoide:
                      </div>
                      <div style={{ display: 'flex', gap: '0.4rem', marginBottom: '0.5rem' }}>
                        <button
                          type="button"
                          onClick={() => setBotProfile('pro')}
                          style={{
                            flex: 1,
                            padding: '0.3rem',
                            borderRadius: '6px',
                            border: botProfile === 'pro' ? '1.5px solid #2563eb' : '1px solid #cbd5e1',
                            backgroundColor: botProfile === 'pro' ? '#eff6ff' : '#ffffff',
                            color: botProfile === 'pro' ? '#1d4ed8' : '#64748b',
                            fontWeight: botProfile === 'pro' ? 800 : 500,
                            cursor: 'pointer',
                            fontSize: '0.72rem'
                          }}
                        >
                          ⚡ Pro Tryhard
                        </button>
                        <button
                          type="button"
                          onClick={() => setBotProfile('casual')}
                          style={{
                            flex: 1,
                            padding: '0.3rem',
                            borderRadius: '6px',
                            border: botProfile === 'casual' ? '1.5px solid #2563eb' : '1px solid #cbd5e1',
                            backgroundColor: botProfile === 'casual' ? '#eff6ff' : '#ffffff',
                            color: botProfile === 'casual' ? '#1d4ed8' : '#64748b',
                            fontWeight: botProfile === 'casual' ? 800 : 500,
                            cursor: 'pointer',
                            fontSize: '0.72rem'
                          }}
                        >
                          ☕ Casual Relax
                        </button>
                        <button
                          type="button"
                          onClick={() => setBotProfile('entertainer')}
                          style={{
                            flex: 1,
                            padding: '0.3rem',
                            borderRadius: '6px',
                            border: botProfile === 'entertainer' ? '1.5px solid #2563eb' : '1px solid #cbd5e1',
                            backgroundColor: botProfile === 'entertainer' ? '#eff6ff' : '#ffffff',
                            color: botProfile === 'entertainer' ? '#1d4ed8' : '#64748b',
                            fontWeight: botProfile === 'entertainer' ? 800 : 500,
                            cursor: 'pointer',
                            fontSize: '0.72rem'
                          }}
                        >
                          🎭 Animador
                        </button>
                      </div>
                      <label style={{ display: 'flex', alignItems: 'center', gap: '0.4rem', cursor: 'pointer', color: '#475569' }}>
                        <input
                          type="checkbox"
                          checked={showCursor}
                          onChange={(e) => setShowCursor(e.target.checked)}
                        />
                        <span>Simular cursor táctil visible en pantalla</span>
                      </label>
                    </div>
                  )}
                </div>

                <div>
                  {skill.is_owned ? (
                    <button
                      type="button"
                      onClick={() => handleToggleSkill(skill.id)}
                      style={{
                        width: '100%',
                        backgroundColor: skill.is_active ? '#f8fafc' : '#1d4ed8',
                        color: skill.is_active ? '#334155' : '#ffffff',
                        border: skill.is_active ? '1px solid #cbd5e1' : 'none',
                        borderRadius: '8px',
                        padding: '0.55rem',
                        fontWeight: 700,
                        fontSize: '0.82rem',
                        cursor: 'pointer'
                      }}
                    >
                      {skill.is_active ? 'Desactivar esta Skill' : 'Activar para mi siguiente Stream'}
                    </button>
                  ) : (
                    <button
                      type="button"
                      onClick={() => handleBuySkill(skill.id)}
                      style={{
                        width: '100%',
                        backgroundColor: '#1d4ed8',
                        color: '#ffffff',
                        border: 'none',
                        borderRadius: '8px',
                        padding: '0.55rem',
                        fontWeight: 800,
                        fontSize: '0.82rem',
                        cursor: 'pointer'
                      }}
                    >
                      Adquirir Suscripción (${skill.price_usd} USD/mes)
                    </button>
                  )}
                </div>
              </div>
            ))}
          </div>

        </div>
      )}

      {/* ==================================================================== */}
      {/* PESTAÑA 2: CONNECT (REDES Y CHAT GLOBAL)                             */}
      {/* ==================================================================== */}
      {subTab === 'connect' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          {/* Estado de Sincronización con el Cliente Local de PC */}
          <div style={{
            backgroundColor: '#f0fdf4',
            borderRadius: '14px',
            border: '1.5px solid #bbf7d0',
            padding: '1.25rem',
            display: 'flex',
            alignItems: 'center',
            justifyContent: 'space-between',
            flexWrap: 'wrap',
            gap: '1rem'
          }}>
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.75rem' }}>
              <div style={{
                width: '40px',
                height: '40px',
                borderRadius: '50%',
                backgroundColor: '#16a34a',
                color: '#ffffff',
                display: 'flex',
                alignItems: 'center',
                justifyContent: 'center'
              }}>
                <Tv size={20} />
              </div>
              <div>
                <div style={{ fontSize: '0.95rem', fontWeight: 800, color: '#14532d' }}>
                  Cliente Glassy Streamer Conectado
                </div>
                <div style={{ fontSize: '0.8rem', color: '#166534' }}>
                  Tu PC está procesando en vivo los likes y comentarios de TikTok sin saturar la red (v1.4 - Puerto 8089).
                </div>
              </div>
            </div>

            <a
              href="https://github.com/DarlynTenelema/Glassy/releases/latest"
              target="_blank"
              rel="noreferrer"
              style={{
                backgroundColor: '#ffffff',
                border: '1px solid #86efac',
                color: '#15803d',
                borderRadius: '8px',
                padding: '0.45rem 0.85rem',
                fontSize: '0.8rem',
                fontWeight: 700,
                textDecoration: 'none',
                display: 'flex',
                alignItems: 'center',
                gap: '0.3rem'
              }}
            >
              <Download size={14} />
              <span>Actualizar Glassy.exe</span>
            </a>
          </div>

          {/* Tarjetas de Plataformas Conectadas */}
          <div style={{
            display: 'grid',
            gridTemplateColumns: 'repeat(auto-fit, minmax(240px, 1fr))',
            gap: '1rem'
          }}>
            {socials.map(social => (
              <div
                key={social.platform}
                style={{
                  backgroundColor: '#ffffff',
                  borderRadius: '12px',
                  border: '1px solid #e2e8f0',
                  padding: '1rem 1.25rem',
                  display: 'flex',
                  justifyContent: 'space-between',
                  alignItems: 'center'
                }}
              >
                <div>
                  <div style={{ fontSize: '0.92rem', fontWeight: 800, textTransform: 'capitalize', color: '#0f172a' }}>
                    {social.platform === 'tiktok' ? 'TikTok LIVE' : social.platform}
                  </div>
                  <div style={{ fontSize: '0.78rem', color: '#64748b' }}>
                    {social.is_connected ? social.handle : 'Desconectado'}
                  </div>
                  <div style={{ fontSize: '0.72rem', fontWeight: 700, marginTop: '0.2rem', color: social.is_connected ? '#16a34a' : '#94a3b8' }}>
                    {social.status_text}
                  </div>
                </div>

                <button
                  type="button"
                  style={{
                    backgroundColor: social.is_connected ? '#f8fafc' : '#1d4ed8',
                    color: social.is_connected ? '#64748b' : '#ffffff',
                    border: social.is_connected ? '1px solid #e2e8f0' : 'none',
                    borderRadius: '6px',
                    padding: '0.35rem 0.65rem',
                    fontSize: '0.75rem',
                    fontWeight: 700,
                    cursor: 'pointer'
                  }}
                >
                  {social.is_connected ? 'Ajustes' : 'Vincular'}
                </button>
              </div>
            ))}
          </div>

          {/* Simulador de Chat Global Unificado (Omni-Chat) */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1.25rem'
          }}>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '1rem' }}>
              <div>
                <h3 style={{ fontSize: '1.05rem', fontWeight: 800, color: '#0f172a', margin: 0 }}>
                  Chat Global Unificado (Omni-Chat)
                </h3>
                <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                  Filtra spam y destaca los emojis que detonan gemas en el juego (`🤍`, `🖤`, `💚`, `💜`).
                </p>
              </div>
              <span style={{ fontSize: '0.75rem', fontWeight: 700, backgroundColor: '#eff6ff', color: '#1d4ed8', padding: '0.25rem 0.6rem', borderRadius: '6px' }}>
                🟢 Escuchando eventos
              </span>
            </div>

            <div style={{
              backgroundColor: '#0f172a',
              borderRadius: '10px',
              padding: '1rem',
              color: '#ffffff',
              fontFamily: 'monospace',
              fontSize: '0.85rem',
              maxHeight: '220px',
              overflowY: 'auto',
              display: 'flex',
              flexDirection: 'column',
              gap: '0.5rem'
            }}>
              <div style={{ color: '#94a3b8' }}>
                <span style={{ color: '#2563eb' }}>[Twitch]</span> <strong>@GamerPro:</strong> ¡Buena racha con las esmeraldas!
              </div>
              <div style={{ color: '#bbf7d0', backgroundColor: 'rgba(34, 197, 94, 0.1)', padding: '0.2rem 0.4rem', borderRadius: '4px' }}>
                <span style={{ color: '#fe2c55' }}>[TikTok]</span> <strong>@Carla_01:</strong> 💚💚💚 <em>(Spawn de 10 Esmeraldas activado)</em>
              </div>
              <div style={{ color: '#fca5a5', backgroundColor: 'rgba(239, 68, 68, 0.1)', padding: '0.2rem 0.4rem', borderRadius: '4px' }}>
                <span style={{ color: '#fe2c55' }}>[TikTok]</span> <strong>@TrollMaster:</strong> 🖤🖤🖤 <em>(Spawn de 1 Piedra Troll activado)</em>
              </div>
              <div style={{ color: '#fef08a', backgroundColor: 'rgba(234, 179, 8, 0.15)', padding: '0.2rem 0.4rem', borderRadius: '4px' }}>
                <span style={{ color: '#fe2c55' }}>[TikTok]</span> <strong>🎁 @David_Rubi</strong> envió <strong>Rosa ($0.05)</strong>: ¡Limpiando gemas y sumando 20 pts!
              </div>
            </div>
          </div>

        </div>
      )}

      {/* ==================================================================== */}
      {/* PESTAÑA 3: OVERLAYS & WIDGETS (LA TERCERA PANTALLA)                  */}
      {/* ==================================================================== */}
      {subTab === 'overlays' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          {/* Caja de Generación de Enlace para OBS */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1.5px solid #bfdbfe',
            padding: '1.5rem',
            display: 'flex',
            justifyContent: 'space-between',
            alignItems: 'center',
            flexWrap: 'wrap',
            gap: '1rem',
            boxShadow: '0 4px 16px rgba(29, 78, 216, 0.05)'
          }}>
            <div>
              <span style={{ fontSize: '0.75rem', fontWeight: 800, backgroundColor: '#eff6ff', color: '#1d4ed8', padding: '0.2rem 0.5rem', borderRadius: '6px', textTransform: 'uppercase' }}>
                OBS / TikTok LIVE Studio Browser Source
              </span>
              <h2 style={{ fontSize: '1.35rem', fontWeight: 900, color: '#0f172a', margin: '0.4rem 0 0.2rem' }}>
                Enlace Único de Overlays en Vivo
              </h2>
              <p style={{ fontSize: '0.85rem', color: '#64748b', margin: 0 }}>
                Pega esta URL como <strong>Navegador (Browser Source)</strong> en OBS con resolución 1080x1920 (vertical) o 600x200 para la barra.
              </p>
            </div>

            <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
              <code style={{
                backgroundColor: '#f1f5f9',
                border: '1px solid #cbd5e1',
                padding: '0.45rem 0.75rem',
                borderRadius: '8px',
                fontSize: '0.82rem',
                color: '#1d4ed8',
                fontWeight: 700
              }}>
                {overlayUrl}
              </code>
              <button
                type="button"
                onClick={handleCopyOverlayUrl}
                style={{
                  backgroundColor: '#1d4ed8',
                  color: '#ffffff',
                  border: 'none',
                  borderRadius: '8px',
                  padding: '0.5rem 0.9rem',
                  fontSize: '0.82rem',
                  fontWeight: 800,
                  cursor: 'pointer',
                  display: 'flex',
                  alignItems: 'center',
                  gap: '0.35rem'
                }}
              >
                {copiedOverlayUrl ? <Check size={14} color="#ffffff" /> : <Copy size={14} />}
                <span>{copiedOverlayUrl ? '¡Copiado!' : 'Copiar URL'}</span>
              </button>
            </div>
          </div>

          {/* Selector y Vista Previa Interactiva de Widgets */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1.25rem'
          }}>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '1.25rem', flexWrap: 'wrap', gap: '0.75rem' }}>
              <div style={{ display: 'flex', gap: '0.5rem' }}>
                <button
                  type="button"
                  onClick={() => setActiveWidgetPreview('goal')}
                  style={{
                    backgroundColor: activeWidgetPreview === 'goal' ? '#1d4ed8' : '#f8fafc',
                    color: activeWidgetPreview === 'goal' ? '#ffffff' : '#475569',
                    border: '1px solid #cbd5e1',
                    borderRadius: '8px',
                    padding: '0.4rem 0.75rem',
                    fontSize: '0.82rem',
                    fontWeight: 700,
                    cursor: 'pointer'
                  }}
                >
                  Barra de Metas de Likes
                </button>
                <button
                  type="button"
                  onClick={() => setActiveWidgetPreview('donors')}
                  style={{
                    backgroundColor: activeWidgetPreview === 'donors' ? '#1d4ed8' : '#f8fafc',
                    color: activeWidgetPreview === 'donors' ? '#ffffff' : '#475569',
                    border: '1px solid #cbd5e1',
                    borderRadius: '8px',
                    padding: '0.4rem 0.75rem',
                    fontSize: '0.82rem',
                    fontWeight: 700,
                    cursor: 'pointer'
                  }}
                >
                  Muro de Fama (Top Donadores)
                </button>
                <button
                  type="button"
                  onClick={() => setActiveWidgetPreview('alert')}
                  style={{
                    backgroundColor: activeWidgetPreview === 'alert' ? '#1d4ed8' : '#f8fafc',
                    color: activeWidgetPreview === 'alert' ? '#ffffff' : '#475569',
                    border: '1px solid #cbd5e1',
                    borderRadius: '8px',
                    padding: '0.4rem 0.75rem',
                    fontSize: '0.82rem',
                    fontWeight: 700,
                    cursor: 'pointer'
                  }}
                >
                  Alertas Animadas
                </button>
              </div>

              <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
                <span style={{ fontSize: '0.75rem', color: '#64748b' }}>Vista previa en vivo para OBS</span>
              </div>
            </div>

            {/* Canvas de previsualización */}
            <div style={{
              backgroundColor: '#020617',
              borderRadius: '12px',
              padding: '2rem',
              display: 'flex',
              flexDirection: 'column',
              alignItems: 'center',
              justifyContent: 'center',
              minHeight: '220px',
              position: 'relative',
              overflow: 'hidden'
            }}>
              {/* WIDGET 1: BARRA DE LIKES */}
              {activeWidgetPreview === 'goal' && (
                <div style={{ width: '100%', maxWidth: '420px', textAlign: 'center' }}>
                  <div style={{ display: 'flex', justifyContent: 'space-between', color: '#ffffff', fontSize: '0.85rem', fontWeight: 800, marginBottom: '0.5rem' }}>
                    <span>💎 Meta: Invocar Zafiro Flotante</span>
                    <span style={{ color: '#38bdf8' }}>{simulatedLikes} / 1,000 Likes</span>
                  </div>
                  <div style={{ height: '18px', backgroundColor: 'rgba(255, 255, 255, 0.1)', borderRadius: '9999px', overflow: 'hidden', padding: '2px', border: '1px solid rgba(255,255,255,0.2)' }}>
                    <div style={{
                      width: `${(simulatedLikes / 1000) * 100}%`,
                      height: '100%',
                      background: 'linear-gradient(90deg, #38bdf8 0%, #2563eb 100%)',
                      borderRadius: '9999px',
                      transition: 'width 0.3s ease'
                    }} />
                  </div>
                  <button
                    type="button"
                    onClick={() => setSimulatedLikes(prev => (prev >= 1000 ? 100 : prev + 150))}
                    style={{
                      marginTop: '1rem',
                      backgroundColor: 'rgba(255, 255, 255, 0.15)',
                      color: '#ffffff',
                      border: '1px solid rgba(255, 255, 255, 0.3)',
                      borderRadius: '6px',
                      padding: '0.35rem 0.75rem',
                      fontSize: '0.75rem',
                      cursor: 'pointer'
                    }}
                  >
                    Simular +150 Likes
                  </button>
                </div>
              )}

              {/* WIDGET 2: TOP DONADORES */}
              {activeWidgetPreview === 'donors' && (
                <div style={{ width: '100%', maxWidth: '380px', color: '#ffffff' }}>
                  <div style={{ textAlign: 'center', fontWeight: 900, fontSize: '0.95rem', color: '#fef08a', marginBottom: '0.75rem' }}>
                    👑 MURO DE LA FAMA — DIRECTO
                  </div>
                  <div style={{ display: 'flex', flexDirection: 'column', gap: '0.4rem', fontSize: '0.82rem' }}>
                    <div style={{ display: 'flex', justifyContent: 'space-between', backgroundColor: 'rgba(255, 255, 255, 0.1)', padding: '0.45rem 0.75rem', borderRadius: '8px' }}>
                      <span>🥇 1. @David_Rubi</span>
                      <span style={{ color: '#4ade80', fontWeight: 800 }}>$4.25 USD (8 gemas)</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', backgroundColor: 'rgba(255, 255, 255, 0.06)', padding: '0.45rem 0.75rem', borderRadius: '8px' }}>
                      <span>🥈 2. @Sofi_Troll21</span>
                      <span style={{ color: '#4ade80', fontWeight: 800 }}>$2.50 USD</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', backgroundColor: 'rgba(255, 255, 255, 0.04)', padding: '0.45rem 0.75rem', borderRadius: '8px' }}>
                      <span>🥉 3. @DarkCombo_X</span>
                      <span style={{ color: '#4ade80', fontWeight: 800 }}>$1.00 USD</span>
                    </div>
                  </div>
                </div>
              )}

              {/* WIDGET 3: ALERTAS ANIMADAS */}
              {activeWidgetPreview === 'alert' && (
                <div style={{ textAlign: 'center' }}>
                  {simulatedAlertActive ? (
                    <div style={{
                      backgroundColor: 'rgba(37, 99, 235, 0.9)',
                      border: '2px solid #60a5fa',
                      borderRadius: '14px',
                      padding: '1.25rem 2rem',
                      color: '#ffffff',
                      boxShadow: '0 0 30px rgba(59, 130, 246, 0.8)',
                      animation: 'pulse 1s infinite'
                    }}>
                      <div style={{ fontSize: '1.5rem', marginBottom: '0.2rem' }}>🎁 ¡REGALO DE TIKTOK!</div>
                      <div style={{ fontSize: '1.1rem', fontWeight: 800 }}>@AlexFan_99 envió $0.25 USD</div>
                      <div style={{ fontSize: '0.85rem', color: '#fef08a', fontWeight: 700, marginTop: '0.3rem' }}>
                        ⚡ ¡LA MISIÓN SE AUTO-COMPLETÓ EN EL JUEGO!
                      </div>
                    </div>
                  ) : (
                    <div>
                      <p style={{ color: '#94a3b8', fontSize: '0.85rem', margin: '0 0 1rem' }}>
                        Presiona para ver cómo reacciona el widget en pantalla cuando alguien dona en tu directo.
                      </p>
                      <button
                        type="button"
                        onClick={triggerAlertSimulation}
                        style={{
                          backgroundColor: '#2563eb',
                          color: '#ffffff',
                          border: 'none',
                          borderRadius: '8px',
                          padding: '0.55rem 1.1rem',
                          fontSize: '0.85rem',
                          fontWeight: 800,
                          cursor: 'pointer',
                          display: 'inline-flex',
                          alignItems: 'center',
                          gap: '0.4rem'
                        }}
                      >
                        <Play size={14} />
                        <span>Simular Alerta de Regalo</span>
                      </button>
                    </div>
                  )}
                </div>
              )}
            </div>
          </div>

        </div>
      )}

    </div>
  );
};
