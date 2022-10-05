#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,matriz[5][5]={0},sum;
    system("cls");
    for(i=0;i<4;i++)
    {
        printf("Fila %d\n",i+1);
        sum=0;
        for(j=0;j<5;j++)
        {
            if(j==4)
                matriz[i][j]=sum;
            else
            {
                printf("\tElemento %d: ",j+1);
                scanf("%d",&matriz[i][j]);
                sum+=matriz[i][j];
            }
        }
    }
    system("cls");
    for(j=0;j<4;j++)
    {
        sum=0;
        for(i=0;i<5;i++)
        {
            if(i==4)
                matriz[i][j]=sum;
            else
                sum+=matriz[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%5d  ",matriz[i][j]);
        printf("\n");
    }
    return 0;
}