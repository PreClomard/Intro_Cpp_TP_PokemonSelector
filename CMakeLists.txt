cmake_minimum_required(VERSION 4.0)
project(Pokemon_Selector)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pokemon_Selector src/main.cpp
        src/Pokemon_Classes/Pokemon.cpp
        inc/Pokemon_Classes/Pokemon.h
        inc/Pokemon_Classes/Pokemon_Vector.h
        src/Pokemon_Classes/Pokemon_Vector.cpp
        src/Pokemon_Classes/Pokedex.cpp
        inc/Pokemon_Classes/Pokedex.h
        src/Pokemon_Classes/Pokemon_PC.cpp
        inc/Pokemon_Classes/Pokemon_PC.h
        src/Pokemon_Classes/Pokemon_Party.cpp
        inc/Pokemon_Classes/Pokemon_Party.h
        src/Game.cpp
        inc/Game.h
        inc/State/State.h
        src/State/MenuState.cpp
        inc/State/MenuState.h
        src/State/ExplorationState.cpp
        inc/State/ExplorationState.h
        src/State/EncounterState.cpp
        inc/State/EncounterState.h
        src/State/ArenaState.cpp
        inc/State/ArenaState.h
        src/State/GameOverState.cpp
        inc/State/GameOverState.h
        src/State/State.cpp
        src/DynamicSprite.cpp
        inc/DynamicSprite.h
)

target_link_libraries(Pokemon_Selector
        sfml-graphics
        sfml-window
        sfml-system
        sfml-audio
)