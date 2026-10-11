-- ============================================================
-- TABLA: purchases
-- Registra cada compra in-app verificada con Google Play Billing.
-- purchase_token es UNIQUE para prevenir Replay Attacks:
-- el mismo token no puede usarse dos veces.
-- ============================================================
CREATE TABLE IF NOT EXISTS purchases (
    id              UUID        PRIMARY KEY DEFAULT gen_random_uuid(),
    user_id         UUID        NOT NULL REFERENCES users(id) ON DELETE CASCADE,
    purchase_token  VARCHAR(255) NOT NULL,   -- Token de Google Play (ÚNICO = anti-replay)
    package_id      VARCHAR(50) NOT NULL,    -- Ej: glass_pack_100
    crystals_added  INT         NOT NULL CHECK (crystals_added > 0),
    created_at      TIMESTAMP   NOT NULL DEFAULT CURRENT_TIMESTAMP,

    -- Constraint explícito para que el error sea claro al intentar replay
    CONSTRAINT purchases_token_unique UNIQUE (purchase_token)
);

-- Índice para consultar el historial de compras de un usuario rápidamente
CREATE INDEX IF NOT EXISTS idx_purchases_user_id ON purchases(user_id);
