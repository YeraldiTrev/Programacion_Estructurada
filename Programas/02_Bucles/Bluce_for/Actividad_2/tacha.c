#include <stdio.h>
#include <stdlib.h>

int main()
{
    

    int n,n2=1,i, espaciosInternos,espaciosDelante=0;
    printf("Ingresa un numero impar del 3 al 99: ");
    scanf("%d", &n);

    if(((n%2==0) || !(n>=3) || !(n<=99)))
    {
        printf("El numero debe ser impar y debe estar entre el 3 y el 99\n");
        exit(1);
    }

    espaciosInternos = n-1;
    printf("\n");

    for(;n2<n/2+1;)
    {
        for(i=1;i<=espaciosDelante;i++)
        {
            printf(" ");
        }

        printf("*");

        for(i=1;i<espaciosInternos;i++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
        n2++;
        espaciosDelante++;
        espaciosInternos-=2;
    }

    espaciosInternos = 0;
    espaciosDelante = n/2;

    for(n2=1;n2<=n/2+1;)
    {
        for(i=1;i<=espaciosDelante;i++)
        {
            printf(" ");
        }

        printf("*");

        for(i=1;i<espaciosInternos;i++)
        {
            printf(" ");
        }

        if(n2>1)
            printf("*");
        printf("\n");
        n2++;
        espaciosDelante--;
        espaciosInternos+=2;
    }
    return 0;
}
