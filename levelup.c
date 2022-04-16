/**
 * @file levelup.c
 * @author Joseph Burke jjburke011@gmail.com
 * @brief basic levelup function
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "levelup.h"
#include "characterSheet.h"

/**
 * @brief adds one to every stat and mutiplies health by 1.1 rounded to nearest int
 * 
 * @param player 
 * @return playerCharacter 
 */
playerCharacter leveUp(playerCharacter player){
    player.atk++;
    player.def++;
    player.mag++;
    player.will++;
    player.maxHp = (int)(player.maxHp * 1.1);
    player.hp = player.maxHp;
    return player;
}