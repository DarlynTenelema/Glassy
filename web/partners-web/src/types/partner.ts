export type MainTab = 'dashboard' | 'influencers' | 'gamers' | 'wallet' | 'settings';

export type InfluencersSubTab = 'usuarios' | 'estadisticas' | 'facturacion';
export type GamersSubTab = 'skills' | 'connect' | 'overlays';
export type WalletSubTab = 'wallet' | 'history' | 'contacts';

export interface PartnerUser {
  id: string;
  partner_code: string;
  name: string;
  email: string;
  avatar_url?: string;
  tier: 'Bronce' | 'Plata' | 'Oro' | 'Diamante';
  commission_rate: number; // e.g. 0.25 (25%)
  available_balance: number;
  pending_balance: number;
  total_earnings: number;
  total_referrals: number;
  active_players: number;
  paypal_email: string;
  bank_account?: string;
  api_key: string;
}

export interface ReferredPlayer {
  id: string;
  username: string;
  registered_at: string;
  last_active: string;
  level: number;
  is_active: boolean;
  is_supporter: boolean;
  total_spent_usd: number;
  commission_generated_usd: number;
}

export interface WalletTransaction {
  id: string;
  date: string;
  type: 'commission' | 'withdrawal' | 'bonus';
  description: string;
  amount_usd: number;
  status: 'completed' | 'pending' | 'processing';
  method?: string;
}

export interface StreamerSkill {
  id: string;
  name: string;
  description: string;
  price_usd: number;
  is_owned: boolean;
  is_active: boolean;
  icon: string;
  category: 'visual' | 'automation' | 'gamification';
}

export interface SocialConnection {
  platform: 'tiktok' | 'twitch' | 'youtube' | 'kick';
  handle: string;
  is_connected: boolean;
  status_text: string;
}
