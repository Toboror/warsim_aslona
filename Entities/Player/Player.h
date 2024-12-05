//
// Created by Tobias Rønningen on 25/11/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <utility>
#include <vector>


class Player {
public:

    std::string name;
    int level;
    int health;

    Player(std::string player_name, int player_level, int player_health){
        name = std::move(player_name);
        level = player_level;
        health = player_health;
    }

    //Function for the player is attacking.
    void playerAttack();

    //Function for when the player is  defeated. AKA health below or at 0.
    void playerDefeated();

    //Function for when the player is victorious.
    void playerVictorious();

    //Function for calculating enemy damage. Returns damage.
    static int calculatePlayerDamage(int playerWeaponDamage, int playerLevel);

};




#endif //PLAYER_H
