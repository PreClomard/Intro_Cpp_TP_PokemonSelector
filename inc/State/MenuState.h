//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_MENUSTATE_H
#define POKEMON_SELECTOR_MENUSTATE_H
#include "State.h"
#include <SFML/Graphics.hpp>
#include "../../inc/State/ExplorationState.h"
#include "../../inc/Game.h"
#include "../../inc/Pokemon_Classes/Pokemon_Party.h"

class MenuState : public State {
private:
    sf::Texture backgroundTexture;
    sf::Sprite background;
    Pokemon_Party* trainerTeam;

public:
    MenuState(Game* game);
    void handleGameEvent(sf::Event &event) override;
    void update() override;
    void render(sf::RenderWindow &window) override;
    void creationOfParty();

};


#endif //POKEMON_SELECTOR_MENUSTATE_H