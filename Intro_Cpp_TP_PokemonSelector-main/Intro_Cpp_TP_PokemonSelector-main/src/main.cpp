#include <iostream>
#include "../inc/Pokemon.h"
#include "../inc/Pokemon_Vector.h"
#include "../inc/Pokedex.h"
#include "../inc/Pokemon_PC.h"

using namespace std;


int main()
{
    std::cout<<"************ Pokemon Test ************" <<std::endl;
    Pokemon dracofeu(1, "Dracofeu", 2, 10, 10, 5,3);
    Pokemon bulbizare(2, "Bulbizare",2, 15, 15, 4, 6);


    //Début ajout Guilhem
    //Ajout pokemon faible pour test
    Pokemon rattata(3, "Rattata",2, 6, 6, 1, 1);
    HealingItem potion1("Potion basique",1);
    HealingItem potion2("Potion supérieure",6);

    dracofeu.displayInfo();
    bulbizare.versus(dracofeu);    //Bulbizarre inflige 4-3=1 dégât
    dracofeu.versus(bulbizare);    //Dracaufeu inflige 0 dégât
    dracofeu.displayInfo();        //Dracaufeu à 9PV

    //Test sur pokemon faible et vaincu
    dracofeu.versus(rattata);        //Dracaufeu inflige 5-1 = 4 dégâts
    dracofeu.versus(rattata);        //Dracaufeu inflige 4 dégâts
    rattata.displayInfo();            //Rattata doit avoir 0PV (et non -2PV)


    potion1.useItem(dracofeu); // Test de heal de dracofeu
    // Ce test devrait permettre à Dracaufeu d'avoir
    dracofeu.displayInfo(); //Vérification PV de Dracaufeu

    potion2.useItem(rattata);
    //Fin de l'ajout


    Pokedex* liste_Pokedex= Pokedex::getInstance();
    Pokedex* liste_Pokedex2= Pokedex::getInstance();

    std::cout<<"========================"<<std::endl;
    Pokemon_PC* pokemon_pc = new Pokemon_PC(liste_Pokedex);
    pokemon_pc->addPokemonToPCbyId(1);
    pokemon_pc->addPokemonToPCbyId(1);
    pokemon_pc->addPokemonToPCbyId(2);
    pokemon_pc->addPokemonToPCbyName("Charmander");
    pokemon_pc->display_PokemonList();
    std::cout<<"========================"<<std::endl;
    pokemon_pc->removePokemonToPCbyId(1);
    pokemon_pc->removePokemonToPCbyName("Charmander");
    pokemon_pc->display_PokemonList();
    return 0;
}