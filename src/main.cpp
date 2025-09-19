#include <iostream>
#include "../inc/Pokemon.h"
#include "../inc/Pokemon_Vector.h"
#include "../inc/Pokedex.h"

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


    return 0;
}