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

		isAllowed := false
		if allowedOrigins == "*" {
			isAllowed = true
		} else {
			for _, o := range strings.Split(allowedOrigins, ",") {
				if strings.TrimSpace(o) == origin {
					isAllowed = true
					break
				}
			}
		}

		if isAllowed {
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

		// Ad reward — reclamar lapislázulis por ver video de AdMob
		api.POST("/player/ad-reward", ClaimAdReward)

		// Compras — verificar y acreditar compra de Google Play Billing
		api.POST("/player/verify-purchase", VerifyPurchase)
		api.GET("/player/store-status", GetStoreStatus)

		// Skins (Tienda)
		api.GET("/player/skins", GetSkins)
		api.POST("/player/skins/buy", BuySkin)
		api.POST("/player/skins/equip", EquipSkin)

		// Economía — Calendario Diario, Misiones y Piggy Bank
		api.GET("/player/economy", GetEconomyStatus)
		api.POST("/player/claim-daily", ClaimDailyReward)
		api.POST("/player/mission/update", UpdateMissionProgress)
		api.POST("/player/mission/claim", ClaimMissionReward)
		api.POST("/player/piggy-bank/claim", ClaimPiggyBank)
		api.POST("/player/spend-crystals", SpendCrystals)
		
		// Referidos - Glassy Partners
		api.POST("/player/referral", SetReferralCode)

		// Logros (Achievements)
		api.GET("/player/achievements/status", GetAchievementsStatus)
		api.POST("/player/achievements/tiktok", SubmitTikTokLink)
		api.POST("/player/achievements/progress", UpdateAchievementProgress)
		api.POST("/player/achievements/claim", ClaimAchievementReward)

		// Cofres de Tiempo
		api.POST("/player/claim-chest", ClaimChest)

		// ==========================================
		// GLASSY PARTNERS ROUTES
		// ==========================================
		api.POST("/partner/register", RegisterPartner)
		api.GET("/partner/dashboard", GetPartnerDashboard)
		api.POST("/partner/paypal", UpdatePayPal)
		api.POST("/partner/withdraw", RequestWithdrawal)
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
