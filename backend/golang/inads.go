package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"
	"strings"
	"time"
)

// InAdsClient maneja la comunicación directa y segura con la plataforma InAds.
var inadsHTTPClient = &http.Client{
	Timeout: 10 * time.Second,
}

func getInAdsBaseURL() string {
	url := strings.TrimSpace(os.Getenv("INADS_API_URL"))
	if url == "" {
		return "https://inads-production.up.railway.app/api/v1"
	}
	return strings.TrimRight(url, "/")
}

func getInAdsAPIKey() string {
	key := strings.TrimSpace(os.Getenv("INADS_API_KEY"))
	if key == "" {
		// API Key por defecto de Glassy en InAds
		return "inads_live_ffba51e13f1df76753f36eeda52b31412c8ac3b93f2cae02"
	}
	return key
}

// InAdsClaimResponse mapea la respuesta de InAds al canjear código
type InAdsClaimResponse struct {
	Status  string `json:"status"`
	Code    string `json:"code"`
	Message string `json:"message"`
}

// ClaimInAdsReferral notifica a InAds cuando un jugador ingresa el código de un creador.
// Retorna (true, nil) si el código era de un influencer en InAds y fue reservado como 'pending'.
func ClaimInAdsReferral(referralCode, playerID, deviceHash string) (bool, string, error) {
	apiKey := getInAdsAPIKey()
	baseURL := getInAdsBaseURL()

	cleanCode := strings.ToUpper(strings.TrimSpace(referralCode))
	if cleanCode == "" || playerID == "" {
		return false, "Código o ID de jugador inválido", fmt.Errorf("parámetros incompletos")
	}

	if deviceHash == "" {
		deviceHash = "glassy_usr_" + playerID
	}

	payload := map[string]string{
		"referral_code": cleanCode,
		"player_id":     playerID,
		"device_hash":   deviceHash,
	}

	bodyBytes, err := json.Marshal(payload)
	if err != nil {
		return false, "Error serializando datos", err
	}

	req, err := http.NewRequest("POST", baseURL+"/referrals/claim", bytes.NewReader(bodyBytes))
	if err != nil {
		return false, "Error creando petición HTTP", err
	}

	req.Header.Set("Authorization", "Bearer "+apiKey)
	req.Header.Set("Content-Type", "application/json")

	resp, err := inadsHTTPClient.Do(req)
	if err != nil {
		log.Printf("[InAds] Error de conexión hacia InAds: %v", err)
		return false, "No se pudo conectar con el servidor de InAds", err
	}
	defer resp.Body.Close()

	respBytes, _ := io.ReadAll(resp.Body)

	var inadsResp InAdsClaimResponse
	_ = json.Unmarshal(respBytes, &inadsResp)

	if resp.StatusCode == http.StatusOK && inadsResp.Status == "success" {
		log.Printf("[InAds] Código %s canjeado exitosamente para jugador %s", cleanCode, playerID)
		return true, "Código de creador validado exitosamente", nil
	}

	// Si InAds rechazó (ej. código inválido, campaña sin fondos, etc.)
	errMsg := inadsResp.Message
	if errMsg == "" {
		errMsg = fmt.Sprintf("Error HTTP %d desde InAds", resp.StatusCode)
	}
	return false, errMsg, nil
}

// VerifyInAdsRetention notifica a InAds que el jugador cumplió los días de actividad o retención requerida.
// En ese instante InAds descuenta $0.15 de Glassy y acredita $0.10 al influencer.
func VerifyInAdsRetention(playerID string, event string) error {
	apiKey := getInAdsAPIKey()
	baseURL := getInAdsBaseURL()

	if event == "" {
		event = "retention_confirmed"
	}

	payload := map[string]string{
		"player_id": playerID,
		"event":     event,
	}

	bodyBytes, err := json.Marshal(payload)
	if err != nil {
		return err
	}

	req, err := http.NewRequest("POST", baseURL+"/referrals/verify", bytes.NewReader(bodyBytes))
	if err != nil {
		return err
	}

	req.Header.Set("Authorization", "Bearer "+apiKey)
	req.Header.Set("Content-Type", "application/json")

	resp, err := inadsHTTPClient.Do(req)
	if err != nil {
		log.Printf("[InAds] Error verificando retención en InAds para %s: %v", playerID, err)
		return err
	}
	defer resp.Body.Close()

	respBytes, _ := io.ReadAll(resp.Body)
	log.Printf("[InAds] Verificación enviada para jugador %s (HTTP %d): %s", playerID, resp.StatusCode, string(respBytes))
	return nil
}

