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
        src/Pokemon_Party.cpp
        inc/Pokemon_Party.h
        src/Pokemon_Attack.cpp
        inc/Pokemon_Attack.h)

target_link_libraries(Pokemon_Selector
        sfml-graphics
        sfml-window
        sfml-system
        sfml-audio
)