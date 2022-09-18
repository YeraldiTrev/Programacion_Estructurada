#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i = 0;
    float salario, total=0, prom;

    do
    {
        printf("Ingresa el salario del empleado[%d] o 0 para terminar: $",i+1);
        scanf("%f", &salario);
        total+=salario;
        i++;
    } while (salario != 0);


    printf("\nSalario:  $%-10.2f", total);
    printf("\nPromedio: $%-10.2f",(total / (i-1)));
    
    return 0;
}