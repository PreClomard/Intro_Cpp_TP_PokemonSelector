//
// Created by pressard-clovis on 26/09/2025.
//

#include "../../inc/State/ExplorationState.h"
#include "../../inc/State/EncounterState.h"
#include "../../inc/Game.h"
#include "../../inc/Pokemon_Classes/Pokedex.h"
#include "../../inc/Pokemon_Classes/Pokemon_Party.h"
#include <iostream>

using namespace std;

ExplorationState::ExplorationState(Game* game) {
    this->game=game;
    if(!backgroundTexture.loadFromFile("../img/background/exploration.png")) {
        cout<<"Failed to load background texture"<<endl;
    }
    background.setTexture(backgroundTexture);
    background.setScale(1.f, 1.f);
}

void ExplorationState::handleGameEvent(sf::Event &event) {
    if (event.type==sf::Event::KeyPressed ) {
        if (event.key.code==sf::Keyboard::Q) {
            randomEncounter=rand() % 101;
            if (randomEncounter<30) {
                game->setState(new EncounterState(game));
            }
        }
        else if (event.key.code==sf::Keyboard::D) {
            //game->setState(new ArenaState(game));
        }
    }

}

void ExplorationState::update() {

}

void ExplorationState::render(sf::RenderWindow &window) {
    window.draw(background);
}