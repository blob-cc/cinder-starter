cmake_minimum_required(VERSION 3.10)

# Project configuration
project(MyCinderProject VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Options for the project
option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
option(BUILD_TESTS "Build tests" ON)

# Set Cinder path
set(CINDER_PATH "/path/to/cinder")  # Replace with the actual path to your Cinder installation
include("${CINDER_PATH}/proj/cmake/modules/cinderMakeApp.cmake")

# Add the source files
set(SOURCE_FILES
    src/MyProject.cpp
    include/MyProject.h
)

# Include directories
include_directories(include)

# Add any third-party dependencies here, e.g., using FetchContent or find_package

# Create the application
ci_make_app(
    SOURCES     ${SOURCE_FILES}
    CINDER_PATH ${CINDER_PATH}
    INCLUDES    include/
    LIBRARIES   # Add any additional libraries here
)

# Optionally add tests
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


if(WIN32)
    message(STATUS "Compiling for Windows")
    # Windows-specific configurations
elseif(APPLE)
    message(STATUS "Compiling for macOS")
    # macOS-specific configurations
elseif(UNIX)
    message(STATUS "Compiling for Linux")
    # Linux-specific configurations
endif()


if(CMAKE_BUILD_TYPE STREQUAL "Coverage")
    target_compile_options(MyCinderProject PRIVATE --coverage)
    target_link_libraries(MyCinderProject PRIVATE --coverage)
endif()