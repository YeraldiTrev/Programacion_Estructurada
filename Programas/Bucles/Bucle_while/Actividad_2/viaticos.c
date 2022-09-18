#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float gasto = 1, total = 0;
    int i=1;
    printf("Ingresa 0 para terminar en cualquier momento...\n");
    while(gasto != 0)
    {
        printf("Ingresa el %d%c gasto: $",i,248);
        scanf("%f",&gasto);

        total += gasto;
    }

    printf("\nTotal de gastos en el viaje: $%5.2f",total);
    return 0;
}