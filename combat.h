/**
 * @file combat.h
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief Combat header file
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef COMBAT_H_
#define COMBAT_H_

#include "enemy.h"
#include "characterSheet.h"

int playerAttackRoll(playerCharacter player);
int playerDefenseRoll(playerCharacter player);
int playerWillRoll(playerCharacter player);
int playerMagicRoll(playerCharacter player);
int enemyAttackRoll(enemyCharacter opponent);
int enemyDefenseRoll(enemyCharacter opponent);
int enemyWillRoll(enemyCharacter opponent);
int enemyMagicRoll(enemyCharacter opponent);
int combat(playerCharacter player, enemyCharacter opponent);

#endif