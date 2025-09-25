//
// Created by guilh on 21/09/2025.
//

#ifndef POKEMON_SELECTOR_OBJECT_H
#define POKEMON_SELECTOR_OBJECT_H

using  namespace std;
//On crée un interface Object qui pourra alors définir tous les items que
//l'on voudra introduire dans le jeu plus tard.
class Object {
protected:
    string name;
public:
    virtual Object(string name);
    virtual ~Object();
    virtual useItem(Pokemon pokemon); // En créant une fonction useItem n'importe quel item peut
    //Override cette fonction afin d'appliquer la fonctionnalité voulue
};

#endif //POKEMON_SELECTOR_OBJECT_H