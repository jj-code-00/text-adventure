/**
 * @file characterSheet.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief players character sheet
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "characterSheet.h"
#include <string.h>
#include "races.h"
//playerCharacter player;

/**
 * @brief initializes the player to start at level one with max hp for their respective race
 * 
 */
playerCharacter initializePlayer(playerCharacter player, int race, char name[]){
    player.playerRace = playerRaces[race];
    strcpy(player.name,name);
    player.maxHp = player.playerRace.maxHp;
    player.hp = player.playerRace.maxHp;
    player.lvl = 1;
    player.expReq = 10;
    player.exp = 0;
    player.atk = player.playerRace.atk;
    player.def = player.playerRace.def;
    player.mag = player.playerRace.mag;
    player.will = player.playerRace.will;
    return player;
}