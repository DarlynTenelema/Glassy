@echo off
title Glassy TikTok Live Connector
color 0B
echo ========================================================
echo        GLASSY TIKTOK LIVE CONNECTOR - STREAMER
echo ========================================================
echo.
cd /d "%~dp0"
node connector.js
pause
