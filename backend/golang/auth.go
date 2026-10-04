package main

import (
	"encoding/base64"
	"fmt"
	"log"
	"net/http"
	"os"
	"strings"

	"github.com/gin-gonic/gin"
	"github.com/golang-jwt/jwt/v5"
)

var jwtSecret []byte

func InitAuth() {
	rawSecret := os.Getenv("JWT_SECRET")
	if rawSecret == "" {
		fmt.Println("Warning: JWT_SECRET environment variable is not set")
		return
	}
	// Intentar decodificar Base64. Si falla, usar como raw string.
	// Supabase en la mayoría de proyectos modernos usa un string raw, 
	// pero en configuraciones de Railway o variables inyectadas puede venir en Base64.
	decoded, err := base64.StdEncoding.DecodeString(rawSecret)
	if err == nil && len(decoded) > 0 {
		jwtSecret = decoded
	} else {
		jwtSecret = []byte(rawSecret)
	}
}

// AuthMiddleware protects routes using the Supabase JWT
func AuthMiddleware() gin.HandlerFunc {
	return func(c *gin.Context) {
		authHeader := c.GetHeader("Authorization")
		if authHeader == "" {
			c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Authorization header required"})
			return
		}

		parts := strings.Split(authHeader, " ")
		if len(parts) != 2 || parts[0] != "Bearer" {
			c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid Authorization format"})
			return
		}

		tokenString := parts[1]
		token, err := jwt.Parse(tokenString, func(token *jwt.Token) (interface{}, error) {
			// En lugar de hacer un cast estricto al struct, verificamos el algoritmo en el Header
			alg := token.Method.Alg()
			if !strings.HasPrefix(alg, "HS") {
				return nil, fmt.Errorf("unexpected signing method: %v", alg)
			}
			return jwtSecret, nil
		})

		if err != nil || !token.Valid {
			log.Printf("JWT Parse Error: %v", err)
			c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid token", "details": err.Error()})
			return
		}

		claims, ok := token.Claims.(jwt.MapClaims)
		if !ok {
			c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid token claims"})
			return
		}

		// Supabase JWT stores the user's UUID in the "sub" claim
		c.Set("user_id", claims["sub"])
		c.Next()
	}
}

// SetReferralCode permite a un usuario registrar el código del influencer
// POST /api/player/referral
func SetReferralCode(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		Code string `json:"code" binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Missing code"})
		return
	}

	code := strings.ToUpper(strings.TrimSpace(req.Code))

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	// Obtener ID del partner
	var partnerID string
	err = tx.QueryRow(`SELECT id FROM partners WHERE partner_code = $1`, code).Scan(&partnerID)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "Invalid referral code"})
		return
	}

	// Marcar en users
	res, err := tx.Exec(`
		UPDATE users 
		SET referral_code_used = $1 
		WHERE id = $2 AND referral_code_used IS NULL
	`, code, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to set referral code"})
		return
	}

	rows, _ := res.RowsAffected()
	if rows == 0 {
		c.JSON(http.StatusConflict, gin.H{"error": "Referral code already set or user not found"})
		return
	}

	// Insertar en partner_referrals
	_, err = tx.Exec(`
		INSERT INTO partner_referrals (partner_id, user_id, status)
		VALUES ($1, $2, 'in_progress')
	`, partnerID, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to register referral internally"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{"message": "Referral code applied successfully!"})
}
