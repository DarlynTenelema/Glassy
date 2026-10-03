package main

import (
	"database/sql"
	"net/http"
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

	// Pagar 0.10 al partner
	_, err = tx.Exec(`
		UPDATE partners 
		SET total_earnings = total_earnings + 0.10,
		    available_balance = available_balance + 0.10
		WHERE id = $1
	`, partnerID)
	if err != nil {
		return
	}

	tx.Commit()
}

// PartnerDashboardResponse represents the data shown to the partner
type PartnerDashboardResponse struct {
	PartnerCode      string  `json:"partner_code"`
	PayPalEmail      string  `json:"paypal_email"`
	TotalEarnings    float64 `json:"total_earnings"`
	AvailableBalance float64 `json:"available_balance"`
	TotalInstalls    int     `json:"total_installs"`
	InProgressUsers  int     `json:"in_progress_users"`
	ConfirmedUsers   int     `json:"confirmed_users"`
}

// RegisterPartner allows a user to become a partner
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
	`, userID, code)

	if err != nil {
		if strings.Contains(err.Error(), "unique constraint") {
			c.JSON(http.StatusConflict, gin.H{"error": "Partner code already in use"})
			return
		}
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to register partner"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"message": "Welcome to Glassy Partners!"})
}

// GetPartnerDashboard fetches stats for the partner
// GET /api/partner/dashboard
func GetPartnerDashboard(c *gin.Context) {
	userID := c.GetString("user_id")

	var dash PartnerDashboardResponse
	var paypal sql.NullString

	// Obtener datos básicos del partner
	err := DB.QueryRow(`
		SELECT partner_code, paypal_email, total_earnings, available_balance
		FROM partners WHERE id = $1
	`, userID).Scan(&dash.PartnerCode, &paypal, &dash.TotalEarnings, &dash.AvailableBalance)

	if err != nil {
		c.JSON(http.StatusNotFound, gin.H{"error": "Partner profile not found"})
		return
	}
	dash.PayPalEmail = paypal.String

	// Obtener estadísticas de referidos
	err = DB.QueryRow(`
		SELECT 
			COUNT(*) as total,
			COALESCE(SUM(CASE WHEN status = 'in_progress' THEN 1 ELSE 0 END), 0) as in_progress,
			COALESCE(SUM(CASE WHEN status = 'confirmed' THEN 1 ELSE 0 END), 0) as confirmed
		FROM partner_referrals WHERE partner_id = $1
	`, userID).Scan(&dash.TotalInstalls, &dash.InProgressUsers, &dash.ConfirmedUsers)

	if err != nil {
		// Log the error but continue
		dash.TotalInstalls = 0
		dash.InProgressUsers = 0
		dash.ConfirmedUsers = 0
	}

	c.JSON(http.StatusOK, dash)
}

// UpdatePayPal allows partner to set or update payment email
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

// RequestWithdrawal allows a partner to request a payout if balance >= 100
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

	if !paypal.Valid || paypal.String == "" {
		c.JSON(http.StatusBadRequest, gin.H{"error": "You must configure a PayPal email first"})
		return
	}

	if availableBalance < 100.00 {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Minimum withdrawal is $100.00"})
		return
	}

	// Insertar solicitud de retiro
	_, err = tx.Exec(`
		INSERT INTO partner_withdrawals (partner_id, amount) 
		VALUES ($1, $2)
	`, userID, availableBalance)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to create withdrawal request"})
		return
	}

	// Restar el saldo disponible (se pasa a retiro)
	_, err = tx.Exec(`
		UPDATE partners SET available_balance = 0 WHERE id = $1
	`, userID)

	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Failed to update balance"})
		return
	}

	tx.Commit()

	c.JSON(http.StatusOK, gin.H{"message": "Withdrawal request submitted successfully! Payout in 15 days."})
}
