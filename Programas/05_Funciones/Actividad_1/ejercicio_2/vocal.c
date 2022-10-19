#include <stdio.h>
#include <stdlib.h>

int vocal(char letra)
{
    int i;
    char vocales[]={'a','e','i','o','u','A','E','I','O','U'};
    for(i=0;i<10;i++)
        if(letra==vocales[i])
            return 1;
    return 0;
}

int main()
{
    system("cls");
    char letra;
    printf("Ingresa una letra: ");
    fflush(stdin);
    scanf("%c",&letra);
    vocal(letra)?printf("Es vocal"):printf("No es vocal");
    return 0;
}