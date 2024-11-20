//
// Created by Tobias Rønningen on 20/11/2024.
//

#include "TavernInstance.h"

#include <iostream>
#include <list>

#include "../../../../game_mechanics/game_mechanics.h"

using namespace std;

// The price for a drink at the Tavern.
int priceForADrink = 5;

// Method for entering the tavern.
void enterTavern(game_mechanics &mechanics){

    cout << "You enter the tavern." << endl;

}

// Method for choosing what to do in the Tavern.
void whatToDoTavern(game_mechanics &mechanics){
    cout <<
             "\nWhat would you like to do?"
             "\n1. Buy a drink " << "(" << to_string(priceForADrink) << ")." <<
             "\n2. Talk to others."
             "\n3. Look for jobs."
             "\n4. Leave the tavern." << endl;

    int user_input;
    std::cin >> user_input;

    bool instance_running = true;
    TavernInstance tavern_actions;

    while (instance_running) {
        switch (user_input) {
            case 1:
                tavern_actions.buyADrink(mechanics);
                instance_running = false;
                break;
            case 2:
                tavern_actions.talkToclientele(mechanics);
                instance_running = false;
                break;
            case 3:
                tavern_actions.lookForJobs(mechanics);
                instance_running = false;
                break;
            case 4:
                tavern_actions.leaveTavern(mechanics);
                instance_running = false;
                break;
            default:
                cout << "Invalid input." << endl;
                std::cin >> user_input;
            }
        }

}

// Method for when the player decides to buy a drink.
void buyADrink(game_mechanics &mechanics){

    cout << "You decide to buy a drink. It is refreshing " << "(" << to_string(priceForADrink) << ")." << endl;
    mechanics.player_gold -= priceForADrink;

}

// Method for talking to the clientele of the tavern.
void talkToclientele(game_mechanics &mechanics){

    cout << "You decide to talk to the other clientele."
            "\nThey tell you of a strange man wandering the streets of the Hub." << endl;

}

int lookForJobs(game_mechanics &mechanics){

    list<string> jobs{"Collect debts", "Help the locals"};

    cout << "You decide to look for jobs on the bulletin board." << endl;

}

int leaveTavern(game_mechanics &mechanics){

}
