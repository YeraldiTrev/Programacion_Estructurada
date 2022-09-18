#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i, j, k, n;

    printf("Ingrese un numero: ");
    scanf("%d",&n);


    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (k = j-2; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
