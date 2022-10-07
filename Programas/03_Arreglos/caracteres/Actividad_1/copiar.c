#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    char cad[]={"Hola soy"};
    char cad1[15]="",cad2[15]="",cad3[15]="Mucho gusto";

    printf("Cadena= %-15s   Cadena 1= %-15s",cad,cad1);
    strcpy(cad1,cad);
    printf("\nCadena= %-15s   Cadena 1= %-15s",cad,cad1);
    printf("\nCadena3= %-15s  Cadena 2= %-15s",cad3,cad2);
    strncpy(cad2,cad3,5);
    printf("\nCadena3= %-15s  Cadena 2= %-15s",cad3,cad2);


    return 0;
}