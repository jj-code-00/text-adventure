/**
 * @file enemy.h
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief Header file for a enemy. Includes enemyCharacter typedef
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ENEMY_H_
#define ENEMY_H_

#include "races.h"

typedef struct enemyCharacter{
    char name[20];
    race enemyRace;
    int hp;
    int lvl;
} enemyCharacter;

enemyCharacter initializeEnemy(enemyCharacter scaler, int lvl, int enemyType);
  
#endif