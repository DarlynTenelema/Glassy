-- ============================================================
-- TABLA: partners
-- Almacena los creadores de contenido / influencers de Glassy
-- ============================================================
CREATE TABLE IF NOT EXISTS public.partners (
    id UUID PRIMARY KEY REFERENCES auth.users(id) ON DELETE CASCADE,
    partner_code VARCHAR(50) UNIQUE NOT NULL,
    paypal_email VARCHAR(255),
    total_earnings DECIMAL(10,2) NOT NULL DEFAULT 0.00,
    available_balance DECIMAL(10,2) NOT NULL DEFAULT 0.00,
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);

-- ============================================================
-- TABLA: partner_referrals
-- Relaciona a los jugadores nuevos con el creador que los invitó
-- ============================================================
CREATE TABLE IF NOT EXISTS public.partner_referrals (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    partner_id UUID REFERENCES public.partners(id) ON DELETE CASCADE,
    user_id UUID REFERENCES public.users(id) ON DELETE CASCADE,
    status VARCHAR(20) NOT NULL DEFAULT 'in_progress', -- 'in_progress', 'confirmed'
    joined_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
    confirmed_at TIMESTAMP,
    UNIQUE(user_id) -- Un jugador solo puede ser referido por un partner
);

-- ============================================================
-- TABLA: partner_withdrawals
-- Solicitudes de retiro de los partners
-- ============================================================
CREATE TABLE IF NOT EXISTS public.partner_withdrawals (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    partner_id UUID REFERENCES public.partners(id) ON DELETE CASCADE,
    amount DECIMAL(10,2) NOT NULL CHECK (amount >= 100),
    status VARCHAR(20) NOT NULL DEFAULT 'pending', -- 'pending', 'paid'
    requested_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
    paid_at TIMESTAMP
);

-- Habilitar RLS
ALTER TABLE public.partners ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.partner_referrals ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.partner_withdrawals ENABLE ROW LEVEL SECURITY;
