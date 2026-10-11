import React, { useState } from 'react';
import { useNavigate } from 'react-router-dom';
import { Sparkles, Users, Coins, ArrowRight, Video } from 'lucide-react';

const LandingPage = () => {
  const navigate = useNavigate();
  const [estimateUsers, setEstimateUsers] = useState<number>(1000);
  const [isLoggingIn, setIsLoggingIn] = useState(false);

  const handleLogin = () => {
    setIsLoggingIn(true);
    // Simulating OAuth Login for now
    setTimeout(() => {
      navigate('/dashboard');
    }, 1500);
  };

  return (
    <div className="container animate-fade-in" style={{ paddingBottom: '4rem' }}>
      <header style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', padding: '2rem 0' }}>
        <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
          <Sparkles color="var(--accent-color)" size={32} />
          <h2 style={{ fontSize: '1.5rem', fontWeight: 700 }}>Glassy <span style={{ fontWeight: 300, color: 'var(--text-muted)' }}>Partners</span></h2>
        </div>
        <button className="btn-glass" onClick={handleLogin}>
          {isLoggingIn ? 'Conectando con Google...' : 'Iniciar Sesión'}
        </button>
      </header>

      <main style={{ marginTop: '4rem' }}>
        <section style={{ textAlign: 'center', maxWidth: '800px', margin: '0 auto', marginBottom: '6rem' }}>
          <div style={{ display: 'inline-block', padding: '0.25rem 1rem', background: 'var(--glass-bg)', borderRadius: '999px', border: '1px solid var(--glass-border)', marginBottom: '1.5rem', fontSize: '0.875rem' }} className="animate-fade-in delay-100">
            Únete a la red de creadores indie
          </div>
          <h1 style={{ fontSize: '4.5rem', lineHeight: 1.1, marginBottom: '1.5rem' }} className="animate-fade-in delay-200">
            Monetiza tu audiencia <br /> con <span className="text-gradient">Glassy</span>
          </h1>
          <p style={{ fontSize: '1.25rem', color: 'var(--text-muted)', marginBottom: '3rem' }} className="animate-fade-in delay-300">
            Gana $0.10 por cada jugador que use tu código y juegue Glassy por al menos 15 días. Sin límites, retiros rápidos.
          </p>
          <button className="btn-primary animate-fade-in delay-300" style={{ padding: '1rem 2rem', fontSize: '1.125rem' }} onClick={handleLogin}>
            Empieza a Ganar Ahora <ArrowRight size={20} />
          </button>
        </section>

        <section style={{ display: 'grid', gridTemplateColumns: 'repeat(auto-fit, minmax(300px, 1fr))', gap: '2rem', marginBottom: '6rem' }}>
          <div className="glass-panel" style={{ textAlign: 'center' }}>
            <div style={{ width: '64px', height: '64px', background: 'rgba(99, 102, 241, 0.1)', borderRadius: '1rem', display: 'flex', alignItems: 'center', justifyContent: 'center', margin: '0 auto 1.5rem' }}>
              <Video size={32} color="var(--accent-color)" />
            </div>
            <h3 style={{ fontSize: '1.5rem', marginBottom: '1rem' }}>1. Crea y Comparte</h3>
            <p style={{ color: 'var(--text-muted)' }}>Genera tu código único y compártelo en tus videos de TikTok, YouTube o Instagram.</p>
          </div>
          
          <div className="glass-panel" style={{ textAlign: 'center' }}>
            <div style={{ width: '64px', height: '64px', background: 'rgba(99, 102, 241, 0.1)', borderRadius: '1rem', display: 'flex', alignItems: 'center', justifyContent: 'center', margin: '0 auto 1.5rem' }}>
              <Users size={32} color="var(--accent-color)" />
            </div>
            <h3 style={{ fontSize: '1.5rem', marginBottom: '1rem' }}>2. Acumula Jugadores</h3>
            <p style={{ color: 'var(--text-muted)' }}>Los jugadores ingresan tu código al registrarse. Si se mantienen activos 15 días, el pago es tuyo.</p>
          </div>

          <div className="glass-panel" style={{ textAlign: 'center' }}>
            <div style={{ width: '64px', height: '64px', background: 'rgba(99, 102, 241, 0.1)', borderRadius: '1rem', display: 'flex', alignItems: 'center', justifyContent: 'center', margin: '0 auto 1.5rem' }}>
              <Coins size={32} color="var(--accent-color)" />
            </div>
            <h3 style={{ fontSize: '1.5rem', marginBottom: '1rem' }}>3. Recibe tus Pagos</h3>
            <p style={{ color: 'var(--text-muted)' }}>Retira tu dinero directamente a PayPal al alcanzar el umbral de $100.</p>
          </div>
        </section>

        <section className="glass-panel" style={{ textAlign: 'center', maxWidth: '600px', margin: '0 auto' }}>
          <h2 style={{ fontSize: '2rem', marginBottom: '1rem' }}>Calculadora de Ganancias</h2>
          <p style={{ color: 'var(--text-muted)', marginBottom: '2rem' }}>Descubre cuánto podrías ganar trayendo jugadores a Glassy.</p>
          
          <div style={{ marginBottom: '2rem' }}>
            <label style={{ display: 'block', marginBottom: '1rem', fontSize: '1.125rem' }}>
              Jugadores Confirmados: <strong>{estimateUsers.toLocaleString()}</strong>
            </label>
            <input 
              type="range" 
              min="100" 
              max="10000" 
              step="100" 
              value={estimateUsers} 
              onChange={(e) => setEstimateUsers(Number(e.target.value))}
              style={{ width: '100%', accentColor: 'var(--accent-color)', height: '6px', borderRadius: '3px', outline: 'none' }}
            />
          </div>

          <div style={{ background: 'rgba(0,0,0,0.3)', padding: '2rem', borderRadius: '1rem', border: '1px solid var(--glass-border)' }}>
            <div style={{ color: 'var(--text-muted)', textTransform: 'uppercase', letterSpacing: '2px', fontSize: '0.875rem', marginBottom: '0.5rem' }}>Ganancias Estimadas</div>
            <div style={{ fontSize: '4rem', fontWeight: 800 }} className="text-gradient">
              ${(estimateUsers * 0.10).toLocaleString('en-US', { minimumFractionDigits: 2, maximumFractionDigits: 2 })}
            </div>
          </div>
        </section>
      </main>
    </div>
  );
};

export default LandingPage;
