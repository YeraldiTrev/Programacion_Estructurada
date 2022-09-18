#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i, lim;
    printf("Ingresa el numero de asteriscos deseados: ");
    scanf("%d", &lim);

    for(i=1;i<=lim;i++)
    {
        printf("*");
    }
    return 0;
}