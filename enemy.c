/**
 * @file enemy.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief Includes every enemy in the game and can initial them for use
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "enemy.h"
#include <string.h>

/**
 * @brief initializes an enemy and scales them appropriately to a level
 * 
 * @param scaler enemy to be initialized
 * @param lvl 
 * @param enemyType int that corresponds to an index of the enemyRace array in races.c
 * @return enemyCharacter 
 */
enemyCharacter initializeEnemy(enemyCharacter scaler, int lvl, int enemyType){
    scaler.enemyRace = enemyRaces[enemyType];
    strcpy(scaler.name,scaler.enemyRace.name);
    scaler.lvl = lvl;
    scaler.hp = scaler.enemyRace.maxHp * scaler.lvl;
    scaler.enemyRace.atk += scaler.lvl;
    scaler.enemyRace.def += scaler.lvl;
    scaler.enemyRace.mag += scaler.lvl;
    scaler.enemyRace.will += scaler.lvl;
    return scaler;
}