#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/* 
Simulate craps game
*/

enum status { CONTINUE, WON, LOST };

#define SNAKE_EYES 2
#define TREY 3
#define SEVEN 7
#define YO_LEVEN 11
#define BOX_CARS 12

int rand_lim(int limit) {
/* return a random number between 0 and limit inclusive.
 */

    int divisor = RAND_MAX/(limit+1);
    int retval;

    do { 
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}

int main(int argc, char** argv) {
    
    int my_point = 0;
    
    enum status game_status;

    //game_status=LOST;
        
    srand(time(NULL));   // should only be called once
    //int sum_of_dice = ((rand() % 6)+1) + ((rand() % 6)+1);      // get sum of 2 dice rolls
    int sum_of_dice = (rand_lim(5)+1) + (rand_lim(5)+1);      // get sum of 2 dice rolls

    printf("Dice roll: %d ", sum_of_dice);    
    
    switch(sum_of_dice) {    
        case SEVEN:         // win with 7 on first roll
        case YO_LEVEN:      // win with 11 on first roll            
            game_status = WON;
            printf("(yo leven)\n");
            break;
        case SNAKE_EYES:    // lose with 2 on first roll
            printf("(snake eyes)\n");
        case TREY:          // lose with 3 on first roll
            printf("(trey)\n");
        case BOX_CARS:      // lose with 12 on first roll
            game_status = LOST;
            printf("Pleayer loses :-(\n");
            break;
        default:            // did not win or lose, so remember point
            game_status = CONTINUE; // game is not over
            printf("(continue)\n");
            my_point = sum_of_dice; // remember the point        
            printf( "Point is %d\n", my_point);
            break; // optional at end of switch
    }

    while(game_status == CONTINUE) {

        sum_of_dice = (rand_lim(5)+1) + (rand_lim(5)+1); // roll again
        printf("Dice roll: %d\n", sum_of_dice);    

        if(sum_of_dice == my_point) 
            game_status = WON;        
        else 
            if (sum_of_dice = SEVEN)
                game_status = LOST;
    }

    if(game_status == WON)
        printf( "Player wins :-)\n");
    else    
        printf( "Player loses :-(\n");


	return game_status;    
}
