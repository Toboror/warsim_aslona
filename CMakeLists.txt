cmake_minimum_required(VERSION 3.28)
project(Aslona)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aslona main.cpp
        game_mechanics/game_mechanics.cpp
        Cities/CityHub/hub_events.cpp
        game_mechanics/jobs.cpp
        Cities/CityHub/Events/StrangerEvent/StrangerEvent.cpp
        Cities/CityHub/Events/StrangerEvent/StrangerEvent.h
        Cities/CityHub/Establishments/Tavern/TavernInstance.cpp
        Cities/CityHub/Establishments/Tavern/TavernInstance.h)