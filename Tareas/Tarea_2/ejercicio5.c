#include <stdio.h>
#include <stdlib.h>

int main()
{   
    /* Se importa la librería stdlib.h 
    para poder usar la funcion system y limpiar la consola*/
    system("clear");
    int numerador;
    int denominador;

    /* Primero pedimos el nuemrador y denominador de la fraccion impropia*/
    printf("Ingresa el numerador: ");
    scanf("%d", &numerador);
    printf("Ingresa el denominador: ");
    scanf("%d", &denominador);

    system("clear");

    /*Dividimos para sacar el numero entero, y sacamos el resto de la division 
    y finalmente imprimimos.*/
    printf("Fraccion impropia: %d/%d\n", numerador, denominador);
    printf("Fraccion mixta:    %d %d/%d",(numerador/denominador), (numerador%denominador), denominador);

    return 0;
}
