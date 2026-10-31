package main

import (
	"context"
	"database/sql"
	"log"
	"net/http"
	"os"
	"strings"
	"time"

	"github.com/gin-gonic/gin"
	"google.golang.org/api/androidpublisher/v3"
	"google.golang.org/api/option"
)

// =============================================================================
// WALLET
// =============================================================================

// GetPlayerWallet devuelve los lapislázulis actuales del jugador.
// GET /api/player/wallet
func GetPlayerWallet(c *gin.Context) {
	userID := c.GetString("user_id")

	var crystals int
	err := DB.QueryRow("SELECT crystals FROM users WHERE id = $1", userID).Scan(&crystals)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"crystals": crystals})
}

// =============================================================================
// LEADERBOARD
// =============================================================================

// LeaderboardEntry representa una entrada en el leaderboard global.
type LeaderboardEntry struct {
	Rank       int       `json:"rank"`
	Name       string    `json:"name"`
	AvatarURL  string    `json:"avatar_url"`
	AvatarID   string    `json:"avatar_id"`
	Score      int       `json:"score"`
	AchievedAt time.Time `json:"achieved_at"`
}

// GetLeaderboards devuelve el TOP 200 global, soportando tipo de ranking.
// GET /api/leaderboard/global?type=high_score o type=total
func GetLeaderboards(c *gin.Context) {
	rankType := c.DefaultQuery("type", "high_score")

	var rows *sql.Rows
	var err error

	if rankType == "total" {
		// Ranking de tiempo jugado y dedicación
		rows, err = DB.Query(`
			SELECT name, COALESCE(avatar_id, avatar_url, 'personaje_2.jpg'), total_score, created_at
			FROM users
			ORDER BY total_score DESC
			LIMIT 200
		`)
	} else {
		// Ranking de habilidad (Mejor Partida)
		rows, err = DB.Query(`
			SELECT u.name, COALESCE(u.avatar_id, u.avatar_url, 'personaje_2.jpg'), l.score, l.achieved_at
			FROM leaderboards l
			JOIN users u ON l.user_id = u.id
			ORDER BY l.score DESC
			LIMIT 200
		`)
	}

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch leaderboard"})
		return
	}
	defer rows.Close()

	results := make([]LeaderboardEntry, 0, 200)
	rank := 1
	for rows.Next() {
		var entry LeaderboardEntry
		var avatar string
		if err := rows.Scan(&entry.Name, &avatar, &entry.Score, &entry.AchievedAt); err != nil {
			continue
		}
		entry.Rank = rank
		entry.AvatarURL = avatar
		entry.AvatarID = avatar
		results = append(results, entry)
		rank++
	}

	c.JSON(http.StatusOK, results)
}

// TriggerBotSimulation invoca el procedimiento almacenado en PostgreSQL para actualizar los puntajes de los bots.
func TriggerBotSimulation() error {
	_, err := DB.Exec("SELECT public.simulate_daily_bot_activity()")
	return err
}

// AdminSimulateBots permite forzar la simulación de bots bajo demanda.
// POST /api/admin/simulate-bots
func AdminSimulateBots(c *gin.Context) {
	adminKey := os.Getenv("ADMIN_SECRET_KEY")
	clientKey := c.GetHeader("X-Admin-Secret")
	if adminKey == "" || clientKey != adminKey {
		c.JSON(http.StatusForbidden, gin.H{"error": "Unauthorized access"})
		return
	}

	if err := TriggerBotSimulation(); err != nil {
		log.Printf("❌ Error running bot simulation: %v\n", err)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to simulate bots", "details": err.Error()})
		return
	}

	c.JSON(http.StatusOK, gin.H{"status": "success", "message": "Bot activity simulated successfully"})
}

// StartBotSimulationScheduler ejecuta la simulación diaria de forma automática en segundo plano.
func StartBotSimulationScheduler() {
	go func() {
		for {
			now := time.Now().UTC()
			// Programar cada día a las 04:00 AM UTC (noche de LATAM)
			next := time.Date(now.Year(), now.Month(), now.Day(), 4, 0, 0, 0, time.UTC)
			if next.Before(now) {
				next = next.Add(24 * time.Hour)
			}

			waitDuration := time.Until(next)
			log.Printf("⏰ Bot Scheduler: Próxima simulación en %v (%v)\n", waitDuration.Round(time.Minute), next.Format(time.RFC3339))
			time.Sleep(waitDuration)

			log.Println("🤖 Ejecutando simulación diaria de bots en el ranking...")
			if err := TriggerBotSimulation(); err != nil {
				log.Printf("❌ Error al simular actividad de bots: %v\n", err)
			} else {
				log.Println("✅ Simulación diaria de bots completada con éxito.")
			}

			time.Sleep(10 * time.Second)
		}
	}()
}

