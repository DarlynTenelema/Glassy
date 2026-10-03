-- ============================================================
-- TABLA: users
-- Almacena los datos de los jugadores que se autentican con Google OAuth.
-- Los lapislázulis se guardan aquí como fuente de verdad del servidor.
-- ============================================================
CREATE TABLE IF NOT EXISTS public.users (
    id          UUID PRIMARY KEY REFERENCES auth.users(id) ON DELETE CASCADE,
    email       VARCHAR(255) UNIQUE NOT NULL,
    name        VARCHAR(255) NOT NULL,
    avatar_url  TEXT,
    crystals    INT NOT NULL DEFAULT 100 CHECK (crystals >= 0),
    piggy_bank  INT NOT NULL DEFAULT 0 CHECK (piggy_bank >= 0),
    daily_reward_streak INT NOT NULL DEFAULT 1 CHECK (daily_reward_streak >= 1 AND daily_reward_streak <= 7),
    last_daily_claim TIMESTAMP,
    current_mission_day INT NOT NULL DEFAULT 1 CHECK (current_mission_day >= 1 AND current_mission_day <= 30),
    mission_progress INT NOT NULL DEFAULT 0,
    mission_completed BOOLEAN NOT NULL DEFAULT false,
    subscription_tier VARCHAR(50) NOT NULL DEFAULT 'none',
    referral_code_used VARCHAR(50) DEFAULT NULL,
    lapis_fragments INT NOT NULL DEFAULT 0,
    last_chest_6h TIMESTAMP DEFAULT NULL,
    last_chest_12h TIMESTAMP DEFAULT NULL,
    last_chest_24h TIMESTAMP DEFAULT NULL,
    total_active_days INT NOT NULL DEFAULT 1,
    welcome_pack_500_bought BOOLEAN NOT NULL DEFAULT false,
    welcome_pack_2000_bought BOOLEAN NOT NULL DEFAULT false,
    welcome_pack_5000_bought BOOLEAN NOT NULL DEFAULT false,
    selected_skin_id VARCHAR(50) NOT NULL DEFAULT 'gemas_clasicas',
    daily_lapis_farmed INT NOT NULL DEFAULT 0,
    last_farm_date DATE DEFAULT CURRENT_DATE,
    created_at  TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);

-- Habilitar RLS (opcional si usas API externa en Go, pero recomendado)
ALTER TABLE public.users ENABLE ROW LEVEL SECURITY;

-- ============================================================
-- TRIGGER: auto-insertar perfil de usuario
-- ============================================================
-- Se ejecuta automáticamente cuando un usuario se registra con Google en Supabase Auth
CREATE OR REPLACE FUNCTION public.handle_new_user() 
RETURNS trigger AS $$
BEGIN
  INSERT INTO public.users (id, email, name, avatar_url, crystals)
  VALUES (
    new.id,
    new.email,
    COALESCE(new.raw_user_meta_data->>'full_name', new.raw_user_meta_data->>'name', 'Jugador'),
    COALESCE(new.raw_user_meta_data->>'avatar_url', ''),
    100
  );
  RETURN new;
END;
$$ LANGUAGE plpgsql SECURITY DEFINER;

-- Trigger para ejecutar la función
DROP TRIGGER IF EXISTS on_auth_user_created ON auth.users;
CREATE TRIGGER on_auth_user_created
  AFTER INSERT ON auth.users
  FOR EACH ROW EXECUTE PROCEDURE public.handle_new_user();
