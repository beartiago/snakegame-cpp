cmake_minimum_required(VERSION 3.6)
project(snakegame)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp entity/Snake.cpp entity/Snake.h director/Screen.h director/Screen.cpp director/Direction.h entity/Fruit.cpp entity/Fruit.h entity/Player.cpp entity/Player.h levels/Level01.cpp levels/Level01.h maps/Texture.h levels/Level.cpp levels/Level.h maps/Texture.cpp)
add_executable(snakegame ${SOURCE_FILES})