CREATE TABLE users (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    google_id VARCHAR(255) UNIQUE NOT NULL,
    email VARCHAR(255) UNIQUE NOT NULL,
    name VARCHAR(255) NOT NULL,
    avatar_url TEXT,
    lives INT DEFAULT 5,                  -- Vidas actuales
    last_life_used TIMESTAMP,             -- Para calcular cuándo recargar vidas pasivamente
    premium_until TIMESTAMP,              -- Para los paquetes de "Vidas Ilimitadas"
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
