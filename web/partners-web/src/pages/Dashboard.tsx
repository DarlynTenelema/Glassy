import React, { useState } from 'react';
import { useNavigate } from 'react-router-dom';
import { LogOut, Copy, Download, DollarSign, Users, Activity, CheckCircle, Wallet } from 'lucide-react';

const Dashboard = () => {
  const navigate = useNavigate();
  const [copied, setCopied] = useState(false);
  const [withdrawRequested, setWithdrawRequested] = useState(false);
  
  // Mock data - In reality, fetch from /api/partner/dashboard
  const partnerData = {
    code: 'DARLYN24',
    name: 'Darlyn',
    paypal: 'darlyn@glassy.com',
    stats: {
      totalInstalls: 3450,
      inProgress: 2450,
      confirmed: 1000,
      availableBalance: 100.00,
      totalEarnings: 100.00
    }
  };

  const copyCode = () => {
    navigator.clipboard.writeText(partnerData.code);
    setCopied(true);
    setTimeout(() => setCopied(false), 2000);
  };

  const handleWithdraw = () => {
    if (partnerData.stats.availableBalance >= 100) {
      setWithdrawRequested(true);
      alert('Solicitud de retiro enviada. El pago se procesará en 15 días.');
    } else {
      alert('Necesitas un mínimo de $100 para retirar.');
    }
  };

  return (
    <div className="container animate-fade-in" style={{ paddingBottom: '4rem' }}>
      <header style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', padding: '2rem 0', borderBottom: '1px solid var(--glass-border)', marginBottom: '3rem' }}>
        <div style={{ display: 'flex', alignItems: 'center', gap: '1rem' }}>
          <div style={{ width: '48px', height: '48px', borderRadius: '50%', background: 'var(--accent-gradient)', display: 'flex', alignItems: 'center', justifyContent: 'center', fontWeight: 'bold', fontSize: '1.25rem' }}>
            {partnerData.name[0]}
          </div>
          <div>
            <h2 style={{ fontSize: '1.25rem', fontWeight: 600 }}>Bienvenido, {partnerData.name}</h2>
            <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem', color: 'var(--text-muted)' }}>
              <span>Tu código: </span>
              <strong style={{ color: 'var(--text-main)', background: 'rgba(255,255,255,0.1)', padding: '0.1rem 0.5rem', borderRadius: '4px' }}>{partnerData.code}</strong>
              <button onClick={copyCode} style={{ background: 'none', border: 'none', color: 'var(--accent-hover)', cursor: 'pointer' }} title="Copiar código">
                {copied ? <CheckCircle size={16} color="var(--success-color)" /> : <Copy size={16} />}
              </button>
            </div>
          </div>
        </div>
        <button className="btn-glass" onClick={() => navigate('/')} style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
          <LogOut size={18} /> Salir
        </button>
      </header>

      <div style={{ display: 'grid', gridTemplateColumns: 'repeat(auto-fit, minmax(350px, 1fr))', gap: '2rem' }}>
        
        {/* Left Column: Stats */}
        <div style={{ display: 'flex', flexDirection: 'column', gap: '2rem' }}>
          <div className="glass-panel" style={{ display: 'flex', flexDirection: 'column', alignItems: 'center', textAlign: 'center' }}>
            <div style={{ width: '64px', height: '64px', background: 'rgba(99, 102, 241, 0.1)', borderRadius: '50%', display: 'flex', alignItems: 'center', justifyContent: 'center', marginBottom: '1rem' }}>
              <Wallet size={32} color="var(--success-color)" />
            </div>
            <div className="stat-label">Saldo Disponible</div>
            <div className="text-gradient" style={{ fontSize: '3.5rem', fontWeight: 800, margin: '0.5rem 0' }}>
              ${partnerData.stats.availableBalance.toFixed(2)}
            </div>
            
            <button 
              className="btn-primary" 
              style={{ width: '100%', marginTop: '1.5rem', opacity: partnerData.stats.availableBalance < 100 ? 0.5 : 1 }}
              onClick={handleWithdraw}
              disabled={partnerData.stats.availableBalance < 100 || withdrawRequested}
            >
              {withdrawRequested ? 'Retiro en proceso' : 'Solicitar Retiro (Mínimo $100)'}
            </button>
            <div style={{ fontSize: '0.85rem', color: 'var(--text-muted)', marginTop: '1rem' }}>
              Los retiros se pagan manualment 15 días después de la solicitud a {partnerData.paypal}
            </div>
          </div>

          <div style={{ display: 'grid', gridTemplateColumns: '1fr 1fr', gap: '1rem' }}>
            <div className="glass-panel stat-card">
              <Users size={24} color="var(--text-muted)" />
              <div className="stat-value" style={{ fontSize: '2rem' }}>{partnerData.stats.totalInstalls}</div>
              <div className="stat-label">Instalaciones Totales</div>
            </div>
            
            <div className="glass-panel stat-card">
              <Activity size={24} color="#f59e0b" />
              <div className="stat-value" style={{ fontSize: '2rem', color: '#f59e0b' }}>{partnerData.stats.inProgress}</div>
              <div className="stat-label">En Progreso (-15 días)</div>
            </div>
            
            <div className="glass-panel stat-card" style={{ gridColumn: 'span 2' }}>
              <CheckCircle size={24} color="var(--success-color)" />
              <div className="stat-value" style={{ fontSize: '2.5rem', color: 'var(--success-color)' }}>{partnerData.stats.confirmed}</div>
              <div className="stat-label">Usuarios Confirmados (+15 días)</div>
            </div>
          </div>
        </div>

        {/* Right Column: Kit & Settings */}
        <div style={{ display: 'flex', flexDirection: 'column', gap: '2rem' }}>
          
          <div className="glass-panel">
            <h3 style={{ fontSize: '1.5rem', marginBottom: '1.5rem', display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
              <Download size={24} color="var(--accent-color)"/> Kit del Creador
            </h3>
            <p style={{ color: 'var(--text-muted)', marginBottom: '1.5rem' }}>
              Descarga recursos oficiales en alta calidad para mejorar tus videos. Usa la música original sin problemas de Copyright.
            </p>
            <div style={{ display: 'flex', flexDirection: 'column', gap: '1rem' }}>
              <button className="btn-glass" style={{ justifyContent: 'flex-start' }}>
                <Download size={18} /> Icono Oficial de Glassy (PNG)
              </button>
              <button className="btn-glass" style={{ justifyContent: 'flex-start' }}>
                <Download size={18} /> Pistas de Música (MP3)
              </button>
            </div>
          </div>

          <div className="glass-panel">
            <h3 style={{ fontSize: '1.5rem', marginBottom: '1.5rem', display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
              <DollarSign size={24} color="var(--accent-color)"/> Método de Pago
            </h3>
            <p style={{ color: 'var(--text-muted)', marginBottom: '1rem' }}>
              Actualiza el correo de PayPal donde recibirás tus ganancias.
            </p>
            <div style={{ display: 'flex', gap: '1rem', flexDirection: 'column' }}>
              <input type="email" className="input-glass" defaultValue={partnerData.paypal} placeholder="Tu correo de PayPal" />
              <button className="btn-primary" style={{ alignSelf: 'flex-start' }}>Guardar Cambios</button>
            </div>
          </div>

        </div>

      </div>
    </div>
  );
};

export default Dashboard;
