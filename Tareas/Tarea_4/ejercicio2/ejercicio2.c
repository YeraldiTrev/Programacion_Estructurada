#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int m,i,j,d,n,k,aux;
    do
    {
        printf("Ingresa la cantidad de productos maxima que se manejan: ");
        scanf("%d",&m);
        if(m<1)
        {
            printf("Cantidad invalida...\n");
            system("pause");
            system("cls");
            continue;
        }
        break;
    }while(1);
    int mercancia[m][2];
    system("cls");
    /* Relleno del numero de productos llegados. */
    for(i=0;i<m;i++)
    {
        mercancia[i][0]=i+1;
        mercancia[i][1]=0;
    }

    /*d: dias de la semana. 
    n: productos que llegaron
    P: indica el producto
    k: cantidad de productos P que llegaron*/
    for(d=0;d<5;d++)
    {   
        /*Validacion para no exceder la cantidad de productos del almacen*/
        do
        {
            scanf("%d",&n);
            if(n>m)
                continue;
            break;
        }while(1);

        for(i=0;i<n;i++)
        {
            printf("%d ",mercancia[i][0]);
            scanf("%d",&aux);
            mercancia[i][1]+=aux;
        }
    }
    system("cls");
    /*Muestra de los productos en almacen*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
            printf("%5d\t",mercancia[i][j]);
        printf("\n");
    }
    return 0;
}