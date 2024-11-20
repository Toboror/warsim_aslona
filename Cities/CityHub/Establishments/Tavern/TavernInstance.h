//
// Created by Tobias Rønningen on 20/11/2024.
//

#ifndef TAVERNINSTANCE_H
#define TAVERNINSTANCE_H


class game_mechanics;

class TavernInstance {
public:

    TavernInstance();

    void enterTavern(game_mechanics &mechanics);
    void whatToDoTavern(game_mechanics &mechanics);
    void buyADrink(game_mechanics &mechanics);
    void talkToclientele(game_mechanics &mechanics);
    void lookForJobs(game_mechanics &mechanics);
    int leaveTavern(game_mechanics &mechanics);

};



#endif //TAVERNINSTANCE_H
