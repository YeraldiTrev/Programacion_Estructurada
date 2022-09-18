#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i,j,n;

    printf("Ingrese un numero: ");
    scanf("%d",&n);


    for(i=1;i<=n; i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    
    for(i=n-1;i>=n-(n+1);i--)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    
    return 0;
}
