# © 2025 Vidyadharan Anbuchezhian
# Licensed under the MIT License — see LICENSE and NOTICE files for details.

#!/bin/bash

echo "🔧 Building for Linux..."

BUILD_DIR=build-linux
DIST_DIR=dist-linux
ARCHIVE_NAME=simple-rpg-linux.tar.gz

# Clean previous builds
rm -rf $BUILD_DIR $DIST_DIR $ARCHIVE_NAME

# Create build directory
mkdir -p $BUILD_DIR
cd $BUILD_DIR

# Run CMake and build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)

# Back to root and prepare dist
cd ..
mkdir -p $DIST_DIR
cp $BUILD_DIR/SimpleRPG $DIST_DIR/
cp -r assets $DIST_DIR/

# Archive dist
tar -czf $ARCHIVE_NAME -C $DIST_DIR .

# Clean up
rm -rf $BUILD_DIR $DIST_DIR

echo "✅ Linux build complete → $ARCHIVE_NAME"
