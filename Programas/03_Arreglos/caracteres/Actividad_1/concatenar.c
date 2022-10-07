#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    char cad[]={"Hola soy"};
    char cad1[15]="Yeraldi";

    printf("Cadena= %-15s   Cadena 1= %-15s",cad,cad1);
    strcat(cad," ");
    strcat(cad,cad1);
    printf("\nCadena= %-15s   Cadena 1= %-15s",cad,cad1);


    return 0;
}