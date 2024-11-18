#include "hub_events.h"
#include <iostream>

void hub_events::hub_stranger(game_mechanics &mechanics) {
    std::cout << "You meet a stranger in the city hub. He looks like he has something important to say." << std::endl;
    std::cout << "Do you want to listen to him?"
                 "\n1. Listen to the stranger."
                 "\n2. Do not listen to the stranger." << std::endl;

    bool listen_to_stranger;
    int user_input;
    std::cin >> user_input;

    if (user_input == 1) {
        listen_to_stranger = true;
    } else {
        listen_to_stranger = false;
    }

    if (listen_to_stranger) {
        std::cout << "Stranger: Hello, can I have some money?" << std::endl;
        std::cout << "Do you want to give him some money? (10 gold)"
                     "\n1. Give him money."
                     "\n2. Do not give him money."  << std::endl;
        std::cin >> user_input;

        if (user_input == 1) {
            std::cout << "You give the stranger some money." << std::endl;
            mechanics.player_gold -= 10;
        } else {
            std::cout << "You walk away from the stranger." << std::endl;
        }
    } else {
        std::cout << "You walk away from the stranger." << std::endl;
    }
}