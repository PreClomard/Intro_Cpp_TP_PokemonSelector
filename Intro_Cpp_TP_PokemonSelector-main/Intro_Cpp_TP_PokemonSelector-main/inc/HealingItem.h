//
// Created by guilh on 25/09/2025.
//

#ifndef INTRO_CPP_TP_POKEMONSELECTOR_MAIN_HEALINGITEM_H
#define INTRO_CPP_TP_POKEMONSELECTOR_MAIN_HEALINGITEM_H

using  namespace std;

class HealingItem:public Object{
protected:
    string name;
    double healingPoints;
public:
    HealingItem(string name, double healingPoints);
    ~HealingItem();
    void useItem(Pokemon pokemon);
};


#endif //INTRO_CPP_TP_POKEMONSELECTOR_MAIN_HEALINGITEM_H