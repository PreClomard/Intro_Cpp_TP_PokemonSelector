//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_ARENASTATE_H
#define POKEMON_SELECTOR_ARENASTATE_H
#include "State.h"


class ArenaState : public State {
private:
    sf::Texture backgroundTexture;
    sf::Sprite background;

    Pokemon_PC* pokemon_collection_Arene;
    Pokemon_Party* arenaTeam;
public:
    ArenaState(Game* game);
    void handleGameEvent(sf::Event &event) override;
    void update() override;
    void render(sf::RenderWindow &window) override;
};


#endif //POKEMON_SELECTOR_ARENASTATE_H