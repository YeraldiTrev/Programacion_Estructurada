#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,matriz[10][10];
    system("cls");
    for(i=0;i<10;i++)
    {
        printf("Ingrese la fila %d\n",i+1);
        for(j=0;j<10;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Valores en la diagonal: ");
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==i)
                printf("%d ",matriz[i][j]);
        }
    }
    return 0;
}