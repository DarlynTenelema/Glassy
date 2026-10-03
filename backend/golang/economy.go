package main

import (
	"net/http"
	"time"

	"github.com/gin-gonic/gin"
)

// =============================================================================
// ECONOMY MODELS
// =============================================================================

type EconomyStatus struct {
	Crystals          int        `json:"crystals"`
	PiggyBank         int        `json:"piggy_bank"`
	DailyRewardStreak int        `json:"daily_reward_streak"`
	LastDailyClaim    *time.Time `json:"last_daily_claim"`
	CurrentMissionDay int        `json:"current_mission_day"`
	MissionProgress   int        `json:"mission_progress"`
	MissionCompleted  bool       `json:"mission_completed"`
	CanClaimDaily     bool       `json:"can_claim_daily"`
	LapisFragments    int        `json:"lapis_fragments"`
	LastChest6h       *time.Time `json:"last_chest_6h"`
	LastChest12h      *time.Time `json:"last_chest_12h"`
	LastChest24h      *time.Time `json:"last_chest_24h"`
}

// GetEconomyStatus devuelve el estado completo de la economía del jugador
// GET /api/player/economy
func GetEconomyStatus(c *gin.Context) {
	userID := c.GetString("user_id")

	var s EconomyStatus
	var lastLogin *time.Time
	var totalActiveDays int

	err := DB.QueryRow(`
		SELECT crystals, piggy_bank, daily_reward_streak, last_daily_claim,
		       current_mission_day, mission_progress, mission_completed,
		       last_login_at, total_active_days, lapis_fragments, 
		       last_chest_6h, last_chest_12h, last_chest_24h
		FROM users WHERE id = $1
	`, userID).Scan(
		&s.Crystals, &s.PiggyBank, &s.DailyRewardStreak, &s.LastDailyClaim,
		&s.CurrentMissionDay, &s.MissionProgress, &s.MissionCompleted,
		&lastLogin, &totalActiveDays, &s.LapisFragments,
		&s.LastChest6h, &s.LastChest12h, &s.LastChest24h,
	)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	// Lógica de Partners y días activos
	now := time.Now().UTC()
	currentDate := now.Truncate(24 * time.Hour)

	if lastLogin == nil || !lastLogin.Truncate(24*time.Hour).Equal(currentDate) {
		// Es un nuevo día de login
		totalActiveDays++
		_, _ = DB.Exec(`UPDATE users SET last_login_at = $1, total_active_days = $2 WHERE id = $3`, now, totalActiveDays, userID)
		
		// Verificar si completó los 15 días para el partner
		if totalActiveDays == 15 {
			go ProcessPartnerReferralConfirmation(userID)
		}
	}

	// Lógica anti-trampas de tiempo: comprobar la fecha desde el servidor
	s.CanClaimDaily = true

	if s.LastDailyClaim != nil {
		lastClaimDate := s.LastDailyClaim.Truncate(24 * time.Hour)
		currentDate := now.Truncate(24 * time.Hour)

		// Si ya reclamó hoy, no puede volver a reclamar
		if currentDate.Equal(lastClaimDate) {
			s.CanClaimDaily = false
		} else if currentDate.Sub(lastClaimDate).Hours() > 24 {
			// Si pasó más de un día sin reclamar, se rompe la racha y vuelve al día 1
			s.DailyRewardStreak = 1
			// Aquí no actualizamos la base de datos todavía, se actualizará cuando reclame
		}
	}

	c.JSON(http.StatusOK, s)
}

// ClaimDailyReward procesa el reclamo del calendario diario de 7 días
// POST /api/player/claim-daily
func ClaimDailyReward(c *gin.Context) {
	userID := c.GetString("user_id")

	// Transacción para garantizar atomicidad
	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var streak int
	var lastClaim *time.Time
	err = tx.QueryRow(`
		SELECT daily_reward_streak, last_daily_claim 
		FROM users WHERE id = $1 FOR UPDATE
	`, userID).Scan(&streak, &lastClaim)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	now := time.Now().UTC()
	currentDate := now.Truncate(24 * time.Hour)

	if lastClaim != nil {
		lastClaimDate := lastClaim.Truncate(24 * time.Hour)
		if currentDate.Equal(lastClaimDate) {
			c.JSON(http.StatusBadRequest, gin.H{"error": "Already claimed today"})
			return
		} else if currentDate.Sub(lastClaimDate).Hours() > 24 {
			streak = 1 // Racha perdida
		}
	}

	// Lógica de recompensas en fragmentos: 10, 20, 30, 40, 50, 75, 100
	rewardFragments := 0
	switch streak {
	case 1: rewardFragments = 10
	case 2: rewardFragments = 20
	case 3: rewardFragments = 30
	case 4: rewardFragments = 40
	case 5: rewardFragments = 50
	case 6: rewardFragments = 75
	case 7: rewardFragments = 100
	}

	// Actualizar el estado
	nextStreak := streak + 1
	if nextStreak > 7 {
		nextStreak = 1 // Reiniciar ciclo tras completar 7 días
	}

	// Convertir fragmentos a Lapis si llegan a 100
	_, err = tx.Exec(`
		UPDATE users 
		SET lapis_fragments = lapis_fragments + $1, 
		    daily_reward_streak = $2, 
		    last_daily_claim = $3 
		WHERE id = $4
	`, rewardFragments, nextStreak, now, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update reward"})
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

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message":         "Daily reward claimed",
		"reward_fragments": rewardFragments,
		"new_streak":      nextStreak,
	})
}

