//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_GAME_H
#define POKEMON_SELECTOR_GAME_H
#include "State.h"


class Game {
private:
    State *stateOfTheClass;

public:
    Game(State *state);
    ~Game();


    void set_State(State *state);
    void run();
    void update();

};


#endif //POKEMON_SELECTOR_GAME_H