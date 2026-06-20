#!/bin/bash

# Ukončit skript, pokud jakýkoliv příkaz selže
set -e

echo "=== 1. Instalace kompletních závislostí a Qt6 modulů (Debian Sid) ==="
sudo apt update
sudo apt install -y \
    build-essential \
    cmake \
    qt6-base-dev \
    qt6-tools-dev \
    qt6-charts-dev \
    qt6-svg-dev \
    qt6-l10n-tools \
    qt6-translations-l10n \
    libgl1-mesa-dev

echo "=== 2. Čištění starého buildu ==="
if [ -d "build" ]; then
    echo "Mažu starý adresář build..."
    rm -rf build
fi

echo "=== 3. Příprava nového buildu ==="
mkdir build
cd build

echo "=== 4. Konfigurace projektu přes CMake ==="
cmake ..

echo "=== 5. Kompilace projektu ==="
make -j$(nproc)

echo "========================================="
echo " Kompilace úspěšně dokončena! "
echo " Spustitelný binární soubor najdeš v build/TrayWeather"
echo "========================================="
