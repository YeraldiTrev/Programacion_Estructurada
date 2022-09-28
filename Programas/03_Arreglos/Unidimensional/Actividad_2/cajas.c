#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    /*  n = Cantidad de cajas en el estante.
        k = cantidad de cajas que se puede llevar.*/
    int n=0, k=0 , i, j, sum = 0, mayor = 0;
    
    printf("Cantidad de cajas en el estante: ");
    scanf("%d",&n);
    printf("Cantidad de cajas que puedes llevar: ");
    scanf("%d",&k);

    int cajas[n];
    int dulces[n];

    printf("Cantidad de dulces de cada caja: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &cajas[i]);
        dulces[i] = 0;
    }

    /* Calculo de dulces maximo */
    for(i=0;i<n;i++)
    {
        for(j=i;j<k+i;j++)
        {
            sum+=cajas[j];
        }
        dulces[i]=sum;
        sum = 0;
        if(k+1>n)
            break;
    }

    mayor = dulces[0];

    for(i=1;i<n;i++)
    {
        if(mayor < dulces[i])
        {
            mayor = dulces[i];
        }
    }

    printf("\nMaximo de dulces: %d",mayor);
    return 0;
}