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

}

void MenuState::handleGameEvent(sf::Event &event) {
    if (event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Enter) {
        //creationOfParty();
        //trainerTeam->display_PokemonList();
        game->setState(new ExplorationState(game));
    }
}

void MenuState::update() {

}

void MenuState::render(sf::RenderWindow &window) {
    window.draw(background);
}

void MenuState::creationOfParty() {
    Pokedex* liste_Pokedex= Pokedex::getInstance();
    Pokemon_PC* pokemon_collection = new Pokemon_PC(liste_Pokedex);
    Pokemon_Party* pokemon_team = new Pokemon_Party(pokemon_collection);
    vector<int> listID;
    int random_id;
    int random_num_pokemon = (rand() % 6) +1;
    cout<<"random number : "<<random_num_pokemon<<endl;
    for (int i=0; i<random_num_pokemon-1; i++) {
        random_id = (rand() % 721) +1;
        cout<<"id Pokemon :"<<random_id<<endl;
        pokemon_collection->addPokemonToPCbyId(random_id);
    }
    listID=pokemon_collection->listOfId();
    for (int id : listID) {
        pokemon_team->addPokemonToPartyById(id);
        pokemon_collection->removePokemonToPCbyId(id);
    }
}