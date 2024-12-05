#include <iostream>

#include "Entities/Enemy/Enemy.h"
#include "Entities/Player/Player.h"
#include "game_mechanics/game_mechanics.h"

int main() {

    game_mechanics mechanics;

    game_mechanics::choose_name(mechanics);
    game_mechanics::chooseDifficulty(mechanics);

    Player player(mechanics.user_name, 1, 100);

    while (player.health > 0) {

        game_mechanics::main_game_screen(mechanics);
        //game_mechanics::main_menu_what_to_do(mechanics);

    }
    player.playerDefeated();

    return 0;

}
