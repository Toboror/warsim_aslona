#include "game_events/city_hub_events/hub_events.h"
#include "game_mechanics/game_mechanics.h"

int main() {
    srand(time(0)); // Seed the random number generator

    game_mechanics mechanics;

    bool if_game_started = false;
    bool has_met_stranger = false;
    bool in_tavern = true;

    while (mechanics.game_running)
    {
        if (if_game_started == false) {
            switch (game_mechanics::main_menu(mechanics))
            {
            case 5:
                mechanics.game_running = false;
                break;
            }
            // If the difficulty has been chosen, choose a name
            if (mechanics.chosen_difficulty)
            {
                game_mechanics::choose_name(mechanics);
            }
            // If the name has been chosen, start the main game screen
            if (mechanics.name_chosen)
            {
                game_mechanics::main_game_screen(mechanics);
            }
            if_game_started = true;
        }

switch (hub_events::hub_what_to_do(mechanics)) {
    case 1:
        while (in_tavern) {
            if (hub_events::hub_tavern(mechanics) == 4) {
                in_tavern = false;
            }
        }
        break;
    case 5:
        if (!has_met_stranger) {
            hub_events::hub_stranger(mechanics);
            has_met_stranger = true;
        }
        break;
    case 0:
        break;
    default:
        break;
}

game_mechanics::main_game_screen(mechanics);

        // Stops the game from looping to start menu becayse it is annoying.
        //mechanics.game_running = false;

    }
}
