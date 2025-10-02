//
// Created by pressard-clovis on 02/10/2025.
//

#ifndef POKEMON_SELECTOR_DYNAMICSPRITE_H
#define POKEMON_SELECTOR_DYNAMICSPRITE_H

#include <SFML/Graphics.hpp>

class DynamicSprite {
private:
    sf::Sprite sprite;
    sf::Texture texture;

    bool isWalking;
    double speed;
    int spriteSheetNumberOfColumn;
    double timeBetweenFrame;

    bool isMovingPossible();
    void move();


public:
    enum class Direction {
        Up,
        Down,
        Left,
        Right
    };

    DynamicSprite();
    ~DynamicSprite();

    void draw();
    void setDirection();

};


#endif //POKEMON_SELECTOR_DYNAMICSPRITE_H