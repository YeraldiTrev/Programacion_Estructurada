#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Datos
{
    char nombre[120];
    char apellido[120];
    int edad;
    float salario;
}emp={"Yeraldi","Trevino",20,1549.83};

int main()
{
    system("clear");
    struct Datos *st_ptr;
    st_ptr= &emp;
    printf("Direccion de memoria: %p\n",st_ptr);
    printf("Nombre: %s\n",emp.nombre);
    /*Con estructuras podemos utilizar el operador "->"
    para acceder al elemento de la estructura y modificarla*/
    strcpy(st_ptr->nombre,"Adolfo");
    printf("Nombre: %s",emp.nombre);

    
    return 0;
}