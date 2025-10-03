//
// Created by pressard-clovis on 11/09/2025.
//
#include "../../inc/Pokemon_Classes/Pokemon_Vector.h"

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
            cout<<"valeur p.get_id() :"<<p.get_id()<<endl;
            return p;
        }
        /*else if (id==654) {
            cout<<"valeur p.get_id() :"<<p.get_id()<<endl;
        }*/
    }
    cout << "Could not find Pokemon, the id is" << id <<endl;
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

vector<int> Pokemon_Vector::listOfId() {
    vector<int> ids;
    for (Pokemon& p : pokemonList) {
        ids.push_back(p.get_id());
    }
    return ids;
}

std::vector<Pokemon>& Pokemon_Vector::getPokemonList() {
    return pokemonList;
}


