#include <stdio.h>

int main(){
  int n, res;
  printf("Choose a number: It's Even or odd? ");
  scanf("%i", &n);

  //That's the part of the ternary operator.
  //Basically, we write "condition ? if_true: if_false;

  n = (n%2==0) ? 1 : 0;                 // test after declaring: n = (ternary operator)
  printf("\n%s", n ? "Even" : "Odd");   // " n (true or false) ? "TRUE" : "FALSE"
  return 0;
}
