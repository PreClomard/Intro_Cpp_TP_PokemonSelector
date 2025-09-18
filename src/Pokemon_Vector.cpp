//
// Created by pressard-clovis on 11/09/2025.
//
#include "../inc/Pokemon_Vector.h"

#include <iostream>
#include <string>
using namespace std;


//=========================================================
//Constructor section

Pokemon_Vector::~Pokemon_Vector(){}

Pokemon* Pokemon_Vector::get_PokemonById(int id) {
    for (Pokemon* p : pokemonList) {
        if (p->get_id()==id) {
            return p;
        }
    }
    return nullptr;
}
Pokemon* Pokemon_Vector::get_PokemonByName(const string name) {
    for (Pokemon* p : pokemonList) {
        if (p->get_name()==name) {
            return p;
        }
    }
    return nullptr;
}

void Pokemon_Vector::update_Liste(const Pokemon &p) {
    pokemonList.push_back(new Pokemon(p));
}

void Pokemon_Vector::display_PokemonList() {
    for (Pokemon* p : pokemonList) {
        p->displayInfo();
    }
}





