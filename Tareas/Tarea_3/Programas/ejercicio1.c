#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declaracion de variables*/
    int dis, tie;
    float preBoleto;

    /* Entrada y validacion de datos */
    do
    {
        system("clear");
        printf("Ingrese los dias de estancia: ");
        scanf("%d", &tie);
        printf("Ingrese la distancia total recorrida (ida y vuelta) en km: ");
        scanf("%d", &dis);
        if(tie <= 0 || dis <= 0)
        {
            printf("Favor de ingresar un dato valido...\n");
            system("pause");
            continue;
        }
        break;
    } while (1);

    /* Calculo del precio del boleto */
    preBoleto = 21.19*dis;
    if(tie > 5 && dis > 600)
    {
        printf("Subtotal   $%10.2f\n",preBoleto);
        printf("Descuento  $%10.2f\n",preBoleto*0.15);
        preBoleto -= preBoleto * 0.15;
        printf("Total      $%10.2f",preBoleto);
    }
    else
    {
        printf("Total: $%10.2f",preBoleto);
    }
    return 0;
}