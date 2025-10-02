//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_EXPLORATIONSTATE_H
#define POKEMON_SELECTOR_EXPLORATIONSTATE_H
#include "State.h"

using namespace std;

class ExplorationState : public State {
private:
    sf::Texture backgroundTexture;
    sf::Sprite background;
    int randomEncounter;
    int randomArena;

public:
    ExplorationState(Game* game);
    void handleGameEvent(sf::Event &event) override;
    void update() override;
    void render(sf::RenderWindow &window) override;
};


#endif //POKEMON_SELECTOR_EXPLORATIONSTATE_H