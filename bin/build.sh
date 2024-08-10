#!/bin/bash

# Set build directory
BUILD_DIR="build"

# Create build directory if it doesn't exist
mkdir -p $BUILD_DIR

# Navigate to the build directory
cd $BUILD_DIR

# Run CMake and build the project
cmake ..
make -j$(nproc)

# Run the application
./MyCinderProject