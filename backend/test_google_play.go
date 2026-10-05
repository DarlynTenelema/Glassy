package main

import (
	"context"
	"fmt"
	"log"
	"os"
	"strings"

	"github.com/joho/godotenv"
	"google.golang.org/api/androidpublisher/v3"
	"google.golang.org/api/option"
)

func main() {
	_ = godotenv.Load("../.env")
	credentialsJSON := os.Getenv("GOOGLE_CREDENTIALS_JSON")

	// The .env might have been parsed wrong if multiline quotes are not handled.
	// Let's strip the extra quotes if they exist.
	if strings.HasPrefix(credentialsJSON, "\"") && strings.HasSuffix(credentialsJSON, "\"") {
		credentialsJSON = credentialsJSON[1 : len(credentialsJSON)-1]
	}

	if credentialsJSON == "" {
		log.Fatal("GOOGLE_CREDENTIALS_JSON is empty")
	}

	ctx := context.Background()
	service, err := androidpublisher.NewService(ctx, option.WithCredentialsJSON([]byte(credentialsJSON)))
	if err != nil {
		log.Fatalf("Failed to initialize service: %v", err)
	}

	// Try to fetch a dummy purchase to test connectivity and permissions
	packageName := "com.darlyntenelema.glassy"
	_, err = service.Purchases.Products.Get(packageName, "glass_pack_100", "dummy_token").Do()
	if err != nil {
		fmt.Printf("API Call Error: %v\n", err)
	} else {
		fmt.Println("API Call Success!")
	}
}
