#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int matriculas[2][4],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matriculas[i][j]);
        }
    }
    printf("\n********** Matriculas **********\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("%6d\t",matriculas[i][j]);
        printf("\n");
    }
    return 0;
}