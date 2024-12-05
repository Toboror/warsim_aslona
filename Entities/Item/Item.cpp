//
// Created by Tobias Rønningen on 25/11/2024.
//

#include "Item.h"

#include <iostream>
#include <vector>
#include <cstdlib>

// Function for generating a random item. Currently only generates weapons.
// Ignore suggestion it is just for the randomNum.
void Item::generateItem(){

    // List of possible adjectives.
    std::pmr::vector<std::string> rarities{"Common", "Uncommon", "Rare", "Legendary"};
    // List of possible weapon names.
    std::pmr::vector<std::string> weaponNames{"Sword", "Mace", "Bow", "Dagger", "Axe", "Spear", "Hammer", "Staff", "Crossbow", "Scythe", "Flail", "Halberd", "Lance", "Rapier", "Saber", "Katana", "Claymore", "Trident", "Whip", "Morningstar"};

    std::string chosenAdjective{};
    std::string chosenWeaponName{};

    // For getting ONE adjective from the list.
    for (int i = 0; i < 1; i++) {
        int randomNum = rand() % rarities.size() + 0;
        int* randomNumPtr = &randomNum;
        for (int i = 0; i < rarities.size(); i++) {
            if (*randomNumPtr == i) {
                chosenAdjective = rarities[i];
            }
        }
    }

    // For getting ONE weapon name from the list.
    for (int i = 0; i < 1; i++) {
        int randomNum = rand() % weaponNames.size() + 0;
        int* randomNumPtr = &randomNum;
        for (int i = 0; i < weaponNames.size(); i++) {
            if (*randomNumPtr == i) {
                chosenWeaponName = weaponNames[i];
            }
        }
    }

    // Puts the two chosen words together and changes the text color.
    std::cout << "\033[32m" << "You got the " + chosenAdjective << " " << chosenWeaponName << "\033[0m" << std::endl;

}

