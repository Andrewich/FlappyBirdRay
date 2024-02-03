cmake_minimum_required(VERSION 3.25)
project(flappy_bird CXX)

find_package(raylib REQUIRED)

add_executable(${PROJECT_NAME}
                src/Game.h
                src/Game.cpp
                src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
