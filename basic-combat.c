/**
 * @file basic-combat.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief initializes the player and a slime to fight in a combat encounter
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "helper.h"
#include "races.h"
#include "characterSheet.h"
#include "enemy.h"
#include "combat.h"
#include <string.h>
#include "levelup.h"

/**
 * @brief main function to do what is stated above
 * 
 * @return int 
 */
int main(){
    //initialization of systems
    initializeRaces();
    
    //set player race to human and start them at lvl 1
    playerCharacter player1 = initializePlayer(player1,0,"Chad");

    //initialize lvl 1 slime
    enemyCharacter slimeLvl1 = initializeEnemy(slimeLvl1,1,0);

    //check xp after combat and level up if need be
    if (combat(player1,slimeLvl1)){
        player1.exp += slimeLvl1.lvl * 10;
    }
    if (player1.exp >= player1.expReq){
        player1 = leveUp(player1);
    }
}