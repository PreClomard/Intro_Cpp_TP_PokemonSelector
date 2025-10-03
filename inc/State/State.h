//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_STATE_H
#define POKEMON_SELECTOR_STATE_H

#include <SFML/Graphics.hpp>
#include "../Pokemon_Classes/Pokemon_Vector.h"
#include "../Pokemon_Classes/Pokemon_Party.h"
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
    virtual void handleGameEvent(sf::Event &event)=0;
    virtual void update()=0;
    virtual void render(sf::RenderWindow &window)=0;
};

#endif //POKEMON_SELECTOR_STATE_H