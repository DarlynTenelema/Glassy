-- ============================================================
-- TABLA: custom_skins
-- Registra las skins personalizadas/exclusivas creadas en vivo
-- para usuarios (ej. donaciones de TikTok Live) con assets remotos.
-- ============================================================
CREATE TABLE IF NOT EXISTS public.custom_skins (
    id                VARCHAR(100) PRIMARY KEY,
    name              VARCHAR(100) NOT NULL,
    owner_id          UUID REFERENCES public.users(id) ON DELETE SET NULL,
    donor_tiktok_user VARCHAR(100) DEFAULT '',
    preview_url       TEXT NOT NULL DEFAULT '',
    base_storage_url  TEXT NOT NULL DEFAULT '',
    is_exclusive      BOOLEAN NOT NULL DEFAULT TRUE,
    created_at        TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);

-- Asegurar que user_skins soporte IDs de skins dinámicas de hasta 100 caracteres
ALTER TABLE public.user_skins ALTER COLUMN skin_id TYPE VARCHAR(100);

-- Índices de optimización
CREATE INDEX IF NOT EXISTS idx_custom_skins_owner ON public.custom_skins(owner_id);
CREATE INDEX IF NOT EXISTS idx_custom_skins_created_at ON public.custom_skins(created_at DESC);

-- Habilitar RLS
ALTER TABLE public.custom_skins ENABLE ROW LEVEL SECURITY;

-- Política de lectura: usuarios autenticados pueden ver skins públicas o las que les pertenecen
CREATE POLICY "Permitir lectura de skins personalizadas"
ON public.custom_skins FOR SELECT
TO authenticated, anon
USING (true);
