//
// Created by pressard-clovis on 26/09/2025.
//

#ifndef POKEMON_SELECTOR_GAMEOVERSTATE_H
#define POKEMON_SELECTOR_GAMEOVERSTATE_H
#include "State.h"


class GameOverState : public State {
private:
    sf::Texture backgroundTexture;
    sf::Sprite background;

public:
    GameOverState(Game* game);
    void handleGameEvent(sf::Event &event) override;
    void update() override;
    void render(sf::RenderWindow &window) override;
};


#endif //POKEMON_SELECTOR_GAMEOVERSTATE_H