#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,j,mtz[4][3];

    /* Entrada de elementos de la matriz */
    for(i=0;i<4;i++)
    {
        printf("Ingrese la fila %d: \n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&mtz[i][j]);
    }
    system("clear");
    /* Almacenando numero mayor y menor*/
    int mayor=mtz[0][0],menor=mtz[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mayor<mtz[i][j])
                mayor=mtz[i][j];
            if(menor>mtz[i][j])
                menor=mtz[i][j];
        }
    }
    /* Muestra de la matriz, el numero mayor y menor */
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
            printf("%6d  ",mtz[i][j]);
        printf("\n");
    }
    printf("\nMayor: %6d\nMenor: %6d",mayor,menor);
    return 0;
}