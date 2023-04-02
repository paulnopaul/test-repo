cmake_minimum_required(VERSION 3.5)

project(MyProject)

set(CMAKE_CXX_STANDART 17)

# Add your source files here
set(SOURCES 
    src/main.cpp
    src/MyClass.cpp
)

# Add any additional include directories here
include_directories(
    include
)

# Set any compiler flags you need here

# Create the executable target
add_executable(${PROJECT_NAME} ${SOURCES})
