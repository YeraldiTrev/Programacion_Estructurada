#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    /* Se importa la librería stdlib.h 
    para poder usar la funcion system y limpiar la consola*/
    system("clear");
    float x,y;

    /* Pedimos los valores de las paredes X y Y*/
    printf("Ingrese el valor de X: ");
    scanf("%f", &x);
    printf("Ingrese el valor de Y: ");
    scanf("%f", &y);
    
    /* Hacemos el calculo con el uso de la librería
    math.h para la elevacion de potencias y 
    seguido a eso mostramos el resultado */
    printf("Longitud de la tira: %.4f",sqrt((pow(x,2)+pow(y,2))));
    return 0;
}
