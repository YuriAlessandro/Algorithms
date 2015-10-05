/*Esse código gera um "número aleátorio" (na verdade, nem tão aleátorio assim). 
Toda vez que o programa reinicia, a sequência "aleátoria" gerada é a mesma.*/

/*This code generates a "random number" (in fact, not as random as well).
Every time the program restarts, the sequence "randomly" generated is the same.*/

#include <stdio.h>
#include <stdlib.h>                       /* The library "stdlib" will be included for us to use the rand function.*/

int main(){
    int op = 1, ivl;                      /* "op" is a variable that will help with a short menu for the program.*/
    while(op){
        printf("[1] Take a random number\t[0] Close\n");
        scanf("%i", &op);                 /* scaning "op"*/
        
        if (op > 1 || op < 0) return 0;   /* If "op" is greater than 1 or less than 0,*/
                                          /* the program continues run. Otherwise, close ("op" equal to 0).*/
        
        printf("Digite o valor maximo do valor gerado (0 -> n)\n");
        scanf("%i", &ivl);                /* The variable "ivl" defines the range (0 - ivl).*/
        printf("%i\n", rand() % ivl);     /* rand() will generate any number, will rand() mod ivl its the maximum value.*/
    }
    return 0;
}
