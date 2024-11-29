//
// Created by Tobias Rønningen on 25/11/2024.
//

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
#include <vector>

using namespace std;
using namespace std::pmr;

class Inventory {
public:

    Inventory() = default;

    std::pmr::vector<std::string> createInventory();

};



#endif //INVENTORY_H
