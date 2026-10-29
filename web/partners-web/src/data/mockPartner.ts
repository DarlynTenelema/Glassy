import type { PartnerUser, ReferredPlayer, WalletTransaction, StreamerSkill, SocialConnection } from '../types/partner';

export const INITIAL_PARTNER: PartnerUser = {
  id: 'usr_part_99182',
  partner_code: '1AX23F',
  name: 'AlexStreamer',
  email: 'alex.creator@glassy.gg',
  tier: 'Oro',
  commission_rate: 0.25, // 25% RevShare
  available_balance: 185.00,
  pending_balance: 42.50,
  total_earnings: 860.00,
  total_referrals: 1420,
  active_players: 384,
  paypal_email: 'alex.streamer@paypal.me',
  bank_account: 'ES76 0049 1500 0512 3456 7890',
  api_key: 'gl_live_sec_8f99a3b817c9120e'
};

export const INITIAL_PLAYERS: ReferredPlayer[] = [
  {
    id: 'ply_01',
    username: 'GamerGems_99',
    registered_at: '2026-10-18',
    last_active: 'Hace 10 min',
    level: 18,
    is_active: true,
    is_supporter: true,
    total_spent_usd: 24.99,
    commission_generated_usd: 6.25
  },
  {
    id: 'ply_02',
    username: 'Sofi_Troll21',
    registered_at: '2026-10-17',
    last_active: 'Hace 1 hora',
    level: 9,
    is_active: true,
    is_supporter: true,
    total_spent_usd: 9.99,
    commission_generated_usd: 2.50
  },
  {
    id: 'ply_03',
    username: 'DavidRubi',
    registered_at: '2026-10-17',
    last_active: 'Hace 3 horas',
    level: 34,
    is_active: true,
    is_supporter: false,
    total_spent_usd: 0,
    commission_generated_usd: 0
  },
  {
    id: 'ply_04',
    username: 'Luna_TikTok',
    registered_at: '2026-10-16',
    last_active: 'Ayer',
    level: 12,
    is_active: false,
    is_supporter: true,
    total_spent_usd: 14.99,
    commission_generated_usd: 3.75
  },
  {
    id: 'ply_05',
    username: 'DarkCombo_X',
    registered_at: '2026-10-15',
    last_active: 'Hace 2 días',
    level: 27,
    is_active: true,
    is_supporter: true,
    total_spent_usd: 49.99,
    commission_generated_usd: 12.50
  }
];

export const INITIAL_TRANSACTIONS: WalletTransaction[] = [
  {
    id: 'tx_981',
    date: '2026-10-19 09:12',
    type: 'commission',
    description: 'Comisión Pack 5000 Cristales (@DarkCombo_X)',
    amount_usd: 12.50,
    status: 'completed'
  },
  {
    id: 'tx_980',
    date: '2026-10-18 21:40',
    type: 'commission',
    description: 'Comisión Pack 1500 Cristales (@GamerGems_99)',
    amount_usd: 2.50,
    status: 'completed'
  },
  {
    id: 'tx_979',
    date: '2026-10-15 14:00',
    type: 'withdrawal',
    description: 'Retiro manual procesado a PayPal (alex.streamer@paypal.me)',
    amount_usd: -250.00,
    status: 'completed',
    method: 'PayPal'
  },
  {
    id: 'tx_978',
    date: '2026-10-12 18:30',
    type: 'commission',
    description: 'Comisión Pase de Batalla Streamer',
    amount_usd: 5.00,
    status: 'completed'
  },
  {
    id: 'tx_977',
    date: '2026-10-01 10:00',
    type: 'bonus',
    description: 'Bonus de Bienvenida Partner Verificado',
    amount_usd: 25.00,
    status: 'completed'
  }
];

export const INITIAL_SKILLS: StreamerSkill[] = [
  {
    id: 'skill_auto_player',
    name: 'Bot IA Streamer Autónomo ("Ghost Player")',
    description: 'Juega de forma 100% humana con física táctil fluida, titubeos y pánico ante peligro. Permite atender el chat o ausentarse sin descuidar la partida.',
    price_usd: 7.99,
    is_owned: true,
    is_active: true,
    icon: 'Play',
    category: 'automation'
  },
  {
    id: 'skill_avatar_gem',
    name: 'Gema Muro de la Fama ("VIP Avatar Gem")',
    description: 'Estampa automáticamente la foto de perfil del Top Donador de la sesión en el Diamante o Rubí en tiempo real para desatar guerras de regalos.',
    price_usd: 9.99,
    is_owned: true,
    is_active: false,
    icon: 'UserCheck',
    category: 'visual'
  },
  {
    id: 'skill_challenge_roulette',
    name: 'Ruleta de Desafíos de TikTok ("Challenge Wheel")',
    description: 'Despliega una ruleta interactiva que gira con regalos especiales para activar retos al streamer en vivo (1 mano, x2 velocidad, controles invertidos).',
    price_usd: 5.99,
    is_owned: false,
    is_active: false,
    icon: 'Sparkles',
    category: 'gamification'
  },
  {
    id: 'skill_emergency_shield',
    name: 'Escudo Anti-GameOver ("Life Shield")',
    description: 'Activa una alarma dramática en pantalla cuando el frasco está en peligro crítico. Ofrece 1 salvavidas automático por partida si la audiencia apoya.',
    price_usd: 4.99,
    is_owned: false,
    is_active: false,
    icon: 'Shield',
    category: 'automation'
  },
  {
    id: 'skill_voice_assistant',
    name: 'Asistente de Voz TTS & Lector de Chat ("Voice AI")',
    description: 'Lectura automática en voz alta de comentarios de donadores destacados y saludos a nuevos seguidores para no tener que mirar una segunda pantalla.',
    price_usd: 6.99,
    is_owned: false,
    is_active: false,
    icon: 'Volume2',
    category: 'automation'
  }
];

export const INITIAL_SOCIALS: SocialConnection[] = [
  {
    platform: 'tiktok',
    handle: '@alex_glassy_live',
    is_connected: true,
    status_text: '🟢 Conectado a TikTok LIVE Studio'
  },
  {
    platform: 'twitch',
    handle: 'alex_live',
    is_connected: true,
    status_text: '🟢 Escuchando chat IRC'
  },
  {
    platform: 'kick',
    handle: 'alexstream',
    is_connected: false,
    status_text: '⚪ No vinculado'
  },
  {
    platform: 'youtube',
    handle: 'AlexGamingOficial',
    is_connected: false,
    status_text: '⚪ No vinculado'
  }
];
