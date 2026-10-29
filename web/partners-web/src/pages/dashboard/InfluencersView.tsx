import { useState } from 'react';
import { 
  Search, Gift, TrendingUp, Download, 
  BarChart3, ShoppingBag, DollarSign, 
  Activity, Check, Sparkles, Clock 
} from 'lucide-react';
import type { PartnerUser, InfluencersSubTab, ReferredPlayer } from '../../types/partner';
import { INITIAL_PLAYERS } from '../../data/mockPartner';

interface InfluencersViewProps {
  partner: PartnerUser;
  subTab: InfluencersSubTab;
}

export const InfluencersView: React.FC<InfluencersViewProps> = ({ partner, subTab }) => {
  const [searchTerm, setSearchTerm] = useState('');
  const [filterType, setFilterType] = useState<'all' | 'active' | 'supporters'>('all');
  const [players] = useState<ReferredPlayer[]>(INITIAL_PLAYERS);
  const [giftCodesGenerated, setGiftCodesGenerated] = useState(false);
  const [calculatorUsers, setCalculatorUsers] = useState(50);
  const [selectedPackPrice, setSelectedPackPrice] = useState(9.99);

  // Estados de Analítica Avanzada de Estadísticas
  const [timeRange, setTimeRange] = useState<'7d' | '30d' | '90d' | 'ytd'>('30d');
  const [metricMode, setMetricMode] = useState<'revenue' | 'sales' | 'players'>('revenue');
  const [selectedPointIndex, setSelectedPointIndex] = useState<number | null>(null);
  const [exportToast, setExportToast] = useState(false);

  // Filtrado de usuarios
  const filteredPlayers = players.filter(player => {
    const matchesSearch = player.username.toLowerCase().includes(searchTerm.toLowerCase());
    if (filterType === 'active') return matchesSearch && player.is_active;
    if (filterType === 'supporters') return matchesSearch && player.is_supporter;
    return matchesSearch;
  });

  const handleGenerateGiftCodes = () => {
    setGiftCodesGenerated(true);
    setTimeout(() => setGiftCodesGenerated(false), 3000);
  };

  return (
    <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>

      {/* ==================================================================== */}
      {/* PESTAÑA 1: USUARIOS (SEGUIDORES REFERIDOS)                           */}
      {/* ==================================================================== */}
      {subTab === 'usuarios' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.25rem' }}>
          
          {/* Header de Usuarios con resumen y botón de regalo */}
          <div style={{
            display: 'flex',
            justifyContent: 'space-between',
            alignItems: 'center',
            flexWrap: 'wrap',
            gap: '1rem',
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1.25rem'
          }}>
            <div>
              <h2 style={{ fontSize: '1.35rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                Comunidad de Jugadores de {partner.name}
              </h2>
              <p style={{ fontSize: '0.85rem', color: '#64748b', margin: '0.25rem 0 0' }}>
                Usuarios que descargaron Glassy con tu código <strong>{partner.partner_code}</strong>.
              </p>
            </div>

            <button
              type="button"
              onClick={handleGenerateGiftCodes}
              style={{
                backgroundColor: '#eff6ff',
                color: '#1d4ed8',
                border: '1.5px solid #bfdbfe',
                borderRadius: '10px',
                padding: '0.65rem 1.1rem',
                fontWeight: 800,
                fontSize: '0.86rem',
                cursor: 'pointer',
                display: 'flex',
                alignItems: 'center',
                gap: '0.5rem',
                transition: 'all 0.15s'
              }}
            >
              <Gift size={16} />
              <span>{giftCodesGenerated ? '¡20 Códigos de 100 Gemas Generados!' : 'Generar Códigos de Regalo para Stream'}</span>
            </button>
          </div>

          {/* Barra de Filtros y Búsqueda */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1rem 1.25rem',
            display: 'flex',
            justifyContent: 'space-between',
            alignItems: 'center',
            flexWrap: 'wrap',
            gap: '0.75rem'
          }}>
            <div style={{
              display: 'flex',
              alignItems: 'center',
              gap: '0.5rem',
              backgroundColor: '#f8fafc',
              border: '1px solid #cbd5e1',
              borderRadius: '8px',
              padding: '0.45rem 0.75rem',
              minWidth: '260px'
            }}>
              <Search size={16} color="#64748b" />
              <input
                type="text"
                placeholder="Buscar por nombre de usuario..."
                value={searchTerm}
                onChange={(e) => setSearchTerm(e.target.value)}
                style={{
                  border: 'none',
                  background: 'transparent',
                  outline: 'none',
                  fontSize: '0.85rem',
                  color: '#0f172a',
                  width: '100%'
                }}
              />
            </div>

            <div style={{ display: 'flex', gap: '0.4rem' }}>
              {(['all', 'active', 'supporters'] as const).map(type => {
                const isSelected = filterType === type;
                const labels = { all: 'Todos (1,420)', active: 'Activos (384)', supporters: 'Compradores (88)' };
                return (
                  <button
                    key={type}
                    type="button"
                    onClick={() => setFilterType(type)}
                    style={{
                      backgroundColor: isSelected ? '#1d4ed8' : '#f8fafc',
                      color: isSelected ? '#ffffff' : '#475569',
                      border: isSelected ? '1px solid #1d4ed8' : '1px solid #e2e8f0',
                      borderRadius: '8px',
                      padding: '0.4rem 0.75rem',
                      fontSize: '0.8rem',
                      fontWeight: 700,
                      cursor: 'pointer'
                    }}
                  >
                    {labels[type]}
                  </button>
                );
              })}
            </div>
          </div>

          {/* Tabla de Jugadores */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            overflow: 'hidden'
          }}>
            <div style={{ overflowX: 'auto' }}>
              <table style={{ width: '100%', borderCollapse: 'collapse', textAlign: 'left', fontSize: '0.88rem' }}>
                <thead>
                  <tr style={{ backgroundColor: '#f8fafc', borderBottom: '1.5px solid #e2e8f0', color: '#64748b', fontSize: '0.78rem', textTransform: 'uppercase' }}>
                    <th style={{ padding: '0.85rem 1.25rem' }}>Jugador</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Registro</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Nivel Glassy</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Gasto Total</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Tu Comisión (25%)</th>
                    <th style={{ padding: '0.85rem 1.25rem' }}>Estado</th>
                  </tr>
                </thead>
                <tbody>
                  {filteredPlayers.map((player) => (
                    <tr key={player.id} style={{ borderBottom: '1px solid #f1f5f9', transition: 'background-color 0.1s' }}>
                      <td style={{ padding: '0.85rem 1.25rem', fontWeight: 800, color: '#0f172a' }}>
                        <div style={{ display: 'flex', alignItems: 'center', gap: '0.6rem' }}>
                          <div style={{
                            width: '32px',
                            height: '32px',
                            borderRadius: '50%',
                            backgroundColor: player.is_supporter ? '#dbeafe' : '#f1f5f9',
                            color: player.is_supporter ? '#1d4ed8' : '#64748b',
                            display: 'flex',
                            alignItems: 'center',
                            justifyContent: 'center',
                            fontWeight: 800,
                            fontSize: '0.82rem'
                          }}>
                            {player.username.charAt(0)}
                          </div>
                          <div>
                            <div>{player.username}</div>
                            {player.is_supporter && (
                              <span style={{ fontSize: '0.7rem', color: '#d97706', fontWeight: 700, display: 'flex', alignItems: 'center', gap: '0.2rem' }}>
                                ★ Supporter VIP
                              </span>
                            )}
                          </div>
                        </div>
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#64748b' }}>
                        {player.registered_at}
                      </td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700 }}>
                        <span style={{ backgroundColor: '#eff6ff', color: '#1d4ed8', padding: '0.2rem 0.5rem', borderRadius: '6px' }}>
                          Nivel {player.level}
                        </span>
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#0f172a', fontWeight: 600 }}>
                        ${player.total_spent_usd.toFixed(2)} USD
                      </td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 800, color: '#16a34a' }}>
                        +${player.commission_generated_usd.toFixed(2)} USD
                      </td>
                      <td style={{ padding: '0.85rem 1.25rem' }}>
                        {player.is_active ? (
                          <span style={{
                            backgroundColor: '#f0fdf4',
                            color: '#16a34a',
                            border: '1px solid #bbf7d0',
                            borderRadius: '9999px',
                            padding: '0.2rem 0.55rem',
                            fontSize: '0.75rem',
                            fontWeight: 700
                          }}>
                            🟢 Activo ({player.last_active})
                          </span>
                        ) : (
                          <span style={{
                            backgroundColor: '#f8fafc',
                            color: '#64748b',
                            borderRadius: '9999px',
                            padding: '0.2rem 0.55rem',
                            fontSize: '0.75rem',
                            fontWeight: 600
                          }}>
                            ⚪ Inactivo
                          </span>
                        )}
                      </td>
                    </tr>
                  ))}
                </tbody>
              </table>
            </div>
          </div>
        </div>
      )}

      {/* ==================================================================== */}
      {/* PESTAÑA 2: ESTADÍSTICAS (SISTEMA DE ANALÍTICA PROFESIONAL Y PRECISA) */}
      {/* ==================================================================== */}
      {subTab === 'estadisticas' && (() => {
        // Datasets de precisión según el rango temporal
        const analyticsData = {
          '7d': {
            label: 'Últimos 7 días',
            comparisonText: 'vs los 7 días anteriores',
            netCommission: 185.00,
            growth: 22.4,
            grossVolume: 740.00,
            packagesSold: 44,
            salesGrowth: 15.8,
            newPlayers: 68,
            playersGrowth: 28.3,
            clicks: 620,
            epc: 0.30,
            arpu: 2.72,
            chartPoints: [
              { label: 'Lun', date: '13 Oct', revenue: 14.50, sales: 3, players: 5, streamHours: 0 },
              { label: 'Mar', date: '14 Oct', revenue: 18.00, sales: 4, players: 8, streamHours: 0 },
              { label: 'Mié', date: '15 Oct', revenue: 42.50, sales: 11, players: 19, streamHours: 3.2 },
              { label: 'Jue', date: '16 Oct', revenue: 16.25, sales: 4, players: 6, streamHours: 0 },
              { label: 'Vie', date: '17 Oct', revenue: 55.00, sales: 14, players: 22, streamHours: 4.1 },
              { label: 'Sáb', date: '18 Oct', revenue: 12.50, sales: 3, players: 4, streamHours: 0 },
              { label: 'Dom', date: '19 Oct (Hoy)', revenue: 26.25, sales: 5, players: 4, streamHours: 2.0 },
            ]
          },
          '30d': {
            label: 'Últimos 30 días',
            comparisonText: 'vs los 30 días anteriores',
            netCommission: 640.00,
            growth: 18.4,
            grossVolume: 2560.00,
            packagesSold: 142,
            salesGrowth: 12.5,
            newPlayers: 312,
            playersGrowth: 21.0,
            clicks: 2840,
            epc: 0.23,
            arpu: 1.67,
            chartPoints: [
              { label: 'Sem 1', date: '21-27 Sep', revenue: 125.00, sales: 28, players: 62, streamHours: 6.5 },
              { label: 'Sem 2', date: '28 Sep - 4 Oct', revenue: 145.00, sales: 32, players: 74, streamHours: 7.0 },
              { label: 'Sem 3', date: '5-11 Oct', revenue: 185.00, sales: 41, players: 96, streamHours: 9.5 },
              { label: 'Sem 4', date: '12-19 Oct', revenue: 185.00, sales: 41, players: 80, streamHours: 9.3 },
            ]
          },
          '90d': {
            label: 'Últimos 90 días',
            comparisonText: 'vs los 90 días anteriores',
            netCommission: 1820.00,
            growth: 34.1,
            grossVolume: 7280.00,
            packagesSold: 410,
            salesGrowth: 29.4,
            newPlayers: 890,
            playersGrowth: 38.6,
            clicks: 8400,
            epc: 0.22,
            arpu: 2.04,
            chartPoints: [
              { label: 'Agosto', date: '01-31 Ago', revenue: 480.00, sales: 110, players: 240, streamHours: 24 },
              { label: 'Septiembre', date: '01-30 Sep', revenue: 610.00, sales: 140, players: 310, streamHours: 28 },
              { label: 'Octubre', date: '01-19 Oct', revenue: 730.00, sales: 160, players: 340, streamHours: 32 },
            ]
          },
          'ytd': {
            label: 'Año 2026 (YTD)',
            comparisonText: 'desde tu inicio en Glassy',
            netCommission: 2450.00,
            growth: 42.5,
            grossVolume: 9800.00,
            packagesSold: 560,
            salesGrowth: 38.0,
            newPlayers: 1420,
            playersGrowth: 100,
            clicks: 12100,
            epc: 0.20,
            arpu: 1.72,
            chartPoints: [
              { label: 'T1', date: 'Ene - Mar', revenue: 320.00, sales: 70, players: 180, streamHours: 15 },
              { label: 'T2', date: 'Abr - Jun', revenue: 580.00, sales: 130, players: 320, streamHours: 35 },
              { label: 'T3', date: 'Jul - Sep', revenue: 820.00, sales: 200, players: 580, streamHours: 52 },
              { label: 'T4', date: 'Oct - En curso', revenue: 730.00, sales: 160, players: 340, streamHours: 32 },
            ]
          }
        }[timeRange];

        // Manejo de exportación CSV simulada
        const handleExportReport = () => {
          setExportToast(true);
          const csvContent = "data:text/csv;charset=utf-8," 
            + "Fecha,Etiqueta,Comision_USD,Ventas_Paquetes,Nuevos_Jugadores,Horas_Stream_TikTok\n"
            + analyticsData.chartPoints.map(p => `${p.date},${p.label},${p.revenue},${p.sales},${p.players},${p.streamHours || 0}`).join("\n");
          const encodedUri = encodeURI(csvContent);
          const link = document.createElement("a");
          link.setAttribute("href", encodedUri);
          link.setAttribute("download", `glassy_analytics_${timeRange}_${partner.partner_code}.csv`);
          document.body.appendChild(link);
          link.click();
          document.body.removeChild(link);
          setTimeout(() => setExportToast(false), 3500);
        };

        // Cálculos para el render dinámico del gráfico SVG
        const points = analyticsData.chartPoints;
        const values = points.map(p => metricMode === 'revenue' ? p.revenue : metricMode === 'sales' ? p.sales : p.players);
        const maxVal = Math.max(...values, 1) * 1.15;
        const minVal = 0;
        const chartHeight = 160;
        const chartWidth = 560;
        
        // Coordenadas calculadas
        const coords = points.map((p, index) => {
          const x = 30 + (index / Math.max(points.length - 1, 1)) * (chartWidth - 60);
          const val = metricMode === 'revenue' ? p.revenue : metricMode === 'sales' ? p.sales : p.players;
          const y = chartHeight - 25 - ((val - minVal) / (maxVal - minVal)) * (chartHeight - 45);
          return { x, y, val, point: p, index };
        });

        const pathD = coords.reduce((acc, c, i) => `${acc} ${i === 0 ? 'M' : 'L'} ${c.x} ${c.y}`, '');
        const areaD = coords.length > 0 
          ? `${pathD} L ${coords[coords.length - 1].x} ${chartHeight - 15} L ${coords[0].x} ${chartHeight - 15} Z`
          : '';

        return (
          <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
            
            {/* 1. BARRA SUPERIOR DE CONTROL: FILTROS TEMPORALES Y EXPORTACIÓN */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1px solid #e2e8f0',
              padding: '1rem 1.25rem',
              display: 'flex',
              justifyContent: 'space-between',
              alignItems: 'center',
              flexWrap: 'wrap',
              gap: '1rem'
            }}>
              <div style={{ display: 'flex', alignItems: 'center', gap: '0.65rem' }}>
                <div style={{
                  width: '36px',
                  height: '36px',
                  borderRadius: '10px',
                  backgroundColor: '#eff6ff',
                  color: '#1d4ed8',
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'center'
                }}>
                  <BarChart3 size={20} />
                </div>
                <div>
                  <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                    Panel de Rendimiento & Analítica Precisa
                  </h3>
                  <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.15rem 0 0' }}>
                    Auditoría transparente de comisiones, volumen de ventas y retención de audiencia.
                  </p>
                </div>
              </div>

              {/* Controles de Rango Temporal y Botón Exportar */}
              <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem', flexWrap: 'wrap' }}>
                <div style={{
                  backgroundColor: '#f8fafc',
                  border: '1px solid #e2e8f0',
                  borderRadius: '10px',
                  padding: '0.25rem',
                  display: 'flex',
                  gap: '0.25rem'
                }}>
                  {(['7d', '30d', '90d', 'ytd'] as const).map((range) => {
                    const isSelected = timeRange === range;
                    const labels = { '7d': '7 Días', '30d': '30 Días', '90d': '90 Días', 'ytd': 'Año 2026' };
                    return (
                      <button
                        key={range}
                        type="button"
                        onClick={() => {
                          setTimeRange(range);
                          setSelectedPointIndex(null);
                        }}
                        style={{
                          backgroundColor: isSelected ? '#1d4ed8' : 'transparent',
                          color: isSelected ? '#ffffff' : '#475569',
                          border: 'none',
                          borderRadius: '7px',
                          padding: '0.35rem 0.65rem',
                          fontSize: '0.78rem',
                          fontWeight: 800,
                          cursor: 'pointer',
                          transition: 'all 0.15s ease'
                        }}
                      >
                        {labels[range]}
                      </button>
                    );
                  })}
                </div>

                <button
                  type="button"
                  onClick={handleExportReport}
                  style={{
                    backgroundColor: exportToast ? '#f0fdf4' : '#ffffff',
                    border: exportToast ? '1.5px solid #86efac' : '1px solid #cbd5e1',
                    color: exportToast ? '#166534' : '#334155',
                    borderRadius: '10px',
                    padding: '0.5rem 0.85rem',
                    fontSize: '0.8rem',
                    fontWeight: 700,
                    cursor: 'pointer',
                    display: 'flex',
                    alignItems: 'center',
                    gap: '0.4rem',
                    transition: 'all 0.2s'
                  }}
                  title="Descargar reporte completo en formato CSV para contabilidad"
                >
                  {exportToast ? <Check size={14} color="#16a34a" /> : <Download size={14} />}
                  <span>{exportToast ? '¡Reporte Descargado!' : 'Exportar CSV'}</span>
                </button>
              </div>
            </div>

            {/* 2. TARJETAS DE MÉTRICAS DE PRECISIÓN (KPIS CON COMPARATIVA) */}
            <div style={{
              display: 'grid',
              gridTemplateColumns: 'repeat(auto-fit, minmax(240px, 1fr))',
              gap: '1rem'
            }}>
              {/* KPI 1: Comisiones Netas */}
              <div style={{
                backgroundColor: '#ffffff',
                borderRadius: '14px',
                border: '1.5px solid #bfdbfe',
                padding: '1.25rem',
                boxShadow: '0 4px 14px rgba(29, 78, 216, 0.05)',
                display: 'flex',
                flexDirection: 'column',
                justifyContent: 'space-between'
              }}>
                <div>
                  <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.4rem' }}>
                    <span style={{ fontSize: '0.78rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                      Comisión Neta (25%)
                    </span>
                    <div style={{ width: '26px', height: '26px', borderRadius: '50%', backgroundColor: '#eff6ff', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                      <DollarSign size={14} color="#1d4ed8" />
                    </div>
                  </div>
                  <div style={{ fontSize: '1.95rem', fontWeight: 900, color: '#1d4ed8' }}>
                    ${analyticsData.netCommission.toFixed(2)}
                    <span style={{ fontSize: '0.85rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>USD</span>
                  </div>
                  <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.78rem', fontWeight: 700, color: '#16a34a' }}>
                    <TrendingUp size={13} />
                    <span>▲ +{analyticsData.growth}%</span>
                    <span style={{ color: '#94a3b8', fontWeight: 500 }}>{analyticsData.comparisonText}</span>
                  </div>
                </div>
                <div style={{ borderTop: '1px solid #f1f5f9', paddingTop: '0.65rem', marginTop: '0.85rem', fontSize: '0.75rem', color: '#64748b' }}>
                  Promedio diario: <strong>${(analyticsData.netCommission / analyticsData.chartPoints.length).toFixed(2)} USD/día</strong>
                </div>
              </div>

              {/* KPI 2: Volumen Bruto (GMV) */}
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
                  <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.4rem' }}>
                    <span style={{ fontSize: '0.78rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                      Volumen Bruto Facturado
                    </span>
                    <div style={{ width: '26px', height: '26px', borderRadius: '50%', backgroundColor: '#f0fdf4', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                      <Activity size={14} color="#16a34a" />
                    </div>
                  </div>
                  <div style={{ fontSize: '1.95rem', fontWeight: 900, color: '#0f172a' }}>
                    ${analyticsData.grossVolume.toFixed(2)}
                    <span style={{ fontSize: '0.85rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>USD</span>
                  </div>
                  <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.78rem', color: '#64748b' }}>
                    <span>Compras totales hechas en Glassy por tus fans</span>
                  </div>
                </div>
                <div style={{ borderTop: '1px solid #f1f5f9', paddingTop: '0.65rem', marginTop: '0.85rem', fontSize: '0.75rem', color: '#1d4ed8', fontWeight: 700 }}>
                  Participación de Partner: 25.0% RevShare
                </div>
              </div>

              {/* KPI 3: Paquetes Vendidos & Conversión */}
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
                  <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.4rem' }}>
                    <span style={{ fontSize: '0.78rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                      Compras Efectivas
                    </span>
                    <div style={{ width: '26px', height: '26px', borderRadius: '50%', backgroundColor: '#fef3c7', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                      <ShoppingBag size={14} color="#d97706" />
                    </div>
                  </div>
                  <div style={{ fontSize: '1.95rem', fontWeight: 900, color: '#0f172a' }}>
                    {analyticsData.packagesSold}
                    <span style={{ fontSize: '0.85rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>packs</span>
                  </div>
                  <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.78rem', fontWeight: 700, color: '#16a34a' }}>
                    <TrendingUp size={13} />
                    <span>▲ +{analyticsData.salesGrowth}%</span>
                    <span style={{ color: '#94a3b8', fontWeight: 500 }}>compras</span>
                  </div>
                </div>
                <div style={{ borderTop: '1px solid #f1f5f9', paddingTop: '0.65rem', marginTop: '0.85rem', fontSize: '0.75rem', color: '#64748b' }}>
                  Ticket promedio: <strong>${(analyticsData.grossVolume / Math.max(analyticsData.packagesSold, 1)).toFixed(2)} USD</strong>
                </div>
              </div>

              {/* KPI 4: EPC & ARPU */}
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
                  <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.4rem' }}>
                    <span style={{ fontSize: '0.78rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                      EPC (Ganancia / Clic)
                    </span>
                    <div style={{ width: '26px', height: '26px', borderRadius: '50%', backgroundColor: '#eff6ff', display: 'flex', alignItems: 'center', justifyContent: 'center' }}>
                      <Sparkles size={14} color="#2563eb" />
                    </div>
                  </div>
                  <div style={{ fontSize: '1.95rem', fontWeight: 900, color: '#0f172a' }}>
                    ${analyticsData.epc.toFixed(2)}
                    <span style={{ fontSize: '0.85rem', fontWeight: 700, color: '#64748b', marginLeft: '0.25rem' }}>USD</span>
                  </div>
                  <div style={{ display: 'flex', alignItems: 'center', gap: '0.3rem', marginTop: '0.25rem', fontSize: '0.78rem', color: '#64748b' }}>
                    <span>Sobre <strong>{analyticsData.clicks.toLocaleString()}</strong> clics únicos registrados</span>
                  </div>
                </div>
                <div style={{ borderTop: '1px solid #f1f5f9', paddingTop: '0.65rem', marginTop: '0.85rem', fontSize: '0.75rem', color: '#64748b' }}>
                  Ingreso / Jugador Activo (ARPU): <strong>${analyticsData.arpu.toFixed(2)} USD</strong>
                </div>
              </div>
            </div>

            {/* 3. GRÁFICO DINÁMICO DE ALTA RESOLUCIÓN CON SELECTOR DE MÉTRICA */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1px solid #e2e8f0',
              padding: '1.5rem',
              display: 'flex',
              flexDirection: 'column',
              gap: '1rem'
            }}>
              <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', flexWrap: 'wrap', gap: '0.75rem' }}>
                <div>
                  <h4 style={{ fontSize: '1.1rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                    Evolución Temporal & Correlación con Directos de TikTok
                  </h4>
                  <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                    Los marcadores azules indican transmisiones en vivo con Glassy Streamer y su impacto directo.
                  </p>
                </div>

                {/* Selector de qué métrica pintar en el gráfico */}
                <div style={{ display: 'flex', gap: '0.35rem', backgroundColor: '#f8fafc', padding: '0.25rem', borderRadius: '8px', border: '1px solid #e2e8f0' }}>
                  <button
                    type="button"
                    onClick={() => setMetricMode('revenue')}
                    style={{
                      backgroundColor: metricMode === 'revenue' ? '#1d4ed8' : 'transparent',
                      color: metricMode === 'revenue' ? '#ffffff' : '#475569',
                      border: 'none',
                      borderRadius: '6px',
                      padding: '0.35rem 0.65rem',
                      fontSize: '0.78rem',
                      fontWeight: 700,
                      cursor: 'pointer'
                    }}
                  >
                    Comisiones ($)
                  </button>
                  <button
                    type="button"
                    onClick={() => setMetricMode('sales')}
                    style={{
                      backgroundColor: metricMode === 'sales' ? '#1d4ed8' : 'transparent',
                      color: metricMode === 'sales' ? '#ffffff' : '#475569',
                      border: 'none',
                      borderRadius: '6px',
                      padding: '0.35rem 0.65rem',
                      fontSize: '0.78rem',
                      fontWeight: 700,
                      cursor: 'pointer'
                    }}
                  >
                    Ventas (#)
                  </button>
                  <button
                    type="button"
                    onClick={() => setMetricMode('players')}
                    style={{
                      backgroundColor: metricMode === 'players' ? '#1d4ed8' : 'transparent',
                      color: metricMode === 'players' ? '#ffffff' : '#475569',
                      border: 'none',
                      borderRadius: '6px',
                      padding: '0.35rem 0.65rem',
                      fontSize: '0.78rem',
                      fontWeight: 700,
                      cursor: 'pointer'
                    }}
                  >
                    Nuevos Jugadores
                  </button>
                </div>
              </div>

              {/* Contenedor del Gráfico SVG */}
              <div style={{ width: '100%', position: 'relative', overflowX: 'auto', paddingTop: '0.5rem' }}>
                <svg
                  viewBox={`0 0 ${chartWidth} ${chartHeight}`}
                  style={{ width: '100%', minWidth: '480px', height: '200px', overflow: 'visible' }}
                >
                  <defs>
                    <linearGradient id="analyticsGradient" x1="0" y1="0" x2="0" y2="1">
                      <stop offset="0%" stopColor="#2563eb" stopOpacity="0.28" />
                      <stop offset="100%" stopColor="#2563eb" stopOpacity="0.0" />
                    </linearGradient>
                  </defs>

                  {/* Líneas Guía Horizontales */}
                  <line x1="20" y1={chartHeight - 25} x2={chartWidth - 20} y2={chartHeight - 25} stroke="#f1f5f9" strokeWidth="1.5" />
                  <line x1="20" y1={(chartHeight - 25) * 0.66} x2={chartWidth - 20} y2={(chartHeight - 25) * 0.66} stroke="#f8fafc" strokeWidth="1" strokeDasharray="3 3" />
                  <line x1="20" y1={(chartHeight - 25) * 0.33} x2={chartWidth - 20} y2={(chartHeight - 25) * 0.33} stroke="#f8fafc" strokeWidth="1" strokeDasharray="3 3" />

                  {/* Área y Curva Suave */}
                  <path d={areaD} fill="url(#analyticsGradient)" />
                  <path d={pathD} fill="none" stroke="#1d4ed8" strokeWidth="3" strokeLinecap="round" strokeLinejoin="round" />

                  {/* Puntos y Etiquetas */}
                  {coords.map((c) => {
                    const isHovered = selectedPointIndex === c.index;
                    const hasStream = (c.point.streamHours || 0) > 0;
                    return (
                      <g key={c.index} style={{ cursor: 'pointer' }} onClick={() => setSelectedPointIndex(c.index)}>
                        {/* Línea vertical en hover */}
                        {isHovered && (
                          <line x1={c.x} y1="10" x2={c.x} y2={chartHeight - 25} stroke="#3b82f6" strokeWidth="1.5" strokeDasharray="2 2" />
                        )}

                        {/* Anillo de Stream en Vivo */}
                        {hasStream && (
                          <circle cx={c.x} cy={c.y} r="9" fill="rgba(37, 99, 235, 0.2)" />
                        )}

                        {/* Punto central */}
                        <circle
                          cx={c.x}
                          cy={c.y}
                          r={isHovered ? 6 : hasStream ? 5 : 4}
                          fill={hasStream ? '#1d4ed8' : '#2563eb'}
                          stroke="#ffffff"
                          strokeWidth="2"
                        />

                        {/* Etiqueta Eje X */}
                        <text
                          x={c.x}
                          y={chartHeight - 8}
                          textAnchor="middle"
                          fontSize="10"
                          fill={hasStream ? '#1d4ed8' : '#94a3b8'}
                          fontWeight={hasStream ? '800' : '600'}
                          fontFamily="sans-serif"
                        >
                          {c.point.label}
                        </text>
                      </g>
                    );
                  })}
                </svg>

                {/* Popover / Tarjeta de Detalle del Punto Seleccionado */}
                <div style={{
                  backgroundColor: '#f8fafc',
                  border: '1px solid #e2e8f0',
                  borderRadius: '10px',
                  padding: '0.75rem 1rem',
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'space-between',
                  flexWrap: 'wrap',
                  gap: '0.75rem',
                  marginTop: '0.5rem'
                }}>
                  {selectedPointIndex !== null ? (
                    (() => {
                      const sel = points[selectedPointIndex];
                      return (
                        <>
                          <div style={{ display: 'flex', alignItems: 'center', gap: '0.6rem' }}>
                            <span style={{ fontSize: '0.85rem', fontWeight: 800, color: '#0f172a' }}>
                              📅 {sel.date} ({sel.label})
                            </span>
                            {sel.streamHours ? (
                              <span style={{ fontSize: '0.72rem', fontWeight: 800, backgroundColor: '#eff6ff', color: '#1d4ed8', padding: '0.15rem 0.5rem', borderRadius: '9999px', border: '1px solid #bfdbfe' }}>
                                🔴 Directo en TikTok: {sel.streamHours} horas
                              </span>
                            ) : (
                              <span style={{ fontSize: '0.72rem', color: '#94a3b8' }}>Sin transmisión en vivo</span>
                            )}
                          </div>
                          <div style={{ display: 'flex', gap: '1.25rem', fontSize: '0.82rem' }}>
                            <div>Comisión: <strong style={{ color: '#16a34a' }}>+${sel.revenue.toFixed(2)} USD</strong></div>
                            <div>Ventas: <strong>{sel.sales} packs</strong></div>
                            <div>Nuevos Jugadores: <strong>{sel.players}</strong></div>
                          </div>
                        </>
                      );
                    })()
                  ) : (
                    <div style={{ fontSize: '0.78rem', color: '#64748b' }}>
                      💡 Haz clic en cualquier punto del gráfico para ver el desglose exacto de ese día y sus horas de transmisión.
                    </div>
                  )}
                </div>
              </div>
            </div>

            {/* 4. EMBUDO DE CONVERSIÓN DE AUDIENCIA (FULL CONVERSION FUNNEL) */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1px solid #e2e8f0',
              padding: '1.5rem',
              display: 'flex',
              flexDirection: 'column',
              gap: '1.25rem'
            }}>
              <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'flex-start', flexWrap: 'wrap', gap: '0.5rem' }}>
                <div>
                  <h4 style={{ fontSize: '1.1rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                    Embudo de Conversión de tu Audiencia
                  </h4>
                  <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                    Desde el primer clic en tus redes hasta la compra recurrente de cristales.
                  </p>
                </div>
                <span style={{
                  fontSize: '0.75rem',
                  fontWeight: 800,
                  backgroundColor: '#f0fdf4',
                  color: '#16a34a',
                  border: '1px solid #bbf7d0',
                  padding: '0.25rem 0.65rem',
                  borderRadius: '9999px'
                }}>
                  ★ Rendimiento Top 5% de Partners
                </span>
              </div>

              {/* Las 4 etapas del embudo con barras proporcionales */}
              <div style={{ display: 'grid', gridTemplateColumns: 'repeat(auto-fit, minmax(220px, 1fr))', gap: '1rem' }}>
                {/* Paso 1: Clics */}
                <div style={{ backgroundColor: '#f8fafc', borderRadius: '12px', padding: '1rem', border: '1px solid #e2e8f0' }}>
                  <div style={{ fontSize: '0.75rem', fontWeight: 700, color: '#64748b', textTransform: 'uppercase' }}>1. Clics en Enlace</div>
                  <div style={{ fontSize: '1.45rem', fontWeight: 900, color: '#0f172a', margin: '0.2rem 0' }}>{analyticsData.clicks.toLocaleString()}</div>
                  <div style={{ fontSize: '0.72rem', color: '#64748b' }}>Espectadores interesados</div>
                  <div style={{ height: '6px', backgroundColor: '#e2e8f0', borderRadius: '4px', marginTop: '0.65rem', overflow: 'hidden' }}>
                    <div style={{ width: '100%', height: '100%', backgroundColor: '#3b82f6' }} />
                  </div>
                </div>

                {/* Paso 2: Instalaciones */}
                <div style={{ backgroundColor: '#f8fafc', borderRadius: '12px', padding: '1rem', border: '1px solid #e2e8f0' }}>
                  <div style={{ fontSize: '0.75rem', fontWeight: 700, color: '#64748b', textTransform: 'uppercase' }}>2. Instalaron con Código</div>
                  <div style={{ fontSize: '1.45rem', fontWeight: 900, color: '#1d4ed8', margin: '0.2rem 0' }}>{partner.total_referrals.toLocaleString()}</div>
                  <div style={{ fontSize: '0.72rem', color: '#16a34a', fontWeight: 700 }}>50.0% conversión de clic</div>
                  <div style={{ height: '6px', backgroundColor: '#e2e8f0', borderRadius: '4px', marginTop: '0.65rem', overflow: 'hidden' }}>
                    <div style={{ width: '50%', height: '100%', backgroundColor: '#1d4ed8' }} />
                  </div>
                </div>

                {/* Paso 3: Retención >7d */}
                <div style={{ backgroundColor: '#f8fafc', borderRadius: '12px', padding: '1rem', border: '1px solid #e2e8f0' }}>
                  <div style={{ fontSize: '0.75rem', fontWeight: 700, color: '#64748b', textTransform: 'uppercase' }}>3. Jugadores Activos</div>
                  <div style={{ fontSize: '1.45rem', fontWeight: 900, color: '#0f172a', margin: '0.2rem 0' }}>{partner.active_players}</div>
                  <div style={{ fontSize: '0.72rem', color: '#1d4ed8', fontWeight: 700 }}>27.0% retención recurrente</div>
                  <div style={{ height: '6px', backgroundColor: '#e2e8f0', borderRadius: '4px', marginTop: '0.65rem', overflow: 'hidden' }}>
                    <div style={{ width: '27%', height: '100%', backgroundColor: '#2563eb' }} />
                  </div>
                </div>

                {/* Paso 4: Compradores de Pago */}
                <div style={{ backgroundColor: '#eff6ff', borderRadius: '12px', padding: '1rem', border: '1.5px solid #bfdbfe' }}>
                  <div style={{ fontSize: '0.75rem', fontWeight: 700, color: '#1d4ed8', textTransform: 'uppercase' }}>4. Compradores (Supporters)</div>
                  <div style={{ fontSize: '1.45rem', fontWeight: 900, color: '#16a34a', margin: '0.2rem 0' }}>88 fans</div>
                  <div style={{ fontSize: '0.72rem', color: '#16a34a', fontWeight: 800 }}>22.9% convirtieron a pago</div>
                  <div style={{ height: '6px', backgroundColor: '#bfdbfe', borderRadius: '4px', marginTop: '0.65rem', overflow: 'hidden' }}>
                    <div style={{ width: '22.9%', height: '100%', backgroundColor: '#16a34a' }} />
                  </div>
                </div>
              </div>
            </div>

            {/* 5. TABLA DE RENDIMIENTO POR PRODUCTO / PAQUETE VENDIDO */}
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
                <h4 style={{ fontSize: '1.1rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                  Desglose de Ventas por Paquete In-Game
                </h4>
                <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                  Auditoría detallada de cuáles compras generan el mayor volumen para tu canal.
                </p>
              </div>

              <div style={{ overflowX: 'auto' }}>
                <table style={{ width: '100%', borderCollapse: 'collapse', textAlign: 'left', fontSize: '0.85rem' }}>
                  <thead>
                    <tr style={{ backgroundColor: '#f8fafc', borderBottom: '1.5px solid #e2e8f0', color: '#64748b', fontSize: '0.75rem', textTransform: 'uppercase' }}>
                      <th style={{ padding: '0.75rem 1rem' }}>Paquete In-Game</th>
                      <th style={{ padding: '0.75rem 1rem' }}>Precio Unitario</th>
                      <th style={{ padding: '0.75rem 1rem' }}>Unidades Vendidas</th>
                      <th style={{ padding: '0.75rem 1rem' }}>Volumen Bruto</th>
                      <th style={{ padding: '0.75rem 1rem' }}>Tu Comisión Neta (25%)</th>
                      <th style={{ padding: '0.75rem 1rem' }}>% del Total</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 800, color: '#0f172a' }}>
                        Pack 1500 Cristales <span style={{ fontSize: '0.7rem', color: '#d97706', backgroundColor: '#fef3c7', padding: '0.1rem 0.4rem', borderRadius: '4px', marginLeft: '0.3rem' }}>🔥 Más Vendido</span>
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#64748b' }}>$9.99 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700 }}>64 compras</td>
                      <td style={{ padding: '0.85rem 1rem', color: '#0f172a' }}>$639.36 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 900, color: '#16a34a' }}>+$159.84 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700, color: '#1d4ed8' }}>42.0%</td>
                    </tr>
                    <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 800, color: '#0f172a' }}>
                        Pack 5000 Cristales <span style={{ fontSize: '0.7rem', color: '#2563eb', backgroundColor: '#eff6ff', padding: '0.1rem 0.4rem', borderRadius: '4px', marginLeft: '0.3rem' }}>💎 Mayor Margen</span>
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#64748b' }}>$24.99 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700 }}>22 compras</td>
                      <td style={{ padding: '0.85rem 1rem', color: '#0f172a' }}>$549.78 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 900, color: '#16a34a' }}>+$137.45 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700, color: '#1d4ed8' }}>24.2%</td>
                    </tr>
                    <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 800, color: '#0f172a' }}>
                        Pase de Batalla VIP Streamer
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#64748b' }}>$14.99 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700 }}>24 compras</td>
                      <td style={{ padding: '0.85rem 1rem', color: '#0f172a' }}>$359.76 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 900, color: '#16a34a' }}>+$89.94 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700, color: '#1d4ed8' }}>18.1%</td>
                    </tr>
                    <tr>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 800, color: '#0f172a' }}>
                        Pack 500 Cristales (Starter)
                      </td>
                      <td style={{ padding: '0.85rem 1rem', color: '#64748b' }}>$4.99 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700 }}>32 compras</td>
                      <td style={{ padding: '0.85rem 1rem', color: '#0f172a' }}>$159.68 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 900, color: '#16a34a' }}>+$39.92 USD</td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700, color: '#1d4ed8' }}>15.7%</td>
                    </tr>
                  </tbody>
                </table>
              </div>
            </div>

            {/* 6. DESGLOSE DE FUENTES / CANALES & HORARIOS DE ORO */}
            <div style={{
              display: 'grid',
              gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))',
              gap: '1.25rem'
            }}>
              {/* Fuentes con métricas de precisión */}
              <div style={{
                backgroundColor: '#ffffff',
                borderRadius: '14px',
                border: '1px solid #e2e8f0',
                padding: '1.25rem',
                display: 'flex',
                flexDirection: 'column',
                gap: '1rem'
              }}>
                <div>
                  <h4 style={{ fontSize: '1.05rem', fontWeight: 800, color: '#0f172a', margin: 0 }}>
                    Rendimiento por Canal de Difusión
                  </h4>
                  <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                    Eficacia comparativa de tus directos vs enlaces estáticos.
                  </p>
                </div>

                <div style={{ display: 'flex', flexDirection: 'column', gap: '0.75rem' }}>
                  {/* TikTok LIVE */}
                  <div style={{ backgroundColor: '#f8fafc', padding: '0.75rem', borderRadius: '10px', border: '1px solid #e2e8f0' }}>
                    <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.35rem' }}>
                      <span style={{ fontWeight: 800, color: '#0f172a', fontSize: '0.88rem' }}>🔴 TikTok LIVE (Con Overlays)</span>
                      <span style={{ fontWeight: 900, color: '#16a34a', fontSize: '0.88rem' }}>+$416.00 USD (65%)</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.75rem', color: '#64748b' }}>
                      <span>1,840 clics • 923 registros</span>
                      <span style={{ color: '#1d4ed8', fontWeight: 700 }}>50.1% Conv.</span>
                    </div>
                  </div>

                  {/* Bio de TikTok */}
                  <div style={{ backgroundColor: '#f8fafc', padding: '0.75rem', borderRadius: '10px', border: '1px solid #e2e8f0' }}>
                    <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.35rem' }}>
                      <span style={{ fontWeight: 800, color: '#0f172a', fontSize: '0.88rem' }}>🔗 Enlace en Bio (TikTok)</span>
                      <span style={{ fontWeight: 900, color: '#16a34a', fontSize: '0.88rem' }}>+$140.80 USD (22%)</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.75rem', color: '#64748b' }}>
                      <span>620 clics • 312 registros</span>
                      <span style={{ color: '#1d4ed8', fontWeight: 700 }}>50.3% Conv.</span>
                    </div>
                  </div>

                  {/* YouTube Shorts */}
                  <div style={{ backgroundColor: '#f8fafc', padding: '0.75rem', borderRadius: '10px', border: '1px solid #e2e8f0' }}>
                    <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.35rem' }}>
                      <span style={{ fontWeight: 800, color: '#0f172a', fontSize: '0.88rem' }}>📹 YouTube Shorts & Clips</span>
                      <span style={{ fontWeight: 900, color: '#16a34a', fontSize: '0.88rem' }}>+$51.20 USD (8%)</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.75rem', color: '#64748b' }}>
                      <span>240 clics • 110 registros</span>
                      <span style={{ color: '#1d4ed8', fontWeight: 700 }}>45.8% Conv.</span>
                    </div>
                  </div>

                  {/* Discord VIP */}
                  <div style={{ backgroundColor: '#f8fafc', padding: '0.75rem', borderRadius: '10px', border: '1px solid #e2e8f0' }}>
                    <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center', marginBottom: '0.35rem' }}>
                      <span style={{ fontWeight: 800, color: '#0f172a', fontSize: '0.88rem' }}>💬 Discord & Comunidad</span>
                      <span style={{ fontWeight: 900, color: '#16a34a', fontSize: '0.88rem' }}>+$32.00 USD (5%)</span>
                    </div>
                    <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.75rem', color: '#64748b' }}>
                      <span>140 clics • 75 registros</span>
                      <span style={{ color: '#1d4ed8', fontWeight: 700 }}>53.5% Conv.</span>
                    </div>
                  </div>
                </div>
              </div>

              {/* Horarios de Oro (Heatmap de Compras) */}
              <div style={{
                backgroundColor: '#ffffff',
                borderRadius: '14px',
                border: '1px solid #e2e8f0',
                padding: '1.25rem',
                display: 'flex',
                flexDirection: 'column',
                justifyContent: 'space-between',
                gap: '1rem'
              }}>
                <div>
                  <div style={{ display: 'flex', alignItems: 'center', gap: '0.4rem', marginBottom: '0.25rem' }}>
                    <Clock size={16} color="#1d4ed8" />
                    <h4 style={{ fontSize: '1.05rem', fontWeight: 800, color: '#0f172a', margin: 0 }}>
                      Horarios de Mayor Facturación
                    </h4>
                  </div>
                  <p style={{ fontSize: '0.8rem', color: '#64748b', margin: 0 }}>
                    Distribución de compras por franja horaria.
                  </p>

                  <div style={{ display: 'flex', flexDirection: 'column', gap: '0.65rem', marginTop: '1rem' }}>
                    <div>
                      <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.82rem', fontWeight: 700, marginBottom: '0.2rem' }}>
                        <span>🌙 Prime Time (18:00 - 23:59)</span>
                        <span style={{ color: '#1d4ed8' }}>62% de tus ventas 🔥</span>
                      </div>
                      <div style={{ height: '8px', backgroundColor: '#eff6ff', borderRadius: '4px', overflow: 'hidden' }}>
                        <div style={{ width: '62%', height: '100%', backgroundColor: '#1d4ed8' }} />
                      </div>
                    </div>

                    <div>
                      <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.82rem', fontWeight: 700, marginBottom: '0.2rem' }}>
                        <span>☀️ Tarde (12:00 - 18:00)</span>
                        <span style={{ color: '#2563eb' }}>26% de tus ventas</span>
                      </div>
                      <div style={{ height: '8px', backgroundColor: '#eff6ff', borderRadius: '4px', overflow: 'hidden' }}>
                        <div style={{ width: '26%', height: '100%', backgroundColor: '#2563eb' }} />
                      </div>
                    </div>

                    <div>
                      <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.82rem', fontWeight: 700, marginBottom: '0.2rem' }}>
                        <span>☕ Mañana (06:00 - 12:00)</span>
                        <span style={{ color: '#64748b' }}>8% de tus ventas</span>
                      </div>
                      <div style={{ height: '8px', backgroundColor: '#f1f5f9', borderRadius: '4px', overflow: 'hidden' }}>
                        <div style={{ width: '8%', height: '100%', backgroundColor: '#94a3b8' }} />
                      </div>
                    </div>

                    <div>
                      <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.82rem', fontWeight: 700, marginBottom: '0.2rem' }}>
                        <span>🌌 Madrugada (00:00 - 06:00)</span>
                        <span style={{ color: '#64748b' }}>4% de tus ventas</span>
                      </div>
                      <div style={{ height: '8px', backgroundColor: '#f1f5f9', borderRadius: '4px', overflow: 'hidden' }}>
                        <div style={{ width: '4%', height: '100%', backgroundColor: '#cbd5e1' }} />
                      </div>
                    </div>
                  </div>
                </div>

                <div style={{
                  backgroundColor: '#f0fdf4',
                  border: '1px solid #bbf7d0',
                  borderRadius: '10px',
                  padding: '0.85rem',
                  fontSize: '0.78rem',
                  color: '#166534',
                  lineHeight: 1.45
                }}>
                  <strong>💡 Recomendación Estratégica:</strong> Tu comunidad genera el <strong>62% de sus compras entre las 19:30 y las 22:30</strong>. Programar tus directos de TikTok LIVE en esa franja horaria duplica tus ingresos por hora de transmisión.
                </div>
              </div>
            </div>

          </div>
        );
      })()}



      {/* ==================================================================== */}
      {/* PESTAÑA 3: FACTURACIÓN & COMISIONES                                  */}
      {/* ==================================================================== */}
      {subTab === 'facturacion' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          {/* Card de Nivel de Partner */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1.5px solid #bfdbfe',
            padding: '1.5rem',
            boxShadow: '0 6px 18px rgba(29, 78, 216, 0.05)'
          }}>
            <div style={{ display: 'flex', justifyContent: 'space-between', alignItems: 'flex-start', flexWrap: 'wrap', gap: '1rem', marginBottom: '1.25rem' }}>
              <div>
                <span style={{
                  fontSize: '0.75rem',
                  fontWeight: 800,
                  backgroundColor: '#eff6ff',
                  color: '#1d4ed8',
                  padding: '0.25rem 0.6rem',
                  borderRadius: '6px',
                  textTransform: 'uppercase'
                }}>
                  Programa de Creadores Glassy
                </span>
                <h3 style={{ fontSize: '1.45rem', fontWeight: 900, color: '#0f172a', margin: '0.4rem 0 0.2rem' }}>
                  Nivel de Comisión: Tier Oro ({partner.commission_rate * 100}% Rev-Share)
                </h3>
                <p style={{ fontSize: '0.85rem', color: '#64748b', margin: 0 }}>
                  Recibes automáticamente el {partner.commission_rate * 100}% de cada compra in-game realizada por tus referidos.
                </p>
              </div>

              <div style={{
                textAlign: 'right',
                backgroundColor: '#f0fdf4',
                padding: '0.75rem 1rem',
                borderRadius: '10px',
                border: '1px solid #bbf7d0'
              }}>
                <div style={{ fontSize: '0.75rem', color: '#16a34a', fontWeight: 700 }}>Acumulado Histórico</div>
                <div style={{ fontSize: '1.5rem', fontWeight: 900, color: '#16a34a' }}>${partner.total_earnings.toFixed(2)} USD</div>
              </div>
            </div>

            {/* Barra de Progreso de Tiers */}
            <div>
              <div style={{ display: 'flex', justifyContent: 'space-between', fontSize: '0.82rem', fontWeight: 700, marginBottom: '0.4rem' }}>
                <span style={{ color: '#0f172a' }}>Progreso hacia Nivel Diamante (30% comisión)</span>
                <span style={{ color: '#1d4ed8' }}>384 / 500 Jugadores</span>
              </div>
              <div style={{ height: '10px', backgroundColor: '#eff6ff', borderRadius: '6px', overflow: 'hidden' }}>
                <div style={{ width: '76.8%', height: '100%', backgroundColor: '#1d4ed8', borderRadius: '6px' }} />
              </div>
              <div style={{ fontSize: '0.75rem', color: '#64748b', marginTop: '0.4rem' }}>
                Te faltan <strong>116 jugadores activos</strong> para desbloquear el 30% de Rev-Share máximo.
              </div>
            </div>
          </div>

          {/* SIMULADOR INTERACTIVO DE GANANCIAS */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1.5rem'
          }}>
            <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.25rem' }}>
              Calculadora de Ganancias para Streamers
            </h3>
            <p style={{ fontSize: '0.85rem', color: '#64748b', margin: '0 0 1.25rem' }}>
              Proyecta cuánto ganarás si tus seguidores compran algún paquete en el juego móvil.
            </p>

            <div style={{
              display: 'grid',
              gridTemplateColumns: 'repeat(auto-fit, minmax(260px, 1fr))',
              gap: '1.5rem',
              alignItems: 'center'
            }}>
              <div>
                <label style={{ display: 'block', fontSize: '0.85rem', fontWeight: 700, color: '#334155', marginBottom: '0.5rem' }}>
                  Cantidad de compradores esperados: <strong>{calculatorUsers} personas</strong>
                </label>
                <input
                  type="range"
                  min="5"
                  max="500"
                  step="5"
                  value={calculatorUsers}
                  onChange={(e) => setCalculatorUsers(Number(e.target.value))}
                  style={{ width: '100%', accentColor: '#1d4ed8' }}
                />

                <div style={{ marginTop: '1rem' }}>
                  <label style={{ display: 'block', fontSize: '0.85rem', fontWeight: 700, color: '#334155', marginBottom: '0.5rem' }}>
                    Paquete seleccionado:
                  </label>
                  <div style={{ display: 'flex', gap: '0.5rem', flexWrap: 'wrap' }}>
                    {[
                      { name: 'Pack 1500', price: 9.99 },
                      { name: 'Pack 5000', price: 24.99 },
                      { name: 'Pase Oro', price: 14.99 },
                      { name: 'Pack Diamante', price: 49.99 }
                    ].map(pack => (
                      <button
                        key={pack.name}
                        type="button"
                        onClick={() => setSelectedPackPrice(pack.price)}
                        style={{
                          backgroundColor: selectedPackPrice === pack.price ? '#1d4ed8' : '#f8fafc',
                          color: selectedPackPrice === pack.price ? '#ffffff' : '#334155',
                          border: selectedPackPrice === pack.price ? '1px solid #1d4ed8' : '1px solid #cbd5e1',
                          borderRadius: '8px',
                          padding: '0.4rem 0.65rem',
                          fontSize: '0.8rem',
                          fontWeight: 700,
                          cursor: 'pointer'
                        }}
                      >
                        {pack.name} (${pack.price})
                      </button>
                    ))}
                  </div>
                </div>
              </div>

              {/* Resultado del simulador */}
              <div style={{
                backgroundColor: '#eff6ff',
                border: '1.5px solid #bfdbfe',
                borderRadius: '12px',
                padding: '1.25rem',
                textAlign: 'center'
              }}>
                <div style={{ fontSize: '0.8rem', fontWeight: 700, color: '#1d4ed8', textTransform: 'uppercase' }}>
                  Tus Ganancias Estimadas
                </div>
                <div style={{ fontSize: '2.4rem', fontWeight: 900, color: '#1d4ed8', margin: '0.25rem 0' }}>
                  ${(calculatorUsers * selectedPackPrice * partner.commission_rate).toFixed(2)}
                  <span style={{ fontSize: '1rem', fontWeight: 700, marginLeft: '0.3rem' }}>USD</span>
                </div>
                <div style={{ fontSize: '0.78rem', color: '#64748b' }}>
                  Venta bruta: ${(calculatorUsers * selectedPackPrice).toFixed(2)} USD • Comisión: {partner.commission_rate * 100}%
                </div>
              </div>
            </div>
          </div>

          {/* Tabla de Paquetes Oficiales */}
          <div style={{
            backgroundColor: '#ffffff',
            borderRadius: '14px',
            border: '1px solid #e2e8f0',
            padding: '1.25rem'
          }}>
            <h3 style={{ fontSize: '1.05rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.85rem' }}>
              Catálogo Oficial de Paquetes y Comisiones
            </h3>
            <div style={{ overflowX: 'auto' }}>
              <table style={{ width: '100%', borderCollapse: 'collapse', textAlign: 'left', fontSize: '0.85rem' }}>
                <thead>
                  <tr style={{ backgroundColor: '#f8fafc', borderBottom: '1.5px solid #e2e8f0', color: '#64748b' }}>
                    <th style={{ padding: '0.75rem 1rem' }}>Paquete In-Game</th>
                    <th style={{ padding: '0.75rem 1rem' }}>Precio de Venta</th>
                    <th style={{ padding: '0.75rem 1rem' }}>Tu Comisión (25%)</th>
                    <th style={{ padding: '0.75rem 1rem' }}>Beneficio para tu Seguidor</th>
                  </tr>
                </thead>
                <tbody>
                  <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800 }}>Pack 500 Cristales</td>
                    <td style={{ padding: '0.75rem 1rem' }}>$4.99 USD</td>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800, color: '#16a34a' }}>+$1.25 USD</td>
                    <td style={{ padding: '0.75rem 1rem', color: '#64748b' }}>50 gemas extras gratis con tu código</td>
                  </tr>
                  <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800 }}>Pack 1500 Cristales</td>
                    <td style={{ padding: '0.75rem 1rem' }}>$9.99 USD</td>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800, color: '#16a34a' }}>+$2.50 USD</td>
                    <td style={{ padding: '0.75rem 1rem', color: '#64748b' }}>150 gemas extras gratis</td>
                  </tr>
                  <tr style={{ borderBottom: '1px solid #f1f5f9' }}>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800 }}>Pack 5000 Cristales</td>
                    <td style={{ padding: '0.75rem 1rem' }}>$24.99 USD</td>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800, color: '#16a34a' }}>+$6.25 USD</td>
                    <td style={{ padding: '0.75rem 1rem', color: '#64748b' }}>Skin exclusiva Esmeralda</td>
                  </tr>
                  <tr>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800 }}>Pase de Batalla VIP</td>
                    <td style={{ padding: '0.75rem 1rem' }}>$14.99 USD</td>
                    <td style={{ padding: '0.75rem 1rem', fontWeight: 800, color: '#16a34a' }}>+$3.75 USD</td>
                    <td style={{ padding: '0.75rem 1rem', color: '#64748b' }}>Insignia de seguidor en el juego</td>
                  </tr>
                </tbody>
              </table>
            </div>
          </div>

        </div>
      )}

    </div>
  );
};
