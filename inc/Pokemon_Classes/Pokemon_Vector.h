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
protected:
    vector<Pokemon> pokemonList;

public:
    //Constructor
    Pokemon_Vector();
    //Destructor
    virtual ~Pokemon_Vector();

    //Get
    Pokemon& get_PokemonById(int id) ;
    Pokemon& get_PokemonByName(string name);

    //Methode
    void display_PokemonList();
    vector<int> listOfId();
    std::vector<Pokemon>& getPokemonList();

};

#endif //POKEMON_SELECTOR_POKEMON_VECTOR_H