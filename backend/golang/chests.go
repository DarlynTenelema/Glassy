package main

import (
	"database/sql"
	"net/http"
	"time"

	"github.com/gin-gonic/gin"
)

// ChestConfig define las recompensas y tiempos de cada cofre
var chestConfigs = map[int]struct {
	CooldownHours int
	Fragments     int
	ColumnName    string
}{
	6:  {CooldownHours: 6, Fragments: 5, ColumnName: "last_chest_6h"},
	12: {CooldownHours: 12, Fragments: 10, ColumnName: "last_chest_12h"},
	24: {CooldownHours: 24, Fragments: 20, ColumnName: "last_chest_24h"},
}

// OpenTimeChest procesa la apertura de cofres de tiempo
// POST /api/player/chests/open
func OpenTimeChest(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		ChestType int `json:"chest_type" binding:"required"` // 6, 12, o 24
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid chest type"})
		return
	}

	config, exists := chestConfigs[req.ChestType]
	if !exists {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Chest type not found"})
		return
	}

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	// Obtener la última vez que abrió este cofre y los fragmentos/cristales actuales
	var lastOpen sql.NullTime
	var fragments int
	var crystals int

	query := `SELECT ` + config.ColumnName + `, lapis_fragments, crystals FROM users WHERE id = $1 FOR UPDATE`
	err = tx.QueryRow(query, userID).Scan(&lastOpen, &fragments, &crystals)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "User not found"})
		return
	}

	// Verificar cooldown
	if lastOpen.Valid {
		nextAllowedTime := lastOpen.Time.Add(time.Duration(config.CooldownHours) * time.Hour)
		if time.Now().Before(nextAllowedTime) {
			c.JSON(http.StatusBadRequest, gin.H{"error": "Chest is on cooldown", "available_at": nextAllowedTime})
			return
		}
	}

	// Añadir fragmentos
	fragments += config.Fragments
	crystalsAdded := 0

	// Lógica de conversión: 100 fragmentos = 10 lapislázulis
	for fragments >= 100 {
		fragments -= 100
		crystals += 10
		crystalsAdded += 10
	}

	// Actualizar base de datos
	updateQuery := `
		UPDATE users 
		SET ` + config.ColumnName + ` = NOW(),
		    lapis_fragments = $1,
		    crystals = $2
		WHERE id = $3
	`
	_, err = tx.Exec(updateQuery, fragments, crystals, userID)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update user data"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{
		"message":          "Chest opened successfully",
		"fragments_added":  config.Fragments,
		"total_fragments":  fragments,
		"crystals_added":   crystalsAdded,
		"total_crystals":   crystals,
	})
}
