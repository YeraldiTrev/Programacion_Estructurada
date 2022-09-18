#include <stdio.h>
#include <windows.h>

/*
    Construye un programa que, al recibir como datos la clave del empleado y los
    6 primeros sueldos del año, calcule el ingreso total semestral y el promedio
    mensual, e imprima la clave del empleado, el ingreso total y el promedio mensual.

    Datos: CLA, SU1, SU2, SU3, SU4, SU5, SU6.
    Donde: CLA es una variable de tipo entero que representa la clave del
    empleado.
    SU1, SU2, SU3, SU4, SU5, SU6: Son variables de tipo real que representan los
    seis sueldos recibidos.
*/

int main()
{   
    system("cls");
    // Declaracion de variables.
    int cla;
    float su1, su2, su3, su4 ,su5, su6;
    
    // Entrada de datos.
    printf("Ingrese la clave del empleado: ");
    scanf("%d", &cla);

    printf("Ingresa el sueldo del mes 1: ");
    scanf("%f", &su1);
    printf("Ingresa el sueldo del mes 2: ");
    scanf("%f", &su2);
    printf("Ingresa el sueldo del mes 3: ");
    scanf("%f", &su3);
    printf("Ingresa el sueldo del mes 4: ");
    scanf("%f", &su4);
    printf("Ingresa el sueldo del mes 5: ");
    scanf("%f", &su5);
    printf("Ingresa el sueldo del mes 6: ");
    scanf("%f", &su6);

    // Calculo total del salario semestral e impresión de datos.
    float sueSemestral = su1 + su2 + su3 + su4  +su5 + su6;
    system("cls");

    printf("Clave del empleado: \t %d\n", cla);
    printf("Ingreso total semestral: %.2f\n", sueSemestral);
    printf("Promedio mensual: \t %.2f", (sueSemestral/6));

    return 0;
}