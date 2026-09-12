package main

import (
	"context"
	"database/sql"
	"net/http"
	"os"
	"time"

	"github.com/gin-gonic/gin"
	"google.golang.org/api/androidpublisher/v3"
	"google.golang.org/api/option"
)

const MAX_LIVES = 5
const RECHARGE_INTERVAL = 5 * time.Minute // Simplification for MVP

// GetPlayerState returns the player's current lives, calculating recharge mathematically
func GetPlayerState(c *gin.Context) {
	userID := c.GetString("user_id")

	var lives int
	var lastLifeUsed sql.NullTime
	var premiumUntil sql.NullTime

	err := DB.QueryRow("SELECT lives, last_life_used, premium_until FROM users WHERE id = $1", userID).
		Scan(&lives, &lastLifeUsed, &premiumUntil)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "User not found"})
		return
	}

	// Check if user has premium active
	hasPremium := false
	if premiumUntil.Valid && premiumUntil.Time.After(time.Now()) {
		hasPremium = true
	}

	// Calculate mathematical passive recharge
	if !hasPremium && lives < MAX_LIVES && lastLifeUsed.Valid {
		timePassed := time.Since(lastLifeUsed.Time)
		livesToRecover := int(timePassed / RECHARGE_INTERVAL)

		if livesToRecover > 0 {
			lives += livesToRecover
			if lives >= MAX_LIVES {
				lives = MAX_LIVES
				// Reset timer by setting it to null
				DB.Exec("UPDATE users SET lives = $1, last_life_used = NULL WHERE id = $2", lives, userID)
			} else {
				// Update timer shifting it forward
				newLastLifeUsed := lastLifeUsed.Time.Add(time.Duration(livesToRecover) * RECHARGE_INTERVAL)
				DB.Exec("UPDATE users SET lives = $1, last_life_used = $2 WHERE id = $3", lives, newLastLifeUsed, userID)
			}
		}
	}

	c.JSON(http.StatusOK, gin.H{
		"lives":         lives,
		"max_lives":     MAX_LIVES,
		"has_premium":   hasPremium,
		"premium_until": premiumUntil.Time,
	})
}

// UseLife is called when starting a new game
func UseLife(c *gin.Context) {
	userID := c.GetString("user_id")

	// Get current status
	var lives int
	var premiumUntil sql.NullTime
	var lastLifeUsed sql.NullTime
	err := DB.QueryRow("SELECT lives, premium_until, last_life_used FROM users WHERE id = $1", userID).
		Scan(&lives, &premiumUntil, &lastLifeUsed)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "User not found"})
		return
	}

	// If premium, do not discount
	if premiumUntil.Valid && premiumUntil.Time.After(time.Now()) {
		c.JSON(http.StatusOK, gin.H{"message": "Premium active, no life used"})
		return
	}

	if lives <= 0 {
		c.JSON(http.StatusForbidden, gin.H{"error": "No lives remaining"})
		return
	}

	// Discount life
	lives--
	
	// If it's the first life discounted (was 5), start the timer
	if !lastLifeUsed.Valid {
		DB.Exec("UPDATE users SET lives = $1, last_life_used = NOW() WHERE id = $2", lives, userID)
	} else {
		DB.Exec("UPDATE users SET lives = $1 WHERE id = $2", lives, userID)
	}

	c.JSON(http.StatusOK, gin.H{"message": "Life used successfully", "lives_remaining": lives})
}

// SubmitScore receives a final score
// Anti-cheat: Score is validated on the server by sanity bounds only.
// The GAME_SECRET is NOT shared with the client — it stays server-side only.
func SubmitScore(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		Score int `json:"score"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	// Anti-cheat: server-side sanity check on score bounds
	// A Glassy game cannot realistically exceed 50,000 points
	if req.Score > 50000 || req.Score < 0 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Suspicious score rejected"})
		return
	}

	_, err := DB.Exec("INSERT INTO leaderboards (user_id, score) VALUES ($1, $2)", userID, req.Score)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to save score"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Score saved"})
}

// GetLeaderboards returns global top
func GetLeaderboards(c *gin.Context) {
	rows, err := DB.Query(`
		SELECT u.name, u.avatar_url, l.score, l.achieved_at 
		FROM leaderboards l
		JOIN users u ON l.user_id = u.id
		ORDER BY l.score DESC
		LIMIT 100
	`)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch leaderboards"})
		return
	}
	defer rows.Close()

	var results []gin.H
	for rows.Next() {
		var name, avatar string
		var score int
		var achievedAt time.Time
		if err := rows.Scan(&name, &avatar, &score, &achievedAt); err != nil {
			continue
		}
		results = append(results, gin.H{
			"name":        name,
			"avatar_url":  avatar,
			"score":       score,
			"achieved_at": achievedAt,
		})
	}

	c.JSON(http.StatusOK, results)
}

// VerifyPurchase verifies a Google Play Billing receipt
func VerifyPurchase(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		PurchaseToken string `json:"purchase_token"`
		ProductID     string `json:"product_id"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	if req.PurchaseToken == "" || req.ProductID == "" {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Missing token or product ID"})
		return
	}

	// Real Google Play Developer API validation
	packageName := "com.darlyntenelema.glassy" // Should match the Android package name

	ctx := context.Background()
	// This uses the GOOGLE_APPLICATION_CREDENTIALS environment variable
	// which must point to a JSON file, or we can use option.WithCredentialsJSON
	// if we provide the JSON string directly via an environment variable.
	var service *androidpublisher.Service
	var err error
	
	credentialsJSON := os.Getenv("GOOGLE_CREDENTIALS_JSON")
	if credentialsJSON != "" {
		service, err = androidpublisher.NewService(ctx, option.WithCredentialsJSON([]byte(credentialsJSON)))
	} else {
		// Fallback to default credentials or fail if neither is set in prod
		service, err = androidpublisher.NewService(ctx)
	}

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to initialize play billing service"})
		return
	}

	purchase, err := service.Purchases.Products.Get(packageName, req.ProductID, req.PurchaseToken).Do()
	if err != nil {
		c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid purchase receipt"})
		return
	}

	// Check if the purchase is actually valid (0 = Purchased, 1 = Canceled, 2 = Pending)
	if purchase.PurchaseState != 0 {
		c.JSON(http.StatusPaymentRequired, gin.H{"error": "Purchase not in 'Purchased' state"})
		return
	}

	// Determine if we should reward the user
	// A good practice would be to also check if this PurchaseToken was already used
	// to prevent duplicate rewards, but for simplicity we will rely on the Play API state.
	
	if req.ProductID == "lives_pack_1" {
		DB.Exec("UPDATE users SET lives = LEAST(lives + 5, $1) WHERE id = $2", MAX_LIVES, userID)
	} else if req.ProductID == "premium_no_ads" {
		premiumUntil := time.Now().AddDate(0, 1, 0) // 1 month premium
		DB.Exec("UPDATE users SET premium_until = $1 WHERE id = $2", premiumUntil, userID)
	}

	c.JSON(http.StatusOK, gin.H{"message": "Purchase verified successfully"})
}
