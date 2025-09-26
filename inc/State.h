//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_STATE_H
#define POKEMON_SELECTOR_STATE_H

class Game;

class State {
protected:
    Game* game;

public:
    //Destructor
    virtual ~State();

    //Setter
    void set_Game(Game* game);

    //Methode
    virtual void handleGameEvent()=0;
};

#endif //POKEMON_SELECTOR_STATE_H