//
// Created by pressard-clovis on 26/09/2025.
//

#include "../inc/Game.h"

#include <iostream>

#include <SFML/Graphics.hpp>


Game::Game() : window(sf::VideoMode(800,600), "Pokemon",sf::Style::Titlebar | sf::Style::Close){
    stateOfTheClass=new MenuState(this);
}

Game::~Game() {
    delete stateOfTheClass;
}

void Game::run() {
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            else {
                stateOfTheClass->handleGameEvent(event);
            }
        }
        stateOfTheClass->update();
        window.clear();
        stateOfTheClass->render(window);
        window.display();
    }
}

void Game::setState(State *state) {
    stateOfTheClass=state;
}

void Game::setTeam() {

}

