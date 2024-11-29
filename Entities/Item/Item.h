//
// Created by Tobias Rønningen on 25/11/2024.
//

#ifndef ITEM_H
#define ITEM_H
#include <string>


class Item {
public:
    std::string name;
    int damage;

    Item();

    static void generateItem();

};



#endif //ITEM_H
