cmake_minimum_required(VERSION 3.5)

project(MyProject)

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
set(CMAKE_CXX_STANDART 17)

# Create the executable target
add_executable(${PROJECT_NAME} ${SOURCES})
