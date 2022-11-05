#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* 
    & agarra el  espacio en memoria de una variable 
    * Crea un puntero y agarra el valor de lo que hay en el espacio en memoria */

    char c,*pc;
    pc=&c;
    printf("Variable\tDireccion    Valor\n");
    for(c='A';c<='I';c++)
    {
        printf("  c=%c\tpc= %p|  %c\n",c,pc,*pc);
    }
    return 0;
}