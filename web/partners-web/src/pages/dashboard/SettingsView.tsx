import { useState } from 'react';
import { Key, Check, Copy, Save } from 'lucide-react';
import type { PartnerUser } from '../../types/partner';
import type { Language } from '../../i18n';

interface SettingsViewProps {
  partner: PartnerUser;
  lang: Language;
  onSetLang: (lang: Language) => void;
}

export const SettingsView: React.FC<SettingsViewProps> = ({ partner, lang, onSetLang }) => {
  const [name, setName] = useState(partner.name);
  const [email, setEmail] = useState(partner.email);
  const [copiedKey, setCopiedKey] = useState(false);
  const [isSaved, setIsSaved] = useState(false);
  const [notifyCommissions, setNotifyCommissions] = useState(true);
  const [notifyWithdrawals, setNotifyWithdrawals] = useState(true);

  const handleCopyKey = () => {
    navigator.clipboard.writeText(partner.api_key);
    setCopiedKey(true);
    setTimeout(() => setCopiedKey(false), 2000);
  };

  const handleSave = (e: React.FormEvent) => {
    e.preventDefault();
    setIsSaved(true);
    setTimeout(() => setIsSaved(false), 2500);
  };

  return (
    <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem', maxWidth: '800px' }}>
      
      {/* 1. PERFIL GENERAL */}
      <div style={{
        backgroundColor: '#ffffff',
        borderRadius: '14px',
        border: '1px solid #e2e8f0',
        padding: '1.5rem',
        display: 'flex',
        flexDirection: 'column',
        gap: '1.25rem'
      }}>
        <div>
          <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
            Perfil de Partner
          </h3>
          <p style={{ fontSize: '0.82rem', color: '#64748b', margin: '0.2rem 0 0' }}>
            Información de visualización en la plataforma y comunicaciones oficiales.
          </p>
        </div>

        {isSaved && (
          <div style={{
            backgroundColor: '#f0fdf4',
            border: '1px solid #bbf7d0',
            color: '#166534',
            padding: '0.65rem 1rem',
            borderRadius: '8px',
            fontSize: '0.85rem',
            fontWeight: 700
          }}>
            ✓ Ajustes guardados correctamente.
          </div>
        )}

        <form onSubmit={handleSave} style={{ display: 'flex', flexDirection: 'column', gap: '1rem' }}>
          <div style={{ display: 'grid', gridTemplateColumns: 'repeat(auto-fit, minmax(240px, 1fr))', gap: '1rem' }}>
            <div>
              <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.35rem' }}>
                Nombre / Alias de Creador
              </label>
              <input
                type="text"
                value={name}
                onChange={(e) => setName(e.target.value)}
                style={{
                  width: '100%',
                  padding: '0.65rem 0.85rem',
                  borderRadius: '8px',
                  border: '1px solid #cbd5e1',
                  fontSize: '0.88rem',
                  outline: 'none'
                }}
              />
            </div>

            <div>
              <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.35rem' }}>
                Correo de Contacto
              </label>
              <input
                type="email"
                value={email}
                onChange={(e) => setEmail(e.target.value)}
                style={{
                  width: '100%',
                  padding: '0.65rem 0.85rem',
                  borderRadius: '8px',
                  border: '1px solid #cbd5e1',
                  fontSize: '0.88rem',
                  outline: 'none'
                }}
              />
            </div>
          </div>

          <button
            type="submit"
            style={{
              alignSelf: 'flex-start',
              backgroundColor: '#1d4ed8',
              color: '#ffffff',
              border: 'none',
              borderRadius: '8px',
              padding: '0.65rem 1.25rem',
              fontWeight: 800,
              fontSize: '0.85rem',
              cursor: 'pointer',
              display: 'inline-flex',
              alignItems: 'center',
              gap: '0.4rem'
            }}
          >
            <Save size={15} />
            <span>Guardar Cambios</span>
          </button>
        </form>
      </div>

      {/* 2. TOKEN DE SINCRONIZACIÓN CON EL JUEGO (PC) */}
      <div style={{
        backgroundColor: '#ffffff',
        borderRadius: '14px',
        border: '1px solid #e2e8f0',
        padding: '1.5rem',
        display: 'flex',
        flexDirection: 'column',
        gap: '1rem'
      }}>
        <div>
          <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
            Token de Conexión de Glassy Streamer PC
          </h3>
          <p style={{ fontSize: '0.82rem', color: '#64748b', margin: '0.2rem 0 0' }}>
            Pega esta clave secreta en los ajustes de tu cliente ejecutable `Glassy.exe` para sincronizar las skills y tus overlays en directo.
          </p>
        </div>

        <div style={{
          display: 'flex',
          alignItems: 'center',
          gap: '0.5rem',
          backgroundColor: '#f8fafc',
          border: '1px solid #cbd5e1',
          borderRadius: '8px',
          padding: '0.5rem 0.75rem'
        }}>
          <Key size={16} color="#64748b" />
          <code style={{
            flex: 1,
            fontSize: '0.85rem',
            color: '#1d4ed8',
            fontWeight: 800,
            overflow: 'hidden',
            textOverflow: 'ellipsis'
          }}>
            {partner.api_key}
          </code>
          <button
            type="button"
            onClick={handleCopyKey}
            style={{
              backgroundColor: '#ffffff',
              border: '1px solid #cbd5e1',
              borderRadius: '6px',
              padding: '0.35rem 0.75rem',
              fontSize: '0.78rem',
              fontWeight: 700,
              cursor: 'pointer',
              display: 'flex',
              alignItems: 'center',
              gap: '0.3rem'
            }}
          >
            {copiedKey ? <Check size={14} color="#16a34a" /> : <Copy size={14} />}
            <span>{copiedKey ? 'Copiada' : 'Copiar Token'}</span>
          </button>
        </div>
      </div>

      {/* 3. IDIOMA Y PREFERENCIAS */}
      <div style={{
        backgroundColor: '#ffffff',
        borderRadius: '14px',
        border: '1px solid #e2e8f0',
        padding: '1.5rem',
        display: 'flex',
        flexDirection: 'column',
        gap: '1.25rem'
      }}>
        <div>
          <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
            Idioma y Notificaciones
          </h3>
          <p style={{ fontSize: '0.82rem', color: '#64748b', margin: '0.2rem 0 0' }}>
            Configura el idioma preferido para la interfaz y tus alertas.
          </p>
        </div>

        <div>
          <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
            Idioma de la Plataforma
          </label>
          <div style={{ display: 'flex', gap: '0.5rem' }}>
            {(['ES', 'EN', 'PT'] as Language[]).map(l => (
              <button
                key={l}
                type="button"
                onClick={() => onSetLang(l)}
                style={{
                  backgroundColor: lang === l ? '#1d4ed8' : '#f8fafc',
                  color: lang === l ? '#ffffff' : '#334155',
                  border: lang === l ? '1px solid #1d4ed8' : '1px solid #cbd5e1',
                  borderRadius: '8px',
                  padding: '0.45rem 1rem',
                  fontSize: '0.85rem',
                  fontWeight: 800,
                  cursor: 'pointer'
                }}
              >
                {l === 'ES' ? 'Español' : l === 'EN' ? 'English' : 'Português'}
              </button>
            ))}
          </div>
        </div>

        <div style={{ display: 'flex', flexDirection: 'column', gap: '0.65rem', borderTop: '1px solid #f1f5f9', paddingTop: '1rem' }}>
          <label style={{ display: 'flex', alignItems: 'center', gap: '0.6rem', fontSize: '0.85rem', color: '#334155', cursor: 'pointer' }}>
            <input
              type="checkbox"
              checked={notifyCommissions}
              onChange={(e) => setNotifyCommissions(e.target.checked)}
              style={{ accentColor: '#1d4ed8', width: '16px', height: '16px' }}
            />
            <span>Notificarme por correo cuando un nuevo seguidor compre gemas con mi código.</span>
          </label>

          <label style={{ display: 'flex', alignItems: 'center', gap: '0.6rem', fontSize: '0.85rem', color: '#334155', cursor: 'pointer' }}>
            <input
              type="checkbox"
              checked={notifyWithdrawals}
              onChange={(e) => setNotifyWithdrawals(e.target.checked)}
              style={{ accentColor: '#1d4ed8', width: '16px', height: '16px' }}
            />
            <span>Notificarme cuando mi solicitud de retiro sea aprobada y transferida.</span>
          </label>
        </div>
      </div>

    </div>
  );
};
