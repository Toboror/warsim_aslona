//
// Created by Tobias Rønningen on 25/11/2024.
//

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <utility>

class Player;

class Enemy {


public:

    std::string name;
    int healthPoints;
    int attackPoints;
    int level;

    Enemy(std::string enemy_name, int enemy_healthPoints, int enemy_attackPoints, int enemy_level){
        name = std::move(enemy_name);
        healthPoints = enemy_healthPoints;
        attackPoints = enemy_attackPoints;
        level = enemy_level;
    }

    // Method for fighting the enemy.
    void enemyFight(Enemy enemy, Player player);

    // Method for encountering an enemy.
    void enemyEncounter(Enemy enemy, Player player);

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
