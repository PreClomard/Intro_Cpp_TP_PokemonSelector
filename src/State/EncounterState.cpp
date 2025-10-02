//
// Created by pressard-clovis on 26/09/2025.
//

#include "../../inc/State/EncounterState.h"

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
}