package main

import (
	"log"
	"os"

	"github.com/gin-gonic/gin"
	"github.com/joho/godotenv"
	"strings"
)

func main() {
	// Load .env if it exists (for local development)
	_ = godotenv.Load()

	// Initialize Database and Auth
	InitDB()
	InitAuth()

	// Setup Gin Router
	r := gin.Default()

	// CORS Middleware
	r.Use(func(c *gin.Context) {
		origin := c.Request.Header.Get("Origin")
		allowedOrigins := os.Getenv("ALLOWED_ORIGINS")
		if allowedOrigins == "*" || strings.Contains(allowedOrigins, origin) {
			if origin != "" {
				c.Writer.Header().Set("Access-Control-Allow-Origin", origin)
			} else {
				c.Writer.Header().Set("Access-Control-Allow-Origin", "*")
			}
		}
		c.Writer.Header().Set("Access-Control-Allow-Methods", "GET, POST, OPTIONS")
		c.Writer.Header().Set("Access-Control-Allow-Headers", "Authorization, Content-Type, X-Game-Signature")
		if c.Request.Method == "OPTIONS" {
			c.AbortWithStatus(204)
			return
		}
		c.Next()
	})

	// Public Routes
	r.GET("/ping", func(c *gin.Context) {
		c.JSON(200, gin.H{"message": "pong"})
	})

	r.GET("/api/leaderboard/global", GetLeaderboards)

	// Protected Routes
	api := r.Group("/api")
	api.Use(AuthMiddleware())
	{
		api.GET("/player/state", GetPlayerState)
		api.POST("/player/use-life", UseLife)
		api.POST("/player/verify-purchase", VerifyPurchase)
		api.POST("/leaderboard", SubmitScore)
	}

	// Start server
	port := os.Getenv("PORT")
	if port == "" {
		port = "8080"
	}
	
	log.Printf("Server starting on port %s", port)
	if err := r.Run(":" + port); err != nil {
		log.Fatal("Server failed:", err)
	}
}
