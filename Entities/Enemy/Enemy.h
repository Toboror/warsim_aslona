//
// Created by Tobias Rønningen on 25/11/2024.
//

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
protected:
    std::string name;
    int healthPoints;
    int attackPoints;
    int level;

public:
Enemy() : name("Default"), healthPoints(100), attackPoints(10), level(1) {}

    //Function for enemy attacking.
    void enemyAttack();

    //Function for enemy defeated.
    void enemyDefeated();

    //Function for enemy victorious.
    void enemyVictorious();

    //Function for calculating enemy damage. Returns damage.
    static int calculateEnemyDamage(int enemyAttackPoints, int enemyLevel);

    //Method for enemy loot drop.
    static std::string enemyDropTable();

};



#endif //ENEMY_H
