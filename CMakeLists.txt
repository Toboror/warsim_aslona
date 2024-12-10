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
        Cities/CityHub/Establishments/Tavern/TavernInstance.h
        Cities/CityHub/Establishments/Tavern/TavernJobs/Jobs.cpp
        Cities/CityHub/Establishments/Tavern/TavernJobs/Jobs.h
        Entities/Player/Player.cpp
        Entities/Player/Player.h
        Entities/Enemy/Enemy.cpp
        Entities/Enemy/Enemy.h
        Entities/Item/Item.cpp
        Entities/Item/Item.h
        Entities/NPC/NPCtemplate.cpp
        Entities/NPC/NPCtemplate.h
        Entities/NPC/HubNPC/OldLady.cpp
        Entities/NPC/HubNPC/OldLady.h)