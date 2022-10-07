#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    int i;
    char cad[]="Hola",cad2[]="Hola";
    i=strcmp(cad,cad2);
    if(i==0)
        printf("Son iguales");
    return 0;
}