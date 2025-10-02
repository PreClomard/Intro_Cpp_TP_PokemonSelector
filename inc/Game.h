//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_GAME_H
#define POKEMON_SELECTOR_GAME_H
#include <SFML/Graphics/RenderWindow.hpp>

#include "State/State.h"
#include "State/MenuState.h"
#include "Pokemon_Classes/Pokemon_Party.h"
class Game {
private:
    State *stateOfTheClass;
    sf::RenderWindow window;

public:
    Game();
    ~Game();


    void run();
    void setState(State *state);
    void setTeam();

};


#endif //POKEMON_SELECTOR_GAME_H