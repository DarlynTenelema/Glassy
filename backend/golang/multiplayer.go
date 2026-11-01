package main

import (
	"encoding/json"
	"log"
	"math/rand"
	"net/http"
	"sync"
	"time"

	"github.com/gin-gonic/gin"
	"github.com/gorilla/websocket"
)

var upgrader = websocket.Upgrader{
	CheckOrigin: func(r *http.Request) bool {
		return true // Permitir conexiones desde cualquier origen en el juego
	},
}

// Mensaje genérico de WebSocket
type WsMessage struct {
	Action   string          `json:"action"`             // "MATCHMAKING", "CREATE_ROOM", "JOIN_ROOM", "ATTACK", "STATUS", "GAME_OVER"
	RoomCode string          `json:"roomCode,omitempty"` // Código de sala (ej. "GLAS1")
	GemType  int             `json:"gemType,omitempty"`  // Tipo de gema para ataque (0=Pearl, 1=Emerald, etc.)
	Count    int             `json:"count,omitempty"`    // Cantidad de gemas enviadas
	Score    int             `json:"score,omitempty"`    // Puntaje actual
	IsDanger bool            `json:"isDanger,omitempty"` // Si está en zona de peligro
	Message  string          `json:"message,omitempty"`  // Mensaje informativo
	Winner   string          `json:"winner,omitempty"`   // Ganador
	Payload  json.RawMessage `json:"payload,omitempty"`
}

type PlayerClient struct {
	ID       string
	Conn     *websocket.Conn
	Send     chan []byte
	Room     *MultiplayerRoom
	Score    int
	IsDanger bool
	mu       sync.Mutex
}

type MultiplayerRoom struct {
	Code      string
	Player1   *PlayerClient
	Player2   *PlayerClient
	TeamBlue  []*PlayerClient
	TeamRed   []*PlayerClient
	Is2v2     bool
	IsPrivate bool
	IsPlaying bool
	mu        sync.Mutex
}

type MultiplayerHub struct {
	rooms      map[string]*MultiplayerRoom
	waitingP   *PlayerClient
	register   chan *PlayerClient
	unregister chan *PlayerClient
	mu         sync.Mutex
}

var Hub = &MultiplayerHub{
	rooms:      make(map[string]*MultiplayerRoom),
	register:   make(chan *PlayerClient),
	unregister: make(chan *PlayerClient),
}

func init() {
	go Hub.run()
}

func (h *MultiplayerHub) run() {
	for {
		select {
		case client := <-h.unregister:
			h.mu.Lock()
			if h.waitingP == client {
				h.waitingP = nil
			}
			if client.Room != nil {
				room := client.Room
				room.mu.Lock()
				var opponent *PlayerClient
				if room.Player1 == client {
					opponent = room.Player2
				} else {
					opponent = room.Player1
				}
				room.mu.Unlock()

				if opponent != nil {
					opponent.sendMessage(WsMessage{
						Action:  "OPPONENT_DISCONNECTED",
						Message: "Tu oponente se ha desconectado. ¡Has ganado por abandono!",
						Winner:  "YOU",
					})
				}
				delete(h.rooms, room.Code)
			}
			close(client.Send)
			h.mu.Unlock()
		}
	}
}

func (c *PlayerClient) sendMessage(msg WsMessage) {
	bytes, err := json.Marshal(msg)
	if err != nil {
		return
	}
	c.mu.Lock()
	defer c.mu.Unlock()
	select {
	case c.Send <- bytes:
	default:
	}
}

func generateRoomCode() string {
	const charset = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789"
	b := make([]byte, 5)
	for i := range b {
		b[i] = charset[rand.Intn(len(charset))]
	}
	return string(b)
}

// Manejador del WebSocket
func HandleMultiplayerWS(c *gin.Context) {
	conn, err := upgrader.Upgrade(c.Writer, c.Request, nil)
	if err != nil {
		log.Printf("Error actualizando WebSocket: %v", err)
		return
	}

	clientID := generateRoomCode() + "-" + time.Now().Format("150405")
	client := &PlayerClient{
		ID:   clientID,
		Conn: conn,
		Send: make(chan []byte, 64),
	}

	// Goroutine de escritura al socket
	go func() {
		defer conn.Close()
		for msg := range client.Send {
			if err := conn.WriteMessage(websocket.TextMessage, msg); err != nil {
				break
			}
		}
	}()

	// Bucle de lectura de eventos desde el cliente
	defer func() {
		Hub.unregister <- client
		conn.Close()
	}()

	for {
		_, message, err := conn.ReadMessage()
		if err != nil {
			break
		}

		var req WsMessage
		if err := json.Unmarshal(message, &req); err != nil {
			continue
		}

		switch req.Action {
		case "MATCHMAKING":
			handleMatchmaking(client)

		case "CREATE_ROOM":
			handleCreateRoom(client)

		case "CREATE_2V2_ROOM":
			handleCreate2v2Room(client)

		case "JOIN_ROOM":
			handleJoinRoom(client, req.RoomCode)

		case "CHOOSE_TEAM":
			handleChooseTeam(client, req.Message)

		case "ATTACK":
			handleAttack(client, req.GemType, req.Count)

		case "STATUS":
			handleStatus(client, req.Score, req.IsDanger)

		case "SURRENDER":
			handleSurrender(client)

		case "START_2V2_MATCH":
			handleStart2v2Match(client)

		case "GAME_OVER":
			handleGameOver(client)
		}
	}
}

