//
// Created by guilh on 21/09/2025.
//

#include "Object.h"
#include "HealingItem.h"
HealingItem::HealingItem(string name, double healingPoints):name(name), healingPoints(healingPoints){}

void HealingItem::useItem(Pokemon pokemon, double healBonus) {
    pokemon.heal(healBonus); //Ici afin d'avoir accès à la modification des pV d'un pokemon il faut forcément
    //faire appel à une nouvelle méthode que l'on ajoute à la classe Pokemon.
}
