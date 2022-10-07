#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("clear");
    /*
    abs(int) valor absoluto
    div(int,int), regresa una estructura
    rand() o srand(int) genera un numero aleatorio*/
    /* Importando la libreria stdlib y time, la siguiente funcion nos ayudara a 
    tener numeros verdaderamente aleatorios*/
    srand(time(0));
    int numA,i,abso;
    for(i=0;i<3;i++)
    {
        numA=rand();
        printf("El %d numero: %d\n",i+1,numA);
    }
    printf("Numero maximo de numeros absolutos: %d\n\n",RAND_MAX);

    printf("Ingresa un numero negativo: ");
    scanf("%d",&abso);
    printf("|%d| = %d\n",abso,abs(abso));

    int divisor=4,dividendo=22;

    div_t resultado=div(dividendo,divisor);
    printf("%d/%d=%d residuo=%d",divisor,dividendo,resultado.quot,resultado.rem);

    return 0;
}