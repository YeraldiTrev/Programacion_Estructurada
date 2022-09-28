#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int a[10],i;

    printf("Ingrese 10 numeros: \n");
    for(i=0;i<10;i++)
    {  
        scanf("%d", &a[i]);
    }

    for(i=0;i<9;i++)
    {
        if(a[i] > a[i+1])
        {
            printf("\nNo esta en orden creciente");
            return 0;
        }
    }
    printf("\nEsta en orden creciente");
    return 0;
}