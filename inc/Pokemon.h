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
    double versus(double attackingPokemon_Attack,
        double defendingPokemon_Defense, double defendingPokemon_LifePoint);

    //Getter
    int get_id();
    string get_name();
    double get_lifePoints();
    double get_maxLifePoints();
    double get_attack();
    double get_defense();
    int get_evolution();
};

#endif //POKEMON_SELECTOR_POKEMON_H