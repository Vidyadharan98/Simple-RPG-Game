#!/bin/bash

set -e  # Exit on any error

EXECUTABLE_NAME="SimpleRPG"

echo "🧹 Cleaning previous build and executable..."
rm -rf build
rm -f $EXECUTABLE_NAME

echo "📁 Creating build directory..."
mkdir -p build
cd build

echo "🔧 Running CMake..."
cmake -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=.. ..

echo "🛠️  Building project..."
make -j$(nproc)

echo "🧽 Cleaning up build folder..."
cd ..
rm -rf build

echo "✅ Build complete. Executable: ./$EXECUTABLE_NAME"