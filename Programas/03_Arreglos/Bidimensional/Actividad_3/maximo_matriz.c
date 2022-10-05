#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,j,num,max,matriz[3][3];
    /* Ingreso de numeros */
    for(i=0;i<3;i++)
    {
        printf("Ingrese la fila %d: \n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&matriz[i][j]);
    }
    /* Numero de una fila */
    system("clear");
    do
    {
        printf("Seleccione el numero de fila a analizar: ");
        scanf("%d",&num);
        if(num<1||num>3)
        {
            printf("Numero de fila no encontrado....");
            system("pause");
            system("clear");
            continue;
        }
        num--;

        break;
    } while (1);
    printf("\n");
    /* Muestra de la matriz */
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%6d  ",matriz[i][j]);
        printf("\n");
    }
    /* Mostrar el numero maximo */
    max = matriz[num][0];
    for(j=1;j<3;j++)
    {
        if(max<matriz[num][j])
            max = matriz[num][j];
    }
    printf("\nNumero maximo: %d",max);

    
    return 0;
}