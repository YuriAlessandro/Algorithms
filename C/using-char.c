//Receiving text in C.

#include <stdio.h>
int main()
{
    char name[20], nick[20];
    //To receive "words", use "char variable_name[size]"
    
    int age, years;
    printf("What's your name?\n");
    
    scanf("%s", name);
    //When using char, we do not use the "&" to indicate the address.
    
    // printf("Put you nickname! ");
    // gets(nick);
    //"gets" is another way to get text. But be careful as it can cause memory overflow. Then we will use the following way:
    
    //fgets(nick,20,stdin);
    //Then declaring as "fgets (name, size, stdin)".
    //stdin reports that the input will come from the user's keyboard, and not from an external file.
    
    printf("Hi %s, or %s!? How old are you??\n", name, nick);
    scanf("%i", &age);
    years = 2015 - age;
    printf("Cool, %s. You born in %i!\n", name, years);
    return 0;
}
