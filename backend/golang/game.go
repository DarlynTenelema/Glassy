package main

import (
	"context"
	"net/http"
	"os"
	"time"

	"github.com/gin-gonic/gin"
	"google.golang.org/api/androidpublisher/v3"
	"google.golang.org/api/option"
)

// =============================================================================
// WALLET
// =============================================================================

// GetPlayerWallet devuelve los cristales actuales del jugador.
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

	// Anti-cheat: límite razonable para Glassy.
	// Diamante = 64 pts. Obteniendo ~1000 diamantes ya serían 64,000 puntos → techo justo.
	if req.Score > 100_000 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Score rejected: exceeds maximum allowed value"})
		return
	}

	// UPSERT: solo actualiza si el nuevo score es MEJOR que el guardado.
	// Si no existe fila para este usuario, la inserta.
	_, err := DB.Exec(`
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

// adRewardCrystals es la cantidad de cristales que se regalan por ver un video.
const adRewardCrystals = 5

// ClaimAdReward agrega cristales al jugador como recompensa por ver un video de Ad Mob.
// El cliente debe llamar este endpoint SOLO cuando el SDK de AdMob confirme que el
// video fue visto completo. Para el MVP, confiamos en el cliente.
// POST /api/player/ad-reward
func ClaimAdReward(c *gin.Context) {
	userID := c.GetString("user_id")

	_, err := DB.Exec(
		"UPDATE users SET crystals = crystals + $1 WHERE id = $2",
		adRewardCrystals, userID,
	)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to add reward crystals"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"message":          "Ad reward claimed",
		"crystals_awarded": adRewardCrystals,
	})
}

// =============================================================================
// PURCHASES (Google Play Billing)
// =============================================================================

// packageCrystals mapea los IDs de producto de Google Play a su cantidad de cristales.
var packageCrystals = map[string]int{
	"glass_pack_100":  100,
	"glass_pack_600":  600,
	"glass_pack_1500": 1500,
	"glass_pack_5000": 5000,
}

// VerifyPurchase valida un recibo de Google Play Billing y acredita los cristales.
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
	crystalsToAdd, ok := packageCrystals[req.ProductID]
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
	} else {
		// En desarrollo local sin credenciales, falla explícitamente
		c.JSON(http.StatusInternalServerError, gin.H{"error": "GOOGLE_CREDENTIALS_JSON not configured"})
		return
	}
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to initialize Play Billing service"})
		return
	}

	// Consultar el estado de la compra en Google Play
	purchase, err := service.Purchases.Products.Get(packageName, req.ProductID, req.PurchaseToken).Do()
	if err != nil {
		c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid purchase receipt"})
		return
	}

	// 0 = Purchased, 1 = Canceled, 2 = Pending
	if purchase.PurchaseState != 0 {
		c.JSON(http.StatusPaymentRequired, gin.H{"error": "Purchase is not in 'Purchased' state"})
		return
	}

	// TRANSACCIÓN ATÓMICA:
	// 1. Insertar el purchase_token (falla si ya existe → anti-replay).
	// 2. Sumar los cristales al usuario.
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
	`, userID, req.PurchaseToken, req.ProductID, crystalsToAdd)
	if err != nil {
		// El UNIQUE constraint en purchase_token falló → replay attack detectado
		c.JSON(http.StatusConflict, gin.H{"error": "This purchase has already been claimed"})
		return
	}

	_, err = tx.Exec(
		"UPDATE users SET crystals = crystals + $1 WHERE id = $2",
		crystalsToAdd, userID,
	)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update crystals balance"})
		return
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to commit transaction"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"message":         "Purchase verified and crystals added",
		"crystals_added":  crystalsToAdd,
	})
}
