#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char cadena[30]="",invertida[30]="";
    int i,len;

    printf("Ingresa una palabra o frase: ");
    gets(cadena);
    len = strlen(cadena);
    for(i=0;i<len;i++)
        invertida[i]=cadena[(len-1)-i];
    invertida[i]='\0';
    printf("Cadena normal: \"%s\"\nCadena invertida: \"%s\"",cadena,invertida);
    return 0;
}