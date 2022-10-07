#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Con ctype podemos validar caracteres*/
int main()
{
    system("clear");
    char cadena[]=";0sR(h&R1/";
    int i;
    for(i=0;cadena[i];i++)
    {
        printf("%c,",cadena[i]);
        (isalnum(cadena[i])!=0)?printf("V\n"):printf("F\n");
    }
    return 0;
}