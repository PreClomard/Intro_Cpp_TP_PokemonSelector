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
    setTeam();
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
    liste_Pokedex= Pokedex::getInstance();
    pokemon_collection = new Pokemon_PC(liste_Pokedex);
    trainerTeam = new Pokemon_Party(pokemon_collection);
    vector<int> listID;
    int random_id;
    int random_num_pokemon = (rand() % 6) +1;
    cout<<"random number : "<<random_num_pokemon<<endl;
    for (int i=0; i<random_num_pokemon; i++) {
        random_id = (rand() % 721) +1;
        cout<<"id Pokemon :"<<random_id<<endl;
        pokemon_collection->addPokemonToPCbyId(random_id);
        trainerTeam->addPokemonToPartyById(random_id);
    }
    cout<<"===========Liste 1:============"<<endl;
    trainerTeam->display_PokemonList();
    cout<<"=============Liste 2:=============="<<endl;
    pokemon_collection->display_PokemonList();
}

Pokemon_Party* Game::getTrainerTeam() {
    return trainerTeam;
}

Pokedex* Game::getPokedex() {
    return liste_Pokedex;
}