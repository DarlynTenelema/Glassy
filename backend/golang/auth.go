package main

import (
	"encoding/base64"
	"fmt"
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
	// Supabase signs JWTs with the base64-decoded version of the JWT Secret.
	decoded, err := base64.StdEncoding.DecodeString(rawSecret)
	if err != nil {
		// Not valid base64 — use raw bytes as fallback (handles local dev / custom secrets)
		jwtSecret = []byte(rawSecret)
	} else {
		jwtSecret = decoded
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
			if _, ok := token.Method.(*jwt.SigningMethodHMAC); !ok {
				return nil, fmt.Errorf("unexpected signing method")
			}
			return jwtSecret, nil
		})

		if err != nil || !token.Valid {
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
