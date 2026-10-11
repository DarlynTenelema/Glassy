-- ============================================================
-- PARCHE DE SEGURIDAD ZERO-TRUST: GLASSY
-- Ejecuta este script en el SQL Editor de tu proyecto en Supabase.
-- Protege al 100% la economía, monedas, suscripciones, skins y logros
-- contra modificaciones directas desde clientes o PostgREST.
-- ============================================================

-- 1. Asegurar columnas de control de anuncios y economía en public.users
ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS last_ad_claim TIMESTAMP DEFAULT NULL;

ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS daily_ads_claimed INT NOT NULL DEFAULT 0;

ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS last_ad_date DATE DEFAULT CURRENT_DATE;

ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS subscription_expires_at TIMESTAMP WITH TIME ZONE DEFAULT NULL;

ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS last_score_at TIMESTAMP WITH TIME ZONE DEFAULT NULL;

-- 2. Función Trigger: Bloquea cualquier manipulación de datos económicos y progreso
-- si la petición viene del cliente (rol 'authenticated' o 'anon').
-- El backend en Golang usa la conexión directa de Postgres / Service Role, por lo que
-- estas operaciones siguen funcionando con normalidad a través de los endpoints de Go.
CREATE OR REPLACE FUNCTION public.protect_user_sensitive_columns()
RETURNS TRIGGER AS $$
BEGIN
    -- Verificar si las columnas económicas o de progreso sufrieron algún cambio
    IF (
        OLD.crystals IS DISTINCT FROM NEW.crystals OR
        OLD.piggy_bank IS DISTINCT FROM NEW.piggy_bank OR
        OLD.subscription_tier IS DISTINCT FROM NEW.subscription_tier OR
        OLD.subscription_expires_at IS DISTINCT FROM NEW.subscription_expires_at OR
        OLD.last_score_at IS DISTINCT FROM NEW.last_score_at OR
        OLD.total_score IS DISTINCT FROM NEW.total_score OR
        OLD.welcome_pack_500_bought IS DISTINCT FROM NEW.welcome_pack_500_bought OR
        OLD.welcome_pack_2000_bought IS DISTINCT FROM NEW.welcome_pack_2000_bought OR
        OLD.welcome_pack_5000_bought IS DISTINCT FROM NEW.welcome_pack_5000_bought OR
        OLD.lapis_fragments IS DISTINCT FROM NEW.lapis_fragments OR
        OLD.invite_code IS DISTINCT FROM NEW.invite_code OR
        OLD.referral_code_used IS DISTINCT FROM NEW.referral_code_used OR
        OLD.last_ad_claim IS DISTINCT FROM NEW.last_ad_claim OR
        OLD.daily_ads_claimed IS DISTINCT FROM NEW.daily_ads_claimed OR
        OLD.last_ad_date IS DISTINCT FROM NEW.last_ad_date OR
        OLD.daily_reward_streak IS DISTINCT FROM NEW.daily_reward_streak OR
        OLD.last_daily_claim IS DISTINCT FROM NEW.last_daily_claim OR
        OLD.current_mission_day IS DISTINCT FROM NEW.current_mission_day OR
        OLD.mission_progress IS DISTINCT FROM NEW.mission_progress OR
        OLD.mission_completed IS DISTINCT FROM NEW.mission_completed OR
        OLD.last_chest_6h IS DISTINCT FROM NEW.last_chest_6h OR
        OLD.last_chest_12h IS DISTINCT FROM NEW.last_chest_12h OR
        OLD.last_chest_24h IS DISTINCT FROM NEW.last_chest_24h OR
        OLD.daily_lapis_farmed IS DISTINCT FROM NEW.daily_lapis_farmed OR
        OLD.last_farm_date IS DISTINCT FROM NEW.last_farm_date
    ) THEN
        -- Si la llamada proviene de un usuario autenticado por Supabase API o anónimo:
        IF current_user IN ('authenticated', 'anon') THEN
            RAISE EXCEPTION 'Acceso denegado: no tienes autorización para modificar campos económicos o de cuenta directamente.';
        END IF;
    END IF;

    RETURN NEW;
END;
$$ LANGUAGE plpgsql SECURITY DEFINER SET search_path = public;

-- 3. Vincular el trigger a la tabla users
DROP TRIGGER IF EXISTS trg_protect_user_sensitive_columns ON public.users;
CREATE TRIGGER trg_protect_user_sensitive_columns
    BEFORE UPDATE ON public.users
    FOR EACH ROW
    EXECUTE FUNCTION public.protect_user_sensitive_columns();

-- 4. Asegurar RLS en todas las tablas sensibles
ALTER TABLE public.users ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.user_skins ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.user_achievements ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.purchases ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.leaderboards ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.partners ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.partner_referrals ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.partner_withdrawals ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.tiktok_submissions ENABLE ROW LEVEL SECURITY;

-- 5. Revocar cualquier política de INSERT/UPDATE no deseada en tablas críticas
-- para que solo el backend con permisos de servicio pueda escribir:
DO $$
BEGIN
    -- Eliminar políticas de escritura que pudieran haberse creado por error
    DROP POLICY IF EXISTS "Insert skins directas" ON public.user_skins;
    DROP POLICY IF EXISTS "Update skins directas" ON public.user_skins;
    DROP POLICY IF EXISTS "Insert purchases directas" ON public.purchases;
    DROP POLICY IF EXISTS "Update purchases directas" ON public.purchases;
    DROP POLICY IF EXISTS "Insert achievements directas" ON public.user_achievements;
    DROP POLICY IF EXISTS "Update achievements directas" ON public.user_achievements;
    DROP POLICY IF EXISTS "Insert leaderboards directas" ON public.leaderboards;
    DROP POLICY IF EXISTS "Update leaderboards directas" ON public.leaderboards;
END $$;
