cmake_minimum_required(VERSION 3.28)
project(Aslona)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aslona main.cpp
        game_mechanics/game_mechanics.cpp
        game_events/city_hub_events/hub_events.cpp
        game_mechanics/jobs.cpp)