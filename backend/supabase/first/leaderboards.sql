-- ============================================================
-- TABLA: leaderboards
-- Guarda el MEJOR puntaje de cada usuario (1 fila por usuario).
-- Usamos UNIQUE(user_id) + ON CONFLICT para hacer UPSERT eficiente.
-- El leaderboard global muestra los TOP 200 puntajes más altos.
-- ============================================================
CREATE TABLE IF NOT EXISTS leaderboards (
    id          SERIAL PRIMARY KEY,
    user_id     UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
    score       INT  NOT NULL CHECK (score >= 0),
    achieved_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,

    -- Un usuario solo tiene UNA entrada en el leaderboard (su mejor score).
    CONSTRAINT leaderboards_user_id_unique UNIQUE (user_id)
);

-- Índice para ordenar los puntajes más altos rápidamente (TOP 200)
CREATE INDEX IF NOT EXISTS idx_leaderboards_score ON leaderboards(score DESC);
