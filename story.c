// /**
//  * @file story.c
//  * @author Joseph Burke (jjburke011@gmail.com)
//  * @brief Will be the story if I finish other systems
//  * @version 0.1
//  * @date 2022-03-15
//  * 
//  * @copyright Copyright (c) 2022
//  * 
//  */
// #include <stdio.h>
// #include "helper.h"
// #include "races.h"
// #include "characterSheet.h"

// int main(){
//     //startup processes
//     initializePlayerRaces();

//     //intro
//     letByLetln("Darkness...\nTime passes...\nAfter what feels like an eternity you see a pinprick of light.\nWhat would you like to do?");
//     letByLetln("1.Stay in the dark.\n2.Move toward the light.\n3.Try to call out for help.");
//     int input;
//     int next = 0;
//     scanf("%d", &input);
//     while (input > 3 || input < 1){
//         printf("Rety.\n");
//         scanf("%d", &input);
//     }
//     while (next ==0){
//         switch(input) {
//             case 1 :
//                 letByLetln("You wait another eternity hoping for something to change...\nBesides your new friend the pinprick of light all remains the same.\nTry something else");
//                 letByLetln("1.Stay in the dark.\n2.Move toward the light.\n3.Try to call out for help.");
//                 scanf("%d", &input);
//             case 2 :
//                 letByLetln("You approach the light.\nBefore you manage to get too close you suddenly faint...");
//                 next = 1;
//                 break;
//             case 3 :
//                 letByLetln("No reply...\nTry something else");
//                 letByLetln("1.Stay in the dark.\n2.Move toward the light.\n3.Try to call out for help.");
//                 scanf("%d", &input);
//             default :
//                 break;
//         }
//     }
//     next = 0;
    
//     letByLetln("You awaken staring up at a void, much like the one you just came from.\nLooking around you spot a frail old man hunched over a table floating in the void looking at a piece of paper...");
//     letByLetln("\"So she finally caught one eh?\"\nHe leisurely moves to pick up a pen and mutters under his breath.\n\"Poor soul, that's what they get for being so curious.\"\nHe then looks to you and says aloud \"Do you remember who you are?\"");
//     letByLet("Enter your name: ");
//     scanf("%s", player.name);
//     letByLet("\"");
//     letByLet(player.name);
//     letByLetln(", really?\"\n\"Odd name.\"\n");
// 	return 0;
// }