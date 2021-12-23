cmake_minimum_required(VERSION 3.21)
project(Game C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(third_party/raylib)

add_executable(Game src/game.h src/game.c src/main.c)

target_link_libraries(Game raylib)
