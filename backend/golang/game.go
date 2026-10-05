package main

import (
	"context"
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
	Score      int       `json:"score"`
	AchievedAt time.Time `json:"achieved_at"`
}

// GetLeaderboards devuelve el TOP 200 global.
// Solo hay 1 fila por usuario (su mejor score), así que la consulta es simple y rápida.
// GET /api/leaderboard/global  (pública, no requiere auth)
func GetLeaderboards(c *gin.Context) {
	rows, err := DB.Query(`
		SELECT u.name, u.avatar_url, l.score, l.achieved_at
		FROM leaderboards l
		JOIN users u ON l.user_id = u.id
		ORDER BY l.score DESC
		LIMIT 200
	`)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch leaderboard"})
		return
	}
	defer rows.Close()

	results := make([]LeaderboardEntry, 0, 200)
	rank := 1
	for rows.Next() {
		var entry LeaderboardEntry
		if err := rows.Scan(&entry.Name, &entry.AvatarURL, &entry.Score, &entry.AchievedAt); err != nil {
			continue
		}
		entry.Rank = rank
		results = append(results, entry)
		rank++
	}

	c.JSON(http.StatusOK, results)
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
		var subTier string
		var dailyFarmed int
		var lastFarmDate time.Time

		err = tx.QueryRow(`
			SELECT subscription_tier, daily_lapis_farmed, last_farm_date 
			FROM users WHERE id = $1 FOR UPDATE
		`, userID).Scan(&subTier, &dailyFarmed, &lastFarmDate)

		if err == nil {
			// Resetear farming diario si es un nuevo día (UTC as base)
			if lastFarmDate.Truncate(24 * time.Hour).Before(time.Now().Truncate(24 * time.Hour)) {
				dailyFarmed = 0
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
				if lapisToAward > 0 {
					_, _ = tx.Exec(`
						UPDATE users 
						SET crystals = crystals + $1, 
						    daily_lapis_farmed = $2, 
						    last_farm_date = CURRENT_DATE
						WHERE id = $3
					`, lapisToAward, dailyFarmed+lapisToAward, userID)
				}
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
const adRewardCrystals = 5

// ClaimAdReward agrega lapislázulis al jugador como recompensa por ver un video de Ad Mob.
// El cliente debe llamar este endpoint SOLO cuando el SDK de AdMob confirme que el
// video fue visto completo. Para el MVP, confiamos en el cliente.
// POST /api/player/ad-reward
func ClaimAdReward(c *gin.Context) {
	userID := c.GetString("user_id")

	// Prevenir farming abusivo (Race conditions y spam): Solo 1 recompensa y actualización atómica
	// Nota: Si quieres un cooldown de tiempo, necesitarás una columna last_ad_reward en la DB.
	// Por ahora evitamos race conditions con un lock.
	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var currentCrystals int
	err = tx.QueryRow("SELECT crystals FROM users WHERE id = $1 FOR UPDATE", userID).Scan(&currentCrystals)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	_, err = tx.Exec(
		"UPDATE users SET crystals = crystals + $1 WHERE id = $2",
		adRewardCrystals, userID,
	)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to add reward crystals"})
		return
	}
	
	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message":          "Ad reward claimed",
		"crystals_awarded": adRewardCrystals,
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
	var service *androidpublisher.Service
	var err error
	if credentialsJSON != "" {
		service, err = androidpublisher.NewService(ctx, option.WithCredentialsJSON([]byte(credentialsJSON)))
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to initialize Play Billing service"})
			return
		}
	}

	if credentialsJSON == "" {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "GOOGLE_CREDENTIALS_JSON not configured"})
		return
	}

	var purchaseState int
	// Consultar el estado de la compra en Google Play
	if strings.HasPrefix(req.ProductID, "sub_") {
		sub, err := service.Purchases.Subscriptionsv2.Get(packageName, req.PurchaseToken).Do()
		if err != nil {
			log.Printf("Error verifying subscription with Google: %v", err)
			c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid subscription receipt"})
			return
		}
		// Validar que la suscripción esté activa o en periodo de gracia
		if sub.SubscriptionState != "SUBSCRIPTION_STATE_ACTIVE" && sub.SubscriptionState != "SUBSCRIPTION_STATE_IN_GRACE_PERIOD" {
			c.JSON(http.StatusPaymentRequired, gin.H{"error": "Subscription payment not received"})
			return
		}
		purchaseState = 0 // Marcamos como 0 para indicar éxito
	} else {
		purchase, err := service.Purchases.Products.Get(packageName, req.ProductID, req.PurchaseToken).Do()
		if err != nil {
			log.Printf("Error verifying purchase with Google: %v", err)
			c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid purchase receipt"})
			return
		}
		purchaseState = int(purchase.PurchaseState)
	}

	// 0 = Purchased, 1 = Canceled, 2 = Pending (para in-app products)
	if purchaseState != 0 {
		c.JSON(http.StatusPaymentRequired, gin.H{"error": "Purchase is not in 'Purchased' state"})
		return
	}

	// TRANSACCIÓN ATÓMICA:
	// 1. Insertar el purchase_token (falla si ya existe → anti-replay).
	// 2. Sumar los lapislázulis al usuario.
	// Si cualquier paso falla, se hace Rollback completo.
	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error: could not begin transaction"})
		return
	}
	defer tx.Rollback() // Solo tiene efecto si no se llamó tx.Commit()

	_, err = tx.Exec(`
		INSERT INTO purchases (user_id, purchase_token, package_id, crystals_added)
		VALUES ($1, $2, $3, $4)
	`, userID, req.PurchaseToken, req.ProductID, reward.Crystals)
	if err != nil {
		// El UNIQUE constraint en purchase_token falló → replay attack detectado
		c.JSON(http.StatusConflict, gin.H{"error": "This purchase has already been claimed"})
		return
	}

	query := "UPDATE users SET crystals = crystals + $1, piggy_bank = piggy_bank + $2"
	switch req.ProductID {
	case "pack_event_500":
		query += ", welcome_pack_500_bought = TRUE"
	case "pack_event_2000":
		query += ", welcome_pack_2000_bought = TRUE"
	case "pack_event_5000":
		query += ", welcome_pack_5000_bought = TRUE"
	case "sub_bronze_weekly":
		query += ", subscription_tier = 'bronze'"
	case "sub_silver_biweekly":
		query += ", subscription_tier = 'silver'"
	case "sub_gold_monthly":
		query += ", subscription_tier = 'gold'"
	}
	query += " WHERE id = $3"

	_, err = tx.Exec(query, reward.Crystals, reward.PiggyBank, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update crystals and piggy bank balance"})
		return
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to commit transaction"})
		return
	}

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

// GetSkins returns unlocked skins and currently selected skin
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

	c.JSON(http.StatusOK, gin.H{
		"unlocked_skins": unlockedSkins,
		"selected_skin":  selectedSkin,
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

	// Precios definidos en el servidor (fuente de verdad)
	skinPrices := map[string]int{
		"vida_marina":          300,
		"Dinosaurios":          300,
		"Dulces_de_Halloween":  600,
		"Caldero_de_Bruja":     600,
		"Cementerio_Encantado": 600,
		"Cultivo_de_Calabazas": 600,
		"Ajedrez_Magico":       600,
		"Alquimia_Antigua":     600,
		"Flores_Magicas":       600,
		"Frutas_Jugosas":       600,
		"Hongos_Brillantes":    600,
		"Monstruos_de_Bolsillo": 600,
		"Mundo_Dulce":          600,
		"Planetas":             600,
		"Sushi_Japones":        600,
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

	// 1. Verify and deduct crystals securely using server-side cost
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

	// 2. Add skin to user_skins (ignore if already exists)
	_, err = tx.Exec("INSERT INTO user_skins (user_id, skin_id) VALUES ($1, $2) ON CONFLICT (user_id, skin_id) DO NOTHING", userID, req.SkinID)
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

