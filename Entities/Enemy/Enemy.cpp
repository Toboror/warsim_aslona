//
// Created by Tobias Rønningen on 25/11/2024.
//

#include "Enemy.h"

#include <unordered_map>

/*Method for when enemy is defeated.
 *Currently only prints defeated message with the enemy name.
 *Returns nothing, but will eventually modify player level, gold etc.
 */
void Enemy::enemyDefeated(){
    std::cout << name << " has been defeated!" << std::endl;
}

/*Method for when enemy is attacking the player.
 * Currently only prints the attacking message with the enemy name.
 * Returns nothing, but will eventually modify the player healthPoints.
 */
void Enemy::enemyAttack(){
    std::cout << name << " is attacking you!" << std::endl;
}

/*Method for when the enemy is victorious against the player.
 * Currently returns nothing.
 */
void Enemy::enemyVictorious(){
    std::cout << name << " is victorious!" << std::endl;
}

/*Method for calculating the enemy damage against the player.
 * It scales with enemy level.
 * Takes the enemyAttackPoints and enemyLevel as parameters.
 * Returns the damage the enemy is supposed to do against the player.
 */
int Enemy::calculateEnemyDamage(int enemyAttackPoints, int enemyLevel){
    int calculatedDamage = 0;

    calculatedDamage = enemyAttackPoints * (enemyLevel*3);

    return calculatedDamage;
}

/*
 * Method for dropping loot from enemy.
 * Following ranges decide possible drop:
 * Common loot: 0-10
 * Uncommon loot: 11-18
 * Rare loot: 19-25
 * Legendary loot: 26-30
 */
std::string Enemy::enemyDropTable(){

    /*
     * TODO
     * Currently the loot table always drops legendary sword.
     * It is supposed to generate a random number, and then return
     * the corresponding string from the HashMap.
     */

    std::string lootToBeDropped;
    std::unordered_map<int, std::string> enemyLoot;

    enemyLoot[0] = "Common Sword";
    enemyLoot[11] = "Uncommon Sword";
    enemyLoot[19] = "Rare Sword";
    enemyLoot[26] = "Legendary Sword";;

    auto it = enemyLoot.begin();

    if (enemyLoot.size() > 1) {
        ++it;
    }

    if (it != enemyLoot.end()) {
        lootToBeDropped=it->second;
        std::cout << "You got a " << lootToBeDropped << std::endl;
    }
    return lootToBeDropped;
}
