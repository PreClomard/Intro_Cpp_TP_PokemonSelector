//
// Created by pressard-clovis on 11/09/2025.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../../inc/Pokemon_Classes/Pokedex.h"


Pokedex* Pokedex::pinstance{nullptr};
Pokedex::Pokedex() {
    int cmpt=0;
    std::ifstream fichier("../pokedex.csv"); // Ouvre le fichier
    if (!fichier.is_open()) { // Vérifie si le fichier est bien ouvert
        std::cerr << "Can't open the file : " << "../pokedex.csv" << std::endl;
        return;
    }
    std::string ligne;
    while (std::getline(fichier, ligne)) { // Lit le fichier ligne par ligne
        std::stringstream ss(ligne); // Utilise un flux pour diviser la ligne
        std::string cellule;
        std::vector<std::string> donneesLigne;
        // Divise la ligne en cellules séparées par des virgules
        while (std::getline(ss, cellule, ',')) {
            donneesLigne.push_back(cellule); // Ajoute chaque cellule au vecteur
        }

        if (cmpt!=0) {
            int id=std::stoi(donneesLigne[0]);
            string name=donneesLigne[1];
            int generation=std::stoi(donneesLigne[11]);
            double Pv_Max=std::stod(donneesLigne[5]);
            double attack=std::stod(donneesLigne[9]);
            double defense=std::stod(donneesLigne[7]);
            string imagePath="../img/pokemon/" + std::to_string(id) + ".png";
            Pokemon pokemonTemp(id,name,generation,Pv_Max,Pv_Max,attack,defense,imagePath);
            pokemonList.push_back(pokemonTemp);
        }
        cmpt++;
    }
    fichier.close(); // Ferme le fichier
}

Pokedex *Pokedex::getInstance() {
    if (pinstance==nullptr) {
        pinstance=new Pokedex();
    }
    else {
        cout<<"Instance already existing"<<endl;
    }
    return pinstance;
}


