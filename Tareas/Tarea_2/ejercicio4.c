#include <stdio.h>
#include <stdlib.h>

int main()
{   
    /* Se importa la librería stdlib.h 
    para poder usar la funcion system y limpiar la consola*/
    system("clear");
    int num, a, b, c, d, e, f;
    printf("Ingresa un numero de 6 digitos: ");
    scanf("%d", &num);
    if (num <= 999999 && num >= 100000)
    {
        a = num / 100000;
        b = (num % 100000) / 10000;
        c = (num % 100000) % 10000 / 1000;
        d = ((num % 100000) % 10000) % 1000 / 100;
        e = (((num % 100000) % 10000) % 100) / 10;
        f = (((num % 100000) % 10000) % 1000) % 10;

        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",d);
        printf("%d\n",e);
        printf("%d\n",f);
    }
    else
    {
        printf("El numero debe ser solo de 6 digitos...");
    }
    return 0;
}
