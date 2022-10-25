#include <stdio.h>
#include <stdlib.h>
/*union sirve para evitar la saturacion de memoria
esta reutiliza el mismo espacio de memoria para varias variables
osea, si definimos 3 variables en "union", podemos defirnirlas en
un solo espacio de memoria, reemplazando el valor del mismo dependiendo
del cual queramos. La ventaja que nos da es el ahorro de memoria.
Ya que podemos utilizar algunas variables que no utilizamos a la vez para
usarlas constantemente*/
union varios
{
    char opc;
    double suma;
    int i;
};
int main()
{
    system("cls");
    return 0;
}