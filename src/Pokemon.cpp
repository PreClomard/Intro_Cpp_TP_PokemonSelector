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
    cout<<"Destruction Classe Pokemon"<<endl;
}


//=========================================================
//Methode section
/**
 *  Name: DisplayInfo
 *  Use: Show the specificity of the pokemon
 ***/
void Pokemon::displayInfo() const{
    cout<<"Ici le constructeur de Pokemon"<<endl;
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
 *  Variable: att -> Pokemon A attack ; def -> Pokemon B defense ; lifePoint-> Pokemon B lifePoint
 ****/
double Pokemon::versus(double attackingPokemon_Attack,
        double defendingPokemon_Defense, double defendingPokemon_LifePoint){
    if (attackingPokemon_Attack>defendingPokemon_Defense) {
        this-> lifePoints =defendingPokemon_LifePoint + (defendingPokemon_Defense-attackingPokemon_Attack);
        cout<<"**********************************" <<endl;
        cout<<"Le pokemon est KO"<<endl;
        if (defendingPokemon_LifePoint<=0) {
            cout<<"**********************************" <<endl;
            cout<<"Le pokemon "<<name<<" est a "<<defendingPokemon_LifePoint<<"point de vie"<<endl;
        }
    }
    else {
        cout<<"**********************************" <<endl;
        cout<<"Le pokemon "<<name<<" a une défense solide"<<endl;
    }
    return defendingPokemon_LifePoint;
}

//=========================================================
//Getter section
int Pokemon::get_id(){
    return id;
}

string Pokemon::get_name(){
    return name;
}

double Pokemon::get_lifePoints() {
    return lifePoints;
}
double Pokemon::get_maxLifePoints() {
    return lifePoints;
}
double Pokemon::get_attack() {
    return attackPoints;
}
double Pokemon::get_defense() {
    return defensePoints;
}
int Pokemon::get_evolution(){
    return evolution;
}