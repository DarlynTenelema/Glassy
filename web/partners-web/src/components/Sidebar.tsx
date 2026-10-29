import React from 'react';
import { 
  LayoutDashboard, Users, Gamepad2, Wallet, Settings, 
  X, LogOut, ShieldCheck, Gem
} from 'lucide-react';
import type { MainTab, PartnerUser } from '../types/partner';

interface SidebarProps {
  activeTab: MainTab;
  onSelectTab: (tab: MainTab) => void;
  isOpen: boolean;
  onClose: () => void;
  partner: PartnerUser;
  onLogout: () => void;
}

export const Sidebar: React.FC<SidebarProps> = ({
  activeTab,
  onSelectTab,
  isOpen,
  onClose,
  partner,
  onLogout
}) => {
  const menuItems: { id: MainTab; label: string; icon: React.ReactNode; badge?: string }[] = [
    { id: 'dashboard', label: 'Dashboard', icon: <LayoutDashboard size={20} /> },
    { id: 'influencers', label: 'Influencers', icon: <Users size={20} />, badge: `${partner.active_players}` },
    { id: 'gamers', label: 'Gamers', icon: <Gamepad2 size={20} />, badge: 'TikTok' },
    { id: 'wallet', label: 'Wallet', icon: <Wallet size={20} />, badge: `$${partner.available_balance.toFixed(0)}` },
    { id: 'settings', label: 'Settings', icon: <Settings size={20} /> },
  ];

  return (
    <>
      {/* Backdrop para móviles */}
      {isOpen && (
        <div 
          onClick={onClose}
          style={{
            position: 'fixed',
            inset: 0,
            backgroundColor: 'rgba(15, 23, 42, 0.45)',
            backdropFilter: 'blur(4px)',
            zIndex: 90,
          }}
          className="lg:hidden"
        />
      )}

      {/* Menú Lateral basado en Boceto 1 */}
      <aside
        style={{
          width: '260px',
          minWidth: '260px',
          backgroundColor: '#ffffff',
          borderRight: '1.5px solid #e2e8f0',
          display: 'flex',
          flexDirection: 'column',
          height: '100vh',
          position: 'sticky',
          top: 0,
          zIndex: 100,
          transition: 'transform 0.25s cubic-bezier(0.16, 1, 0.3, 1)',
        }}
        className={`sidebar-container ${isOpen ? 'sidebar-open' : 'sidebar-closed'}`}
      >
        {/* Encabezado: [X] Menu (Boceto 1) */}
        <div
          style={{
            padding: '1.25rem 1.25rem',
            borderBottom: '1px solid #f1f5f9',
            display: 'flex',
            alignItems: 'center',
            justifyContent: 'space-between',
          }}
        >
          <div style={{ display: 'flex', alignItems: 'center', gap: '0.6rem' }}>
            <div style={{
              width: '32px',
              height: '32px',
              borderRadius: '8px',
              backgroundColor: '#1d4ed8',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              color: '#ffffff',
              boxShadow: '0 4px 10px rgba(29, 78, 216, 0.3)'
            }}>
              <Gem size={18} />
            </div>
            <div>
              <span style={{ fontSize: '1.15rem', fontWeight: 900, color: '#1d4ed8', letterSpacing: '-0.02em' }}>
                Glassy
              </span>
              <span style={{ fontSize: '0.75rem', fontWeight: 700, color: '#64748b', display: 'block', textTransform: 'uppercase', letterSpacing: '0.05em' }}>
                Studio Partners
              </span>
            </div>
          </div>

          <button
            type="button"
            onClick={onClose}
            aria-label="Cerrar menú"
            style={{
              background: '#f8fafc',
              border: '1px solid #e2e8f0',
              borderRadius: '6px',
              padding: '0.35rem 0.5rem',
              cursor: 'pointer',
              display: 'flex',
              alignItems: 'center',
              gap: '0.2rem',
              color: '#475569',
              fontSize: '0.8rem',
              fontWeight: 700,
              transition: 'all 0.15s'
            }}
            title="Cerrar menú lateral"
          >
            <X size={16} strokeWidth={2.5} />
            <span style={{ display: 'inline-block' }}>Menú</span>
          </button>
        </div>

        {/* Lista de navegación: Dashboard, Influencers, Gamers, Wallet, Settings */}
        <nav style={{ padding: '1rem 0.85rem', flex: 1, display: 'flex', flexDirection: 'column', gap: '0.35rem' }}>
          <div style={{ fontSize: '0.72rem', fontWeight: 800, color: '#94a3b8', textTransform: 'uppercase', letterSpacing: '0.08em', padding: '0.4rem 0.6rem' }}>
            Navegación Principal
          </div>

          {menuItems.map((item) => {
            const isActive = activeTab === item.id;
            return (
              <button
                key={item.id}
                type="button"
                onClick={() => {
                  onSelectTab(item.id);
                  if (window.innerWidth < 1024) onClose();
                }}
                style={{
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'space-between',
                  padding: '0.75rem 0.85rem',
                  borderRadius: '10px',
                  border: isActive ? '1px solid #bfdbfe' : '1px solid transparent',
                  backgroundColor: isActive ? '#eff6ff' : 'transparent',
                  color: isActive ? '#1d4ed8' : '#334155',
                  fontWeight: isActive ? 800 : 600,
                  fontSize: '0.95rem',
                  cursor: 'pointer',
                  transition: 'all 0.15s ease',
                  textAlign: 'left'
                }}
                className={`menu-item-btn ${isActive ? 'active' : ''}`}
              >
                <div style={{ display: 'flex', alignItems: 'center', gap: '0.75rem' }}>
                  <span style={{ color: isActive ? '#1d4ed8' : '#64748b' }}>
                    {item.icon}
                  </span>
                  <span>{item.label}</span>
                </div>

                {item.badge && (
                  <span
                    style={{
                      fontSize: '0.72rem',
                      fontWeight: 800,
                      padding: '0.15rem 0.5rem',
                      borderRadius: '9999px',
                      backgroundColor: isActive ? '#dbeafe' : '#f1f5f9',
                      color: isActive ? '#1d4ed8' : '#64748b'
                    }}
                  >
                    {item.badge}
                  </span>
                )}
              </button>
            );
          })}
        </nav>

        {/* Streamer Quick Card & Logout en el fondo */}
        <div style={{ padding: '1rem 0.85rem', borderTop: '1px solid #f1f5f9', backgroundColor: '#f8fafc' }}>
          <div style={{
            display: 'flex',
            alignItems: 'center',
            justifyContent: 'space-between',
            padding: '0.65rem 0.75rem',
            backgroundColor: '#ffffff',
            borderRadius: '10px',
            border: '1px solid #e2e8f0',
            marginBottom: '0.75rem'
          }}>
            <div>
              <div style={{ fontSize: '0.85rem', fontWeight: 800, color: '#0f172a' }}>
                {partner.name}
              </div>
              <div style={{ fontSize: '0.72rem', color: '#64748b', display: 'flex', alignItems: 'center', gap: '0.25rem' }}>
                <ShieldCheck size={12} color="#1d4ed8" />
                <span>Tier {partner.tier} ({partner.commission_rate * 100}%)</span>
              </div>
            </div>
            <div style={{
              fontSize: '0.72rem',
              fontWeight: 800,
              backgroundColor: '#eff6ff',
              color: '#1d4ed8',
              padding: '0.2rem 0.45rem',
              borderRadius: '6px',
              border: '1px solid #bfdbfe'
            }}>
              ID: {partner.partner_code}
            </div>
          </div>

          <button
            type="button"
            onClick={onLogout}
            style={{
              width: '100%',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              gap: '0.5rem',
              padding: '0.55rem',
              borderRadius: '8px',
              border: '1px solid #e2e8f0',
              backgroundColor: '#ffffff',
              color: '#dc2626',
              fontWeight: 700,
              fontSize: '0.82rem',
              cursor: 'pointer',
              transition: 'background-color 0.15s'
            }}
          >
            <LogOut size={14} />
            <span>Cerrar sesión</span>
          </button>
        </div>
      </aside>
    </>
  );
};
