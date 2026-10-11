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

		// Primero intentamos la verificación local con el JWT Secret (HS256)
		token, err := jwt.Parse(tokenString, func(token *jwt.Token) (interface{}, error) {
			alg := token.Method.Alg()
			if !strings.HasPrefix(alg, "HS") {
				return nil, fmt.Errorf("unexpected signing method: %v", alg)
			}
			return jwtSecret, nil
		})

		var userID string

		if err == nil && token.Valid {
			// Verificación local exitosa
			claims, ok := token.Claims.(jwt.MapClaims)
			if !ok {
				c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid token claims"})
				return
			}
			userID = fmt.Sprintf("%v", claims["sub"])
		} else {
			// Si falla la verificación local (ej. porque el token usa ES256 o RS256), 
			// verificamos el token llamando a la API real de Supabase.
			supabaseURL := os.Getenv("SUPABASE_URL")
			supabaseAnon := os.Getenv("SUPABASE_ANON")
			
			if supabaseURL == "" || supabaseAnon == "" {
				log.Printf("JWT Parse Error and missing Supabase env vars for fallback validation: %v", err)
				c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid token", "details": err.Error()})
				return
			}

			req, _ := http.NewRequest("GET", supabaseURL+"/auth/v1/user", nil)
			req.Header.Set("Authorization", "Bearer "+tokenString)
			req.Header.Set("apikey", supabaseAnon)

			resp, reqErr := http.DefaultClient.Do(req)
			if reqErr != nil || resp.StatusCode != http.StatusOK {
				log.Printf("Supabase API verification failed: %v, status: %d", reqErr, resp.StatusCode)
				c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Token unverifiable by Supabase API"})
				return
			}
			
			// El token es válido según Supabase. Extraemos el UserID sin verificar la firma localmente.
			parser := jwt.NewParser()
			unverifiedToken, _, parseErr := parser.ParseUnverified(tokenString, jwt.MapClaims{})
			if parseErr != nil {
				c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Could not parse unverified token"})
				return
			}
			claims, ok := unverifiedToken.Claims.(jwt.MapClaims)
			if !ok {
				c.AbortWithStatusJSON(http.StatusUnauthorized, gin.H{"error": "Invalid token claims"})
				return
			}
			userID = fmt.Sprintf("%v", claims["sub"])
		}

		c.Set("user_id", userID)
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

	// Primero intentamos buscarlo como Partner (Influencer)
	var partnerID string
	err = tx.QueryRow(`SELECT id FROM partners WHERE partner_code = $1`, code).Scan(&partnerID)
	if err == nil {
		// Es un partner
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
		c.JSON(http.StatusOK, gin.H{"message": "Partner code applied successfully!"})
		return
	}

	// Si no es partner, buscar si es el invite_code de otro usuario
	var inviterID string
	err = tx.QueryRow(`SELECT id FROM users WHERE invite_code = $1`, code).Scan(&inviterID)
	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "Invalid referral or invite code"})
		return
	}

	if inviterID == userID {
		c.JSON(http.StatusBadRequest, gin.H{"error": "You cannot use your own invite code"})
		return
	}

	// Marcar que el usuario ya usó un código
	res, err := tx.Exec(`
		UPDATE users 
		SET referral_code_used = $1 
		WHERE id = $2 AND referral_code_used IS NULL
	`, code, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to set invite code"})
		return
	}

	rows, _ := res.RowsAffected()
	if rows == 0 {
		c.JSON(http.StatusConflict, gin.H{"error": "You have already used an invite code"})
		return
	}

	// Sumar +1 al logro del inviter (Grupo 7, Nivel 1)
	_, err = tx.Exec(`
		INSERT INTO user_achievements (user_id, group_id, level, progress, updated_at)
		VALUES ($1, 7, 1, 1, NOW())
		ON CONFLICT (user_id, group_id, level)
		DO UPDATE SET progress = user_achievements.progress + 1, updated_at = NOW()
	`, inviterID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to reward inviter"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{"message": "Invite code applied successfully!"})
}

// DeleteAccount permite al usuario eliminar permanentemente su cuenta
// DELETE /api/player/account
func DeleteAccount(c *gin.Context) {
	userID := c.GetString("user_id")

	supabaseURL := os.Getenv("SUPABASE_URL")
	serviceRoleKey := os.Getenv("SUPABASE_SERVICE_ROLE_KEY")

	if supabaseURL == "" || serviceRoleKey == "" {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Server misconfiguration: missing Supabase keys"})
		return
	}

	// Opcional: Borrar de la tabla pública 'users' si no hay ON DELETE CASCADE configurado
	// Si hay CASCADE, la API de Supabase lo borrará de auth.users y propagará el borrado.
	tx, err := DB.Begin()
	if err == nil {
		tx.Exec("DELETE FROM users WHERE id = $1", userID)
		tx.Commit()
	}

	// Llamar a Supabase Admin API para eliminar el usuario
	req, _ := http.NewRequest("DELETE", supabaseURL+"/auth/v1/admin/users/"+userID, nil)
	req.Header.Set("Authorization", "Bearer "+serviceRoleKey)
	req.Header.Set("apikey", serviceRoleKey)

	resp, err := http.DefaultClient.Do(req)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to communicate with auth service"})
		return
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK && resp.StatusCode != http.StatusNoContent {
		log.Printf("Failed to delete Supabase user: status %d", resp.StatusCode)
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to delete user from Auth service"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Account deleted successfully"})
}

// ResetProgress permite al usuario borrar todo su progreso en el juego sin borrar su cuenta
// POST /api/player/reset-progress
func ResetProgress(c *gin.Context) {
	userID := c.GetString("user_id")

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	// 1. Limpiar tablas secundarias
	tablesToClear := []string{
		"user_skins",
		"leaderboards",
		"user_achievements",
		"tiktok_submissions",
	}

	for _, table := range tablesToClear {
		_, err = tx.Exec(fmt.Sprintf("DELETE FROM %s WHERE user_id = $1", table), userID)
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to reset " + table})
			return
		}
	}

	// 2. Resetear valores en la tabla users
	// Mantenemos subscription_tier y last_login_at
	_, err = tx.Exec(`
		UPDATE users SET
			crystals = 0,
			piggy_bank = 0,
			daily_reward_streak = 0,
			last_daily_claim = NULL,
			current_mission_day = 1,
			mission_progress = 0,
			mission_completed = FALSE,
			lapis_fragments = 0,
			last_chest_6h = NULL,
			last_chest_12h = NULL,
			last_chest_24h = NULL,
			daily_lapis_farmed = 0,
			last_farm_date = NULL,
			selected_skin_id = 'gemas_clasicas'
		WHERE id = $1
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to reset user data"})
		return
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Transaction commit failed"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Progress reset successfully"})
}

