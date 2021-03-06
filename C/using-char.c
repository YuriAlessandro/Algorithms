//Receiving text in C.

#include <stdio.h>
int main() {
    char name[20], nick[20];
    //To receive "words", use "char variable_name[size]"
    
    int age, years;
    printf("What's your name?\n");
    
    /* scanf("&s", name);
     * When we use scanf() function to get strings, the string
     * is cropped at the first space. To prevent this, we could use:
     * gets(name);
     * gets() is another way to get text from user.
     * But, your use isn't recommended because it can cause a memory overflow
     * So, the right way to get text is the function fgets():
     */
    
    fgets(name, 20, stdin);
    strtok(name, "\n");
    //This function removes the breakline to send
    
    /* This function takes three parameters.
     * The first is the variable that will receive the text.
     * The second is the maximum size of the input.
     * And the last is where the text comes, in this case,
     * we'll receive the text from standard input (keyboard, for example).
     */
    
    printf("Put your nickname: ");
    
    setbuf(stdin, NULL);
    /* setbuf() is a function to set the buffer.
     * In this case, we need to clean the keyboard buffer.
     * So, to do that, the 'stdin' (standard input) buffer
     * was defined as NULL.
     */
    
    //Now, we can call the function to get the nickname.
    fgets(nick, 20, stdin);
    
    printf("Hi %s, or %s!? How old are you??\n", name, nick);
    scanf("%i", &age);
    years = 2015 - age;
    printf("Cool, %s. You born in %i!\n", name, years);

    return 0;
}
