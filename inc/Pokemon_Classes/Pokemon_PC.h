//
// Created by pressard-clovis on 11/09/2025.
//

#ifndef POKEMON_SELECTOR_POKEMON_PC_H
#define POKEMON_SELECTOR_POKEMON_PC_H
#include "Pokemon_Vector.h"
#include "Pokedex.h"

class Pokemon_PC:public Pokemon_Vector {
    Pokedex* pokedex;


public:
    Pokemon_PC(Pokedex* pokedex);
    ~Pokemon_PC();


    void addPokemonToPCbyId(int id);
    void addPokemonToPCbyName(string name);
    void removePokemonToPCbyId(int id);
    void removePokemonToPCbyName(string name);


};



#endif //POKEMON_SELECTOR_POKEMON_PC_H