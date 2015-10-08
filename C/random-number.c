//Esse código gera um número aleatório em um intervalo informado.
//This code generates a random number in a specified range

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Used Libraries:
 * stdio
 *  - To input/output,
 * stdlib
 *  - To be used the rand() and srand() functions,
 * time
 *  - To seed the srand() function,
 */

int main(){
    /*
     * Used Variables:
     * op : int
     *  - Variable to define if the program continues run.
     * ivl : int
     *  - Variable to set the max range of the random number.
    */
    
    int op = 1, ivl;
    while(op) {
        printf("[1] Take a random number\t[0] Close\n");
        //Scan the op(tion) from the user. Continues or not running.
        scanf("%i", &op);
        
        //If "op" is different than 1, the program ends
        if (op != 1) break;
        
        printf("Enter the max of the random number to be generated (0 -> max)\n");
        //The variable "ivl" defines the range (0 -> ivl).
        scanf("%i", &ivl);
        /* srand() change the seed of random() with a very large
         * number generated with the time() function.
         */
        srand((unsigned)time(NULL));
        /* rand() will generate any number, so to limit it to the
         * specified range, just the mod operation with ivl is showed.
         */
        printf("%i\n", rand()%ivl);
    }

    return 0;
}
