#include <iostream>
#include "../inc/Pokemon.h"
#include "../inc/Pokemon_Vector.h"
#include "../inc/Pokedex.h"
#include "../inc/Pokemon_PC.h"

using namespace std;


int main()
{
    std::cout<<"************ Pokemon Test ************" <<std::endl;
    /*Pokemon dracofeu(1, "dracofeu", 2, 10, 10, 5,3);
    Pokemon bulbizare(2, "bulbizare",2, 15, 15, 4, 6);

    dracofeu.displayInfo();
    bulbizare.versus(dracofeu);
    dracofeu.versus(bulbizare);
    dracofeu.displayInfo();*/

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