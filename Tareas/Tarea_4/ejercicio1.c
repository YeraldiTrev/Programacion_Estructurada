#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n,m,mtz[50][50],i,j;
    do
    {
        printf("Ingresa las filas y columnas de la matriz: ");
        scanf("%d %d",&m, &n);
        if(n<1||n>50||m<1||m>50)
        {
            printf("El rango de filas y columnas es de 50 elementos maximo...\n");
            system("pause");
            system("cls");
            continue;
        }
        break;
    }while(1);

    /* Relleno del arreglo */
    system("cls");
    for(i=0;i<m;i++)
    {
        printf("Fila %d: \n",i+1);
        for(j=0;j<n;j++)
        {
            printf("\tColumna %d: ",j+1);
            scanf("%d",&mtz[i][j]);
        }
    }
    system("pause");
    system("cls");

    /* Recorrido del arreglo */
    printf("********** Recorrido del arreglo normal **********\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%5d\t",mtz[i][j]);
        printf("\n");
    }
    printf("\n\n********** Recorrido por columnas **********\n");
    i=0;
    for(j=0;j<n;j++)
    {
        if(i==0)
            for(i=0;i<m;i++)
                printf("%5d\t",mtz[i][j]);
        else
        {
            for(i=(m-1);i>=0;i--)
                printf("%5d\t",mtz[i][j]);
            i=0;
        }
        printf("\n");
    }
    return 0;
}