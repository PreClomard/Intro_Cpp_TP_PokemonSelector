//
// Created by pressard-clovis on 11/09/2025.
//

#ifndef POKEMON_SELECTOR_POKEMON_PARTY_H
#define POKEMON_SELECTOR_POKEMON_PARTY_H
#include "Pokemon_Vector.h"
#include "Pokemon_PC.h"

class Pokemon_Party:public Pokemon_Vector {
    Pokemon_PC* pokemon_collection;

public:
    Pokemon_Party(Pokemon_PC* pokemon_pc);
    ~Pokemon_Party();


    void addPokemonToPartyById(int id);
    void addPokemonToPartyByName(string name);
    void removePokemonToPartyById(int id);
    void removePokemonToPartyByName(string name);


};


#endif //POKEMON_SELECTOR_POKEMON_PARTY_H