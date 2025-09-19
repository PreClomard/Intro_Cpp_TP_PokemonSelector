//
// Created by pressard-clovis on 11/09/2025.
//

#include "../inc/Pokemon_PC.h"

Pokemon_PC::Pokemon_PC(Pokedex* pokedex):pokedex(pokedex){};
Pokemon_PC::~Pokemon_PC(){}

void Pokemon_PC::addPokemonToPCbyId(int id) {
    pokemonList.push_back(pokedex->get_PokemonById(id));
}
void Pokemon_PC::addPokemonToPCbyName(string name) {
    pokemonList.push_back(pokedex->get_PokemonByName(name));
}
void Pokemon_PC::removePokemonToPCbyId(int id) {
    int found = 0;
    for (Pokemon &p : pokemonList) {
        if (p.get_id()==id) {
            break;
        }
        found++;
    }
    pokemonList.erase(pokemonList.begin()+found);
}

void Pokemon_PC::removePokemonToPCbyName(string name) {
    int found = 0;
    for (Pokemon &p : pokemonList) {
        if (p.get_name()==name) {
            break;
        }
        found++;
    }
    pokemonList.erase(pokemonList.begin()+found);
}