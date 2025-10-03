//
// Created by pressard-clovis on 26/09/2025.
//
#include <iostream>
#include "../../inc/State/MenuState.h"


using namespace std;

MenuState::MenuState(Game* game) {
    this->game=game;
    backgroundTexture.loadFromFile("../img/background/menu.png");
    background.setTexture(backgroundTexture);
    background.setScale(1.f, 1.f);
    if (!font.loadFromFile("../arial.ttf")) {
        cerr << "Failed to load font" << endl;
    }

    text.setFont(font);
    text.setString("Press Enter to continue...");
    text.setCharacterSize(24);
    text.setColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
    text.setPosition(1.f, 1.f);

}

void MenuState::handleGameEvent(sf::Event &event) {
    if (event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Enter) {
        game->setState(new ExplorationState(game));

    }
}

void MenuState::update() {

}

void MenuState::render(sf::RenderWindow &window) {
    window.draw(background);
    window.draw(text);
}

