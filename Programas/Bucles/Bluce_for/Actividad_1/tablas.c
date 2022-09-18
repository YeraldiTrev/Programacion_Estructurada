#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i,tabla;
    printf("Ingresa la tabla a imprimir: ");
    scanf("%d", &tabla);

    for(i=1;i<=10;i++)
    {
        printf("%2d x %2d = %3d\n", i, tabla, (i*tabla));
    }
    return 0;
}