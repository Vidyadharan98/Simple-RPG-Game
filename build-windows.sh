# © 2025 Vidyadharan Anbuchezhian
# Licensed under the MIT License — see LICENSE and NOTICE files for details.

#!/bin/bash

echo "🔧 Cross-compiling for Windows..."

BUILD_DIR=build-windows
DIST_DIR=dist-windows
ARCHIVE_NAME=simple-rpg-windows.zip
TOOLCHAIN_FILE=toolchain-mingw.cmake

# Clean previous builds
rm -rf $BUILD_DIR $DIST_DIR $ARCHIVE_NAME $TOOLCHAIN_FILE

# Check for mingw
if ! command -v x86_64-w64-mingw32-g++ &> /dev/null
then
    echo "❌ MinGW not found. Install with: sudo apt install mingw-w64"
    exit 1
fi

# Create toolchain file
cat > $TOOLCHAIN_FILE <<EOL
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
EOL

# Build
mkdir -p $BUILD_DIR
cd $BUILD_DIR
cmake .. -DCMAKE_TOOLCHAIN_FILE=../$TOOLCHAIN_FILE -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)

# Back and prepare dist
cd ..
mkdir -p $DIST_DIR
cp $BUILD_DIR/SimpleRPG.exe $DIST_DIR/
cp -r assets $DIST_DIR/

cp /usr/lib/gcc/x86_64-w64-mingw32/10-win32/libgcc_s_seh-1.dll $DIST_DIR/
cp /usr/lib/gcc/x86_64-w64-mingw32/10-win32/libstdc++-6.dll $DIST_DIR/
cp /usr/x86_64-w64-mingw32/lib/libwinpthread-1.dll $DIST_DIR/

# Zip dist
zip -r $ARCHIVE_NAME $DIST_DIR > /dev/null

# Clean up
rm -rf $BUILD_DIR $DIST_DIR $TOOLCHAIN_FILE

echo "✅ Windows build complete → $ARCHIVE_NAME"
