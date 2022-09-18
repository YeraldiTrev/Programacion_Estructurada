#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    const float precio = 199.90;
    int pantalones;

    printf("Ingresa la cantidad de pantalones a comprar: ");
    scanf("%d", &pantalones);

    if(pantalones < 5 && pantalones > 0)
    {
        printf("Total a pagar: %.2f",(pantalones*precio));
    }
    else if( pantalones >= 5 && pantalones < 12)
    {
        printf("Total a pagar: %.2f",(pantalones*precio)-((pantalones*precio)*0.15));
    }
    else if(pantalones >= 12)
    {
        printf("Total a pagar: %.2f",(pantalones*precio)-((pantalones*precio)*0.30));
    }
    else
    {
        printf("Cantidad no valida...");
        exit(1);
    }


    return 0;
}