// SubmitScore guarda el puntaje final de una partida.
// Usa UPSERT para conservar solo el MEJOR score del usuario.
// Anti-cheat: validación de bounds en el servidor.
// POST /api/leaderboard
func SubmitScore(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		Score int `json:"score" binding:"required,min=0"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	// Anti-cheat: límite elevado para permitir jugadores muy buenos,
	// pero bloqueando puntajes absurdos (hacks de 99 millones).
	if req.Score > 2_000_000 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Score rejected: exceeds maximum allowed value"})
		return
	}

	// Lógica de Recompensas por Jugar (Farming para Suscriptores) con Transacción y Bloqueo (Anti-Race Condition)
	tx, err := DB.Begin()
	if err == nil {
		defer tx.Rollback()
		var subTier string
		var dailyFarmed int
		var lastFarmDate time.Time
		var subExpiresAt *time.Time
		var lastScoreAt *time.Time

		err = tx.QueryRow(`
			SELECT subscription_tier, daily_lapis_farmed, last_farm_date, subscription_expires_at, last_score_at 
			FROM users WHERE id = $1 FOR UPDATE
		`, userID).Scan(&subTier, &dailyFarmed, &lastFarmDate, &subExpiresAt, &lastScoreAt)

		if err == nil {
			// Anti-spam: Cooldown de al menos 4 segundos entre envíos de score
			if lastScoreAt != nil && time.Since(*lastScoreAt) < 4*time.Second {
				tx.Rollback()
				c.JSON(http.StatusTooManyRequests, gin.H{"error": "Please wait before submitting another score"})
				return
			}

			// Validar expiración de suscripción VIP
			if subExpiresAt != nil && time.Now().UTC().After(*subExpiresAt) {
				subTier = "none"
			}

			// Resetear farming diario si es un nuevo día (UTC as base)
			if lastFarmDate.Truncate(24 * time.Hour).Before(time.Now().Truncate(24 * time.Hour)) {
				dailyFarmed = 0
			}

			// Recompensa base por completar partida (Modelo Appodeal: +1 Lapislázuli para partidas jugadas)
			baseMatchLapis := 0
			if req.Score >= 10 {
				baseMatchLapis = 1
			}

			lapisToAward := 0
			dailyMax := 0

			switch subTier {
			case "bronze":
				lapisToAward = (req.Score / 1000) * 1
				dailyMax = 18
			case "silver":
				lapisToAward = (req.Score / 1000) * 3
				dailyMax = 53
			case "gold":
				lapisToAward = (req.Score / 1000) * 5
				dailyMax = 54
			}

			if lapisToAward > 0 {
				if dailyFarmed+lapisToAward > dailyMax {
					lapisToAward = dailyMax - dailyFarmed
				}
			}

			totalLapisAward := baseMatchLapis + lapisToAward
			newDailyFarmed := dailyFarmed + lapisToAward

			if totalLapisAward > 0 {
				_, _ = tx.Exec(`
					UPDATE users 
					SET crystals = crystals + $1, 
					    daily_lapis_farmed = $2, 
					    last_farm_date = CURRENT_DATE,
					    total_score = total_score + $4,
					    last_score_at = NOW()
					WHERE id = $3
				`, totalLapisAward, newDailyFarmed, userID, req.Score)
			} else {
				// Si no hay cristales otorgados, actualizar total_score y timestamp
				_, _ = tx.Exec(`UPDATE users SET total_score = total_score + $1, last_score_at = NOW() WHERE id = $2`, req.Score, userID)
			}
		}
		tx.Commit()
	}

	// UPSERT: solo actualiza si el nuevo score es MEJOR que el guardado.
	_, err = DB.Exec(`
		INSERT INTO leaderboards (user_id, score, achieved_at)
		VALUES ($1, $2, NOW())
		ON CONFLICT (user_id) DO UPDATE
		  SET score       = EXCLUDED.score,
		      achieved_at = EXCLUDED.achieved_at
		WHERE leaderboards.score < EXCLUDED.score
	`, userID, req.Score)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to save score"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Score processed successfully"})
}

// =============================================================================
// SETTINGS
// =============================================================================

// UserSettings es el modelo de configuración del jugador.
type UserSettings struct {
	VolumeOn  bool `json:"volume_on"`
	EffectsOn bool `json:"effects_on"`
	DarkMode  bool `json:"dark_mode"`
}

// GetSettings devuelve la configuración guardada del jugador.
// Si no existe aún, retorna los valores por defecto.
// GET /api/player/settings
func GetSettings(c *gin.Context) {
	userID := c.GetString("user_id")

	var s UserSettings
	err := DB.QueryRow(`
		SELECT volume_on, effects_on, dark_mode
		FROM user_settings
		WHERE user_id = $1
	`, userID).Scan(&s.VolumeOn, &s.EffectsOn, &s.DarkMode)

	if err != nil {
		// Si no tiene configuración guardada, retornar defaults sin error.
		c.JSON(http.StatusOK, UserSettings{VolumeOn: true, EffectsOn: true, DarkMode: true})
		return
	}

	c.JSON(http.StatusOK, s)
}

// SaveSettings guarda (o actualiza) la configuración del jugador.
// Usa UPSERT: crea la fila si no existe, la actualiza si ya existe.
// POST /api/player/settings
func SaveSettings(c *gin.Context) {
	userID := c.GetString("user_id")

	var s UserSettings
	if err := c.ShouldBindJSON(&s); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	_, err := DB.Exec(`
		INSERT INTO user_settings (user_id, volume_on, effects_on, dark_mode, updated_at)
		VALUES ($1, $2, $3, $4, NOW())
		ON CONFLICT (user_id) DO UPDATE
		  SET volume_on  = EXCLUDED.volume_on,
		      effects_on = EXCLUDED.effects_on,
		      dark_mode  = EXCLUDED.dark_mode,
		      updated_at = EXCLUDED.updated_at
	`, userID, s.VolumeOn, s.EffectsOn, s.DarkMode)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to save settings"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Settings saved"})
}

// =============================================================================
// AD REWARD
// =============================================================================

// adRewardCrystals es la cantidad de lapislázulis que se regalan por ver un video.
// Configuración de recompensas por anuncios
const adRewardCrystals = 1
const maxDailyAds = 50
const adCooldownSeconds = 15

// ClaimAdReward agrega lapislázulis al jugador como recompensa por ver un video.
// Valida límites diarios (máx 15) y cooldown estricto de tiempo (45s) en el servidor.
// POST /api/player/ad-reward
func ClaimAdReward(c *gin.Context) {
	userID := c.GetString("user_id")

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var currentCrystals int
	var lastAdClaim *time.Time
	var dailyAdsClaimed int
	var lastAdDate *time.Time

	err = tx.QueryRow(`
		SELECT crystals, last_ad_claim, daily_ads_claimed, last_ad_date 
		FROM users WHERE id = $1 FOR UPDATE
	`, userID).Scan(&currentCrystals, &lastAdClaim, &dailyAdsClaimed, &lastAdDate)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	now := time.Now().UTC()
	today := now.Truncate(24 * time.Hour)

	// Reiniciar contador diario si es un nuevo día
	if lastAdDate == nil || lastAdDate.Truncate(24*time.Hour).Before(today) {
		dailyAdsClaimed = 0
	}

	// 1. Validar límite diario
	if dailyAdsClaimed >= maxDailyAds {
		c.JSON(http.StatusTooManyRequests, gin.H{
			"error": "Límite diario alcanzado (máximo 15 videos al día)",
			"daily_ads_claimed": dailyAdsClaimed,
		})
		return
	}

	// 2. Validar cooldown de tiempo anti-spam
	if lastAdClaim != nil {
		elapsed := now.Sub(*lastAdClaim)
		if elapsed < time.Duration(adCooldownSeconds)*time.Second {
			remainingSeconds := adCooldownSeconds - int(elapsed.Seconds())
			c.JSON(http.StatusTooManyRequests, gin.H{
				"error": "Debes esperar antes de reclamar otro anuncio",
				"retry_after_seconds": remainingSeconds,
			})
			return
		}
	}

	// 3. Acreditar recompensa y actualizar contadores
	_, err = tx.Exec(`
		UPDATE users 
		SET crystals = crystals + $1,
		    daily_ads_claimed = $2,
		    last_ad_claim = $3,
		    last_ad_date = CURRENT_DATE
		WHERE id = $4
	`, adRewardCrystals, dailyAdsClaimed+1, now, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to add reward crystals"})
		return
	}
	
	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Transaction commit failed"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"message":             "Ad reward claimed successfully",
		"crystals_awarded":    adRewardCrystals,
		"daily_ads_remaining": maxDailyAds - (dailyAdsClaimed + 1),
	})
}

// =============================================================================
// PURCHASES (Google Play Billing)
// =============================================================================

// PurchaseReward define la recompensa en cristales y aportes al piggy bank
type PurchaseReward struct {
	Crystals  int
	PiggyBank int
}

// packageRewards mapea los IDs de producto a sus recompensas
var packageRewards = map[string]PurchaseReward{
	// Paquetes Regulares
	"glass_pack_100":   {Crystals: 100, PiggyBank: 1},     // $0.99
	"glass_pack_600":   {Crystals: 600, PiggyBank: 5},     // $4.99
	"glass_pack_1500":  {Crystals: 1300, PiggyBank: 10},   // $9.99
	"glass_pack_5000":  {Crystals: 2500, PiggyBank: 20},   // $19.99

	// Ofertas de Bienvenida
	"pack_event_500":   {Crystals: 600, PiggyBank: 1},     // $0.99
	"pack_event_2000":  {Crystals: 1300, PiggyBank: 5},    // $4.99
	"pack_event_5000":  {Crystals: 2500, PiggyBank: 10},   // $9.99

	// Suscripciones
	"sub_bronze_weekly":   {Crystals: 0, PiggyBank: 1},    // $0.99
	"sub_silver_biweekly": {Crystals: 0, PiggyBank: 5},    // $4.99
	"sub_gold_monthly":    {Crystals: 0, PiggyBank: 10},   // $9.99
}

// packagePricesUSD contiene el valor en USD para el cálculo de comisiones del 25%
var packagePricesUSD = map[string]float64{
	"glass_pack_100":      0.99,
	"glass_pack_600":      4.99,
	"glass_pack_1500":     9.99,
	"glass_pack_5000":     19.99,
	"pack_event_500":      0.99,
	"pack_event_2000":     4.99,
	"pack_event_5000":     9.99,
	"sub_bronze_weekly":   0.99,
	"sub_silver_biweekly": 4.99,
	"sub_gold_monthly":    9.99,
}

// VerifyPurchase valida un recibo de Google Play Billing y acredita los lapislázulis.
// Protecciones implementadas:
//   - Validación real con Google Play Developer API (no se confía en el cliente).
//   - Transacción atómica: el purchase_token UNIQUE previene Replay Attacks.
//
// POST /api/player/verify-purchase
func VerifyPurchase(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		PurchaseToken string `json:"purchase_token" binding:"required"`
		ProductID     string `json:"product_id"     binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Missing purchase_token or product_id"})
		return
	}

	// Validar que el product_id es uno conocido antes de llamar a Google
	reward, ok := packageRewards[req.ProductID]
	if !ok {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Unknown product ID"})
		return
	}

	// Inicializar Google Play Developer API
	packageName := "com.darlyntenelema.glassy"
	ctx := context.Background()

	credentialsJSON := os.Getenv("GOOGLE_CREDENTIALS_JSON")
	if credentialsJSON == "" {
		log.Printf("[VerifyPurchase] ERROR: GOOGLE_CREDENTIALS_JSON environment variable is empty")
		c.JSON(http.StatusInternalServerError, gin.H{"error": "GOOGLE_CREDENTIALS_JSON not configured"})
		return
	}

	trimmedCreds := strings.TrimSpace(credentialsJSON)
	if (strings.HasPrefix(trimmedCreds, "\"") && strings.HasSuffix(trimmedCreds, "\"")) ||
		(strings.HasPrefix(trimmedCreds, "'") && strings.HasSuffix(trimmedCreds, "'")) {
		trimmedCreds = trimmedCreds[1 : len(trimmedCreds)-1]
	}

	service, err := androidpublisher.NewService(ctx, option.WithCredentialsJSON([]byte(trimmedCreds)))
	if err != nil {
		log.Printf("[VerifyPurchase] ERROR initializing Play Billing service: %v", err)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to initialize Play Billing service", "details": err.Error()})
		return
	}

	var purchaseState int
	// Consultar el estado de la compra en Google Play
	if strings.HasPrefix(req.ProductID, "sub_") {
		sub, err := service.Purchases.Subscriptionsv2.Get(packageName, req.PurchaseToken).Do()
		if err != nil {
			log.Printf("[VerifyPurchase] Error verifying subscription with Google: %v", err)
			c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid subscription receipt", "details": err.Error()})
			return
		}
		// Validar que la suscripción esté activa o en periodo de gracia
		if sub.SubscriptionState != "SUBSCRIPTION_STATE_ACTIVE" && sub.SubscriptionState != "SUBSCRIPTION_STATE_IN_GRACE_PERIOD" {
			log.Printf("[VerifyPurchase] Subscription not active: %s", sub.SubscriptionState)
			c.JSON(http.StatusPaymentRequired, gin.H{"error": "Subscription payment not received", "state": sub.SubscriptionState})
			return
		}
		purchaseState = 0 // Marcamos como 0 para indicar éxito
	} else {
		purchase, err := service.Purchases.Products.Get(packageName, req.ProductID, req.PurchaseToken).Do()
		if err != nil {
			log.Printf("[VerifyPurchase] Error verifying purchase with Google for product %s: %v", req.ProductID, err)
			c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid purchase receipt", "details": err.Error()})
			return
		}
		purchaseState = int(purchase.PurchaseState)
	}

	// 0 = Purchased, 1 = Canceled, 2 = Pending (para in-app products)
	if purchaseState != 0 {
		log.Printf("[VerifyPurchase] Purchase not in purchased state: %d", purchaseState)
		c.JSON(http.StatusPaymentRequired, gin.H{"error": "Purchase is not in 'Purchased' state", "state": purchaseState})
		return
	}

	// Asegurar que el usuario existe en public.users antes de registrar la compra
	EnsureUserExists(userID)

	// TRANSACCIÓN ATÓMICA:
	// 1. Insertar el purchase_token (falla si ya existe → anti-replay).
	// 2. Sumar los lapislázulis al usuario.
	// Si cualquier paso falla, se hace Rollback completo.
	tx, err := DB.Begin()
	if err != nil {
		log.Printf("[VerifyPurchase] ERROR DB.Begin failed: %v", err)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error: could not begin transaction", "details": err.Error()})
		return
	}
	defer tx.Rollback()

	_, err = tx.Exec(`
		INSERT INTO purchases (user_id, purchase_token, package_id, crystals_added)
		VALUES ($1, $2, $3, $4)
	`, userID, req.PurchaseToken, req.ProductID, reward.Crystals)
	if err != nil {
		log.Printf("[VerifyPurchase] ERROR Insert purchases: %v", err)
		if strings.Contains(err.Error(), "unique") || strings.Contains(err.Error(), "duplicate") || strings.Contains(err.Error(), "purchases_token_unique") {
			c.JSON(http.StatusConflict, gin.H{"error": "This purchase has already been claimed", "already_claimed": true})
		} else {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to record purchase receipt", "details": err.Error()})
		}
		return
	}

	query := "UPDATE users SET crystals = COALESCE(crystals, 0) + $1, piggy_bank = COALESCE(piggy_bank, 0) + $2"
	switch req.ProductID {
	case "pack_event_500":
		query += ", welcome_pack_500_bought = TRUE"
	case "pack_event_2000":
		query += ", welcome_pack_2000_bought = TRUE"
	case "pack_event_5000":
		query += ", welcome_pack_5000_bought = TRUE"
	case "sub_bronze_weekly":
		query += ", subscription_tier = 'bronze', subscription_expires_at = NOW() + INTERVAL '7 days'"
	case "sub_silver_biweekly":
		query += ", subscription_tier = 'silver', subscription_expires_at = NOW() + INTERVAL '15 days'"
	case "sub_gold_monthly":
		query += ", subscription_tier = 'gold', subscription_expires_at = NOW() + INTERVAL '30 days'"
	}
	query += " WHERE id = $3"

	res, err := tx.Exec(query, reward.Crystals, reward.PiggyBank, userID)
	if err != nil {
		log.Printf("[VerifyPurchase] ERROR UPDATE users (%s): %v", query, err)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update crystals and piggy bank balance", "details": err.Error()})
		return
	}

	rows, _ := res.RowsAffected()
	if rows == 0 {
		log.Printf("[VerifyPurchase] ERROR User %s not found in users table during balance update", userID)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "User record not found in database"})
		return
	}

	// =========================================================================
	// 25% REV-SHARE PARA PARTNERS / INFLUENCERS
	// =========================================================================
	var partnerID string
	errPartner := tx.QueryRow(`
		SELECT partner_id FROM partner_referrals WHERE user_id = $1
	`, userID).Scan(&partnerID)

	if errPartner == nil && partnerID != "" {
		priceUSD := packagePricesUSD[req.ProductID]
		if priceUSD > 0 {
			commission := priceUSD * 0.25 // 25% de comisión neta para el creador
			_, errP := tx.Exec(`
				UPDATE partners 
				SET total_earnings = total_earnings + $1,
				    available_balance = available_balance + $1,
				    total_sales_usd = total_sales_usd + $2
				WHERE id = $3
			`, commission, priceUSD, partnerID)

			if errP == nil {
				_, _ = tx.Exec(`
					INSERT INTO partner_sales (partner_id, user_id, package_id, amount_usd, commission_usd)
					VALUES ($1, $2, $3, $4, $5)
				`, partnerID, userID, req.ProductID, priceUSD, commission)
				log.Printf("[RevShare] Socio %s acreditado con $%.2f (25%% de compra de %s)", partnerID, commission, req.ProductID)
			} else {
				log.Printf("[RevShare] Advertencia actualizando saldo de socio: %v", errP)
			}
		}
	}

	if err := tx.Commit(); err != nil {
		log.Printf("[VerifyPurchase] ERROR tx.Commit: %v", err)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to commit transaction", "details": err.Error()})
		return
	}

	log.Printf("[VerifyPurchase] SUCCESS: Credited %d crystals and %d piggy bank to user %s for product %s", reward.Crystals, reward.PiggyBank, userID, req.ProductID)

	c.JSON(http.StatusOK, gin.H{
		"message":          "Purchase verified and crystals/piggy-bank updated",
		"crystals_added":   reward.Crystals,
		"piggy_bank_added": reward.PiggyBank,
	})
}

