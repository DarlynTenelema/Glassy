import { useState, useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import { supabase } from '../api/client';
import type { Language } from '../i18n';
import type { 
  MainTab, InfluencersSubTab, GamersSubTab, WalletSubTab, PartnerUser 
} from '../types/partner';
import { INITIAL_PARTNER } from '../data/mockPartner';
import { Sidebar } from '../components/Sidebar';
import { Header } from '../components/Header';
import { DashboardView } from './dashboard/DashboardView';
import { InfluencersView } from './dashboard/InfluencersView';
import { GamersView } from './dashboard/GamersView';
import { WalletView } from './dashboard/WalletView';
import { SettingsView } from './dashboard/SettingsView';

const Dashboard = () => {
  const navigate = useNavigate();
  const [partner, setPartner] = useState<PartnerUser>(INITIAL_PARTNER);
  const [lang, setLang] = useState<Language>('ES');
  const [isSidebarOpen, setIsSidebarOpen] = useState(false);

  // Navegación de pestañas principales (Boceto 1)
  const [activeTab, setActiveTab] = useState<MainTab>('dashboard');

  // Subpestañas (Bocetos 2, 3, 4)
  const [influencerSubTab, setInfluencerSubTab] = useState<InfluencersSubTab>('usuarios');
  const [gamersSubTab, setGamersSubTab] = useState<GamersSubTab>('skills');
  const [walletSubTab, setWalletSubTab] = useState<WalletSubTab>('wallet');

  // Cargar usuario autenticado si existe en Supabase
  useEffect(() => {
    const checkUser = async () => {
      try {
        const { data: { user } } = await supabase.auth.getUser();
        if (user) {
          setPartner(prev => ({
            ...prev,
            email: user.email || prev.email,
            name: user.user_metadata?.full_name || prev.name,
          }));
        }
      } catch {
        // Modo local autónomo
      }
    };
    checkUser();
  }, []);

  const handleToggleLang = () => {
    const next: Record<Language, Language> = { ES: 'EN', EN: 'PT', PT: 'ES' };
    setLang(next[lang]);
  };

  const handleLogout = async () => {
    try {
      await supabase.auth.signOut();
    } catch {
      // ignore
    }
    navigate('/');
  };

  return (
    <div className="partner-portal-layout">
      {/* 1. Menú Lateral (Boceto 1) */}
      <Sidebar
        activeTab={activeTab}
        onSelectTab={(tab) => {
          setActiveTab(tab);
          window.scrollTo({ top: 0, behavior: 'smooth' });
        }}
        isOpen={isSidebarOpen}
        onClose={() => setIsSidebarOpen(false)}
        partner={partner}
        onLogout={handleLogout}
      />

      {/* 2. Área Principal de Contenido */}
      <div className="partner-main-content">
        {/* Cabecera dinámica con Subtabs (Bocetos 2, 3, 4) */}
        <Header
          activeTab={activeTab}
          partner={partner}
          onOpenSidebar={() => setIsSidebarOpen(true)}
          lang={lang}
          onToggleLang={handleToggleLang}
          influencerSubTab={influencerSubTab}
          onSelectInfluencerSubTab={setInfluencerSubTab}
          gamersSubTab={gamersSubTab}
          onSelectGamersSubTab={setGamersSubTab}
          walletSubTab={walletSubTab}
          onSelectWalletSubTab={setWalletSubTab}
        />

        {/* Contenido según la pestaña activa */}
        <main className="partner-content-container">
          {activeTab === 'dashboard' && (
            <DashboardView
              partner={partner}
              onNavigateTab={(tab) => {
                setActiveTab(tab);
                window.scrollTo({ top: 0, behavior: 'smooth' });
              }}
            />
          )}

          {activeTab === 'influencers' && (
            <InfluencersView
              partner={partner}
              subTab={influencerSubTab}
            />
          )}

          {activeTab === 'gamers' && (
            <GamersView
              partner={partner}
              subTab={gamersSubTab}
            />
          )}

          {activeTab === 'wallet' && (
            <WalletView
              partner={partner}
              subTab={walletSubTab}
            />
          )}

          {activeTab === 'settings' && (
            <SettingsView
              partner={partner}
              lang={lang}
              onSetLang={setLang}
            />
          )}
        </main>
      </div>
    </div>
  );
};

export default Dashboard;
