/**
 * @file races.h
 * @author Joseph Burke
 * @brief Header file for races.c includes typedef for race
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef RACES_H_
#define RACES_H_

//race struct holding all the data for a race
typedef struct race{
    char name[10]; //name of the race max characters 9 + null
    int maxHp; //maximum hit points
    int atk; //attack power
    int def; //defensive power
    int mag; //magic power
    int will; //magic defensive power
} race;

extern race playerRaces[];
extern race enemyRaces[];
void initializePlayerRaces();
void initializeEnemyRaces();
void initializeRaces();

#endif