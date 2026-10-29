import { useState } from 'react';
import { 
  ArrowUpRight, MessageCircle, Send, ShieldCheck, Mail 
} from 'lucide-react';
import type { PartnerUser, WalletSubTab, WalletTransaction } from '../../types/partner';
import { INITIAL_TRANSACTIONS } from '../../data/mockPartner';

interface WalletViewProps {
  partner: PartnerUser;
  subTab: WalletSubTab;
}

export const WalletView: React.FC<WalletViewProps> = ({ partner, subTab }) => {
  const [availableBalance, setAvailableBalance] = useState(partner.available_balance);
  const [paypalInput, setPaypalInput] = useState(partner.paypal_email);
  const [isSavingPaypal, setIsSavingPaypal] = useState(false);
  const [savedPaypalMsg, setSavedPaypalMsg] = useState(false);
  const [withdrawAmount, setWithdrawAmount] = useState('100');
  const [withdrawMsg, setWithdrawMsg] = useState<string | null>(null);
  const [isProcessingWithdraw, setIsProcessingWithdraw] = useState(false);

  // Historial de transacciones
  const [transactions, setTransactions] = useState<WalletTransaction[]>(INITIAL_TRANSACTIONS);
  const [historyFilter, setHistoryFilter] = useState<'all' | 'commissions' | 'withdrawals'>('all');

  // Contact form
  const [contactSubject, setContactSubject] = useState<'sponsor' | 'tier' | 'support'>('sponsor');
  const [contactMessage, setContactMessage] = useState('');
  const [contactSent, setContactSent] = useState(false);

  const handleSavePaypal = () => {
    setIsSavingPaypal(true);
    setTimeout(() => {
      setIsSavingPaypal(false);
      setSavedPaypalMsg(true);
      setTimeout(() => setSavedPaypalMsg(false), 2500);
    }, 600);
  };

  const handleRequestWithdrawal = () => {
    const amount = Number(withdrawAmount);
    if (isNaN(amount) || amount < 50) {
      setWithdrawMsg('El monto mínimo de retiro es de $50.00 USD.');
      return;
    }
    if (amount > availableBalance) {
      setWithdrawMsg('El monto solicitado supera tu saldo disponible.');
      return;
    }

    setIsProcessingWithdraw(true);
    setTimeout(() => {
      setIsProcessingWithdraw(false);
      setAvailableBalance(prev => prev - amount);
      const newTx: WalletTransaction = {
        id: `tx_${Date.now()}`,
        date: 'Hoy (En revisión)',
        type: 'withdrawal',
        description: `Solicitud de retiro manual a PayPal (${paypalInput})`,
        amount_usd: -amount,
        status: 'pending',
        method: 'PayPal'
      };
      setTransactions([newTx, ...transactions]);
      setWithdrawMsg('¡Solicitud enviada con éxito! El equipo de Glassy transferirá tu dinero manualmente en 24-48h hábiles.');
    }, 900);
  };

  const handleSendContact = (e: React.FormEvent) => {
    e.preventDefault();
    if (!contactMessage.trim()) return;
    setContactSent(true);
    setTimeout(() => {
      setContactMessage('');
      setContactSent(false);
    }, 3500);
  };

  const filteredTransactions = transactions.filter(tx => {
    if (historyFilter === 'commissions') return tx.type === 'commission' || tx.type === 'bonus';
    if (historyFilter === 'withdrawals') return tx.type === 'withdrawal';
    return true;
  });

  return (
    <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>

      {/* ==================================================================== */}
      {/* PESTAÑA 1: WALLET (BILLETERA & SOLICITUD DE RETIRO)                  */}
      {/* ==================================================================== */}
      {subTab === 'wallet' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          {/* Tarjetas de Saldo Financiero */}
          <div style={{
            display: 'grid',
            gridTemplateColumns: 'repeat(auto-fit, minmax(260px, 1fr))',
            gap: '1rem'
          }}>
            {/* Saldo Retirable */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1.5px solid #bfdbfe',
              padding: '1.5rem',
              boxShadow: '0 6px 18px rgba(29, 78, 216, 0.06)'
            }}>
              <div style={{ fontSize: '0.8rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Saldo Disponible para Cobro
              </div>
              <div style={{ fontSize: '2.4rem', fontWeight: 900, color: '#1d4ed8', margin: '0.25rem 0' }}>
                ${availableBalance.toFixed(2)}
                <span style={{ fontSize: '1rem', fontWeight: 700, marginLeft: '0.25rem' }}>USD</span>
              </div>
              <div style={{ fontSize: '0.8rem', color: '#16a34a', fontWeight: 700 }}>
                ● Listo para solicitar retiro
              </div>
            </div>

            {/* Saldo en Retención (48h) */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1px solid #e2e8f0',
              padding: '1.5rem'
            }}>
              <div style={{ fontSize: '0.8rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Saldo en Retención (48h)
              </div>
              <div style={{ fontSize: '2.4rem', fontWeight: 900, color: '#0f172a', margin: '0.25rem 0' }}>
                ${partner.pending_balance.toFixed(2)}
                <span style={{ fontSize: '1rem', fontWeight: 700, marginLeft: '0.25rem' }}>USD</span>
              </div>
              <div style={{ fontSize: '0.8rem', color: '#64748b' }}>
                Protección contra reembolsos de tiendas móviles.
              </div>
            </div>

            {/* Histórico Cobrado */}
            <div style={{
              backgroundColor: '#ffffff',
              borderRadius: '14px',
              border: '1px solid #e2e8f0',
              padding: '1.5rem'
            }}>
              <div style={{ fontSize: '0.8rem', fontWeight: 800, color: '#64748b', textTransform: 'uppercase' }}>
                Total Pagado Histórico
              </div>
              <div style={{ fontSize: '2.4rem', fontWeight: 900, color: '#16a34a', margin: '0.25rem 0' }}>
                $250.00
                <span style={{ fontSize: '1rem', fontWeight: 700, marginLeft: '0.25rem' }}>USD</span>
              </div>
              <div style={{ fontSize: '0.8rem', color: '#64748b' }}>
                1 retiro procesado con éxito anteriormente.
              </div>
            </div>
          </div>

          {/* Formulario de Retiro y Configuración de Método de Pago */}
          <div style={{
            display: 'grid',
            gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))',
            gap: '1.5rem'
          }}>
            {/* Solicitar Retiro */}
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
                <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.25rem' }}>
                  Solicitar Retiro de Fondos
                </h3>
                <p style={{ fontSize: '0.82rem', color: '#64748b', margin: 0 }}>
                  Las transferencias se realizan de forma manual por el equipo de Glassy en 24 a 48 horas hábiles.
                </p>
              </div>

              {withdrawMsg && (
                <div style={{
                  padding: '0.75rem 1rem',
                  borderRadius: '8px',
                  fontSize: '0.85rem',
                  fontWeight: 600,
                  backgroundColor: withdrawMsg.includes('éxito') ? '#f0fdf4' : '#fef2f2',
                  color: withdrawMsg.includes('éxito') ? '#166534' : '#991b1b',
                  border: withdrawMsg.includes('éxito') ? '1px solid #bbf7d0' : '1px solid #fecaca'
                }}>
                  {withdrawMsg}
                </div>
              )}

              <div>
                <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
                  Monto a Retirar (USD) — Mínimo $50.00
                </label>
                <div style={{ display: 'flex', alignItems: 'center', gap: '0.5rem' }}>
                  <input
                    type="number"
                    min="50"
                    max={availableBalance}
                    value={withdrawAmount}
                    onChange={(e) => setWithdrawAmount(e.target.value)}
                    style={{
                      flex: 1,
                      padding: '0.65rem 0.85rem',
                      borderRadius: '8px',
                      border: '1px solid #cbd5e1',
                      fontSize: '1rem',
                      fontWeight: 700,
                      outline: 'none'
                    }}
                  />
                  <button
                    type="button"
                    onClick={() => setWithdrawAmount(availableBalance.toFixed(0))}
                    style={{
                      backgroundColor: '#f1f5f9',
                      border: '1px solid #cbd5e1',
                      borderRadius: '8px',
                      padding: '0.65rem 0.85rem',
                      fontSize: '0.82rem',
                      fontWeight: 700,
                      cursor: 'pointer'
                    }}
                  >
                    Todo
                  </button>
                </div>
              </div>

              <button
                type="button"
                onClick={handleRequestWithdrawal}
                disabled={isProcessingWithdraw || availableBalance < 50}
                style={{
                  backgroundColor: availableBalance >= 50 ? '#1d4ed8' : '#94a3b8',
                  color: '#ffffff',
                  border: 'none',
                  borderRadius: '8px',
                  padding: '0.75rem',
                  fontWeight: 800,
                  fontSize: '0.9rem',
                  cursor: availableBalance >= 50 ? 'pointer' : 'not-allowed',
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'center',
                  gap: '0.45rem',
                  transition: 'background 0.15s'
                }}
              >
                <span>{isProcessingWithdraw ? 'Enviando solicitud...' : 'Solicitar Retiro a PayPal'}</span>
                <ArrowUpRight size={16} />
              </button>
            </div>

            {/* Configuración de Datos de Pago */}
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
                <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.25rem' }}>
                  Método de Cobro Oficial
                </h3>
                <p style={{ fontSize: '0.82rem', color: '#64748b', margin: 0 }}>
                  Asegúrate de que tu cuenta coincida con tus datos reales para evitar retrasos en el pago.
                </p>
              </div>

              <div>
                <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
                  Correo Electrónico de PayPal
                </label>
                <div style={{ display: 'flex', gap: '0.5rem' }}>
                  <input
                    type="email"
                    value={paypalInput}
                    onChange={(e) => setPaypalInput(e.target.value)}
                    style={{
                      flex: 1,
                      padding: '0.65rem 0.85rem',
                      borderRadius: '8px',
                      border: '1px solid #cbd5e1',
                      fontSize: '0.88rem',
                      outline: 'none'
                    }}
                  />
                  <button
                    type="button"
                    onClick={handleSavePaypal}
                    disabled={isSavingPaypal}
                    style={{
                      backgroundColor: '#1d4ed8',
                      color: '#ffffff',
                      border: 'none',
                      borderRadius: '8px',
                      padding: '0.65rem 1rem',
                      fontSize: '0.82rem',
                      fontWeight: 800,
                      cursor: 'pointer'
                    }}
                  >
                    {isSavingPaypal ? '...' : savedPaypalMsg ? '¡Guardado!' : 'Guardar'}
                  </button>
                </div>
              </div>

              <div style={{
                backgroundColor: '#f8fafc',
                padding: '0.85rem',
                borderRadius: '8px',
                fontSize: '0.8rem',
                color: '#64748b',
                display: 'flex',
                gap: '0.5rem',
                border: '1px solid #e2e8f0'
              }}>
                <ShieldCheck size={18} color="#16a34a" style={{ flexShrink: 0 }} />
                <span>
                  Para cobros mayores a $500 USD también puedes solicitar transferencia bancaria directa (Wise o IBAN) en la pestaña de <strong>Contacts</strong>.
                </span>
              </div>
            </div>
          </div>

        </div>
      )}

      {/* ==================================================================== */}
      {/* PESTAÑA 2: HISTORY (HISTORIAL DE TRANSACCIONES)                      */}
      {/* ==================================================================== */}
      {subTab === 'history' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.25rem' }}>
          
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
            <div>
              <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: 0 }}>
                Historial Financiero Completo
              </h3>
              <p style={{ fontSize: '0.8rem', color: '#64748b', margin: '0.2rem 0 0' }}>
                Registro cronológico de comisiones devengadas y transferencias solicitadas.
              </p>
            </div>

            <div style={{ display: 'flex', gap: '0.4rem' }}>
              {(['all', 'commissions', 'withdrawals'] as const).map(type => {
                const labels = { all: 'Todas', commissions: 'Comisiones', withdrawals: 'Retiros' };
                const isSelected = historyFilter === type;
                return (
                  <button
                    key={type}
                    type="button"
                    onClick={() => setHistoryFilter(type)}
                    style={{
                      backgroundColor: isSelected ? '#1d4ed8' : '#f8fafc',
                      color: isSelected ? '#ffffff' : '#475569',
                      border: '1px solid #cbd5e1',
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
                    <th style={{ padding: '0.85rem 1.25rem' }}>Fecha</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Concepto</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Tipo</th>
                    <th style={{ padding: '0.85rem 1rem' }}>Estado</th>
                    <th style={{ padding: '0.85rem 1.25rem', textAlign: 'right' }}>Monto (USD)</th>
                  </tr>
                </thead>
                <tbody>
                  {filteredTransactions.map(tx => (
                    <tr key={tx.id} style={{ borderBottom: '1px solid #f1f5f9' }}>
                      <td style={{ padding: '0.85rem 1.25rem', color: '#64748b', fontSize: '0.82rem' }}>
                        {tx.date}
                      </td>
                      <td style={{ padding: '0.85rem 1rem', fontWeight: 700, color: '#0f172a' }}>
                        {tx.description}
                      </td>
                      <td style={{ padding: '0.85rem 1rem' }}>
                        <span style={{
                          fontSize: '0.75rem',
                          fontWeight: 700,
                          backgroundColor: tx.type === 'withdrawal' ? '#fef2f2' : '#f0fdf4',
                          color: tx.type === 'withdrawal' ? '#991b1b' : '#166534',
                          padding: '0.2rem 0.5rem',
                          borderRadius: '6px'
                        }}>
                          {tx.type === 'withdrawal' ? 'Retiro' : tx.type === 'bonus' ? 'Bonus' : 'Comisión'}
                        </span>
                      </td>
                      <td style={{ padding: '0.85rem 1rem' }}>
                        {tx.status === 'completed' && (
                          <span style={{ color: '#16a34a', fontWeight: 700, fontSize: '0.8rem' }}>
                            ✓ Completado
                          </span>
                        )}
                        {tx.status === 'pending' && (
                          <span style={{ color: '#d97706', fontWeight: 700, fontSize: '0.8rem' }}>
                            ⏳ En revisión manual
                          </span>
                        )}
                      </td>
                      <td style={{
                        padding: '0.85rem 1.25rem',
                        fontWeight: 900,
                        textAlign: 'right',
                        color: tx.amount_usd > 0 ? '#16a34a' : '#0f172a',
                        fontSize: '0.95rem'
                      }}>
                        {tx.amount_usd > 0 ? `+${tx.amount_usd.toFixed(2)}` : `${tx.amount_usd.toFixed(2)}`} USD
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
      {/* PESTAÑA 3: CONTACTS (TRATOS, PATROCINIOS & SOPORTE)                   */}
      {/* ==================================================================== */}
      {subTab === 'contacts' && (
        <div style={{ display: 'flex', flexDirection: 'column', gap: '1.5rem' }}>
          
          <div style={{
            display: 'grid',
            gridTemplateColumns: 'repeat(auto-fit, minmax(320px, 1fr))',
            gap: '1.5rem'
          }}>
            {/* Formulario de Trato Directo */}
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
                <h3 style={{ fontSize: '1.2rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.25rem' }}>
                  Contacto Directo con el Equipo de Glassy
                </h3>
                <p style={{ fontSize: '0.82rem', color: '#64748b', margin: 0 }}>
                  ¿Tienes una propuesta especial, quieres negociar un patrocinio o necesitas ayuda? Escríbenos directamente.
                </p>
              </div>

              {contactSent ? (
                <div style={{
                  backgroundColor: '#f0fdf4',
                  border: '1px solid #bbf7d0',
                  color: '#166534',
                  padding: '1rem',
                  borderRadius: '10px',
                  fontWeight: 700,
                  fontSize: '0.9rem',
                  textAlign: 'center'
                }}>
                  ¡Mensaje enviado con éxito! El fundador de Glassy te responderá en menos de 24 horas.
                </div>
              ) : (
                <form onSubmit={handleSendContact} style={{ display: 'flex', flexDirection: 'column', gap: '1rem' }}>
                  <div>
                    <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
                      Motivo del Contacto
                    </label>
                    <div style={{ display: 'flex', gap: '0.5rem', flexWrap: 'wrap' }}>
                      {[
                        { id: 'sponsor', label: '💼 Propuesta de Patrocinio' },
                        { id: 'tier', label: '🚀 Aumento de Comisión VIP' },
                        { id: 'support', label: '🛠️ Ayuda con Pagos' }
                      ].map(cat => (
                        <button
                          key={cat.id}
                          type="button"
                          onClick={() => setContactSubject(cat.id as any)}
                          style={{
                            backgroundColor: contactSubject === cat.id ? '#1d4ed8' : '#f8fafc',
                            color: contactSubject === cat.id ? '#ffffff' : '#334155',
                            border: '1px solid #cbd5e1',
                            borderRadius: '8px',
                            padding: '0.45rem 0.75rem',
                            fontSize: '0.8rem',
                            fontWeight: 700,
                            cursor: 'pointer'
                          }}
                        >
                          {cat.label}
                        </button>
                      ))}
                    </div>
                  </div>

                  <div>
                    <label style={{ display: 'block', fontSize: '0.82rem', fontWeight: 700, color: '#334155', marginBottom: '0.4rem' }}>
                      Detalles de tu Propuesta o Mensaje
                    </label>
                    <textarea
                      rows={5}
                      placeholder="Cuéntanos sobre tu canal de TikTok, métricas promedio o la solicitud que deseas realizar..."
                      value={contactMessage}
                      onChange={(e) => setContactMessage(e.target.value)}
                      style={{
                        width: '100%',
                        padding: '0.75rem',
                        borderRadius: '8px',
                        border: '1px solid #cbd5e1',
                        fontSize: '0.88rem',
                        outline: 'none',
                        fontFamily: 'inherit'
                      }}
                    />
                  </div>

                  <button
                    type="submit"
                    style={{
                      backgroundColor: '#1d4ed8',
                      color: '#ffffff',
                      border: 'none',
                      borderRadius: '8px',
                      padding: '0.75rem',
                      fontWeight: 800,
                      fontSize: '0.9rem',
                      cursor: 'pointer',
                      display: 'flex',
                      alignItems: 'center',
                      justifyContent: 'center',
                      gap: '0.45rem'
                    }}
                  >
                    <Send size={16} />
                    <span>Enviar Mensaje Directo</span>
                  </button>
                </form>
              )}
            </div>

            {/* Vías Directas de Contacto VIP */}
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
                <h3 style={{ fontSize: '1.15rem', fontWeight: 900, color: '#0f172a', margin: '0 0 0.25rem' }}>
                  Canales Oficiales VIP
                </h3>
                <p style={{ fontSize: '0.82rem', color: '#64748b', margin: 0 }}>
                  Como partner oficial, tienes línea prioritaria de comunicación con nosotros.
                </p>
              </div>

              <div style={{
                backgroundColor: '#eff6ff',
                border: '1px solid #bfdbfe',
                borderRadius: '12px',
                padding: '1rem',
                display: 'flex',
                alignItems: 'center',
                gap: '0.75rem'
              }}>
                <div style={{
                  width: '38px',
                  height: '38px',
                  borderRadius: '10px',
                  backgroundColor: '#1d4ed8',
                  color: '#ffffff',
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'center'
                }}>
                  <MessageCircle size={20} />
                </div>
                <div>
                  <div style={{ fontSize: '0.9rem', fontWeight: 800, color: '#1e3a8a' }}>
                    Discord Oficial de Partners Glassy
                  </div>
                  <div style={{ fontSize: '0.75rem', color: '#3b82f6' }}>
                    Canal privado con novedades y soporte en directo
                  </div>
                </div>
              </div>

              <div style={{
                backgroundColor: '#f8fafc',
                border: '1px solid #e2e8f0',
                borderRadius: '12px',
                padding: '1rem',
                display: 'flex',
                alignItems: 'center',
                gap: '0.75rem'
              }}>
                <div style={{
                  width: '38px',
                  height: '38px',
                  borderRadius: '10px',
                  backgroundColor: '#16a34a',
                  color: '#ffffff',
                  display: 'flex',
                  alignItems: 'center',
                  justifyContent: 'center'
                }}>
                  <Mail size={20} />
                </div>
                <div>
                  <div style={{ fontSize: '0.9rem', fontWeight: 800, color: '#0f172a' }}>
                    Correo Electrónico Directo
                  </div>
                  <div style={{ fontSize: '0.8rem', color: '#64748b' }}>
                    partners@glassy.gg
                  </div>
                </div>
              </div>
            </div>
          </div>

        </div>
      )}

    </div>
  );
};
