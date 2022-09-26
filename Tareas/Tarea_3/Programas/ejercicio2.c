#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tratamiento, edad, dias;
    float costo, descuento = 0;
    char salir;

    do
    {
        system("clear");
        do
        {
            printf("Edad: ");
            scanf("%d",&edad);
            printf("Dias de hospedaje: ");
            scanf("%d", &dias);
            if(edad<=0 ||edad>=115 || dias<=0)
            {
                printf("\nERROR, DATOS NOS VALIDOS...\n");
                system("pause");
                system("clear");
                continue;
            }
            break;
        } while (1);
        
        do
        {
            printf("Tipo de tratamiento ");
            scanf("%d", &tratamiento);
            switch(tratamiento)
            {
                case 1: costo = 2800; break;
                case 2: costo = 1950; break;
                case 3: costo = 2500; break;
                case 4: costo = 1150; break;
                default:
                    printf("\nERROR. TRATAMIENTO NO ENCONTRADO\n");
                    system("pause");
                    system("clear");
                    continue;
            }
            break;
        } while (1);

        costo=costo*dias;
        printf("\nEdad del cliente:  %3d",edad);
        printf("\nDias de hospedaje: %3d\n",dias);

        if(edad>65)   
            descuento = costo*0.25;
        else if(edad<15)
            descuento = costo*dias*0.15;
        printf("\nSubtotal: $%10.2f",costo);
        printf("\nDescuento $%10.2f",descuento);
        printf("\nTotal:    $%10.2f",costo-descuento);

        printf("\nIngrese 0 para salir, de lo contrario ingrese cualquier numero: ");
        fflush(stdin);
        scanf("%c",&salir);
    }
    while(salir != '0');

    return 0;
}