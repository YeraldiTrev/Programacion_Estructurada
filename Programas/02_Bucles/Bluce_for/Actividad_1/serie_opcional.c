#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i, lim;
    printf("Ingresa un numero: ");
    scanf("%d", &lim);

    if(lim < 0)
    {
        for(i=1; i>=lim;i--)
            printf("%d\n",i);
    }
    else
    {
        for(i=1; i<=lim;i++)
            printf("%d\n",i);
    }
    return 0;
}