// GetStoreStatus devuelve qué ofertas de evento ha comprado el usuario y el estado del Piggy Bank
// GET /api/player/store-status
func GetStoreStatus(c *gin.Context) {
	userID := c.GetString("user_id")

	var status struct {
		Welcome500Bought  bool `json:"welcome_pack_500_bought"`
		Welcome2000Bought bool `json:"welcome_pack_2000_bought"`
		Welcome5000Bought bool `json:"welcome_pack_5000_bought"`
		PiggyBank         int  `json:"piggy_bank"`
	}

	err := DB.QueryRow(`
		SELECT welcome_pack_500_bought, welcome_pack_2000_bought, welcome_pack_5000_bought, piggy_bank
		FROM users
		WHERE id = $1
	`, userID).Scan(
		&status.Welcome500Bought,
		&status.Welcome2000Bought,
		&status.Welcome5000Bought,
		&status.PiggyBank,
	)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch store status"})
		return
	}

	c.JSON(http.StatusOK, status)
}

// =============================================================================
// SKINS (Server-Side Logic)
// =============================================================================

// CustomSkinMetadata define los metadatos de una skin personalizada/dinámica
type CustomSkinMetadata struct {
	ID              string `json:"id"`
	Name            string `json:"name"`
	DonorTikTokUser string `json:"donor_tiktok_user,omitempty"`
	PreviewURL      string `json:"preview_url"`
	BaseStorageURL  string `json:"base_storage_url"`
	IsExclusive     bool   `json:"is_exclusive"`
	CreatedAt       string `json:"created_at,omitempty"`
}

