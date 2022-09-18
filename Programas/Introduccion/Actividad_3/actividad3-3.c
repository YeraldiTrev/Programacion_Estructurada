#include <stdio.h>
#include <windows.h>

int main()
{
    system("cls");
    int num;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if(num > 0)
        printf("El numero es mayor a 0");
    if(num == 0)
        printf("El numero es 0");
    if(num < 0)
        printf("El numero es menor a 0");
    return 0;
}