package main

import (
	"net/http"
	"strings"

	"github.com/gin-gonic/gin"
)

// SubmitTikTokLink recibe el enlace de TikTok (Grupo 9) y lo marca como pendiente
// POST /api/player/achievements/tiktok
func SubmitTikTokLink(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		VideoURL string `json:"video_url" binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Missing video_url"})
		return
	}

	url := strings.TrimSpace(req.VideoURL)
	if !strings.Contains(url, "tiktok.com") {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid TikTok URL"})
		return
	}

	_, err := DB.Exec(`
		INSERT INTO tiktok_submissions (user_id, video_url, status)
		VALUES ($1, $2, 'PENDING')
	`, userID, url)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to submit link"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "TikTok link submitted successfully. Reward pending review (24h)."})
}

// UpdateAchievementProgress actualiza el progreso de un logro (Ej: Fusionar 1000 esmeraldas)
// POST /api/player/achievements/progress
func UpdateAchievementProgress(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		GroupID       int `json:"group_id" binding:"required"`
		Level         int `json:"level" binding:"required"`
		ProgressAdded int `json:"progress_added" binding:"required,min=1"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	// UPSERT en user_achievements
	_, err := DB.Exec(`
		INSERT INTO user_achievements (user_id, group_id, level, progress, updated_at)
		VALUES ($1, $2, $3, $4, NOW())
		ON CONFLICT (user_id, group_id, level)
		DO UPDATE SET progress = user_achievements.progress + EXCLUDED.progress, updated_at = NOW()
	`, userID, req.GroupID, req.Level, req.ProgressAdded)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update achievement progress"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Progress updated"})
}

// ClaimAchievementReward reclama la recompensa de un logro cumplido
// POST /api/player/achievements/claim
func ClaimAchievementReward(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		GroupID   int    `json:"group_id" binding:"required"`
		Level     int    `json:"level" binding:"required"`
		GoalTotal int    `json:"goal_total" binding:"required"` 
		Reward    int    `json:"reward" binding:"required"`
		RewardType string `json:"reward_type"` // "lapis" o "fragments"     
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "DB Error"})
		return
	}
	defer tx.Rollback()

	var progress int
	var isClaimed bool

	err = tx.QueryRow(`
		SELECT progress, is_claimed 
		FROM user_achievements 
		WHERE user_id = $1 AND group_id = $2 AND level = $3 FOR UPDATE
	`, userID, req.GroupID, req.Level).Scan(&progress, &isClaimed)

	if err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Achievement not found or no progress made"})
		return
	}

	if isClaimed {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Reward already claimed"})
		return
	}

	if progress < req.GoalTotal {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Goal not reached yet"})
		return
	}

	// Marcar como reclamado
	_, err = tx.Exec(`
		UPDATE user_achievements 
		SET is_claimed = true, updated_at = NOW() 
		WHERE user_id = $1 AND group_id = $2 AND level = $3
	`, userID, req.GroupID, req.Level)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update achievement"})
		return
	}

	// Dar recompensa (lapislázulis o fragmentos)
	if req.RewardType == "fragments" {
		_, err = tx.Exec(`UPDATE users SET lapis_fragments = lapis_fragments + $1 WHERE id = $2`, req.Reward, userID)
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to award fragments"})
			return
		}
		
		// Auto-conversión a cristales si tiene 100 o más
		var currentFragments int
		err = tx.QueryRow(`SELECT lapis_fragments FROM users WHERE id = $1`, userID).Scan(&currentFragments)
		if err == nil && currentFragments >= 100 {
			crystalsToAdd := currentFragments / 100
			remainingFragments := currentFragments % 100
			_, _ = tx.Exec(`
				UPDATE users 
				SET crystals = crystals + $1, lapis_fragments = $2 
				WHERE id = $3
			`, crystalsToAdd, remainingFragments, userID)
		}
	} else {
		_, err = tx.Exec(`UPDATE users SET crystals = crystals + $1 WHERE id = $2`, req.Reward, userID)
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to award crystals"})
			return
		}
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to commit transaction"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Reward claimed successfully", "reward": req.Reward})
}

// GetAchievementsStatus devuelve el progreso de todos los logros del usuario
// GET /api/player/achievements/status
func GetAchievementsStatus(c *gin.Context) {
	userID := c.GetString("user_id")

	rows, err := DB.Query(`
		SELECT group_id, level, progress, is_claimed
		FROM user_achievements
		WHERE user_id = $1
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch achievements"})
		return
	}
	defer rows.Close()

	type AchievementStatus struct {
		GroupID   int  `json:"group_id"`
		Level     int  `json:"level"`
		Progress  int  `json:"progress"`
		IsClaimed bool `json:"is_claimed"`
	}

	results := make([]AchievementStatus, 0)
	for rows.Next() {
		var a AchievementStatus
		if err := rows.Scan(&a.GroupID, &a.Level, &a.Progress, &a.IsClaimed); err == nil {
			results = append(results, a)
		}
	}

	if err := rows.Err(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Error reading achievements"})
		return
	}

	c.JSON(http.StatusOK, results)
}