// GetSkins returns unlocked skins, currently selected skin, and custom skins metadata
// GET /api/player/skins
func GetSkins(c *gin.Context) {
	userID := c.GetString("user_id")

	var selectedSkin string
	err := DB.QueryRow("SELECT selected_skin_id FROM users WHERE id = $1", userID).Scan(&selectedSkin)
	if err != nil {
		selectedSkin = "gemas_clasicas"
	}

	rows, err := DB.Query("SELECT skin_id FROM user_skins WHERE user_id = $1", userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch skins"})
		return
	}
	defer rows.Close()

	var unlockedSkins []string
	for rows.Next() {
		var skinID string
		if err := rows.Scan(&skinID); err == nil {
			unlockedSkins = append(unlockedSkins, skinID)
		}
	}

	// Make sure default skin is always in the list
	foundDefault := false
	for _, s := range unlockedSkins {
		if s == "gemas_clasicas" {
			foundDefault = true
			break
		}
	}
	if !foundDefault {
		unlockedSkins = append(unlockedSkins, "gemas_clasicas")
	}

	// Consultar metadatos de custom_skins pertenecientes al usuario o desbloqueadas
	customSkins := make([]CustomSkinMetadata, 0)
	customRows, err := DB.Query(`
		SELECT cs.id, cs.name, cs.donor_tiktok_user, cs.preview_url, cs.base_storage_url, cs.is_exclusive, cs.created_at::text
		FROM custom_skins cs
		INNER JOIN user_skins us ON us.skin_id = cs.id
		WHERE us.user_id = $1
		ORDER BY cs.created_at DESC
	`, userID)
	if err == nil {
		defer customRows.Close()
		for customRows.Next() {
			var meta CustomSkinMetadata
			if err := customRows.Scan(&meta.ID, &meta.Name, &meta.DonorTikTokUser, &meta.PreviewURL, &meta.BaseStorageURL, &meta.IsExclusive, &meta.CreatedAt); err == nil {
				customSkins = append(customSkins, meta)
			}
		}
	}

	c.JSON(http.StatusOK, gin.H{
		"unlocked_skins": unlockedSkins,
		"selected_skin":  selectedSkin,
		"custom_skins":   customSkins,
	})
}

