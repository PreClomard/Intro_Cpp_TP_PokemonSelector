//
// Created by pressard-clovis on 11/09/2025.
//

#ifndef POKEMON_SELECTOR_POKEDEX_H
#define POKEMON_SELECTOR_POKEDEX_H

#include "Pokemon_Vector.h"

class Pokedex: public Pokemon_Vector{
private:
    Pokedex();
    static Pokedex* pinstance;
public:
    static Pokedex* getInstance();
};


#endif //POKEMON_SELECTOR_POKEDEX_H