func handleMatchmaking(client *PlayerClient) {
	Hub.mu.Lock()
	defer Hub.mu.Unlock()

	if Hub.waitingP == nil || Hub.waitingP == client {
		// Poner al jugador en espera de rival
		Hub.waitingP = client
		client.sendMessage(WsMessage{
			Action:  "SEARCHING_OPPONENT",
			Message: "Buscando oponente online...",
		})
	} else {
		// Emparejar con el jugador en espera
		opponent := Hub.waitingP
		Hub.waitingP = nil

		code := generateRoomCode()
		room := &MultiplayerRoom{
			Code:      code,
			Player1:   opponent,
			Player2:   client,
			IsPlaying: true,
		}

		opponent.Room = room
		client.Room = room
		Hub.rooms[code] = room

		opponent.sendMessage(WsMessage{
			Action:   "MATCH_FOUND",
			RoomCode: code,
			Message:  "¡Oponente encontrado! Iniciando partida...",
			Winner:   "P1",
		})

		client.sendMessage(WsMessage{
			Action:   "MATCH_FOUND",
			RoomCode: code,
			Message:  "¡Oponente encontrado! Iniciando partida...",
			Winner:   "P2",
		})
	}
}

func handleCreateRoom(client *PlayerClient) {
	Hub.mu.Lock()
	defer Hub.mu.Unlock()

	code := generateRoomCode()
	room := &MultiplayerRoom{
		Code:      code,
		Player1:   client,
		IsPrivate: true,
	}
	client.Room = room
	Hub.rooms[code] = room

	client.sendMessage(WsMessage{
		Action:   "ROOM_CREATED",
		RoomCode: code,
		Message:  "Sala creada. Comparte el código con un amigo.",
	})
}

func handleJoinRoom(client *PlayerClient, code string) {
	Hub.mu.Lock()
	defer Hub.mu.Unlock()

	room, exists := Hub.rooms[code]
	if !exists || room.IsPlaying {
		client.sendMessage(WsMessage{
			Action:  "JOIN_ERROR",
			Message: "La sala no existe o ya está en partida.",
		})
		return
	}

	if room.Is2v2 {
		total := len(room.TeamBlue) + len(room.TeamRed)
		if total >= 4 {
			client.sendMessage(WsMessage{
				Action:  "JOIN_ERROR",
				Message: "La sala 2v2 ya está llena (4/4 jugadores).",
			})
			return
		}

		if len(room.TeamBlue) <= len(room.TeamRed) {
			room.TeamBlue = append(room.TeamBlue, client)
		} else {
			room.TeamRed = append(room.TeamRed, client)
		}
		client.Room = room
		broadcast2v2Roster(room)
		return
	}

	if room.Player2 != nil {
		client.sendMessage(WsMessage{
			Action:  "JOIN_ERROR",
			Message: "La sala 1v1 ya está llena.",
		})
		return
	}

	room.Player2 = client
	room.IsPlaying = true
	client.Room = room

	room.Player1.sendMessage(WsMessage{
		Action:   "MATCH_FOUND",
		RoomCode: code,
		Message:  "¡Tu amigo se ha conectado!",
		Winner:   "P1",
	})

	client.sendMessage(WsMessage{
		Action:   "MATCH_FOUND",
		RoomCode: code,
		Message:  "¡Conectado a la sala!",
		Winner:   "P2",
	})
}

func handleCreate2v2Room(client *PlayerClient) {
	Hub.mu.Lock()
	defer Hub.mu.Unlock()

	code := "2V2-" + generateRoomCode()[:4]
	room := &MultiplayerRoom{
		Code:      code,
		TeamBlue:  []*PlayerClient{client},
		TeamRed:   make([]*PlayerClient, 0),
		Is2v2:     true,
		IsPrivate: true,
	}
	client.Room = room
	Hub.rooms[code] = room

	client.sendMessage(WsMessage{
		Action:   "ROOM_CREATED",
		RoomCode: code,
		Message:  "Sala 2v2 creada. Comparte el código con tus amigos para elegir bando.",
	})
	broadcast2v2Roster(room)
}

