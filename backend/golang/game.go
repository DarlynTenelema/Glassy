package main

import (
	"crypto/hmac"
	"crypto/sha256"
	"database/sql"
	"encoding/hex"
	"fmt"
	"net/http"
	"os"
	"time"

	"github.com/gin-gonic/gin"
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
func SubmitScore(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		Score int    `json:"score"`
		Hash  string `json:"hash"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	// HMAC Anti-Cheat verification
	secret := os.Getenv("GAME_SECRET")
	mac := hmac.New(sha256.New, []byte(secret))
	// String to hash: "score={score}&user={userID}"
	dataToHash := fmt.Sprintf("score=%d&user=%s", req.Score, userID)
	mac.Write([]byte(dataToHash))
	expectedHash := hex.EncodeToString(mac.Sum(nil))

	if req.Hash != expectedHash {
		c.JSON(http.StatusForbidden, gin.H{"error": "Cheating detected"})
		return
	}

	// Anti-cheat sanity check (e.g. score too high)
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

	// TODO: Implement actual Google Play Developer API validation
	// using google.golang.org/api/androidpublisher/v3
	// For now, this is a stub that accepts test purchases.
	if req.PurchaseToken == "" {
		c.JSON(http.StatusBadRequest, gin.H{"error": "No token provided"})
		return
	}

	// Simulate successful verification and apply rewards based on ProductID
	if req.ProductID == "lives_pack_1" {
		DB.Exec("UPDATE users SET lives = LEAST(lives + 5, $1) WHERE id = $2", MAX_LIVES, userID)
	} else if req.ProductID == "premium_no_ads" {
		premiumUntil := time.Now().AddDate(0, 1, 0) // 1 month premium
		DB.Exec("UPDATE users SET premium_until = $1 WHERE id = $2", premiumUntil, userID)
	}

	c.JSON(http.StatusOK, gin.H{"message": "Purchase verified successfully"})
}
