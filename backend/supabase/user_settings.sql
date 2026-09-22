-- ============================================================
-- TABLA: user_settings
-- Configuración del jugador. Una fila por usuario (1:1 con users).
-- Se usa UPSERT desde el backend para crear o actualizar.
-- ============================================================
CREATE TABLE IF NOT EXISTS user_settings (
    user_id      UUID PRIMARY KEY REFERENCES users(id) ON DELETE CASCADE,
    volume_on    BOOLEAN   NOT NULL DEFAULT TRUE,
    effects_on   BOOLEAN   NOT NULL DEFAULT TRUE,
    dark_mode    BOOLEAN   NOT NULL DEFAULT TRUE,
    updated_at   TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);
