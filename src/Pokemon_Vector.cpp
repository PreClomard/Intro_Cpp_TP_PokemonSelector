//
// Created by pressard-clovis on 11/09/2025.
//
#include "../inc/Pokemon_Vector.h"

#include <iostream>
#include <string>
using namespace std;


//=========================================================
//Constructor section
Pokemon_Vector::Pokemon_Vector(){}
Pokemon_Vector::~Pokemon_Vector(){}

Pokemon& Pokemon_Vector::get_PokemonById(int id) {
    for (Pokemon &p : pokemonList) {
        if (p.get_id()==id) {
            return p;
        }
    }
    cerr << "Could not find Pokemon" << endl;
}
Pokemon& Pokemon_Vector::get_PokemonByName(const string name) {
    for (Pokemon &p : pokemonList) {
        if (p.get_name()==name) {
            return p;
        }
    }
    cerr << "Could not find Pokemon" << endl;
}


void Pokemon_Vector::display_PokemonList() {
    for (Pokemon& p : pokemonList) {
        p.displayInfo();
    }
}





