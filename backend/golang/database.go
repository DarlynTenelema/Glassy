package main

import (
	"database/sql"
	"fmt"
	"log"
	"os"
	"time"

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

	// Configuración de Connection Pool para producción (Supabase / Railway)
	// Evita que múltiples peticiones saturen las conexiones permitidas de PostgreSQL
	DB.SetMaxOpenConns(25)
	DB.SetMaxIdleConns(5)
	DB.SetConnMaxLifetime(5 * time.Minute)

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
		id                  UUID        PRIMARY KEY REFERENCES auth.users(id) ON DELETE CASCADE,
		email               VARCHAR(255) UNIQUE NOT NULL,
		name                VARCHAR(255) NOT NULL,
		avatar_url          TEXT,
		crystals            INT         NOT NULL DEFAULT 100 CHECK (crystals >= 0),
		piggy_bank          INT         NOT NULL DEFAULT 0 CHECK (piggy_bank >= 0),
		daily_reward_streak INT         NOT NULL DEFAULT 1,
		last_daily_claim    TIMESTAMP   DEFAULT NULL,
		current_mission_day INT         NOT NULL DEFAULT 1,
		mission_progress    INT         NOT NULL DEFAULT 0,
		mission_completed   BOOLEAN     NOT NULL DEFAULT FALSE,
		referral_code_used  VARCHAR(50) DEFAULT NULL,
		lapis_fragments     INT         NOT NULL DEFAULT 0,
		last_chest_6h       TIMESTAMP   DEFAULT NULL,
		last_chest_12h      TIMESTAMP   DEFAULT NULL,
		last_chest_24h      TIMESTAMP   DEFAULT NULL,
		invite_code         VARCHAR(8)  UNIQUE,
		total_score         BIGINT      NOT NULL DEFAULT 0,
		created_at          TIMESTAMP   NOT NULL DEFAULT CURRENT_TIMESTAMP
	);

	-- ALTER TABLES para actualizaciones de esquema progresivas si la tabla ya existía
	ALTER TABLE users ADD COLUMN IF NOT EXISTS piggy_bank INT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS daily_reward_streak INT NOT NULL DEFAULT 1;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_daily_claim TIMESTAMP DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS current_mission_day INT NOT NULL DEFAULT 1;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS mission_progress INT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS mission_completed BOOLEAN NOT NULL DEFAULT FALSE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS referral_code_used VARCHAR(50) DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS lapis_fragments INT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_chest_6h TIMESTAMP DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_chest_12h TIMESTAMP DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_chest_24h TIMESTAMP DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS welcome_pack_500_bought BOOLEAN NOT NULL DEFAULT FALSE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS welcome_pack_2000_bought BOOLEAN NOT NULL DEFAULT FALSE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS welcome_pack_5000_bought BOOLEAN NOT NULL DEFAULT FALSE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS invite_code VARCHAR(8) UNIQUE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS total_score BIGINT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_ad_claim TIMESTAMP DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS daily_ads_claimed INT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_ad_date DATE DEFAULT CURRENT_DATE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS subscription_tier VARCHAR(50) NOT NULL DEFAULT 'none';
	ALTER TABLE users ADD COLUMN IF NOT EXISTS subscription_expires_at TIMESTAMP WITH TIME ZONE DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS daily_lapis_farmed INT NOT NULL DEFAULT 0;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_farm_date DATE DEFAULT CURRENT_DATE;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_score_at TIMESTAMP WITH TIME ZONE DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS avatar_id VARCHAR(100) DEFAULT 'personaje_2.jpg';
	ALTER TABLE users ADD COLUMN IF NOT EXISTS bot_archetype VARCHAR(20) DEFAULT NULL;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS selected_skin_id VARCHAR(50) NOT NULL DEFAULT 'gemas_clasicas';
	ALTER TABLE users ADD COLUMN IF NOT EXISTS total_active_days INT NOT NULL DEFAULT 1;
	ALTER TABLE users ADD COLUMN IF NOT EXISTS last_login_at TIMESTAMP DEFAULT NULL;

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
		id             UUID         PRIMARY KEY DEFAULT gen_random_uuid(),
		user_id        UUID         NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		purchase_token TEXT         NOT NULL,
		package_id     VARCHAR(50)  NOT NULL,
		crystals_added INT          NOT NULL CHECK (crystals_added >= 0),
		created_at     TIMESTAMP    NOT NULL DEFAULT CURRENT_TIMESTAMP,
		CONSTRAINT purchases_token_unique UNIQUE (purchase_token)
	);
	ALTER TABLE purchases ALTER COLUMN purchase_token TYPE TEXT;
	-- ============================================================
	-- TABLA: user_achievements
	-- Registra el progreso de los distintos logros por grupo (1 a 10) y niveles.
	-- ============================================================
	CREATE TABLE IF NOT EXISTS user_achievements (
		user_id       UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
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
		user_id       UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		video_url     TEXT NOT NULL,
		status        VARCHAR(20) NOT NULL DEFAULT 'PENDING', -- PENDING, APPROVED, REJECTED
		created_at    TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);

	-- ============================================================
	-- TABLA: user_skins
	-- Registra las skins desbloqueadas por el usuario
	-- ============================================================
	CREATE TABLE IF NOT EXISTS user_skins (
		id          UUID PRIMARY KEY DEFAULT gen_random_uuid(),
		user_id     UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		skin_id     VARCHAR(100) NOT NULL,
		created_at  TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
		CONSTRAINT user_skins_unique UNIQUE (user_id, skin_id)
	);
	ALTER TABLE user_skins ALTER COLUMN skin_id TYPE VARCHAR(100);

	-- ============================================================
	-- TABLA: custom_skins
	-- Metadatos de skins exclusivas / dinámicas creadas en vivo
	-- ============================================================
	CREATE TABLE IF NOT EXISTS custom_skins (
		id                VARCHAR(100) PRIMARY KEY,
		name              VARCHAR(100) NOT NULL,
		owner_id          UUID REFERENCES users(id) ON DELETE SET NULL,
		donor_tiktok_user VARCHAR(100) DEFAULT '',
		preview_url       TEXT NOT NULL DEFAULT '',
		base_storage_url  TEXT NOT NULL DEFAULT '',
		is_exclusive      BOOLEAN NOT NULL DEFAULT TRUE,
		created_at        TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);
	CREATE INDEX IF NOT EXISTS idx_custom_skins_owner ON custom_skins(owner_id);
	CREATE INDEX IF NOT EXISTS idx_custom_skins_created_at ON custom_skins(created_at DESC);


	-- ============================================================
	-- TABLAS: Glassy Partners (Afiliados y Referidos)
	-- ============================================================
	CREATE TABLE IF NOT EXISTS partners (
		id                UUID PRIMARY KEY REFERENCES users(id) ON DELETE CASCADE,
		partner_code      VARCHAR(50) UNIQUE NOT NULL,
		paypal_email      VARCHAR(255) DEFAULT '',
		total_earnings    NUMERIC(10,2) NOT NULL DEFAULT 0.00,
		available_balance NUMERIC(10,2) NOT NULL DEFAULT 0.00,
		created_at        TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);

	CREATE TABLE IF NOT EXISTS partner_referrals (
		id           SERIAL PRIMARY KEY,
		partner_id   UUID NOT NULL REFERENCES partners(id) ON DELETE CASCADE,
		user_id      UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		status       VARCHAR(20) NOT NULL DEFAULT 'in_progress',
		created_at   TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
		confirmed_at TIMESTAMP DEFAULT NULL,
		CONSTRAINT partner_referrals_user_unique UNIQUE (user_id)
	);

	CREATE TABLE IF NOT EXISTS partner_withdrawals (
		id           SERIAL PRIMARY KEY,
		partner_id   UUID NOT NULL REFERENCES partners(id) ON DELETE CASCADE,
		amount       NUMERIC(10,2) NOT NULL,
		paypal_email VARCHAR(255) NOT NULL,
		status       VARCHAR(20) NOT NULL DEFAULT 'PENDING',
		created_at   TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);

	ALTER TABLE partners ADD COLUMN IF NOT EXISTS total_sales_usd NUMERIC(10,2) NOT NULL DEFAULT 0.00;

	-- ============================================================
	-- TABLA: partner_sales (Comisiones 25% por compras IAP)
	-- ============================================================
	CREATE TABLE IF NOT EXISTS partner_sales (
		id             SERIAL PRIMARY KEY,
		partner_id     UUID NOT NULL REFERENCES partners(id) ON DELETE CASCADE,
		user_id        UUID NOT NULL REFERENCES users(id) ON DELETE CASCADE,
		package_id     VARCHAR(50) NOT NULL,
		amount_usd     NUMERIC(10,2) NOT NULL,
		commission_usd NUMERIC(10,2) NOT NULL,
		created_at     TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
	);
	CREATE INDEX IF NOT EXISTS idx_partner_sales_partner ON partner_sales(partner_id, created_at DESC);

	-- ============================================================
	-- TABLA: partner_skills (Suscripciones a Skills para TikTok Live)
	-- ============================================================
	CREATE TABLE IF NOT EXISTS partner_skills (
		id           SERIAL PRIMARY KEY,
		partner_id   UUID NOT NULL REFERENCES partners(id) ON DELETE CASCADE,
		skill_id     VARCHAR(50) NOT NULL,
		is_unlocked  BOOLEAN NOT NULL DEFAULT FALSE,
		is_enabled   BOOLEAN NOT NULL DEFAULT FALSE,
		expires_at   TIMESTAMP DEFAULT NULL,
		updated_at   TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
		CONSTRAINT partner_skills_unique UNIQUE (partner_id, skill_id)
	);

	-- ============================================================
	-- TRIGGER: auto-crear usuario en public.users al registrarse con OAuth
	-- ============================================================
	CREATE OR REPLACE FUNCTION public.handle_new_user() 
	RETURNS trigger AS $$
	BEGIN
	  INSERT INTO public.users (id, email, name, avatar_url, crystals, invite_code)
	  VALUES (
	    new.id,
	    COALESCE(new.email, ''),
	    COALESCE(NULLIF(new.raw_user_meta_data->>'full_name', ''), NULLIF(new.raw_user_meta_data->>'name', ''), 'Jugador'),
	    COALESCE(NULLIF(new.raw_user_meta_data->>'avatar_url', ''), NULLIF(new.raw_user_meta_data->>'picture', ''), ''),
	    100,
	    SUBSTRING(REPLACE(gen_random_uuid()::text, '-', '') FROM 1 FOR 8)
	  )
	  ON CONFLICT (id) DO NOTHING;

	  -- Asignar skin por defecto de inmediato
	  INSERT INTO public.user_skins (user_id, skin_id)
	  VALUES (new.id, 'gemas_clasicas')
	  ON CONFLICT (user_id, skin_id) DO NOTHING;

	  RETURN new;
	END;
	$$ LANGUAGE plpgsql SECURITY DEFINER;

	DO $$
	BEGIN
		IF NOT EXISTS (
			SELECT 1 FROM pg_trigger WHERE tgname = 'on_auth_user_created'
		) THEN
			CREATE TRIGGER on_auth_user_created
			  AFTER INSERT ON auth.users
			  FOR EACH ROW EXECUTE PROCEDURE public.handle_new_user();
		END IF;
	EXCEPTION WHEN OTHERS THEN
		NULL;
	END $$;
	`

	if _, err := DB.Exec(query); err != nil {
		log.Fatal("Failed to ensure database tables:", err)
	}
	fmt.Println("✅ Database schema verified.")
}
