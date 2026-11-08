
cmake_minimum_required(VERSION 3.22.1)

project(BattleRealmsAndroid)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(battle_engine SHARED
    src/main.cpp
)

find_package(SDL2 REQUIRED CONFIG)

target_link_libraries(battle_engine
    SDL2::SDL2
    android
    log
)
