//
// Created by Tobias Rønningen on 03/12/2024.
//

#ifndef NPCTEMPLATE_H
#define NPCTEMPLATE_H

#include <iostream>

class NPCtemplate {
public:

    std::string name;
    int level;

    NPCtemplate();

    /* Method for when an NPC greets the player.
    It will have multiple greetings which are picked at random.
    Takes in the NPC name as a parameter. */
    void npcGreetings(std::string name);

};



#endif //NPCTEMPLATE_H
