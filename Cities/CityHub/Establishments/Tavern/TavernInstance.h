// In TavernInstance.h
#ifndef TAVERNINSTANCE_H
#define TAVERNINSTANCE_H

#include "../../../../game_mechanics/game_mechanics.h"

class TavernInstance {
public:

    TavernInstance();

    static void leaveTavern(game_mechanics &mechanics);
    static int lookForJobs(game_mechanics &mechanics);
    static void talkToclientele(game_mechanics &mechanics);
    static void buyADrink(game_mechanics &mechanics);
    static void whatToDoTavern(game_mechanics &mechanics);
    static void enterTavern(game_mechanics &mechanics);
};

#endif // TAVERNINSTANCE_H