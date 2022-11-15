#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,emp;
    printf("Ingresa numero de empleados: ");
    scanf("%d",&emp);
    fflush(stdin);

    float sueldos[emp];
    char nombres[emp][120];

    for(i=0;i<emp;i++)
    {
        fflush(stdin);
        printf("Ingresa el nombre: ");
        gets(nombres[i]);
        fflush(stdin);
        printf("Ingresa el sueldo: ");
        scanf("%f",&sueldos[i]);
        if(sueldos[i]<5000)
            sueldos[i]*=1.12;
        else
            sueldos[i]*=1.10;
    }

    FILE *empleados;
    empleados=fopen("sueldos.txt","a");
    for(i=0;i<emp;i++)
    {
        fprintf(empleados,"\nNombres: %s Sueldo: %.2f",nombres[i],sueldos[i]);
    }
    return 0;
}