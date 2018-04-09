#include <stdio.h>

/* 

*/

enum { RANDOM, IMMEDIATE, SEARCH } strategy = IMMEDIATE;
   
int main(int argc, char** argv) {
    strategy=SEARCH;
    printf("strategy: %d\n", strategy);
    strategy=IMMEDIATE;
    printf("strategy: %d\n", strategy);
    strategy=RANDOM;
    printf("strategy: %d\n", strategy);

    
    
    /*
    int	c, last_char_was_a_new_line;

	while ((c = getchar()) !=EOF) {	
		
		if (c != ' ' && c != '\t' && c != '\n' && c != '\v' && c != '\f' && c != '\r') {			
			putchar(c);
			last_char_was_a_new_line = 0;
		}
		else {
			if (last_char_was_a_new_line != 1) {	
				putchar('\n');
				last_char_was_a_new_line = 1;
			}
		}
	}

    */


	return 0;    
}