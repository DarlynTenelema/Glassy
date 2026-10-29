import React, { useState } from 'react';
import { 
  Menu, Copy, Check, Globe, DollarSign 
} from 'lucide-react';
import type { 
  MainTab, InfluencersSubTab, GamersSubTab, WalletSubTab, PartnerUser 
} from '../types/partner';
import type { Language } from '../i18n';

interface HeaderProps {
  activeTab: MainTab;
  partner: PartnerUser;
  onOpenSidebar: () => void;
  lang: Language;
  onToggleLang: () => void;
  
  // Subtabs
  influencerSubTab: InfluencersSubTab;
  onSelectInfluencerSubTab: (tab: InfluencersSubTab) => void;
  
  gamersSubTab: GamersSubTab;
  onSelectGamersSubTab: (tab: GamersSubTab) => void;
  
  walletSubTab: WalletSubTab;
  onSelectWalletSubTab: (tab: WalletSubTab) => void;
}

export const Header: React.FC<HeaderProps> = ({
  activeTab,
  partner,
  onOpenSidebar,
  lang,
  onToggleLang,
  influencerSubTab,
  onSelectInfluencerSubTab,
  gamersSubTab,
  onSelectGamersSubTab,
  walletSubTab,
  onSelectWalletSubTab
}) => {
  const [copiedCode, setCopiedCode] = useState(false);

  const handleCopyCode = () => {
    navigator.clipboard.writeText(partner.partner_code);
    setCopiedCode(true);
    setTimeout(() => setCopiedCode(false), 2000);
  };

  // Título según pantalla (Bocetos 2, 3, 4)
  const getHeaderTitle = () => {
    switch (activeTab) {
      case 'dashboard':
        return 'Glassy DASHBOARD';
      case 'influencers':
        return 'Glassy INFLUENCERS';
      case 'gamers':
        return 'Glassy GAMERS';
      case 'wallet':
        return 'Glassy WALLET';
      case 'settings':
        return 'Glassy SETTINGS';
    }
  };

  return (
    <header style={{
      position: 'sticky',
      top: 0,
      zIndex: 50,
      backgroundColor: '#ffffff',
      borderBottom: '1.5px solid #e2e8f0',
      boxShadow: '0 1px 3px rgba(0,0,0,0.03)'
    }}>
      {/* Barra Principal Superior */}
      <div style={{
        padding: '0.85rem 1.5rem',
        display: 'flex',
        alignItems: 'center',
        justifyContent: 'space-between',
        flexWrap: 'wrap',
        gap: '0.75rem'
      }}>
        {/* Lado Izquierdo: Botón Menú ≡ y Título de Bocetos */}
        <div style={{ display: 'flex', alignItems: 'center', gap: '1rem' }}>
          <button
            type="button"
            onClick={onOpenSidebar}
            aria-label="Abrir menú"
            style={{
              background: '#eff6ff',
              border: '1px solid #bfdbfe',
              borderRadius: '8px',
              padding: '0.45rem',
              cursor: 'pointer',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              color: '#1d4ed8',
              transition: 'all 0.15s'
            }}
            title="Abrir menú de navegación"
          >
            <Menu size={22} strokeWidth={2.5} />
          </button>

          <div style={{ display: 'flex', alignItems: 'center', gap: '0.75rem', flexWrap: 'wrap' }}>
            <h1 style={{
              fontSize: '1.35rem',
              fontWeight: 900,
              color: '#1d4ed8',
              letterSpacing: '-0.02em',
              margin: 0
            }}>
              {getHeaderTitle()}
            </h1>

            {/* Boceto 2: {Username} ID: [ 1AX23F ] */}
            {activeTab === 'influencers' && (
              <div style={{
                display: 'inline-flex',
                alignItems: 'center',
                gap: '0.4rem',
                backgroundColor: '#f8fafc',
                border: '1px solid #cbd5e1',
                padding: '0.25rem 0.6rem',
                borderRadius: '8px',
                fontSize: '0.85rem',
                color: '#334155'
              }}>
                <span style={{ fontWeight: 600 }}>{`{${partner.name}}`}</span>
                <span style={{ fontWeight: 800, color: '#64748b' }}>ID:</span>
                <button
                  type="button"
                  onClick={handleCopyCode}
                  style={{
                    display: 'inline-flex',
                    alignItems: 'center',
                    gap: '0.3rem',
                    backgroundColor: '#eff6ff',
                    border: '1px solid #bfdbfe',
                    borderRadius: '6px',
                    padding: '0.15rem 0.45rem',
                    fontSize: '0.82rem',
                    fontWeight: 800,
                    color: '#1d4ed8',
                    cursor: 'pointer',
                    transition: 'all 0.15s'
                  }}
                  title="Copiar ID de Creador"
                >
                  <span>[{partner.partner_code}]</span>
                  {copiedCode ? <Check size={12} color="#16a34a" /> : <Copy size={12} />}
                </button>
              </div>
            )}
          </div>
        </div>

        {/* Lado Derecho: Idioma y Cápsula de Saldo */}
        <div style={{ display: 'flex', alignItems: 'center', gap: '0.75rem' }}>
          {/* Selector de Idioma */}
          <button
            type="button"
            onClick={onToggleLang}
            style={{
              display: 'flex',
              alignItems: 'center',
              gap: '0.35rem',
              backgroundColor: '#f8fafc',
              border: '1px solid #e2e8f0',
              borderRadius: '9999px',
              padding: '0.4rem 0.8rem',
              fontSize: '0.8rem',
              fontWeight: 700,
              color: '#334155',
              cursor: 'pointer'
            }}
          >
            <Globe size={14} color="#1d4ed8" />
            <span>{lang}</span>
          </button>

          {/* Saldo en Cápsula */}
          <div style={{
            display: 'flex',
            alignItems: 'center',
            gap: '0.4rem',
            backgroundColor: '#eff6ff',
            border: '1.5px solid #bfdbfe',
            borderRadius: '9999px',
            padding: '0.35rem 0.9rem',
            fontWeight: 800,
            fontSize: '0.88rem',
            color: '#1d4ed8',
            boxShadow: '0 2px 6px rgba(29, 78, 216, 0.08)'
          }}>
            <DollarSign size={15} strokeWidth={3} />
            <span>${partner.available_balance.toFixed(2)} USD</span>
          </div>
        </div>
      </div>

      {/* Sub-barra de Pestañas Secundarias (Boceto 2, 3, 4) */}
      {(activeTab === 'influencers' || activeTab === 'gamers' || activeTab === 'wallet') && (
        <div style={{
          backgroundColor: '#fafbfd',
          borderTop: '1px solid #f1f5f9',
          padding: '0 1.5rem',
          display: 'flex',
          gap: '1.75rem',
          overflowX: 'auto'
        }}>
          {/* Subtabs de Influencers: Usuarios | Estadísticas | Facturación */}
          {activeTab === 'influencers' && (
            <>
              {(['usuarios', 'estadisticas', 'facturacion'] as InfluencersSubTab[]).map((tab) => {
                const labels: Record<InfluencersSubTab, string> = {
                  usuarios: 'Usuarios',
                  estadisticas: 'Estadísticas',
                  facturacion: 'Facturación'
                };
                const isSelected = influencerSubTab === tab;
                return (
                  <button
                    key={tab}
                    type="button"
                    onClick={() => onSelectInfluencerSubTab(tab)}
                    style={{
                      background: 'none',
                      border: 'none',
                      borderBottom: isSelected ? '2.5px solid #1d4ed8' : '2.5px solid transparent',
                      padding: '0.75rem 0.25rem',
                      fontSize: '0.92rem',
                      fontWeight: isSelected ? 800 : 600,
                      color: isSelected ? '#1d4ed8' : '#64748b',
                      cursor: 'pointer',
                      transition: 'all 0.15s ease',
                      whiteSpace: 'nowrap'
                    }}
                  >
                    {labels[tab]}
                  </button>
                );
              })}
            </>
          )}

          {/* Subtabs de Gamers: Skills for TikTok | Connect | Overlays & Widgets */}
          {activeTab === 'gamers' && (
            <>
              {(['skills', 'connect', 'overlays'] as GamersSubTab[]).map((tab) => {
                const labels: Record<GamersSubTab, string> = {
                  skills: 'Skills for TikTok',
                  connect: 'Connect',
                  overlays: 'Overlays & Widgets'
                };
                const isSelected = gamersSubTab === tab;
                return (
                  <button
                    key={tab}
                    type="button"
                    onClick={() => onSelectGamersSubTab(tab)}
                    style={{
                      background: 'none',
                      border: 'none',
                      borderBottom: isSelected ? '2.5px solid #1d4ed8' : '2.5px solid transparent',
                      padding: '0.75rem 0.25rem',
                      fontSize: '0.92rem',
                      fontWeight: isSelected ? 800 : 600,
                      color: isSelected ? '#1d4ed8' : '#64748b',
                      cursor: 'pointer',
                      transition: 'all 0.15s ease',
                      whiteSpace: 'nowrap'
                    }}
                  >
                    {labels[tab]}
                  </button>
                );
              })}
            </>
          )}

          {/* Subtabs de Wallet: Wallet | History | Contacts */}
          {activeTab === 'wallet' && (
            <>
              {(['wallet', 'history', 'contacts'] as WalletSubTab[]).map((tab) => {
                const labels: Record<WalletSubTab, string> = {
                  wallet: 'Wallet',
                  history: 'History',
                  contacts: 'Contacts'
                };
                const isSelected = walletSubTab === tab;
                return (
                  <button
                    key={tab}
                    type="button"
                    onClick={() => onSelectWalletSubTab(tab)}
                    style={{
                      background: 'none',
                      border: 'none',
                      borderBottom: isSelected ? '2.5px solid #1d4ed8' : '2.5px solid transparent',
                      padding: '0.75rem 0.25rem',
                      fontSize: '0.92rem',
                      fontWeight: isSelected ? 800 : 600,
                      color: isSelected ? '#1d4ed8' : '#64748b',
                      cursor: 'pointer',
                      transition: 'all 0.15s ease',
                      whiteSpace: 'nowrap'
                    }}
                  >
                    {labels[tab]}
                  </button>
                );
              })}
            </>
          )}
        </div>
      )}
    </header>
  );
};
