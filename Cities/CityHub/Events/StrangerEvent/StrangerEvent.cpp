//
// Created by Tobias Rønningen on 20/11/2024.
//

#include "StrangerEvent.h"

#include <iostream>

#include "../../../../game_mechanics/game_mechanics.h"

class game_mechanics;
using namespace std;

// Method which initiates the meeting with the stranger.
// Returns 1 if yes to meeting and 0 if no.
int meetingStranger(game_mechanics &mechanics){

    // Checks if player chooses to listen to the stranger or not.
    bool listen_to_stranger = false;

    // Prompts the user on what to do once meeting with the Stranger.
    cout << "You meet a stranger in the city hub. He looks like he has something important to say." << endl;
    cout << "Do you want to listen to him?"
                 "\n1. Listen to the stranger."
                 "\n2. Do not listen to the stranger." << endl;

    int user_input;
    cin >> user_input;

    // While loop waiting for user input. Will loop if invalid input.
    while (!listen_to_stranger) {
        if (user_input == 1) {
            listen_to_stranger = true;
        } else if (user_input == 2) {
            break;
        } else {
            cout << "Invalid input." << endl;
        }
    }

    if (listen_to_stranger) {
        return 1;
    }

    return 0;

}

// Method which makes the Stranger ask the player for money.
// Should ONLY be called if meetingStranger() returns 1.
// Returns 1 if player gave money, and returns 0 if no.
int askedForMoney(game_mechanics &mechanics){

    cout << "Stranger: Hello, can I have some money?" << endl;
    cout << "Do you want to give him some money? (10 gold)"
                 "\n1. Give him money."
                 "\n2. Do not give him money."  << endl;

    int user_input;
    cin >> user_input;

    bool gave_stranger_money = false;
    bool instance_running = true;

    while (instance_running) {
        if (user_input == 1) {
            cout << "You give the stranger some money."
             "\nYou renown has increased." << endl;
            mechanics.player_gold -= 10;
            mechanics.player_renown += 5;
            gave_stranger_money = true;
            instance_running = false;
        } else if (user_input == 2) {
            cout << "You decide not to give the stranger money." << endl;
            instance_running = false;
        } else {
            cout << "Invalid input." << endl;
        }
    }

    if (gave_stranger_money) {
        return 1;
    }

    return 0;

}

// Method where the Stranger gives a gift to the player for giving him money.
// Should ONLY be called if askedForMoney() returns 1.
void givesGift(game_mechanics &mechanics){

    cout << "Stranger: Take this, as a gift"
            "\nHe gives you a pouch of gold (250g)" << endl;

    mechanics.player_gold += 250;

}