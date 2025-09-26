#include <iostream>
#include "../inc/Pokemon.h"
#include "../inc/Pokemon_Vector.h"
#include "../inc/Pokedex.h"
#include "../inc/Pokemon_PC.h"
#include "../inc/Pokemon_Party.h"
#include "../inc/Game.h"
#include "../inc/MenuState.h"

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

    std::cout<<"=========Pokemon PC=========="<<std::endl;
    Pokemon_PC* pokemon_pc = new Pokemon_PC(liste_Pokedex);
	std::cout<<"-----Add pokemon to PC"<<std::endl;
    pokemon_pc->addPokemonToPCbyId(1);
    pokemon_pc->addPokemonToPCbyId(1);
    pokemon_pc->addPokemonToPCbyId(2);
	pokemon_pc->addPokemonToPCbyId(3);
	pokemon_pc->addPokemonToPCbyId(4);
	pokemon_pc->addPokemonToPCbyId(5);
	pokemon_pc->addPokemonToPCbyId(6);
	pokemon_pc->addPokemonToPCbyId(7);
    pokemon_pc->addPokemonToPCbyName("Charmander");
    pokemon_pc->display_PokemonList();
    std::cout<<"_________________________"<<std::endl;
	std::cout<<"-----Remove pokemon from PC"<<std::endl;
    pokemon_pc->removePokemonToPCbyId(1);
    pokemon_pc->removePokemonToPCbyName("Charmander");
    pokemon_pc->display_PokemonList();
	std::cout<<"=========Pokemon Party=========="<<std::endl;
	Pokemon_Party* pokemon_team = new Pokemon_Party(pokemon_pc);
	std::cout<<"-----Add pokemon to Party and remove from PC"<<std::endl;
	pokemon_team->addPokemonToPartyById(1);
	pokemon_team->addPokemonToPartyById(2);
	pokemon_team->addPokemonToPartyById(3);
	pokemon_team->addPokemonToPartyById(4);
	pokemon_team->addPokemonToPartyById(5);
	pokemon_team->addPokemonToPartyById(6);
	std::cout<<"-----Pokemon Party"<<std::endl;
	pokemon_team->display_PokemonList();
	std::cout<<"-----Pokemon PC"<<std::endl;
	pokemon_pc->display_PokemonList();
	std::cout<<"Remove pokemon from Party and add to PC"<<std::endl;
	pokemon_team->removePokemonToPartyById(1);
	pokemon_team->removePokemonToPartyById(2);
	pokemon_team->removePokemonToPartyById(3);
	std::cout<<"-----Pokemon Party"<<std::endl;
	pokemon_team->display_PokemonList();
	std::cout<<"-----Pokemon PC"<<std::endl;
	pokemon_pc->display_PokemonList();

	std::cout<<"=========Creation State Pattern=========="<<std::endl;
	Game *game=new Game(new MenuState());
	game->update();

	return 0;
}