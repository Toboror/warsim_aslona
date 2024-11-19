#include "jobs.h"
#include <iostream>
#include <random>
#include <__random/random_device.h>

// Calculates the total money collected from the tabs.
int jobs::calculate_tabs_money(int tab1, int tab2, int tab3) {
    int money_collected = 0;
    return money_collected = tab1 + tab2 + tab3;
}

// Calculates a random number between set values for the tab collecting.
int jobs::tabs_calculat_random_number(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(5, 100);
    int random_number = dis(gen);
    return random_number;
}

int jobs::collect_unpaid_tabs(game_mechanics &mechanics) {
    std::cout << "You start on your job to collect the unpaid tabs." << std::endl;

    int static tabs_collected = 0;

    while (tabs_collected < 3) {

        // Chooses a random number between the number set in the function.
        int first_tab_amount = tabs_calculat_random_number();
        int second_tab_amount = tabs_calculat_random_number();
        int third_tab_amount = tabs_calculat_random_number();

        // First tab. The person is a bit rude, but pays up.
        std::cout << "You approach the first person. They are a bit rude, but they pay up."
                     "\nMoney collected: " + std::to_string(first_tab_amount) << std::endl;
        tabs_collected++;

        // Second tab. The person is very nice and pays up.
        std::cout << "You approach the second person. They are very nice and pays up."
                     "\nMoney collected: " + std::to_string(second_tab_amount) << std::endl;
        tabs_collected++;

        // Third tab. The person is very aggressive and does not want to pay up.
        std::cout << "You approach the third person. They are very aggressive and does not want to pay up."
                     "\nMoney collected: " + std::to_string(third_tab_amount) << std::endl;
        std::cout << "You have to fight them." << std::endl;
        tabs_collected++;

        // Calculating the money collected from the tabs.
        int total_money_collected = calculate_tabs_money(first_tab_amount, second_tab_amount, third_tab_amount);
        mechanics.player_gold += total_money_collected;

        return mechanics.player_gold;

    }
    // Return 1 if job completed.
    if (tabs_collected == 3) {
        return 1;
    }
    return 0;
}