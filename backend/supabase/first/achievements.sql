-- ============================================================
-- TABLA: user_achievements
-- Registra el progreso de los distintos logros por grupo (1 a 10) y niveles.
-- ============================================================
CREATE TABLE IF NOT EXISTS user_achievements (
    user_id       UUID NOT NULL REFERENCES auth.users(id) ON DELETE CASCADE,
    group_id      INT NOT NULL,      -- Ej: 1 = Esmeraldas, 7 = Referidos, 9 = Tiktok, 10 = Score
    level         INT NOT NULL DEFAULT 1,
    progress      INT NOT NULL DEFAULT 0,
    is_claimed    BOOLEAN NOT NULL DEFAULT FALSE,
    updated_at    TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY (user_id, group_id, level)
);

-- ============================================================
-- TABLA: tiktok_submissions
-- Registra los enlaces de TikTok (Grupo 9) pendientes de revisión.
-- ============================================================
CREATE TABLE IF NOT EXISTS tiktok_submissions (
    id            SERIAL PRIMARY KEY,
    user_id       UUID NOT NULL REFERENCES auth.users(id) ON DELETE CASCADE,
    video_url     TEXT NOT NULL,
    status        VARCHAR(20) NOT NULL DEFAULT 'PENDING', -- PENDING, APPROVED, REJECTED
    created_at    TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);
