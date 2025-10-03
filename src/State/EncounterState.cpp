//
// Created by pressard-clovis on 26/09/2025.
//

#include "../../inc/State/EncounterState.h"
#include "../../inc/Pokemon_Classes/Pokemon_Party.h"
#include "../../inc/Game.h"
#include <iostream>

using namespace std;

EncounterState::EncounterState(Game* game) {
    this->game=game;
    if(!backgroundTexture.loadFromFile("../img/background/exploration_01.png")) {
        cout<<"Failed to load background texture"<<endl;
    }
    background.setTexture(backgroundTexture);
    background.setScale(5.f, 5.f);
}

void EncounterState::handleGameEvent(sf::Event &event) {
    if (event.type==sf::Event::KeyPressed ) {
        if (event.key.code==sf::Keyboard::Q) {
            cout<<"Encounter State"<<endl;
        }
        else if (event.key.code==sf::Keyboard::D) {
            //game->setState(new ArenaState(game));
        }
    }

}

void EncounterState::update() {

}

void EncounterState::render(sf::RenderWindow &window) {
    window.draw(background);

    int x = 50;
    trainerTeam=game->getTrainerTeam();
    for (Pokemon& p_trainer : trainerTeam->getPokemonList()) {
        sf::Texture texture;
        texture.loadFromFile(p_trainer.get_imagePath());
        sf::Sprite sprite(texture);
        sprite.setPosition(x, 400);
        sprite.setScale(2.f, 2.f);
        window.draw(sprite);
        x += 150; // espace entre les Pokémon
    }

}