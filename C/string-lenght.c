#include <stdio.h>

//A função "func_strlen" sempre irá calcular o tamanho da string quando chamada.

int func_strlen(char *str){               
   int i;
   for(i=0; ;i++){
      if(str[i] == 0) break;
   }
   return i;
}

int main()
{
   	char str[200];
   	gets(str);
   	printf("%i\n", func_strlen(str));
   	
    return 0;
}
