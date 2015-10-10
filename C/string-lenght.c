#include <stdio.h>

//A função func_strlen() sempre irá calcular o tamanho da string quando chamada.
//The func_strlen()  function always will calculate the size of the string called.

int func_strlen(char *str) {
    for (int i = 0; str[i] != '\0'; i++);
    return i;
}

int main() {
    char str[200];
    gets(str);
    printf("%i\n", func_strlen(str));

    return 0;
}
