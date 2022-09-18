#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i;
    float calf,prom=0;

    for(i=1;i<=5;i++)
    {
        printf("Ingrese la calificacion %d: ",i);
        scanf("%f",&calf);
        prom+=calf;
    }

    printf("\nPromedio: %.2f",prom/5);

    return 0;
}