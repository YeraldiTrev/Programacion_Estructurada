#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear");
    float pagi = 1, spa=0;

    while(pagi != 0)
    {
        printf("Ingrese el pago o 0 para terminar: ");
        scanf("%f",&pagi);

        spa += pagi;
    }

    printf("Pago total: $%.2f",spa);
    return 0;
}