#include <stdio.h>
#include <stdlib.h>

int main()
{
    char momento;
    char sexo;
    

    system("clear");

    printf("Ingresa el momento del dia con una letra [m-ma%cana t-tarde n-noche]: ",164);
    scanf("%c",&momento);
    printf("Ingresa tu genero con una letra [m-Masculino f-femenino]: ");
    fflush(stdin);
    scanf("%c",&sexo);

    if(momento == 'm' || momento == 'M')
    {
        printf("Buenos d%cas ",161);
    }
    else if (momento == 't' || momento == 'T')
    {
        printf("Buenas tardes ");
    }
    else if(momento == 'n' || momento == 'N')
    {
        printf("Buenas noches ");
    }
    else
    {
        system("clear");
        printf("Dato invalido...");
        exit(1);
    }


    if (sexo == 'm' || sexo == 'M')
    {
       printf("se%cor", 164);
    }
    else if(sexo == 'f' || sexo == 'F')
    {
        printf("se%cora", 164);
    }
    else
    {
        system("clear");
        printf("Dato invalido...");
        exit(1);
    }
    return 0;
}
