//
// Created by pressard-clovis on 26/09/2025.
//
#include <iostream>
#include "../inc/MenuState.h"

#include "../inc/Game.h"

using namespace std;

void MenuState::handleGameEvent() {
    cout<<"MenuState::handleGameEvent"<<endl;
    game->run();
}