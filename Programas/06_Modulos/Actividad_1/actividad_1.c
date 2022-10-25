#include <stdio.h>
#include <stdlib.h>

int mayor(int arr[], int size)
{
    int i;
    int mayor=arr[0];
    for(i=1;i<size;i++)
    {
        if(mayor<arr[i])
            mayor=arr[i];
    }
    return mayor;
}

int menor(int arr[], int size)
{
    int i;
    int menor=arr[0];
    for(i=1;i<size;i++)
    {
        if(menor>arr[i])
            menor=arr[i];
    }
    return menor;
}
int main()
{
    int arreglo[5]={10,45,89,1,20};
    printf("Mayor: %d\nMenor: %d",mayor(arreglo,5),menor(arreglo,5));
    return 0;
}