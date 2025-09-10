#include <iostream>
#include "../inc/Pokemon.h"

using namespace std;


int main()
{
    std::cout<<"************ Pokemon Test ************" <<std::endl;
    Pokemon dracofeu(1, "dracofeu", 2, 10, 10, 5,3);
    Pokemon bulbizare(2, "bulbizare",2, 15, 15, 4, 6);

    dracofeu.displayInfo();
    bulbizare.versus(dracofeu.get_attack());
    dracofeu.versus(bulbizare.get_attack());
    dracofeu.displayInfo();
    return 0;
}