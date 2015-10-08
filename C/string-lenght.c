#include <stdio.h>
#include <string.h>

int main()
{
   	char str[200];
   	gets(str);
   	int lenght = strlen(str);
   	printf("%i\n", lenght);
   	
    return 0;
}
