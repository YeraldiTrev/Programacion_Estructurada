#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float alt;
    int edad, hombres = 0, mujeres = 0;
    char opc;
    
    
    while(1)
    {
        system("clear");
        /* Registro de aspirantes */
        printf("*************** Registro de aspirantes ***************\n");
        printf("\n****** Genero ******\n1. Hombre\n2. Mujer\nIngresa una opcion segun el genero: ");
        fflush(stdin);
        scanf("%c", &opc);

        /* Validacion de genero */
        if (opc != '1' && opc != '2')
        {
            printf("\nFavor de ingresar un genero valido...\n");
            system("pause");
            continue;
        }
        /* Registro de datos despues de validar*/
        printf("\n*************** Registro de datos ***************\n");
        printf("\nIngresa la edad: ");
        scanf("%d", &edad);
        printf("Ingresa la estatura en metros: ");
        scanf("%f", &alt);

        /* Validacion de aspirantes */
        if(opc == '1')
        {
            if (edad < 14 || edad > 18)
            {
                printf("\nLos hombres deben tener entre 14 y 18 a%cos...\n",164);
                system("pause");
                continue;
            }
            else if(alt  <= 1.79)
            {
                printf("\nLos hombres deben medir 1.80m o mas\n");
                system("pause");
                continue;
            }
            else
            {
                printf("\nAspirante registrado...\n");
                hombres++;
            }
        }
        else if(opc == '2')
        {
            if (edad < 13 || edad > 15)
            {
                printf("\nLas mujeres deben tener entre 13 y 15 a%cos...\n",164);
                system("pause");
                continue;
            }
            else if(alt < 1.60)
            {
                printf("\nLas mujeres deben medir 1.60m o mas\n");
                system("pause");
                continue;
            }
            else
            {

                printf("\nAspirante registrado...\n");
                mujeres++;
            }
        }

        /*Opcion para salir*/
        printf("\n%cDesea agregar otro aspirante? (1.NO) (2. SI)-> ",168);
        fflush(stdin);
        scanf("%c",&opc);
        if(opc == '1')
            break;
    }

    system("clear");
    printf("Total de hombres: %3d",hombres);
    printf("\nTotal de mujeres: %3d",mujeres);
    return 0;
}