#include <stdio.h>
#include <stdlib.h>

void divisores(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
}

int main()
{
    system("cls");
    int n;
    printf("Ingresa un numero: ");
    scanf("%d",&n);
    printf("Divisores de %d:\n",n);
    divisores(n);
    return 0;
}