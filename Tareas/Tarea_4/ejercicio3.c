#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    /* Declaracion de variables */
    char frase[51],pass[60];
    int i,j=0,palabras=1,caracter;
    int caracteresNoValidos[]={48,49,50,51,52,53,54,55,56,57,65,
    66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};

    /* Pedidido y validacion de frase secreta */
    do
    {
        system("cls");
        printf("Ingresa una frase secreta: ");
        fflush(stdin);
        gets(frase);
        if(strlen(frase)<6||strlen(frase)>50)
        {
            printf("La frase tiene que contener de 6 a 50 caracteres...\n");
            system("pause");
            continue;
        }
        for(i=0;i<strlen(frase);i++)
        {
            if(frase[i]==' ')
                palabras++;
        }
        if(palabras<4||palabras>10)
        {
            printf("La frase debe de contener de 4 a 10 palabras...\n");
            system("pause");
            continue;
        }
        break;
    }while(1);
    system("cls");
    printf("Frase secreta: %s\n",frase);

    /*Generador de contraseña
    Quitar espacios.*/
    int longitud = strlen(frase);

    while(frase[j]!='\0')
    {
        if(frase[j]==' ')
        {
            for(i=j;i<longitud;i++)
            {
                frase[i]=frase[i+1];
            }
            longitud--;
        }
        j++;
    }

    /* Agregando caracteres aleatorios */
    srand(time(NULL));
    for(i=0;i<2;i++)
    {
        caracter=33+rand()%(96-33+1);
        for(j=0;j<=36;j++)
        {
            if(caracter!=caracteresNoValidos[j])
            {
                pass[i]=caracter;
                break;
            }
        }
    }

    for(i=2;i<strlen(frase)+2;i++)
    {
        pass[i]=frase[i-2];
    }

    for(i=strlen(frase);i<(strlen(frase)+2);i++)
    {
        caracter=33+rand()%(123-33+1);
        for(j=0;j<=36;j++)
        {
            if(caracter!=caracteresNoValidos[j])
            {
                pass[i+2]=caracter;
                break;
            }
        }
    }
    
    /* Cambiando letras por numeros */

    for(i=0;i<strlen(pass);i++)
    {
        if(pass[i]=='a'||pass[i]=='A')
            pass[i]='4';
        else if(pass[i]=='E'||pass[i]=='e')
            pass[i]='3';
        else if(pass[i]=='I'||pass[i]=='i')
            pass[i]='1';
        else if(pass[i]=='O'||pass[i]=='o')
            pass[i]='0';
        else if(pass[i]=='T'||pass[i]=='t')
            pass[i]='7';
        else if(pass[i]=='B'||pass[i]=='b')
            pass[i]='8';
        else
            continue;
    }
    printf("Contrase%ca generada %s",164,pass);

    return 0;
}