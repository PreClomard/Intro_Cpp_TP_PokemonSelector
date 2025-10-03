//
// Created by pressard-clovis on 10/09/2025.
//
#include <iostream>
#include <string>
using namespace std;

#include "../../inc/Pokemon_Classes/Pokemon.h"

//=========================================================
//Constructor section

//Constructor
Pokemon::Pokemon(int id, const string name,int generation, double maxLifePoints,
        double lifePoints, double attackPoints, double defensePoints,string imagePath):id(id),name(name),generation(generation),
maxLifePoints(maxLifePoints),lifePoints(lifePoints),attackPoints(attackPoints),
defensePoints(defensePoints),imagePath(imagePath){}

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
    cout<<"Generation: "<<generation<<endl;
    cout<<"Point de vie: "<<lifePoints<<endl;
    cout<<"Point de vie max: "<<maxLifePoints<<endl;
    cout<<"Attack: "<<attackPoints<<endl;
    cout<<"Defense: "<<defensePoints<<endl;
    cout<<"Image Path"<<endl;
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
int Pokemon::get_generation() const{
    return generation;
}
string Pokemon::get_imagePath() const {
    return imagePath;
}