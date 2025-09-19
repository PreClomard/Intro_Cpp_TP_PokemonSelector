//
// Created by pressard-clovis on 10/09/2025.
//

#ifndef POKEMON_SELECTOR_POKEMON_H
#define POKEMON_SELECTOR_POKEMON_H

#include <iostream>
#include <string>
using namespace std;

class Pokemon {
private:
    //Attribut
    int id;
    string name;
    int evolution;
    double maxLifePoints;
    double lifePoints;
    double attackPoints;
    double defensePoints;

public:
    //Constructor
    Pokemon(int id, const string &name,int evolution, double maxLifePoints,
        double lifePoints, double attackPoints, double defensePoints);
    //Destructor
    ~Pokemon();

    //Methode
    void displayInfo() const;
    void versus(Pokemon &anotherPokemon);

    //Getter
    int get_id() const;
    string get_name() const;
    double get_lifePoints() const;
    double get_maxLifePoints() const;
    double get_attack() const;
    double get_defense() const;
    int get_evolution() const;
};

#endif //POKEMON_SELECTOR_POKEMON_H