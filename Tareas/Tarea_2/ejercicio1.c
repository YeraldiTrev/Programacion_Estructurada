#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    /* Se importa la librería stdlib.h 
    para poder usar la funcion system y limpiar la consola*/
    system("clear");
    float x,y,z;

    /* Despues de definir las variables le pedimos al usuario que ingrese sus valores */
    printf("Ingrese el valor de X: ");
    scanf("%f", &x);
    printf("Ingrese el valor de Y: ");
    scanf("%f", &y);
    printf("Ingrese el valor de Z: ");
    scanf("%f", &z);

    /* Se hace el calculo con el uso de la formula dada y 
    la libreria math.h para la elevacion de potencias n. Imprimiendolo
    de manera directa.*/

    printf("\nResultado: %f", ((((2*x)+y)/z)*(pow(y,3)-z))/(((x+(2*y)+(3*z))/(z-(2*y)-(3*x)))+(pow(x,2))+(pow(z,2))));

    return 0;
}