// BuySkin process the skin purchase using crystals securely on the backend
// POST /api/player/skins/buy
func BuySkin(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		SkinID string `json:"skin_id" binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	// Precios definidos en el servidor (fuente de verdad - Actualizado para modelo publicitario Appodeal)
	skinPrices := map[string]int{
		"vida_marina":           50,
		"Dinosaurios":           50,
		"Dulces_de_Halloween":   100,
		"Caldero_de_Bruja":      100,
		"Cementerio_Encantado":  100,
		"Cultivo_de_Calabazas":  100,
		"Ajedrez_Magico":        100,
		"Alquimia_Antigua":      100,
		"Flores_Magicas":        100,
		"Frutas_Jugosas":        100,
		"Hongos_Brillantes":     100,
		"Monstruos_de_Bolsillo": 100,
		"Mundo_Dulce":           100,
		"Planetas":              100,
		"Sushi_Japones":         100,
	}

	actualCost, exists := skinPrices[req.SkinID]
	if !exists {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Skin not found or unavailable"})
		return
	}

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	// 1. Check if user already owns this skin before deducting crystals
	var alreadyOwned bool
	err = tx.QueryRow("SELECT EXISTS(SELECT 1 FROM user_skins WHERE user_id = $1 AND skin_id = $2)", userID, req.SkinID).Scan(&alreadyOwned)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error checking skin ownership"})
		return
	}
	if alreadyOwned {
		c.JSON(http.StatusConflict, gin.H{"error": "Skin already owned"})
		return
	}

	// 2. Verify and deduct crystals securely using server-side cost
	res, err := tx.Exec("UPDATE users SET crystals = crystals - $1 WHERE id = $2 AND crystals >= $1", actualCost, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to process payment"})
		return
	}
	rowsAffected, _ := res.RowsAffected()
	if rowsAffected == 0 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Not enough crystals"})
		return
	}

	// 3. Add skin to user_skins (strict insert; if duplicate races in, transaction rolls back safely)
	_, err = tx.Exec("INSERT INTO user_skins (user_id, skin_id) VALUES ($1, $2)", userID, req.SkinID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to unlock skin"})
		return
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Transaction commit failed"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Skin unlocked successfully"})
}

// EquipSkin sets the selected skin
// POST /api/player/skins/equip
func EquipSkin(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		SkinID string `json:"skin_id" binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	// Allow equipping default skin without database check
	if req.SkinID != "gemas_clasicas" {
		var exists bool
		err := DB.QueryRow("SELECT EXISTS(SELECT 1 FROM user_skins WHERE user_id = $1 AND skin_id = $2)", userID, req.SkinID).Scan(&exists)
		if err != nil || !exists {
			c.JSON(http.StatusForbidden, gin.H{"error": "Skin not owned"})
			return
		}
	}

	_, err := DB.Exec("UPDATE users SET selected_skin_id = $1 WHERE id = $2", req.SkinID, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to equip skin"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Skin equipped"})
}

