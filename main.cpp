#include <iostream>

#include "Entities/Enemy/Enemy.h"
#include "Entities/Player/Player.h"
#include "game_mechanics/game_mechanics.h"

int main() {

    game_mechanics mechanics;

    Player player(mechanics.user_name, 1, 100);
    std::pmr::vector<std::string> player_inventory = {};

    Enemy dummy("dummyEnemy", 10, 0, 2);

    while (player.health > 0) {

        // If the player choosees to quit the game by pressing 5 on keyboard.
        if (game_mechanics::main_menu(mechanics) == 5) {
            break;
        }

        // Prompts the player to choose a name.
        game_mechanics::choose_name(mechanics);

        // Intro text for the city which the player starts in.
        game_mechanics::main_game_screen(mechanics);

        // Prompts the player on what to do next.
        game_mechanics::main_menu_what_to_do(mechanics);

        dummy.enemyEncounter(dummy);
        std::cin.get();

        // Adds enemy drop to player inventory.
        //player_inventory.push_back(Enemy::enemyDropTable());

    }

    player.playerDefeated();

    return 0;

}
