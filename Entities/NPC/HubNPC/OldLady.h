//
// Created by Tobias Rønningen on 03/12/2024.
//

#ifndef OLDLADY_H
#define OLDLADY_H
#include "../NPCtemplate.h"

class OldLady : public NPCtemplate {
public:

    // Default constructor
    OldLady() {
        NPCtemplate::name = "Unnamed";
        NPCtemplate::level = 1;
    }

    // Parameterized constructor
    OldLady(std::string name, int level) {
        NPCtemplate::name = name;
        NPCtemplate::level = level;
    }

    // Method for when meeting the old lady.
    void oldLadyGreeting();
};

#endif // OLDLADY_H