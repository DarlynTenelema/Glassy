package main

import (
	"database/sql"
	"fmt"
	"log"
	"os"

	_ "github.com/lib/pq"
)

// DB es la conexión global a la base de datos PostgreSQL (Supabase).
var DB *sql.DB

// InitDB inicializa y valida la conexión a la base de datos.
// Llama a ensureTables() para garantizar que el esquema existe.
func InitDB() {
	connStr := os.Getenv("DATABASE_URL")
	if connStr == "" {
		log.Fatal("DATABASE_URL environment variable is required")
	}

	var err error
	DB, err = sql.Open("postgres", connStr)
	if err != nil {
		log.Fatal("Failed to open database connection:", err)
	}

	// Validar que la conexión real funciona
	if err = DB.Ping(); err != nil {
		log.Fatal("Failed to ping database:", err)
	}

	fmt.Println("✅ Successfully connected to the database!")
	ensureTables()
}

// ensureTables crea las tablas si no existen.
// Este schema está sincronizado 1:1 con los archivos .sql de /supabase/.
// En producción (Railway + Supabase), las tablas ya existen y este bloque no hace nada.
func ensureTables() {
	query := `
	-- Extensión para UUID (necesaria en Railway/PostgreSQL puro)
	CREATE EXTENSION IF NOT EXISTS "uuid-ossp";

	-- ============================================================
	-- TABLA: users
	-- ============================================================
	CREATE TABLE IF NOT EXISTS users (
		id          UUID        PRIMARY KEY DEFAULT uuid_generate_v4(),
		google_id   VARCHAR(255) UNIQUE NOT NULL,
		email       VARCHAR(255) UNIQUE NOT NULL,
		name        VARCHAR(255) NOT NULL,
		avatar_url  TEXT,
		crystals    INT         NOT NULL DEFAULT 0 CHECK (crystals >= 0),
		created_at  TIMESTAMP   NOT NULL DEFAULT CURRENT_TIMESTAMP
	);
	CREATE INDEX IF NOT EXISTS idx_users_google_id ON users(google_id);

	-- ============================================================
	-- TABLA: leaderboards
	-- 1 fila por usuario (su mejor score). UPSERT en SubmitScore.
	-- ============================================================
	CREATE TABLE IF NOT EXISTS leaderboards (
		id          SERIAL    PRIMARY KEY,
		user_id     UUID      NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		score       INT       NOT NULL CHECK (score >= 0),
		achieved_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
		CONSTRAINT leaderboards_user_id_unique UNIQUE (user_id)
	);
	CREATE INDEX IF NOT EXISTS idx_leaderboards_score ON leaderboards(score DESC);

	-- ============================================================
	-- TABLA: user_settings
	-- ============================================================
	CREATE TABLE IF NOT EXISTS user_settings (
		user_id    UUID      PRIMARY KEY REFERENCES users(id) ON DELETE CASCADE,
		volume_on  BOOLEAN   NOT NULL DEFAULT TRUE,
		effects_on BOOLEAN   NOT NULL DEFAULT TRUE,
		dark_mode  BOOLEAN   NOT NULL DEFAULT TRUE,
		updated_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);

	-- ============================================================
	-- TABLA: purchases
	-- purchase_token UNIQUE = protección anti-replay attacks.
	-- ============================================================
	CREATE TABLE IF NOT EXISTS purchases (
		id             UUID         PRIMARY KEY DEFAULT uuid_generate_v4(),
		user_id        UUID         NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		purchase_token VARCHAR(255) NOT NULL,
		package_id     VARCHAR(50)  NOT NULL,
		crystals_added INT          NOT NULL CHECK (crystals_added > 0),
		created_at     TIMESTAMP    NOT NULL DEFAULT CURRENT_TIMESTAMP,
		CONSTRAINT purchases_token_unique UNIQUE (purchase_token)
	);
	CREATE INDEX IF NOT EXISTS idx_purchases_user_id ON purchases(user_id);
	`

	if _, err := DB.Exec(query); err != nil {
		log.Fatal("Failed to ensure database tables:", err)
	}
	fmt.Println("✅ Database schema verified.")
}
