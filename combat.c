/**
 * @file combat.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief File that handles all combat related processes, relatively basic
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "combat.h"
#include "races.h"
#include "characterSheet.h"
#include "enemy.h"
#include "helper.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * @brief rolls players attack plus d20 
 * 
 * @return int 
 */
int playerAttackRoll(playerCharacter player){
    return player.atk % 10 + (rand() % 21);
}
/**
 * @brief rolls players defense plus d20
 * 
 * @return int 
 */
int playerDefenseRoll(playerCharacter player){
    return player.def % 10 + (rand() % 21);
}
/**
 * @brief rolls players will plus d20
 * 
 * @return int 
 */
int playerWillRoll(playerCharacter player){
    return player.will % 10 + (rand() % 21);
}
/**
 * @brief rolls players magic attack plus d20
 * 
 * @return int 
 */
int playerMagicRoll(playerCharacter player){
    return player.mag % 10 + (rand() % 21);
}

/**
 * @brief rolls opponents attack plus d20
 * 
 * @param opponent 
 * @return int 
 */
int enemyAttackRoll(enemyCharacter opponent){
    return opponent.enemyRace.atk % 10 + (rand() % 21);
}
/**
 * @brief rolls opponents defense plus d20
 * 
 * @param opponent 
 * @return int 
 */
int enemyDefenseRoll(enemyCharacter opponent){
    return opponent.enemyRace.def % 10 + (rand() % 21);
}
/**
 * @brief rolls opponents will plus d20
 * 
 * @param opponent 
 * @return int 
 */
int enemyWillRoll(enemyCharacter opponent){
    return opponent.enemyRace.will % 10 + (rand() % 21);
}
/**
 * @brief rolls opponents magic attack plus d20
 * 
 * @param opponent 
 * @return int 
 */
int enemyMagicRoll(enemyCharacter opponent){
    return opponent.enemyRace.mag % 10 + (rand() % 21);
}

/**
 * @brief Similulats a combat encounter. Returns a 1 if the player won and a 0 if they lost
 * 
 * @param opponent 
 * @return int 
 */
int combat(playerCharacter player,enemyCharacter opponent){

    time_t t;
    srand((unsigned)time(&t));
    letByLet(player.name);
    letByLet(" is fighting a ");
    letByLetln(opponent.name);
    int turn = rand() % 2; // 0 for enemy 1 for player

    while (player.hp > 0 && opponent.hp >0){
        int playerRoll = 0;
        int enemyRoll = 0;
        int damage = 0;
        char dmg[4];
        char health[4];
            if(turn == 1){
            int choice;
            letByLet("Your turn!\n");
            letByLet("What would you like to do?\n1.Attack\n2.Magic attack\n");
            scanf("%d",&choice);
            switch(choice) {
                case 1:
                    playerRoll = playerAttackRoll(player);
                    enemyRoll = enemyDefenseRoll(opponent);
                    damage = playerRoll - enemyRoll;
                    if (damage < 0){
                        damage = 0;
                    }
                    opponent.hp -= damage;
                    if (opponent.hp < 0){
                        opponent.hp = 0;
                    }
                    letByLet("You hit for ");
                    sprintf(dmg, "%d", damage);
                    sprintf(health, "%d", opponent.hp);
                    letByLet(dmg);
                    letByLet(" damage!\n");
                    letByLet("Their hp is at ");
                    letByLetln(health);
                    turn = 0;
                    break;
                case 2:
                    playerRoll = playerMagicRoll(player);
                    enemyRoll = enemyWillRoll(opponent);
                    damage = playerRoll - enemyRoll;
                    if (damage < 0){
                        damage = 0;
                    }
                    opponent.hp -= damage;
                    if (opponent.hp < 0){
                        opponent.hp = 0;
                    }
                    letByLet("You hit for ");
                    sprintf(dmg, "%d", damage);
                    sprintf(health, "%d", opponent.hp);
                    letByLet(dmg);
                    letByLet(" magic damage!\n");
                    letByLet("Their hp is at ");
                    letByLetln(health);
                    turn = 0;
                    break;
                default:
                    turn = 1;
                    break;
            }
        }
        else {
            letByLet("Enemy's turn!\n");
            if (opponent.enemyRace.mag > opponent.enemyRace.atk){
                playerRoll = playerWillRoll(player);
                enemyRoll = enemyMagicRoll(opponent);
                damage = enemyRoll - playerRoll;
                if (damage < 0){
                    damage = 0;
                }
                player.hp -= damage;
                if (player.hp < 0){
                    player.hp = 0;
                }
                letByLet("You got hit for ");
                sprintf(dmg, "%d", damage);
                sprintf(health, "%d", player.hp);
                letByLet(dmg);
                letByLet(" magic damage!\n");
                letByLet("Your hp is at ");
                letByLetln(health);
                turn = 1;
            }
            else {
                playerRoll = playerDefenseRoll(player);
                enemyRoll = enemyAttackRoll(opponent);
                damage = enemyRoll - playerRoll;
                if (damage < 0){
                    damage = 0;
                }
                player.hp -= damage;
                if (player.hp < 0){
                    player.hp = 0;
                }
                letByLet("You got hit for ");
                sprintf(dmg, "%d", damage);
                sprintf(health, "%d", player.hp);
                letByLet(dmg);
                letByLet(" damage!\n");
                letByLet("Your hp is at ");
                letByLetln(health);
                turn = 1;
            }
        }
    }
    if (player.hp <= 0){
        letByLet("You lost.\n");
        return 0;
    }
    else {
        letByLet("You won.\n");
        
        return 1;
    }
}