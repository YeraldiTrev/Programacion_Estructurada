#include <stdio.h>
#include <windows.h>

int main()
{   
    /* Declaracion de variables */
    system("cls");
    int cla;
    float sueMensuales[6];
    float sueSemestral = 0;
    int sueMensualesLenght = sizeof(sueMensuales) / sizeof(sueMensuales[0]);

    /* Entrada de datos */
    printf("Ingrese la clave del empleado: ");
    scanf("%d", &cla);
    int i;
    for (i = 0; i < sueMensualesLenght; i++)
    {
        printf("Ingresa el sueldo del mes %d: ",(i+1));
        scanf("%f", &sueMensuales[i]);
        sueSemestral += sueMensuales[i];
    }

    /*Salida de datos*/
    system("cls");
    printf("Clave del empleado: \t %d\n", cla);
    printf("Ingreso total semestral: %.2f\n", sueSemestral);
    printf("Promedio mensual: \t %.2f", (sueSemestral/6));
    return 0;
}