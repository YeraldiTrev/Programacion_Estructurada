#include <stdio.h>
#include <stdlib.h>

int i,j;

int validacionPositivos(char msg[300], int *n)
{
    printf("%s",msg);
    scanf("%d",n);
    if(*n<0)
    {
        printf("El numero no es positivo...\n");
        system("pause");
        system("clear");
        validacionPositivos(msg,n);
    }
    return *n;
}

void rellenarArreglo(int arr[],int *longitud)
{
    for(i=0;i<(*longitud);i++)
        validacionPositivos("Ingrese los numeros: ",&arr[i]);
}

int menor(int arr[],int *longitud)
{
    int menor=arr[0];
    for(i=1;i<(*longitud);i++)
    {
        if(menor>arr[i])
            menor=arr[i];
    }
    return menor;
}

int mayor(int arr[],int *longitud)
{
    int mayor=arr[0];
    for(i=1;i<(*longitud);i++)
    {
        if(mayor<arr[i])
            mayor=arr[i];
    }
    return mayor;
}

int ordenArreglo(int arr[],int *longitud)
{
    int temp;
    for(i=0;i<((*longitud)-1);i++) 
    { 
        for(j=i+1;j<(*longitud);j++) 
        { 
            if (arr[j] < arr[i]) 
            { 
                temp = arr[j]; 
                arr[j] = arr[i]; 
                arr[i] = temp; 
            } 
        } 
    }
    return *arr;
}

int main()
{
    system("clear");
    int num=validacionPositivos("Ingrese la cantidad de numeros a ingresar: ",&num);
    int numeros[num];
    rellenarArreglo(numeros,&num);
    printf("\nEl mayor es: %d",mayor(numeros,&num));
    printf("\nEl menor es: %d",menor(numeros,&num));
    *numeros=ordenArreglo(numeros,&num);
    printf("\nArreglo ordenado: ");
    for(i=0;i<num;i++)
        printf("%d ",numeros[i]);
    return 0;
}