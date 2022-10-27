#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char numeroD[20];
int i,j,numero;

void digitos()
{
    printf("Ingresa un numeroD: ");
    scanf("%d",&numero);
    itoa(numero,numeroD,10);
}

void cambio()
{
    for(i=0;i<strlen(numeroD);i++)
    {
        switch (numeroD[i])
        {
        case '0': numeroD[i]='9';break;
        case '1': numeroD[i]='5';break;
        case '2': numeroD[i]='4';break;
        case '3': numeroD[i]='2';break;
        case '4': numeroD[i]='7';break;
        case '5': numeroD[i]='6';break;
        case '6': numeroD[i]='1';break;
        case '7': numeroD[i]='3';break;
        case '8': numeroD[i]='0';break;
        case '9': numeroD[i]='8';break;
        }
    }
}

int main()
{
    system("clear");
    digitos();
    system("clear");
    printf("numero dado: %s\n",numeroD);
    cambio();
    numero = (int) strtol(numeroD,NULL,10);
    printf("numero cambiado: %d",numero);
    return 0;
}