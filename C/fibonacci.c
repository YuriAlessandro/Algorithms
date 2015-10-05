/*Calcula os primeiros "n" números da sequência de Fibonacci*/

#include <stdio.h>

int fib(int n){
    if(n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int main(void){    
    
    int n, i;
    scanf("%i", &n);
    
    for (i = 0; i < n; i++) 
        printf("%i ", fib(i));
    
    printf("\n");
    return 0;
}
