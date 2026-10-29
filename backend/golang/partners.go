package main

import (
	"crypto/rand"
	"database/sql"
	"encoding/hex"
	"net/http"
	"os"
	"strings"
	"time"

	"github.com/gin-gonic/gin"
)

// ProcessPartnerReferralConfirmation handles the 15-day logic async
func ProcessPartnerReferralConfirmation(userID string) {
	tx, err := DB.Begin()
	if err != nil {
		return
	}
	defer tx.Rollback()

	var partnerID string
	err = tx.QueryRow(`
		SELECT partner_id FROM partner_referrals 
		WHERE user_id = $1 AND status = 'in_progress' FOR UPDATE
	`, userID).Scan(&partnerID)

	if err != nil {
		return // Ya confirmado o no existe
	}

	// Confirmar el referido
	_, err = tx.Exec(`
		UPDATE partner_referrals 
		SET status = 'confirmed', confirmed_at = $1 
		WHERE user_id = $2
	`, time.Now().UTC(), userID)
	if err != nil {
		return
	}

	// Acreditar bono base inicial al partner ($0.10)
	_, err = tx.Exec(`
		UPDATE partners 
		SET total_earnings = total_earnings + 0.10,
		    available_balance = available_balance + 0.10
		WHERE id = $1
	`, partnerID)
	if err != nil {
		return
	}

	_ = tx.Commit()
}

// PartnerSaleItem representa una compra IAP de la comunidad con su 25% de comisión
type PartnerSaleItem struct {
	PackageID     string    `json:"package_id"`
	AmountUSD     float64   `json:"amount_usd"`
	CommissionUSD float64   `json:"commission_usd"`
	CreatedAt     time.Time `json:"created_at"`
}

// PartnerDashboardResponse representa los datos completos del dashboard del socio
type PartnerDashboardResponse struct {
	PartnerCode       string            `json:"partner_code"`
	Name              string            `json:"name"`
	PayPalEmail       string            `json:"paypal_email"`
	TotalEarnings     float64           `json:"total_earnings"`
	AvailableBalance  float64           `json:"available_balance"`
	TotalSalesUSD     float64           `json:"total_sales_usd"`
	CommissionRate    float64           `json:"commission_rate"`
	TotalInstalls     int               `json:"total_installs"`
	InProgressUsers   int               `json:"in_progress_users"`
	ConfirmedUsers    int               `json:"confirmed_users"`
	RecentSales       []PartnerSaleItem `json:"recent_sales"`
	DownloadTikTokURL string            `json:"download_tiktok_url"`
}