// ClaimChest abre un cofre de tiempo y otorga fragmentos
// POST /api/player/claim-chest
func ClaimChest(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		ChestType string `json:"chest_type" binding:"required"` // "6h", "12h", "24h"
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid chest type"})
		return
	}

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var lastChest *time.Time
	queryCol := ""
	rewardFragments := 0
	hoursRequired := 0.0

	switch req.ChestType {
	case "6h":
		queryCol = "last_chest_6h"
		rewardFragments = 5
		hoursRequired = 6.0
	case "12h":
		queryCol = "last_chest_12h"
		rewardFragments = 10
		hoursRequired = 12.0
	case "24h":
		queryCol = "last_chest_24h"
		rewardFragments = 20
		hoursRequired = 24.0
	default:
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid chest type"})
		return
	}

	err = tx.QueryRow(`SELECT ` + queryCol + ` FROM users WHERE id = $1 FOR UPDATE`, userID).Scan(&lastChest)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	now := time.Now().UTC()
	if lastChest != nil {
		if now.Sub(*lastChest).Hours() < hoursRequired {
			c.JSON(http.StatusBadRequest, gin.H{"error": "Chest not ready yet"})
			return
		}
	}

	_, err = tx.Exec(`
		UPDATE users 
		SET lapis_fragments = lapis_fragments + $1, 
		    ` + queryCol + ` = $2 
		WHERE id = $3
	`, rewardFragments, now, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update chest reward"})
		return
	}

	// Auto-conversión
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

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message": "Chest claimed",
		"reward_fragments": rewardFragments,
	})
}

// UpdateMissionProgress actualiza el progreso de la misión (ej: si recogió X gemas en la partida)
// POST /api/player/mission/update
func UpdateMissionProgress(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		ProgressAdded int `json:"progress_added" binding:"required,min=1"`
		GoalTotal     int `json:"goal_total" binding:"required,min=1"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	// En una versión más robusta, el servidor sabría cuál es el GoalTotal según el CurrentMissionDay.
	// Por ahora validamos que si progreso llega a total, se marca completado.
	_, err := DB.Exec(`
		UPDATE users 
		SET mission_progress = mission_progress + $1,
		    mission_completed = CASE 
		        WHEN (mission_progress + $1) >= $2 THEN true 
		        ELSE false 
		    END
		WHERE id = $3 AND mission_completed = false
	`, req.ProgressAdded, req.GoalTotal, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update mission"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Mission progress updated"})
}

// ClaimMissionReward reclama la recompensa de la misión completada y avanza de día
// POST /api/player/mission/claim
func ClaimMissionReward(c *gin.Context) {
	userID := c.GetString("user_id")

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var completed bool
	var currentDay int
	err = tx.QueryRow(`
		SELECT mission_completed, current_mission_day 
		FROM users WHERE id = $1 FOR UPDATE
	`, userID).Scan(&completed, &currentDay)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	if !completed {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Mission not completed yet"})
		return
	}

	// Recompensa simulada basada en el día de la misión (podría ser una tabla de recompensas real)
	reward := 2 // Recompensa base
	if currentDay == 30 {
		reward = 15 // Recompensa grande
	}

	nextDay := currentDay + 1
	if nextDay > 30 {
		nextDay = 1 // Reinicia al completar el mes
	}

	_, err = tx.Exec(`
		UPDATE users 
		SET crystals = crystals + $1,
		    current_mission_day = $2,
		    mission_progress = 0,
		    mission_completed = false
		WHERE id = $3
	`, reward, nextDay, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to claim mission reward"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message": "Mission claimed",
		"reward":  reward,
		"next_day": nextDay,
	})
}

// ClaimPiggyBank transfiere del Piggy Bank a la Wallet si supera el mínimo de 500
// POST /api/player/piggy-bank/claim
func ClaimPiggyBank(c *gin.Context) {
	userID := c.GetString("user_id")

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var piggyBank int
	err = tx.QueryRow(`SELECT piggy_bank FROM users WHERE id = $1 FOR UPDATE`, userID).Scan(&piggyBank)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	if piggyBank < 500 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Piggy Bank must reach 500 Lapislázulis to claim"})
		return
	}

	_, err = tx.Exec(`
		UPDATE users 
		SET crystals = crystals + piggy_bank, 
		    piggy_bank = 0 
		WHERE id = $1
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to claim piggy bank"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message": "Piggy bank claimed",
		"reward":  piggyBank,
	})
}

// SpendCrystals deduce lapislázulis del usuario cuando compra un power-up en la partida.
// POST /api/player/spend-crystals
func SpendCrystals(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		Amount int `json:"amount" binding:"required,min=1"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid amount"})
		return
	}

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var currentCrystals int
	err = tx.QueryRow(`SELECT crystals FROM users WHERE id = $1 FOR UPDATE`, userID).Scan(&currentCrystals)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "User not found"})
		return
	}

	if currentCrystals < req.Amount {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Not enough lapislázulis"})
		return
	}

	_, err = tx.Exec(`UPDATE users SET crystals = crystals - $1 WHERE id = $2`, req.Amount, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to spend crystals"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message": "Crystals spent successfully",
		"crystals_remaining": currentCrystals - req.Amount,
	})
}
