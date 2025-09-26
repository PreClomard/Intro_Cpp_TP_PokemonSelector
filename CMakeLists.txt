cmake_minimum_required(VERSION 4.0)
project(Pokemon_Selector)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pokemon_Selector src/main.cpp
        src/Pokemon.cpp
        inc/Pokemon.h
        inc/Pokemon_Vector.h
        src/Pokemon_Vector.cpp
        src/Pokedex.cpp
        inc/Pokedex.h
        src/Pokemon_PC.cpp
        inc/Pokemon_PC.h
        src/Pokemon_Party.cpp
        inc/Pokemon_Party.h
        src/Game.cpp
        inc/Game.h
        inc/State.h
        src/MenuState.cpp
        inc/MenuState.h
        src/ExplorationState.cpp
        inc/ExplorationState.h
        src/EncounterState.cpp
        inc/EncounterState.h
        src/ArenaState.cpp
        inc/ArenaState.h
        src/GameOverState.cpp
        inc/GameOverState.h
        src/State.cpp
)

target_link_libraries(Pokemon_Selector
        sfml-graphics
        sfml-window
        sfml-system
        sfml-audio
)