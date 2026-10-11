//go:build ignore

package main

import (
	"database/sql"
	"fmt"
	"log"
	"os"

	"github.com/joho/godotenv"
	_ "github.com/lib/pq"
)

func main() {
	err := godotenv.Load("../.env")
	if err != nil {
		log.Println("No .env file found")
	}

	dbUrl := os.Getenv("DATABASE_URL")
	if dbUrl == "" {
		log.Fatal("DATABASE_URL not set")
	}

	db, err := sql.Open("postgres", dbUrl)
	if err != nil {
		log.Fatal(err)
	}
	defer db.Close()

	var userID string
	err = db.QueryRow("SELECT id FROM auth.users WHERE email = $1", "0805409802d@gmail.com").Scan(&userID)
	if err != nil {
		log.Fatal("User not found: ", err)
	}

	skins := []string{
		"vida_marina",
		"Dinosaurios",
		"Dulces_de_Halloween",
		"Caldero_de_Bruja",
		"Cementerio_Encantado",
		"Cultivo_de_Calabazas",
		"Ajedrez_Magico",
		"Alquimia_Antigua",
		"Flores_Magicas",
		"Frutas_Jugosas",
		"Hongos_Brillantes",
		"Monstruos_de_Bolsillo",
		"Mundo_Dulce",
		"Planetas",
		"Sushi_Japones",
	}

	for _, skin := range skins {
		_, err = db.Exec("INSERT INTO public.user_skins (user_id, skin_id) VALUES ($1, $2) ON CONFLICT DO NOTHING", userID, skin)
		if err != nil {
			log.Println("Error inserting skin", skin, err)
		} else {
			fmt.Println("Unlocked skin:", skin)
		}
	}

	_, err = db.Exec("UPDATE public.users SET crystals = 999999 WHERE id = $1", userID)
	if err != nil {
		log.Println("Error updating crystals", err)
	} else {
		fmt.Println("Added 999999 crystals to the user.")
	}

	fmt.Println("Done")
}
