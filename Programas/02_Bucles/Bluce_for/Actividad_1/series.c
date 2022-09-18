#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i,j;

    printf("----- Serie del 50 al -30 -----\n");
    for(i=50;i>=-30;i--)
    {
        printf("%d\n",i);
    }

    printf("\n----- Serie del 100 al 2 de 2 en 2 -----\n");
    for(i=100;i>=2;i-=2)
    {
        printf("%d\n",i);
    }

    printf("\n----- Serie del 0 al 300 de 3 en 3 -----\n");
    for(i=0;i<=300;i+=3)
    {
        printf("%d\n",i);
    }

    printf("\n----- Serie del 0 al 500 -----\n");
    j = 0;
    for(i=0;i<=500;i++)
    {
        if(j==10)
        {
            printf("\n");
            j=1;
        }
        ++j;
        printf("%d ",i);
    }
    return 0;
}