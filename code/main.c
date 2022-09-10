/*
this is a simple text based adventure game

input character name and roll for stats (dnd stats)

will need to fight bad guys (math randomness)

sample code to study https://github.com/TheJade/sdk-nrf/blob/main/samples/peripheral/radio_test/src/radio_test.c

use 'enum' keyword for monster stats and stuff

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "character_creator.h"

// roll for stats
// pick class
// 
 
int main () {
    int rand_num, i, n;

    n = 10;

    srand(time(0));
    create_character();

    
    // printf("Random generated number is: \n");

    // for (i = 0 ; i < n ; i++) {

    //     int rand_temp = rand() % 20;
    //     printf("%d\n", rand_temp);
    //     rand_num += rand_temp;
    // }

    // printf("mean is... %d\n", rand_num/n);
 
    return 0;
}