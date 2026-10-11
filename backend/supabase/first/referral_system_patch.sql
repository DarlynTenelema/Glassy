-- ============================================================
-- PARCHE DE REFERIDOS Y LOGRO SKIN EXCLUSIVA (Metales_Preciosos)
-- Ejecutar en el SQL Editor de Supabase
-- ============================================================

-- 1. Asegurar columnas en la tabla users
ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS invite_code VARCHAR(8) UNIQUE;

ALTER TABLE public.users 
ADD COLUMN IF NOT EXISTS referral_code_used VARCHAR(50) DEFAULT NULL;

-- 2. Asignar un invite_code aleatorio a cualquier usuario antiguo que no lo tenga aún
UPDATE public.users 
SET invite_code = SUBSTRING(REPLACE(gen_random_uuid()::text, '-', '') FROM 1 FOR 8) 
WHERE invite_code IS NULL;

-- 3. Actualizar trigger de auto-generación de invite_code en nuevos registros
CREATE OR REPLACE FUNCTION public.handle_new_user() 
RETURNS trigger AS $$
BEGIN
  INSERT INTO public.users (id, email, name, avatar_url, crystals, invite_code)
  VALUES (
    new.id,
    new.email,
    COALESCE(new.raw_user_meta_data->>'full_name', new.raw_user_meta_data->>'name', 'Jugador'),
    COALESCE(new.raw_user_meta_data->>'avatar_url', ''),
    100,
    SUBSTRING(REPLACE(gen_random_uuid()::text, '-', '') FROM 1 FOR 8)
  );
  RETURN new;
END;
$$ LANGUAGE plpgsql SECURITY DEFINER SET search_path = public;

-- 4. Asegurar RLS en user_skins y user_achievements
ALTER TABLE public.user_skins ENABLE ROW LEVEL SECURITY;
ALTER TABLE public.user_achievements ENABLE ROW LEVEL SECURITY;

DO $$ 
BEGIN
    IF NOT EXISTS (
        SELECT 1 FROM pg_policies 
        WHERE tablename = 'user_skins' AND policyname = 'Los usuarios pueden ver sus skins desbloqueadas'
    ) THEN
        CREATE POLICY "Los usuarios pueden ver sus skins desbloqueadas" 
        ON public.user_skins FOR SELECT 
        TO authenticated 
        USING (auth.uid() = user_id);
    END IF;
END $$;
