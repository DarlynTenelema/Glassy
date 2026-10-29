# Build stage
FROM golang:1.22-alpine AS builder
WORKDIR /app

# Copiar archivos de módulos según la estructura del contexto
COPY golang/go.mod* golang/go.sum* ./
COPY go.mod* go.sum* ./
RUN go mod download

COPY . .

# Compilar según el directorio raíz configurado en Railway
RUN if [ -f "./main.go" ]; then \
      go build -o /app/main .; \
    elif [ -d "./golang" ]; then \
      cd golang && go build -o /app/main .; \
    fi

# Run stage
FROM alpine:latest
RUN apk --no-cache add ca-certificates
WORKDIR /app
COPY --from=builder /app/main .
EXPOSE 8080
CMD ["./main"]
