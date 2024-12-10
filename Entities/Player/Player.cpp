//
// Created by Tobias Rønningen on 25/11/2024.
//

#include "Player.h"

#include <iostream>

void Player::playerAttack(){
    std::cout << "You attack the enemy foe!" << std::endl;
}

void Player::playerBlock(){
    std::cout << "You block the enemy's attack!" << std::endl;
}

void Player::playerFlee(){
    std::cout << "You fled from the enemy foe!" << std::endl;
}

int Player::calculatePlayerDamage(int playerWeaponDamage, int playerLevel){

    int player_damage = playerWeaponDamage + playerLevel;
    return player_damage;
}



void Player::playerDefeated(){
    std::cout << "You have been defeated!" << std::endl;
}

void Player::playerVictorious(){
    std::cout << "You have are victorious!" << std::endl;
}





