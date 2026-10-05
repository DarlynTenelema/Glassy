package main

import (
	"encoding/json"
	"fmt"
	"log"
	"os"

	"github.com/joho/godotenv"
)

func main() {
	err := godotenv.Load(".env")
	if err != nil {
		log.Fatalf("Error loading .env file: %v", err)
	}

	credentialsJSON := os.Getenv("GOOGLE_CREDENTIALS_JSON")
	fmt.Printf("Raw GOOGLE_CREDENTIALS_JSON from .env length: %d\n", len(credentialsJSON))

	var data map[string]interface{}
	err = json.Unmarshal([]byte(credentialsJSON), &data)
	if err != nil {
		fmt.Printf("JSON unmarshal error: %v\n", err)
		return
	}

	fmt.Println("JSON parses successfully!")
	if key, ok := data["private_key"].(string); ok {
		fmt.Printf("Private key starts with: %s\n", key[:30])
	} else {
		fmt.Println("No private_key found")
	}
}
