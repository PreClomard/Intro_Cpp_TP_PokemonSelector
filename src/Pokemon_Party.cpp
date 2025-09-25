//
// Created by pressard-clovis on 11/09/2025.
//

#include "../inc/Pokemon_Party.h"

Pokemon_Party::Pokemon_Party(Pokemon_PC* pokemon_collection):pokemon_collection(pokemon_collection){};
Pokemon_Party::~Pokemon_Party(){}

void Pokemon_Party::addPokemonToPartyById(int id){
    Pokemon& pokemon = pokemon_collection->get_PokemonById(id);
	if(&pokemon!=NULL){
	    if (pokemonList.size()<6) {
	        pokemonList.push_back(pokemon);
	        pokemon_collection->removePokemonToPCbyId(id);
	    }
	    else std::cout<<"Your party is full"<<std::endl;
    }
    else std::cout<<"No pokemon found"<<std::endl;

}
void Pokemon_Party::addPokemonToPartyByName(string name){
    Pokemon& pokemon = pokemon_collection->get_PokemonByName(name);
	if(&pokemon!=NULL){
	    if (pokemonList.size()<6) {
	        pokemonList.push_back(pokemon);
	        pokemon_collection->removePokemonToPCbyName(name);
	    }
        else std::cout<<"Your party is full"<<std::endl;
    }
    else std::cout<<"No pokemon found"<<std::endl;

}

void Pokemon_Party::removePokemonToPartyById(int id){
    pokemon_collection->addPokemonToPCbyId(id);
    int found = 0;
    for (Pokemon &p : pokemonList) {
        if (p.get_id()==id) {
            break;
        }
        found++;
    }
    pokemonList.erase(pokemonList.begin()+found);
}

void Pokemon_Party::removePokemonToPartyByName(string name){
    pokemon_collection->addPokemonToPCbyName(name);
    int found = 0;
    for (Pokemon &p : pokemonList) {
        if (p.get_name()==name) {
            break;
        }
        found++;
    }
    pokemonList.erase(pokemonList.begin()+found);
}
