#include <stdio.h>
#include <stdlib.h>
#define DPTOS 5
#define MESES 12

int main()
{
    system("clear");
    float anual=0,vtas_dptos[DPTOS][MESES],vtas_mensuales[MESES];
    int i,j,mayorDpto,mayorMes,menorMes;
    
    for(i=0;i<MESES;i++)
    {
        vtas_mensuales[i]=0;
    }

    for(i=0;i<DPTOS;i++)
    {
        printf("Departamento %d\n",i+1);
        for(j=0;j<MESES;j++)
        {
            printf("\t%2d%c mes: ",j+1,167);
            scanf("%f",&vtas_dptos[i][j]);
        }
    }

    for(i=0;i<MESES;i++)
    {
        for(j=0;j<DPTOS;j++)
        {
            vtas_mensuales[i]+=vtas_dptos[j][i];
            anual+=vtas_dptos[j][i];
        }
    }

    system("pause");
    system("clear");

    for(i=0;i<MESES;i++)
    {
        printf("Ventas del mes %2d: $%8.2f\n",i+1,vtas_mensuales[i]);
    }
    printf("Venta Anual: $%8.2f",anual);

    float mayorVta = vtas_dptos[0][5];
    for(i=1;i<DPTOS;i++)
    {
        if(mayorVta<vtas_dptos[i][5])
        {
            mayorVta =vtas_dptos[i][5];
            mayorDpto=i;
        }
    }
    printf("\nEl %d%c departamento tuvo la mayor venta con un monto de: $%8.2f",mayorDpto+1,167,mayorVta);

    mayorVta=vtas_dptos[2][0];
    float menorVta=vtas_dptos[2][0];
    for(i=1;i<MESES;i++)
    {
        if(mayorVta<vtas_dptos[2][i])
            mayorMes=i;
        if(menorVta>vtas_dptos[2][i])
            menorMes=i;
    }

    printf("\nMes con mejor venta: %2d\n",mayorMes);
    printf("Mes con menor venta: %2d",menorMes);
    return 0;
}