#include "hub_events.h"
#include <iostream>
#include <list>

#include "../../game_mechanics/jobs.h"

using namespace std;

bool static jobs_finished_tabs = false;

void hub_events::hub_mercenary(game_mechanics &mechanics){

    std::cout << "You meet a mercenary in the city hub. He looks like he has something important to say."
                 "\nMercenary: Hey, you looks like someone who needs a sword for hire."
                 " What about it? Want to hire me?" << std::endl;
    std::cout << "1. Hire the mercenary (300g)."
                 "\n2. Do not hire the mercenary." << std::endl;

    int user_input;
    std::cin >> user_input;

    switch (user_input) {
    case 1:
        if (mechanics.player_gold >= 300) {
            std::cout << "You hire the mercenary."
                         "\nYou have a new companion." << std::endl;
            mechanics.player_gold -= 300;
        } else {
            std::cout << "You do not have enough gold to hire the mercenary." << std::endl;
        }
    case 2:
        std::cout << "You decide not hire the mercenary." << std::endl;
    }

}

void hub_events::choose_random_hub_event(game_mechanics &mechanics) {

    // List with amount of events in the hub. Will have one more event for nothing happening.
    std::list<int> hub_events_list = {1, 2, 3};

    // Chooses a random number from the list and returns the value.
    int random_event = rand() % hub_events_list.size();

    switch (random_event) {
    case 0:
        hub_stranger(mechanics);
        break;
    case 1:
        hub_mercenary(mechanics);
        break;
    case 2:
        std::cout << "You walk around the city hub. Nothing happens." << std::endl;
        break;
    }
}


// Function for the player entering the tavern.
int hub_events::hub_tavern(game_mechanics &mechanics) {

            } else if (jobs_finished_tabs) {
                std::cout << "Do you want to give the innkeep the tabs?"
              "\n1. Yes"
              "\n2. No" << std::endl;
                int user_input2;
                std::cin >> user_input2;
                if (user_input == 1) {
                    std::cout << "You pay back the innkeep."
                                 "\nYou pay " + jobs::collect_unpaid_tabs(mechanics) << std::endl;
                    mechanics.player_gold -= jobs::collect_unpaid_tabs(mechanics);
                    mechanics.player_renown += 8;
                } else
                    std::cout << "You do not pay back the innkeep and keep the money" << std::endl;
                mechanics.player_renown -= 15;
            }
            int user_input;
            std::cin >> user_input;
            if (user_input == 1) {
                std::cout << "You take the job."
                             "\nYou have to collect 3 unpaid tabs." << std::endl;
                if (jobs::collect_unpaid_tabs(mechanics) == 1) {
                    jobs_finished_tabs = true;
                }
            } else {
                std::cout << "You do not take the job." << std::endl;
            }
            break;
        case 4:
            std::cout << "You leave the tavern." << std::endl;
            return 4;
        default:
            std::cout << "You did not put in anything valid." << std::endl;
            break;
    }
    return 0;
}

// Function for the player entering the casino.
int hub_events::hub_casino(game_mechanics &mechanics) {
    return 0;
}

// Function for the player entering the market.
int hub_events::hub_market(game_mechanics &mechanics) {

    // Checking if it is the first time in the market in this iteration. If it is, print out the intro text.
    static bool first_time_in_market = true;
    if (first_time_in_market) {
        std::cout << "You enter the market. The smell of fresh fruit and vegetables fills the air." << std::endl;
        first_time_in_market = false;
    }

    return 0;

}

// Function if player decides to leave the hub. Returns an int to let the program know what to do.
int hub_events::left_the_hub(game_mechanics &mechanics) {

    std::cout << "You leave the city. Looking back over your shoulder you see run down buildings"
                 "and sand blowing in the wind." << std::endl;

    return 0;
}

int hub_events::hub_what_to_do(game_mechanics &mechanics){

    // Prompting the player on what to do once in the Hub.
    std::cout << "\nYou are in the Hub. What would you like to do?"
                 "\n1. Enter the tavern."
                 "\n2. Enter the casino."
                 "\n3. Leave the city."
                 "\n4. Enter the market."
                 "\n5. Walk around." << std::endl;

    int user_input;
    std::cin >> user_input;

    switch (user_input) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        default:
            std::cout << "You did not put in anything valid." << std::endl;
            return 0;
    }

}