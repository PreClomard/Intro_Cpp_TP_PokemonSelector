//
// Created by pressard-clovis on 26/09/2025.
//

#include "../inc/Game.h"
#include <SFML/Graphics.hpp>

Game::Game(State *state) {
    this->set_State(state);
}

Game::~Game() {
    delete stateOfTheClass;
}

void Game::set_State(State *state) {
    if (this->stateOfTheClass == nullptr) {
        delete this->stateOfTheClass;
    }
    this->stateOfTheClass = state;
    this->stateOfTheClass -> set_Game(this);
}

void Game::update() {
    this->stateOfTheClass->handleGameEvent();
}

void Game::run() {
    sf::RenderWindow window(sf::VideoMode(800,600), "Game Engine");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
}


