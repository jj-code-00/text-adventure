/**
 * @file characterSheet.h
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief Header file for the players character sheet, includes the player character typedef
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CHARACTERSHEET_H_
#define CHARACTERSHEET_H_
#include "races.h"

typedef struct playerCharacter{
    char name[20];
    race playerRace;
    int maxHp; //maximum hit points
    int hp; // current hit points
    int lvl; // current level 
    int exp; // current exp
    int expReq; // exp req to levelup
    int atk; //attack power
    int def; //defensive power
    int mag; //magic power
    int will; //magic defensive power
} playerCharacter;

playerCharacter initializePlayer(playerCharacter player, int race, char name[]);  
#endif