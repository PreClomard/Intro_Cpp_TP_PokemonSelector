//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_ENCOUNTERSTATE_H
#define POKEMON_SELECTOR_ENCOUNTERSTATE_H
#include "State.h"


class EncounterState : public State {
private:
    sf::Texture backgroundTexture;
    sf::Sprite background;

public:
    EncounterState(Game* game);
    void handleGameEvent(sf::Event &event) override;
    void update() override;
    void render(sf::RenderWindow &window) override;
};


#endif //POKEMON_SELECTOR_ENCOUNTERSTATE_H