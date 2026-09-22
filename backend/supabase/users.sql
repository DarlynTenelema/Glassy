-- ============================================================
-- TABLA: users
-- Almacena los datos de los jugadores que se autentican con Google OAuth.
-- Los cristales se guardan aquí como fuente de verdad del servidor.
-- ============================================================
CREATE TABLE IF NOT EXISTS public.users (
    id          UUID PRIMARY KEY REFERENCES auth.users(id) ON DELETE CASCADE,
    email       VARCHAR(255) UNIQUE NOT NULL,
    name        VARCHAR(255) NOT NULL,
    avatar_url  TEXT,
    crystals    INT NOT NULL DEFAULT 100 CHECK (crystals >= 0),
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
