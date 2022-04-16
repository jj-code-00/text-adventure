/**
 * @file races.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief initializes stats for both player and enemy races
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "races.h"
#include <string.h>

race playerRaces[3]; // number of races

/**
 * @brief initializes stats for all player races
 * 
 */
void initializePlayerRaces(){

    char playerRace0[] = "human\0";
    strcpy(playerRaces[0].name,playerRace0);
    playerRaces[0].atk = 10;
    playerRaces[0].def = 10;
    playerRaces[0].mag = 10;
    playerRaces[0].will = 10;
    playerRaces[0].maxHp = 50;

    char playerRace1[] = "elf\0";
    strcpy(playerRaces[1].name,playerRace1);
    playerRaces[1].atk = 5;
    playerRaces[1].def = 5;
    playerRaces[1].mag = 15;
    playerRaces[1].will = 15;
    playerRaces[1].maxHp = 35;

    char playerRace2[] = "orc\0";
    strcpy(playerRaces[2].name,playerRace2);
    playerRaces[2].atk = 15;
    playerRaces[2].def = 15;
    playerRaces[2].mag = 5;
    playerRaces[2].will = 5;
    playerRaces[2].maxHp = 65;
}

race enemyRaces[1]; //number of enemy races

/**
 * @brief initializes states for all enemy races
 * 
 */
void initializeEnemyRaces(){
    char enemyRace[] = "slime\0";
    strcpy(enemyRaces[0].name,enemyRace);
    enemyRaces[0].atk = 5;
    enemyRaces[0].def = 5;
    enemyRaces[0].mag = 0;
    enemyRaces[0].will = 0;
    enemyRaces[0].maxHp = 10;
}

void initializeRaces(){
    initializeEnemyRaces();
    initializePlayerRaces();
}