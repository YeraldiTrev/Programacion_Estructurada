#include <stdio.h>
#include <stdlib.h>

int main()
{   
    /* Se importa la librería stdlib.h 
    para poder usar la funcion system y limpiar la consola*/
    system("clear");
    float horas, sueldoHora, sueBruto, deducciones, persepciones, sueNeto;

    /*Le pedimos los datos al usuario*/
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);
    printf("Ingrese el sueldo por hora: ");
    scanf("%f", &sueldoHora);

    /*Hacemos el calculo del sueldo bruto, y el sueldo neto*/
    sueBruto = horas * sueldoHora;
    deducciones = sueBruto*0.12;
    persepciones = sueBruto*0.16;
    sueNeto = sueBruto - deducciones + persepciones;

    /*Finalmente mostramos el resultado en pantalla*/
    printf("Sueldo Bruto: %.2f\n",sueBruto);
    printf("Deducciones:  %.2f\n", deducciones);
    printf("Persepciones: %.2f\n", persepciones);
    printf("Sueldo Neto:  %.2f", sueNeto);
    return 0;
}
