#include <stdio.h>
#include <windows.h>

int main()
{
    system("cls");
    float num;
    printf("Ingresa un numero: ");
    scanf("%f", &num);

    if(num>0)
        printf("El numero es mayor que 0");
    return 0;
}