#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,j,neg=0,pos=0,fil,col;
    /* Definir tamaño del arreglo */
    do
    {
        printf("Ingresa el tama%co de las filas y columnas: ",164);
        scanf("%d %d", &fil, &col);
        if(fil<=0||col<=0)
        {
            printf("El tama%co debe de ser positivo...",164);
            system("pause");
            system("clear");
            continue;
        }
        break;
    }while(1);
    int mtz[fil][col];
    /* Entrada de los datos del arreglo */
    for(i=0;i<3;i++)
    {
        printf("Ingrese la fila %d: \n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&mtz[i][j]);
    }
    /* Suma de los numeros */
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mtz[i][j]<0)
                neg+=mtz[i][j];
            else
                pos+=mtz[i][j];
        }
    }
    /* Impresion del arreglo y de las sumas*/
    system("clear");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%6d  ",mtz[i][j]);
        printf("\n");
    }
    printf("\nSuma de positivos: %6d\nSuma de negativos: %6d",pos,neg);
    return 0;
}