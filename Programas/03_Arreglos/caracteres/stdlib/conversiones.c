#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    /*
        Conversiones:
        int atoi(cad) Cadena a entero
        double atof(cad) Cadena a flotante
        long aotl(cad) Cadena a long  
    */
    char cadInt[]="5672";
    char cadFloat[]=" 345.653";
    char cadLong[]="4574321222";

    int num=atoi(cadInt);
    double dec=atof(cadFloat);
    long numL=atol(cadLong);
    printf("%15s %15s %15s\n","Entero","Flotante","Entero Largo");
    printf("%15s %15s %15s\n",cadInt,cadFloat,cadLong);
    printf("%15d %15f %15ld",num+5,dec*2,numL+500);
    return 0;
}