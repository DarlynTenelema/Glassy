-- ============================================================
-- TABLA: user_skins
-- Registra las skins que un usuario ha desbloqueado de forma permanente.
-- Esto asegura que al cambiar de dispositivo, no pierda sus compras.
-- ============================================================
CREATE TABLE IF NOT EXISTS public.user_skins (
    id          UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    user_id     UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
    skin_id     VARCHAR(50) NOT NULL,
    created_at  TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,

    -- Un usuario solo puede tener una copia de una skin
    CONSTRAINT user_skins_unique UNIQUE (user_id, skin_id)
);

-- Habilitar RLS (opcional si usas API externa en Go, pero recomendado)
ALTER TABLE public.user_skins ENABLE ROW LEVEL SECURITY;
