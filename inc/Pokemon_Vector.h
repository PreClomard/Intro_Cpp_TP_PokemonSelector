//
// Created by pressard-clovis on 11/09/2025.
//

#ifndef POKEMON_SELECTOR_POKEMON_VECTOR_H
#define POKEMON_SELECTOR_POKEMON_VECTOR_H

#include <iostream>
#include <string>
#include <vector>

#include "Pokemon.h"

using namespace std;

class Pokemon_Vector {
private:
    vector<Pokemon> pokemonList;
public:
    //Constructor
    Pokemon_Vector()=delete;
    //Destructor
    virtual ~Pokemon_Vector();

    //Methode
    Pokemon get_PokemonById(int id);
    Pokemon get_PokemonByName(string name);
};

#endif //POKEMON_SELECTOR_POKEMON_VECTOR_H