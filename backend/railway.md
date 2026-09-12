# Configuración de Railway

Este documento contiene las instrucciones y variables de entorno necesarias para desplegar el backend de Glassy en Railway.

## 1. Configurar la Base de Datos
1. En tu proyecto de Railway, haz clic en **"New"** -> **"Database"** -> **"Add PostgreSQL"**.
2. Railway creará la base de datos automáticamente.
3. Copia la variable `DATABASE_URL` que Railway te proporciona.

## 2. Desplegar el Backend
1. Conecta tu repositorio de GitHub a Railway.
2. Railway detectará automáticamente el archivo `Dockerfile` en la carpeta `/backend` y construirá la imagen usando Golang 1.22.

## 3. Variables de Entorno Necesarias (Environment Variables)
En el servicio de tu Backend (en Railway), ve a la pestaña **Variables** y agrega las siguientes:

- `DATABASE_URL`: Pegar la URL de conexión de Postgres que obtuviste en el paso 1.
- `JWT_SECRET`: Una cadena de texto larga y segura (ej. `mi_secreto_super_seguro_glassy_123`).
- `GOOGLE_CLIENT_ID`: El ID de cliente que obtienes en Google Cloud Console.
- `GOOGLE_CLIENT_SECRET`: El secreto del cliente de Google Cloud Console.
- `GOOGLE_REDIRECT_URL`: La URL de callback de tu backend en producción (ej. `https://glassy-backend.up.railway.app/auth/google/callback`).

## Notas Adicionales
- La API escuchará por defecto en el puerto `8080`, que Railway detectará automáticamente.
- El backend está configurado para crear las tablas SQL (`users` y `leaderboards`) la primera vez que se ejecute y se conecte a la base de datos de Postgres.