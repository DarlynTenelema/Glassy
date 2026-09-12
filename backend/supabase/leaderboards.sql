CREATE TABLE leaderboards (
    id SERIAL PRIMARY KEY,
    user_id UUID REFERENCES users(id) ON DELETE CASCADE,
    score INT NOT NULL,
    achieved_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
-- Índice para buscar los puntajes más altos rápidamente
CREATE INDEX idx_leaderboards_score ON leaderboards(score DESC);
