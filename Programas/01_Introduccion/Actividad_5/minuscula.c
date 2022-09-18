#include <stdio.h>
#include <windows.h>

int main()
{
    char letra;
    system("clear");
    printf("Ingrese una letra minuscula: ");
    scanf("%c", &letra);

    if(letra >= 'a' && letra <= 'z')
    {
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
            printf("Es vocal");
        else if(letra == 'y')
            printf("Es semivocal");
        else
            printf("Es una consonante");
    }
    else
    {
        printf("Se debe ingresar una letra minuscula");
    }
    return 0;
}