// RegisterPartner permite a un usuario registrar un código personalizado de partner
// POST /api/partner/register
func RegisterPartner(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		PartnerCode string `json:"partner_code" binding:"required"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	code := strings.ToUpper(strings.TrimSpace(req.PartnerCode))

	_, err := DB.Exec(`
		INSERT INTO partners (id, partner_code) 
		VALUES ($1, $2)
		ON CONFLICT (id) DO UPDATE SET partner_code = $2
	`, userID, code)

	if err != nil {
		if strings.Contains(err.Error(), "unique constraint") {
			c.JSON(http.StatusConflict, gin.H{"error": "Partner code already in use"})
			return
		}
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to register partner"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Welcome to Glassy Partners!", "partner_code": code})
}

// GetPartnerDashboard obtiene las métricas completas del influencer / streamer (Rev-Share 25%)
// GET /api/partner/dashboard
func GetPartnerDashboard(c *gin.Context) {
	userID := c.GetString("user_id")

	var dash PartnerDashboardResponse
	var paypal sql.NullString
	var totalSales sql.NullFloat64

	// Obtener el nombre del usuario
	var userName string
	_ = DB.QueryRow(`SELECT COALESCE(name, 'Creador') FROM users WHERE id = $1`, userID).Scan(&userName)
	if userName == "" {
		userName = "Creador"
	}
	dash.Name = userName
	dash.CommissionRate = 0.25 // 25% de Rev-Share oficial

	// Intentar consultar datos de la tabla partners
	err := DB.QueryRow(`
		SELECT partner_code, paypal_email, total_earnings, available_balance, total_sales_usd
		FROM partners WHERE id = $1
	`, userID).Scan(&dash.PartnerCode, &paypal, &dash.TotalEarnings, &dash.AvailableBalance, &totalSales)

	if err != nil {
		// Auto-registro fluido: si entra al dashboard por primera vez, se le genera un código único
		generatedCode := generateUniquePartnerCode(userName)
		_, insertErr := DB.Exec(`
			INSERT INTO partners (id, partner_code, total_earnings, available_balance, total_sales_usd)
			VALUES ($1, $2, 0.00, 0.00, 0.00)
			ON CONFLICT (id) DO NOTHING
		`, userID, generatedCode)

		if insertErr == nil {
			dash.PartnerCode = generatedCode
		} else {
			dash.PartnerCode = "CREADOR"
		}
		dash.PayPalEmail = ""
		dash.TotalEarnings = 0.00
		dash.AvailableBalance = 0.00
		dash.TotalSalesUSD = 0.00
	} else {
		dash.PayPalEmail = paypal.String
		if totalSales.Valid {
			dash.TotalSalesUSD = totalSales.Float64
		}
	}

	// Obtener estadísticas de instalaciones y referidos
	_ = DB.QueryRow(`
		SELECT 
			COUNT(*) as total,
			COALESCE(SUM(CASE WHEN status = 'in_progress' THEN 1 ELSE 0 END), 0) as in_progress,
			COALESCE(SUM(CASE WHEN status = 'confirmed' THEN 1 ELSE 0 END), 0) as confirmed
		FROM partner_referrals WHERE partner_id = $1
	`, userID).Scan(&dash.TotalInstalls, &dash.InProgressUsers, &dash.ConfirmedUsers)

	// Obtener historial de las últimas 10 ventas IAP de su comunidad
	rows, errSales := DB.Query(`
		SELECT package_id, amount_usd, commission_usd, created_at
		FROM partner_sales
		WHERE partner_id = $1
		ORDER BY created_at DESC
		LIMIT 10
	`, userID)

	dash.RecentSales = make([]PartnerSaleItem, 0)
	if errSales == nil && rows != nil {
		defer rows.Close()
		for rows.Next() {
			var item PartnerSaleItem
			if errScan := rows.Scan(&item.PackageID, &item.AmountUSD, &item.CommissionUSD, &item.CreatedAt); errScan == nil {
				dash.RecentSales = append(dash.RecentSales, item)
			}
		}
	}

	// Enlace de descarga de la versión para TikTok Live (Streamer Edition)
	downloadURL := os.Getenv("TIKTOK_DOWNLOAD_URL")
	if downloadURL == "" {
		downloadURL = "/api/download/tiktok-live"
	}
	dash.DownloadTikTokURL = downloadURL

	c.JSON(http.StatusOK, dash)
}

// GetPartnerSalesHistory devuelve el historial paginado de ventas
// GET /api/partner/sales
func GetPartnerSalesHistory(c *gin.Context) {
	userID := c.GetString("user_id")

	rows, err := DB.Query(`
		SELECT package_id, amount_usd, commission_usd, created_at
		FROM partner_sales
		WHERE partner_id = $1
		ORDER BY created_at DESC
		LIMIT 50
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to fetch sales history"})
		return
	}
	defer rows.Close()

	sales := make([]PartnerSaleItem, 0)
	for rows.Next() {
		var item PartnerSaleItem
		if err := rows.Scan(&item.PackageID, &item.AmountUSD, &item.CommissionUSD, &item.CreatedAt); err == nil {
			sales = append(sales, item)
		}
	}

	c.JSON(http.StatusOK, gin.H{"sales": sales})
}