func handleChooseTeam(client *PlayerClient, team string) {
	room := client.Room
	if room == nil || !room.Is2v2 {
		return
	}

	room.mu.Lock()
	defer room.mu.Unlock()

	// Remover de listas actuales
	newBlue := make([]*PlayerClient, 0)
	for _, p := range room.TeamBlue {
		if p != client {
			newBlue = append(newBlue, p)
		}
	}
	room.TeamBlue = newBlue

	newRed := make([]*PlayerClient, 0)
	for _, p := range room.TeamRed {
		if p != client {
			newRed = append(newRed, p)
		}
	}
	room.TeamRed = newRed

	if team == "RED" {
		room.TeamRed = append(room.TeamRed, client)
	} else {
		room.TeamBlue = append(room.TeamBlue, client)
	}

	broadcast2v2Roster(room)
}

func broadcast2v2Roster(room *MultiplayerRoom) {
	type SlotInfo struct {
		ID   string `json:"id"`
		Slot int    `json:"slot"`
	}
	blueSlots := make([]SlotInfo, 0)
	for i, p := range room.TeamBlue {
		blueSlots = append(blueSlots, SlotInfo{ID: p.ID, Slot: i + 1})
	}
	redSlots := make([]SlotInfo, 0)
	for i, p := range room.TeamRed {
		redSlots = append(redSlots, SlotInfo{ID: p.ID, Slot: i + 3})
	}

	payload, _ := json.Marshal(map[string]interface{}{
		"roomCode":  room.Code,
		"blueTeam":  blueSlots,
		"redTeam":   redSlots,
		"totalBlue": len(blueSlots),
		"totalRed":  len(redSlots),
	})

	for _, p := range append(room.TeamBlue, room.TeamRed...) {
		if p != nil {
			p.sendMessage(WsMessage{
				Action:   "ROSTER_UPDATE",
				RoomCode: room.Code,
				Payload:  payload,
			})
		}
	}
}

func handleStart2v2Match(client *PlayerClient) {
	room := client.Room
	if room == nil || !room.Is2v2 {
		return
	}

	room.mu.Lock()
	room.IsPlaying = true
	room.mu.Unlock()

	for _, p := range append(room.TeamBlue, room.TeamRed...) {
		if p != nil {
			p.sendMessage(WsMessage{
				Action:   "START_2V2_GAME",
				RoomCode: room.Code,
				Message:  "¡Partida 2v2 iniciada!",
			})
		}
	}
}

func handleSurrender(client *PlayerClient) {
	room := client.Room
	if room == nil {
		return
	}

	room.mu.Lock()
	defer room.mu.Unlock()

	client.sendMessage(WsMessage{
		Action:  "MATCH_RESULT",
		Winner:  "DEFEAT",
		Message: "Te has rendido de la partida.",
	})

	var opponent *PlayerClient
	if room.Player1 == client {
		opponent = room.Player2
	} else {
		opponent = room.Player1
	}

	if opponent != nil {
		opponent.sendMessage(WsMessage{
			Action:  "MATCH_RESULT",
			Winner:  "VICTORY",
			Message: "¡Tu rival se ha rendido! ¡Has ganado!",
		})
	}
}

func handleAttack(client *PlayerClient, gemType int, count int) {
	room := client.Room
	if room == nil {
		return
	}

	room.mu.Lock()
	defer room.mu.Unlock()

	if room.Is2v2 {
		isBlue := false
		for _, p := range room.TeamBlue {
			if p == client {
				isBlue = true
				break
			}
		}

		var targets []*PlayerClient
		if isBlue {
			targets = room.TeamRed
		} else {
			targets = room.TeamBlue
		}

		for _, target := range targets {
			if target != nil {
				target.sendMessage(WsMessage{
					Action:  "INCOMING_ATTACK",
					GemType: gemType,
					Count:   count,
				})
			}
		}
		return
	}

	var opponent *PlayerClient
	if room.Player1 == client {
		opponent = room.Player2
	} else {
		opponent = room.Player1
	}

	if opponent != nil {
		opponent.sendMessage(WsMessage{
			Action:  "INCOMING_ATTACK",
			GemType: gemType,
			Count:   count,
		})
	}
}

func handleStatus(client *PlayerClient, score int, isDanger bool) {
	room := client.Room
	if room == nil {
		return
	}

	client.Score = score
	client.IsDanger = isDanger

	room.mu.Lock()
	var opponent *PlayerClient
	if room.Player1 == client {
		opponent = room.Player2
	} else {
		opponent = room.Player1
	}
	room.mu.Unlock()

	if opponent != nil {
		opponent.sendMessage(WsMessage{
			Action:   "OPPONENT_STATUS",
			Score:    score,
			IsDanger: isDanger,
		})
	}
}

func handleGameOver(client *PlayerClient) {
	room := client.Room
	if room == nil {
		return
	}

	room.mu.Lock()
	var opponent *PlayerClient
	if room.Player1 == client {
		opponent = room.Player2
	} else {
		opponent = room.Player1
	}
	room.IsPlaying = false
	room.mu.Unlock()

	client.sendMessage(WsMessage{
		Action: "MATCH_RESULT",
		Winner: "DEFEAT",
	})

	if opponent != nil {
		opponent.sendMessage(WsMessage{
			Action: "MATCH_RESULT",
			Winner: "VICTORY",
		})
	}
}

