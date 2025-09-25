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
Pokemon::Pokemon(int id, const string name,int generation, double maxLifePoints,
        double lifePoints, double attackPoints, double defensePoints):id(id),name(name),generation(generation),
maxLifePoints(maxLifePoints),lifePoints(lifePoints),attackPoints(attackPoints),
defensePoints(defensePoints){}

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
}

/**
 *  Name: Versus
 *  Use: Simulate the attack of a pokemon A on a pokemon B
 *  Variable: def -> Pokemon B defense ; lifePoint-> Pokemon B lifePoint
 ****/
void Pokemon::versus(Pokemon &anotherPokemon){
    new Pokemon( anotherPokemon);///Pourquoi utiliser cette ligne? Le code marche bien sans.
    ///Il semble même que cela fausse le combat. Si je comprend bien, on renseigne un pokemon qui attaque un autre
    ///Puis on crée une sorte de copie de cet autre pokemon avec cette commande. C'est donc cette copie qui subit
    ///les dégâts potentiels du combat et non le pokémon original renseigné dans les arguments de la fonction
    /// A voir
    if (attackPoints>anotherPokemon.defensePoints) {
        anotherPokemon.lifePoints = anotherPokemon.lifePoints + anotherPokemon.defensePoints - attackPoints;
        if (anotherPokemon.lifePoints<=0) {
            cout<<"**********************************" <<endl;
            cout<<"Le pokemon est KO"<<endl;
            cout<<"**********************************" <<endl;
            ///Il semblerait également profitable de mettre les valeurs de PV du pokemon vaincu à 0. Afin d'éviter
            ///d'avoir des valeurs négatives de PV. Cela pourrait éviter des problèmes dans une suite de l'exercice.
            ///Simple facilité de codage qui permet de passer la fonction sans jamais y revenir plus tard .
        }
        else {
            cout<<"**********************************" <<endl;
            cout<<"Le pokemon "<<anotherPokemon.name<<" est a "<<anotherPokemon.lifePoints<<" points de vie"<<endl;
            cout<<"**********************************" <<endl;
        }
    }
    else {
        cout<<"**********************************" <<endl;
        cout<<"Le pokemon "<<anotherPokemon.name<<" a une défense solide"<<endl;
        cout<<"**********************************" <<endl;
    }

}

void Pokemon::heal(double healBonus) const{
    if (this->lifePoints == 0){
        healBonus = healBonus/2; //la moitié des PV Bonus est dédiée à la résurrection
    }
    if (heal + this.lifePoints <= this->lifePointsMax){
        this->lifePoints += healBonus;
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