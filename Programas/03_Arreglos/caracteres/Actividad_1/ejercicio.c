#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
    system("clear");
    setlocale(LC_ALL,"spanish");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    char nombre[15],paterno[15],materno[15],completo[45]="";
    int lenN, lenP, lenM, i;

    strcpy(nombre,"Yeraldi");
    strcpy(paterno,"Treviño");
    strcpy(materno,"Herrera");
    printf("%s %s %s",nombre,paterno,materno);

    strcat(nombre," ");
    strcat(paterno," ");
    strcat(materno," ");
    strcat(completo,nombre);
    strcat(completo,paterno);
    strcat(completo,materno);

    printf("\n%s",completo);
    lenN=strlen(nombre);
    lenP=strlen(paterno);
    lenM=strlen(materno);
    printf("\nLongitud nombre: %d\nLongitud apellidoP: %d\nLongitud apellidoM: %d",lenN,lenP,lenM);
    i=strcmp(nombre,paterno);
    printf("\nComparacion: %d",i);

    return 0;
}