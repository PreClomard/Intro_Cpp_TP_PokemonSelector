//
// Created by pressard-clovis on 10/09/2025.
//
#include <iostream>
#include <string>
using namespace std;

#include "../inc/Pokemon.h"

//=========================================================
//Constructor section

//Constructor
Pokemon::Pokemon(int id, const string &name,int evolution, double maxLifePoints,
        double lifePoints, double attackPoints, double defensePoints):id(id),name(name),
maxLifePoints(maxLifePoints),lifePoints(lifePoints),attackPoints(attackPoints),
defensePoints(defensePoints){
    this->id = id;
    this->name = name;
    this->evolution = evolution;
    this->maxLifePoints = maxLifePoints;
    this->lifePoints = lifePoints;
    this->attackPoints = attackPoints;
    this->defensePoints = defensePoints;
}

//Destructor
Pokemon::~Pokemon() {
}


//=========================================================
//Methode section
/**
 *  Name: DisplayInfo
 *  Use: Show the specificity of the pokemon
 ***/
void Pokemon::displayInfo() const{
    cout<<"Id: "<<id<<endl;
    cout<<"Nom: "<<name<<endl;
    cout<<"Evolution: "<<evolution<<endl;
    cout<<"Point de vie: "<<lifePoints<<endl;
    cout<<"Point de vie max: "<<maxLifePoints<<endl;
    cout<<"Attack: "<<attackPoints<<endl;
    cout<<"Defense: "<<defensePoints<<endl;
}

/**
 *  Name: Versus
 *  Use: Simulate the attack of a pokemon A on a pokemon B
 *  Variable: def -> Pokemon B defense ; lifePoint-> Pokemon B lifePoint
 ****/
void Pokemon::versus(Pokemon &anotherPokemon){
    new Pokemon( anotherPokemon);
    if (attackPoints>anotherPokemon.defensePoints) {
        anotherPokemon.lifePoints = anotherPokemon.lifePoints + anotherPokemon.defensePoints - attackPoints;
        if (anotherPokemon.lifePoints<=0) {
            cout<<"**********************************" <<endl;
            cout<<"Le pokemon est KO"<<endl;
            cout<<"**********************************" <<endl;
        }
        else {
            cout<<"**********************************" <<endl;
            cout<<"Le pokemon "<<anotherPokemon.name<<" est a "<<anotherPokemon.lifePoints<<" point de vie"<<endl;
            cout<<"**********************************" <<endl;
        }
    }
    else {
        cout<<"**********************************" <<endl;
        cout<<"Le pokemon "<<anotherPokemon.name<<" a une défense solide"<<endl;
        cout<<"**********************************" <<endl;
    }

}

//=========================================================
//Getter section
int Pokemon::get_id() const{
    return id;
}

string Pokemon::get_name() const{
    return name;
}

double Pokemon::get_lifePoints() const{
    return lifePoints;
}
double Pokemon::get_maxLifePoints() const{
    return lifePoints;
}
double Pokemon::get_attack() const{
    return attackPoints;
}
double Pokemon::get_defense() const{
    return defensePoints;
}
int Pokemon::get_evolution() const{
    return evolution;
}