// UpdatePayPal actualiza el correo electrónico de PayPal para los retiros
// POST /api/partner/paypal
func UpdatePayPal(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		PayPalEmail string `json:"paypal_email" binding:"required,email"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid email format"})
		return
	}

	_, err := DB.Exec(`
		UPDATE partners SET paypal_email = $1 WHERE id = $2
	`, req.PayPalEmail, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update PayPal email"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "PayPal email updated successfully"})
}

// RequestWithdrawal solicita un retiro cuando el saldo acumulado es >= $100.00 USD
// POST /api/partner/withdraw
func RequestWithdrawal(c *gin.Context) {
	userID := c.GetString("user_id")

	tx, err := DB.Begin()
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Database error"})
		return
	}
	defer tx.Rollback()

	var availableBalance float64
	var paypal sql.NullString
	err = tx.QueryRow(`
		SELECT available_balance, paypal_email 
		FROM partners WHERE id = $1 FOR UPDATE
	`, userID).Scan(&availableBalance, &paypal)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "Partner not found"})
		return
	}

	if !paypal.Valid || strings.TrimSpace(paypal.String) == "" {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Debes configurar un correo de PayPal antes de solicitar un retiro"})
		return
	}

	if availableBalance < 100.00 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "El retiro mínimo es de $100.00 USD"})
		return
	}

	// Insertar solicitud de retiro
	_, err = tx.Exec(`
		INSERT INTO partner_withdrawals (partner_id, amount, paypal_email, status) 
		VALUES ($1, $2, $3, 'PENDING')
	`, userID, availableBalance, paypal.String)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to create withdrawal request"})
		return
	}

	// Deducir el saldo disponible transferido al retiro
	_, err = tx.Exec(`
		UPDATE partners SET available_balance = 0 WHERE id = $1
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update balance"})
		return
	}

	if err := tx.Commit(); err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Commit failed"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"message": "Solicitud de retiro enviada con éxito. El pago se procesará en 15 días hábiles a " + paypal.String,
	})
}

// DownloadTikTokLiveBuild proporciona la descarga de la edición para TikTok Live
// GET /api/download/tiktok-live
func DownloadTikTokLiveBuild(c *gin.Context) {
	redirectURL := os.Getenv("TIKTOK_DOWNLOAD_URL")
	if redirectURL != "" {
		c.Redirect(http.StatusFound, redirectURL)
		return
	}

	// Respuesta informativa si no hay URL externa configurada aún
	c.JSON(http.StatusOK, gin.H{
		"name":         "Glassy TikTok Live Streamer Edition",
		"version":      "1.0.0-streamer",
		"platform":     "Windows PC (1920x1080 Standalone)",
		"download_url": "https://github.com/DarlynTenelema/Glassy/releases/latest",
		"instructions": "Descomprime el archivo ZIP y ejecuta Glassy.exe para iniciar la transmisión en TikTok LIVE Studio u OBS.",
	})
}

// Helper para generar código único de partner
func generateUniquePartnerCode(name string) string {
	cleanName := strings.ToUpper(strings.ReplaceAll(name, " ", ""))
	if len(cleanName) > 6 {
		cleanName = cleanName[:6]
	}
	if cleanName == "" {
		cleanName = "STREAM"
	}

	b := make([]byte, 2)
	_, _ = rand.Read(b)
	suffix := hex.EncodeToString(b)
	return cleanName + "-" + strings.ToUpper(suffix)
}

// =========================================================================
// STREAMER SKILLS (TIKTOK LIVE AUTOMATIONS & MONETIZATION)
// =========================================================================

// SkillStateDTO representa el estado de desbloqueo y activación de una skill
type SkillStateDTO struct {
	Unlocked bool `json:"unlocked"`
	Enabled  bool `json:"enabled"`
}

// StreamSkillsConfigResponseDTO representa la respuesta enviada a Unity (C#)
type StreamSkillsConfigResponseDTO struct {
	Status            string        `json:"status"`
	PartnerCode       string        `json:"partner_code"`
	AutoPlayer        SkillStateDTO `json:"auto_player"`
	AvatarGem         SkillStateDTO `json:"avatar_gem"`
	ChallengeRoulette SkillStateDTO `json:"challenge_roulette"`
	EmergencyShield   SkillStateDTO `json:"emergency_shield"`
	VoiceAssistant    SkillStateDTO `json:"voice_assistant"`
}

