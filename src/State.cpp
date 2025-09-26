//
// Created by pressard-clovis on 26/09/2025.
//
#include "../inc/State.h"

State::~State() {}

//Setter
void State::set_Game(Game* game) {
    this->game = game;
}