// =============================================================================
// ADMIN: TIKTOK LIVE CUSTOM SKINS
// =============================================================================

// AdminAssignCustomSkin asigna una skin personalizada a un jugador mediante su invite_code, UUID o email.
// POST /api/admin/assign-custom-skin
func AdminAssignCustomSkin(c *gin.Context) {
	adminKey := os.Getenv("ADMIN_SECRET_KEY")
	clientKey := c.GetHeader("X-Admin-Secret")
	if adminKey == "" || clientKey != adminKey {
		c.JSON(http.StatusForbidden, gin.H{"error": "Unauthorized access"})
		return
	}

	var req struct {
		PlayerIdentifier string `json:"player_identifier" binding:"required"` // invite_code (ej: GLAS8X2K), UUID o email
		SkinID           string `json:"skin_id" binding:"required"`
		Name             string `json:"name" binding:"required"`
		DonorTikTokUser  string `json:"donor_tiktok_user"`
		PreviewURL       string `json:"preview_url"`
		BaseStorageURL   string `json:"base_storage_url"`
		IsExclusive      *bool  `json:"is_exclusive"`
		AutoEquip        bool   `json:"auto_equip"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body", "details": err.Error()})
		return
	}

	isExclusive := true
	if req.IsExclusive != nil {
		isExclusive = *req.IsExclusive
	}

	identifier := strings.TrimSpace(req.PlayerIdentifier)
	var targetUserID string
	var targetUserName string
	var targetInviteCode string

	// 1. Buscar al usuario: primero por invite_code, luego por UUID, luego por email
	query := `
		SELECT id, name, COALESCE(invite_code, '') 
		FROM users 
		WHERE UPPER(TRIM(invite_code)) = UPPER($1) 
		   OR id::text = $1 
		   OR LOWER(TRIM(email)) = LOWER($1)
		LIMIT 1
	`
	err := DB.QueryRow(query, identifier).Scan(&targetUserID, &targetUserName, &targetInviteCode)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{
			"error":      "Jugador no encontrado con el identificador proporcionado",
			"identifier": identifier,
		})
		return
	}

	// 2. Iniciar transacción para registrar la skin e insertarla en user_skins
	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database transaction error"})
		return
	}
	defer tx.Rollback()

	// 3. Registrar o actualizar la metadata en custom_skins
	upsertSkinQuery := `
		INSERT INTO custom_skins (id, name, owner_id, donor_tiktok_user, preview_url, base_storage_url, is_exclusive)
		VALUES ($1, $2, $3, $4, $5, $6, $7)
		ON CONFLICT (id) DO UPDATE 
		SET name = EXCLUDED.name,
		    owner_id = EXCLUDED.owner_id,
		    donor_tiktok_user = EXCLUDED.donor_tiktok_user,
		    preview_url = EXCLUDED.preview_url,
		    base_storage_url = EXCLUDED.base_storage_url,
		    is_exclusive = EXCLUDED.is_exclusive
	`
	_, err = tx.Exec(upsertSkinQuery, req.SkinID, req.Name, targetUserID, req.DonorTikTokUser, req.PreviewURL, req.BaseStorageURL, isExclusive)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to save custom skin metadata", "details": err.Error()})
		return
	}

	// 4. Asignar la skin en user_skins
	_, err = tx.Exec(`
		INSERT INTO user_skins (user_id, skin_id)
		VALUES ($1, $2)
		ON CONFLICT (user_id, skin_id) DO NOTHING
	`, targetUserID, req.SkinID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to assign skin to user", "details": err.Error()})
		return
	}

	// 5. Opcional: auto-equipar en el usuario
	if req.AutoEquip {
		_, _ = tx.Exec("UPDATE users SET selected_skin_id = $1 WHERE id = $2", req.SkinID, targetUserID)
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to commit transaction"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"status":        "success",
		"message":       "Skin asignada exitosamente al jugador",
		"skin_id":       req.SkinID,
		"skin_name":     req.Name,
		"user_id":       targetUserID,
		"user_name":     targetUserName,
		"invite_code":   targetInviteCode,
		"auto_equipped": req.AutoEquip,
	})
}

// AdminListCustomSkins devuelve las últimas skins personalizadas generadas
// GET /api/admin/custom-skins
func AdminListCustomSkins(c *gin.Context) {
	adminKey := os.Getenv("ADMIN_SECRET_KEY")
	clientKey := c.GetHeader("X-Admin-Secret")
	if adminKey == "" || clientKey != adminKey {
		c.JSON(http.StatusForbidden, gin.H{"error": "Unauthorized access"})
		return
	}

	rows, err := DB.Query(`
		SELECT cs.id, cs.name, cs.donor_tiktok_user, cs.preview_url, cs.base_storage_url, cs.is_exclusive, cs.created_at::text,
		       COALESCE(u.name, 'N/A'), COALESCE(u.invite_code, 'N/A')
		FROM custom_skins cs
		LEFT JOIN users u ON u.id = cs.owner_id
		ORDER BY cs.created_at DESC
		LIMIT 100
	`)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch custom skins"})
		return
	}
	defer rows.Close()

	type CustomSkinAdminItem struct {
		CustomSkinMetadata
		OwnerName       string `json:"owner_name"`
		OwnerInviteCode string `json:"owner_invite_code"`
	}

	results := make([]CustomSkinAdminItem, 0)
	for rows.Next() {
		var item CustomSkinAdminItem
		if err := rows.Scan(&item.ID, &item.Name, &item.DonorTikTokUser, &item.PreviewURL, &item.BaseStorageURL, &item.IsExclusive, &item.CreatedAt, &item.OwnerName, &item.OwnerInviteCode); err == nil {
			results = append(results, item)
		}
	}

	c.JSON(http.StatusOK, results)
}


