//
// Created by Tobias Rønningen on 25/11/2024.
//

#include "Enemy.h"

#include <unordered_map>

#include "../Item/Item.h"
#include "../Player/Player.h"

/*
 * Method for when the player encounters an enemy.
 * Takes in which enemy it is as a parameter.
 */
void Enemy::enemyEncounter(Enemy enemy, Player player){

    // Tells the player which enemy it is and which level. Furthermore prompts the player on what to do next.
    std::cout << "You have encountered a level " << enemy.level << " "
    << enemy.name << "!" << "\nWhat will you do?" << std::endl;

    std::cout << "1. Engage" << "\n2. Flee" << std::endl;

    int user_input = NULL;
    std::cin >> user_input;

    switch (user_input) {
        case 1:
            std::cout << "You chose to engage the " << enemy.name << std::endl;
        enemy.enemyFight(enemy, player);
        break;
        case 2:
            std::cout << "You chose to flee from the " << enemy.name << std::endl;
        break;
        default:
            std::cout << "You have to choose between one of the listed options." << std::endl;
        break;
    }
}

void Enemy::enemyFight(Enemy enemy, Player player){

    while (enemy.healthPoints > 0 && player.health > 0) {
        std::cout << "It is your turn first. What do you want to do?" <<
            "\n1. Attack the enemy." <<
                "\n2. Block" <<
                    "\n3. Try to flee." << std::endl;

        int user_input = NULL;
        std::cin >> user_input;

        switch (user_input) {
        case 1:
            player.playerAttack();
            break;
        case 2:
            player.playerBlock();
            break;
        case 3:
            player.playerFlee();
            break;
        default:
            std::cout << "You must choose one of the specified options." << std::endl;
            break;
        }
    }

}

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

    int calculatedDamage = enemyAttackPoints * (enemyLevel*3);

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

    // Seed the random number generator to ensure different results each run
    srand(static_cast<unsigned>(time(0)));

    /*
     * It is supposed to generate a random number, and then return
     * the corresponding string from the HashMap.
     */

    std::string lootToBeDropped;

    std::unordered_map<int, std::string> enemyLoot = {
        {0, "Common Sword"}, {1, "Common Mace"}, {2, "Common Bow"}, {3, "Common Dagger"}, {4, "Common Axe"},
        {5, "Common Spear"}, {6, "Common Hammer"}, {7, "Common Staff"}, {8, "Common Crossbow"}, {9, "Common Scythe"},
        {10, "Common Flail"}, {11, "Uncommon Sword"}, {12, "Uncommon Mace"}, {13, "Uncommon Bow"}, {14, "Uncommon Dagger"},
        {15, "Uncommon Axe"}, {16, "Uncommon Spear"}, {17, "Uncommon Hammer"}, {18, "Uncommon Staff"}, {19, "Rare Sword"},
        {20, "Rare Mace"}, {21, "Rare Bow"}, {22, "Rare Dagger"}, {23, "Rare Axe"}, {24, "Rare Spear"},
        {25, "Rare Hammer"}, {26, "Legendary Sword"}, {27, "Legendary Mace"}, {28, "Legendary Bow"}, {29, "Legendary Dagger"},
        {30, "Legendary Axe"}
    };

    int randomNum = rand() % 31; // Generate a random number between 0 and 30

    std::cout << "The random number is: " << randomNum << std::endl;
    std::cout << "You got a " << enemyLoot.at(randomNum) << std::endl;

    return enemyLoot.at(randomNum);

}
