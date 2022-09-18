#include <stdio.h>
#include <windows.h>

int main()
{
    system("clear");
    float precio;
    printf("Ingresa el precio del producto: $");
    scanf("%f",&precio);

    if (precio<1500)
        printf("Precio Total: $%.2f", (precio*1.11));
    else
        printf("Precio total: $%.2f", precio);
    return 0;
}
