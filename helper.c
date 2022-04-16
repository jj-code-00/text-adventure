/**
 * @file helper.c
 * @author Joseph Burke (jjburke011@gmail.com)
 * @brief helper functions to be used in the story
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include "helper.h"
#include <unistd.h>

/**
 * @brief prints text character by character with a delay inbetween
 * 
 * @param text 
 */
void letByLetln(char text[]){
    int i;
    for (i=0; i< strlen(text);i++){
        usleep(50000);
        printf("%c",text[i]);
        fflush(stdout);
        if (text[i] == '.' || text[i] == '?' || text[i] == '!'){
            usleep(500000);
        }
    }
    printf("\n");
}

/**
 * @brief same as letByLet but with a newline at the end
 * 
 * @param text 
 */
void letByLet(char text[]){
    int i;
    for (i=0; i< strlen(text);i++){
        usleep(50000);
        printf("%c",text[i]);
        fflush(stdout);
        if (text[i] == '.' || text[i] == '?' || text[i] == '!'){
            usleep(500000);
        }
    }
}