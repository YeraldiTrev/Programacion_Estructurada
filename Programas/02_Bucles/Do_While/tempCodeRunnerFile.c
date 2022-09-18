#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i = 0;
    float salario, total=0, prom;

    do
    {
        printf("Ingresa el salario del empleado[%d] o 0 para terminar: $",i);
        scanf("%f", &salario);
        total+=salario;
        i++;