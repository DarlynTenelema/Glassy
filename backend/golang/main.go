package main

import (
	"log"
	"os"
	"strings"

	"github.com/gin-gonic/gin"
	"github.com/joho/godotenv"
)

func main() {
	// Cargar .env si existe (solo para desarrollo local).
	// En Railway/producción, las variables de entorno se configuran en el panel.
	_ = godotenv.Load()

	// Inicializar conexión a BD y autenticación JWT
	InitDB()
	InitAuth()

	// Configurar modo de Gin (release en producción)
	if os.Getenv("GIN_MODE") == "release" {
		gin.SetMode(gin.ReleaseMode)
	}

	r := gin.Default()

	// =========================================================================
	// CORS Middleware
	// Permite peticiones desde el cliente Unity (WebGL / Capacitor / local dev).
	// =========================================================================
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
		c.Writer.Header().Set("Access-Control-Allow-Headers", "Authorization, Content-Type")

		if c.Request.Method == "OPTIONS" {
			c.AbortWithStatus(204)
			return
		}
		c.Next()
	})

	// =========================================================================
	// RUTAS PÚBLICAS (no requieren autenticación)
	// =========================================================================

	// Health check — útil para Railway y para verificar que el servidor está vivo
	r.GET("/ping", func(c *gin.Context) {
		c.JSON(200, gin.H{"status": "ok", "service": "glassy-backend"})
	})

	// Leaderboard global — público para que cualquiera pueda verlo
	r.GET("/api/leaderboard/global", GetLeaderboards)

	// =========================================================================
	// RUTAS PROTEGIDAS (requieren JWT de Supabase en el header Authorization)
	// =========================================================================
	api := r.Group("/api")
	api.Use(AuthMiddleware())
	{
		// Wallet
		api.GET("/player/wallet", GetPlayerWallet)

		// Leaderboard — enviar score al terminar partida
		api.POST("/leaderboard", SubmitScore)

		// Settings — leer y guardar configuración del jugador
		api.GET("/player/settings", GetSettings)
		api.POST("/player/settings", SaveSettings)

		// Ad reward — reclamar cristales por ver video de AdMob
		api.POST("/player/ad-reward", ClaimAdReward)

		// Compras — verificar y acreditar compra de Google Play Billing
		api.POST("/player/verify-purchase", VerifyPurchase)
	}

	// =========================================================================
	// ARRANCAR SERVIDOR
	// =========================================================================
	port := os.Getenv("PORT")
	if port == "" {
		port = "8080"
	}

	log.Printf("🚀 Glassy Backend starting on port %s", port)
	if err := r.Run(":" + port); err != nil {
		log.Fatal("Server failed to start:", err)
	}
}