// GetPartnerStreamConfig provee la configuración de las 5 skills a Unity en tiempo real
// GET /api/partner/stream-config?code=STREAMER77
func GetPartnerStreamConfig(c *gin.Context) {
	code := strings.ToUpper(strings.TrimSpace(c.Query("code")))
	if code == "" {
		code = "DEMO"
	}

	// Por defecto para streamers normales (requieren suscripción):
	resp := StreamSkillsConfigResponseDTO{
		Status:            "ok",
		PartnerCode:       code,
		AutoPlayer:        SkillStateDTO{Unlocked: false, Enabled: false},
		AvatarGem:         SkillStateDTO{Unlocked: false, Enabled: false},
		ChallengeRoulette: SkillStateDTO{Unlocked: false, Enabled: false},
		EmergencyShield:   SkillStateDTO{Unlocked: false, Enabled: false},
		VoiceAssistant:    SkillStateDTO{Unlocked: false, Enabled: false},
	}

	// 👑 MODO CREADOR / PROPIETARIO: El creador del juego tiene acceso VIP 100% gratuito de por vida
	isCreatorCode := code == "DARLYN" || code == "ADMIN" || code == "CREATOR" || code == "STREAMER77" || code == "DEMO"
	if isCreatorCode {
		resp.AutoPlayer = SkillStateDTO{Unlocked: true, Enabled: true}
		resp.AvatarGem = SkillStateDTO{Unlocked: true, Enabled: true}
		resp.ChallengeRoulette = SkillStateDTO{Unlocked: true, Enabled: true}
		resp.EmergencyShield = SkillStateDTO{Unlocked: true, Enabled: true}
		resp.VoiceAssistant = SkillStateDTO{Unlocked: true, Enabled: true}
	}

	var partnerID string
	err := DB.QueryRow("SELECT id FROM partners WHERE partner_code = $1", code).Scan(&partnerID)
	if err == nil {
		rows, err := DB.Query(`SELECT skill_id, is_unlocked, is_enabled FROM partner_skills WHERE partner_id = $1`, partnerID)
		if err == nil {
			defer rows.Close()
			for rows.Next() {
				var skillID string
				var unlocked, enabled bool
				if err := rows.Scan(&skillID, &unlocked, &enabled); err == nil {
					switch skillID {
					case "skill_auto_player", "auto_player":
						resp.AutoPlayer = SkillStateDTO{Unlocked: unlocked, Enabled: enabled}
					case "skill_avatar_gem", "avatar_gem":
						resp.AvatarGem = SkillStateDTO{Unlocked: unlocked, Enabled: enabled}
					case "skill_challenge_roulette", "challenge_roulette":
						resp.ChallengeRoulette = SkillStateDTO{Unlocked: unlocked, Enabled: enabled}
					case "skill_emergency_shield", "emergency_shield":
						resp.EmergencyShield = SkillStateDTO{Unlocked: unlocked, Enabled: enabled}
					case "skill_voice_assistant", "voice_assistant":
						resp.VoiceAssistant = SkillStateDTO{Unlocked: unlocked, Enabled: enabled}
					}
				}
			}
		}
	}

	c.JSON(http.StatusOK, resp)
}

// TogglePartnerSkill permite al creador encender o apagar una skill desde la web
// POST /api/partner/skills/toggle
func TogglePartnerSkill(c *gin.Context) {
	userID := c.GetString("user_id")

	var req struct {
		SkillID string `json:"skill_id" binding:"required"`
		Enabled bool   `json:"enabled"`
	}
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request body"})
		return
	}

	_, err := DB.Exec(`
		INSERT INTO partner_skills (partner_id, skill_id, is_unlocked, is_enabled, updated_at)
		VALUES ($1, $2, TRUE, $3, NOW())
		ON CONFLICT (partner_id, skill_id) DO UPDATE SET is_enabled = $3, updated_at = NOW()
	`, userID, req.SkillID, req.Enabled)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to toggle skill"})
		return
	}

	c.JSON(http.StatusOK, gin.H{
		"message":  "Skill actualizada con éxito",
		"skill_id": req.SkillID,
		"enabled":  req.Enabled,
	})
}

