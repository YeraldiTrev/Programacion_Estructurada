#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    /* Declaracion de variables */

    char opcionFigura;

    
    do
    {
        printf("\n********** SELECCION DE FIGURA **********\n1) Triangulo.\n2) Cuadrado.");
        printf("\n3) Rectangulo.\n4) Rombo.\n5) Salir.\nSelecciona una opcion: ");
        fflush(stdin);
        scanf("%c",&opcionFigura);
        printf("\n");

        /* Seleccion de figura */

        switch(opcionFigura)
        {
            case '1':
                printf("\nTriangulo");
                break;
            case '2':
                printf("\nCuadrado");
                break;
            case '3':
                printf("\nRectangulo");
                break;
            case '4':
                printf("\nRombo");
                break;
            case '5':
                printf("\nSaliendo del programa...\nBuen dia...");
                exit(1);
            default:
                printf("\nFavor de ingresar una opcion del menu...\n");
                system("pause");
        }

    }
    while(1);

    return 0;
}