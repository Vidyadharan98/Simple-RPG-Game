cmake_minimum_required(VERSION 3.10)
project(SimpleRPG)

set(CMAKE_CXX_STANDARD 17)

# Include all nested header directories
include_directories(include)

# Gather source files from lib and src
file(GLOB_RECURSE SRC_FILES
    src/*.cpp
    lib/*.cpp
)

# Create the executable
add_executable(SimpleRPG ${SRC_FILES})
