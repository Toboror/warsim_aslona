#include "game_events/city_hub_events/hub_events.h"
#include "game_mechanics/game_mechanics.h"

int main() {
    srand(time(0)); // Seed the random number generator

    game_mechanics mechanics;

    bool if_game_started = false;

    while (mechanics.game_running) {
        if (!if_game_started) {
            switch (game_mechanics::main_menu(mechanics)) {
            case 5:
                mechanics.game_running = false;
                break;
            }
            // If the difficulty has been chosen, choose a name
            if (mechanics.chosen_difficulty) {
                game_mechanics::choose_name(mechanics);
            }
            // If the name has been chosen, start the main game screen
            if (mechanics.name_chosen) {
                game_mechanics::main_game_screen(mechanics);
                if_game_started = true;
            }
        } else {
            game_mechanics::main_menu_what_to_do(mechanics);
        }
    }

    return 0;
}