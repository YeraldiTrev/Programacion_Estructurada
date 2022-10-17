#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PROFES 2
struct Grupo
{
    int noGrupo;
    int claveMateria;
    char nombreMateria[40];
    int noAlumnos;
    float calificaciones[30];
};
typedef struct Grupo grupo;
struct Profesor
{
    char nombre[80];
    int noProfe;
    float salario;
    grupo grupos[3];
}profesores[PROFES];
union Var
{
    int i;
    char opc;
}var;

int main()
{
    int j,k,num;
    float mejorSueldo;
    system("cls");
    strcpy(profesores[0].nombre,"Adolfo");
    profesores[0].noProfe=101;
    profesores[0].salario=1234.56;
    /*Grupo 1*/
    profesores[0].grupos[0].noGrupo=10;
    profesores[0].grupos[0].claveMateria=1001;
    strcpy(profesores[0].grupos[0].nombreMateria,"Algebra");
    profesores[0].grupos[0].noAlumnos=2;
    profesores[0].grupos[0].calificaciones[0]=100;
    profesores[0].grupos[0].calificaciones[1]=98;
    /*Grupo 2*/
    profesores[0].grupos[1].noGrupo=11;
    profesores[0].grupos[1].claveMateria=1001;
    strcpy(profesores[0].grupos[1].nombreMateria,"Algebra");
    profesores[0].grupos[1].noAlumnos=2;
    profesores[0].grupos[1].calificaciones[0]=89;
    profesores[0].grupos[1].calificaciones[1]=76;
    /*Grupo 3*/
    profesores[0].grupos[2].noGrupo=12;
    profesores[0].grupos[2].claveMateria=1008;
    strcpy(profesores[0].grupos[1].nombreMateria,"Calculo");
    profesores[0].grupos[2].noAlumnos=2;
    profesores[0].grupos[2].calificaciones[0]=87;
    profesores[0].grupos[2].calificaciones[1]=70;

    strcpy(profesores[1].nombre,"Yeraldi");
    profesores[1].noProfe=101;
    profesores[1].salario=68967.56;
    /*Grupo 1*/
    profesores[1].grupos[0].noGrupo=10;
    profesores[1].grupos[0].claveMateria=1001;
    strcpy(profesores[0].grupos[0].nombreMateria,"Algebra");
    profesores[1].grupos[0].noAlumnos=2;
    profesores[1].grupos[0].calificaciones[0]=100;
    profesores[1].grupos[0].calificaciones[1]=98;
    /*Grupo 2*/
    profesores[1].grupos[1].noGrupo=11;
    profesores[1].grupos[1].claveMateria=1001;
    strcpy(profesores[0].grupos[1].nombreMateria,"Algebra");
    profesores[1].grupos[1].noAlumnos=2;
    profesores[1].grupos[1].calificaciones[0]=89;
    profesores[1].grupos[1].calificaciones[1]=76;
    /*Grupo 3*/
    profesores[1].grupos[2].noGrupo=12;
    profesores[1].grupos[2].claveMateria=1008;
    strcpy(profesores[0].grupos[1].nombreMateria,"Calculo");
    profesores[1].grupos[2].noAlumnos=2;
    profesores[1].grupos[2].calificaciones[0]=87;
    profesores[1].grupos[2].calificaciones[1]=70;
    /*
    for(var.i=0;var.i<PROFES;var.i++)
    {
        
        printf("*********** %d%c Profesor ***********\n",var.i+1,167);
        printf("Ingresa el nombre del profesor: ");
        fflush(stdin);
        gets(profesores[var.i].nombre);
        printf("Ingresa el numero del profesor: ");
        scanf("%d",&profesores[var.i].noProfe);
        printf("Ingresa el salario del profesor: ");
        scanf("%f",&profesores[var.i].salario);
        for(j=0;j<3;j++)
        {
            printf("\t*********** %d%c Grupo ***********\n",j+1,167);
            printf("\tIngresa el numero del grupo: ");
            scanf("%d",&profesores[var.i].grupos[j].noGrupo);
            printf("\tIngresa la clave de la materia: ");
            scanf("%d",&profesores[var.i].grupos[j].claveMateria);
            printf("\tIngresa el nombre de la materia: ");
            fflush(stdin);
            gets(profesores[var.i].grupos[j].nombreMateria);
            printf("\tIngresa la cantidad de alumnos en el grupo: ");
            scanf("%d",&profesores[var.i].grupos[j].noAlumnos);
            for(k=0;k<profesores[var.i].grupos[j].noAlumnos;k++)
            {
                printf("\tIngresa la calificacion del %d%c alumno: ",k+1,167);
                scanf("%f",&profesores[var.i].grupos[j].calificaciones[k]);
            }
        }
        system("pause");
        system("cls");
    }
    */

    do
    {
        printf("1.Lista de todos los profesores.\n");
        printf("2.Mostrar los datos de un profesor.\n");
        printf("3.Mostrar los profesores que imparten una materia en particular.\n");
        printf("4.Profesor con mejor salario.\n5.Salir\n");
        printf("Selecciona una accion: ");
        fflush(stdin);
        scanf("%c",&var.opc);

        switch (var.opc)
        {
        case'1':
            for(var.i=0;var.i<PROFES;var.i++)
            {
                printf("*********** %d ***********\n",profesores[var.i].noProfe);
                printf("Nombre:  %s\n",profesores[var.i].nombre);
                printf("Salario: %.2f\n",profesores[var.i].salario);
                for(j=0;j<3;j++)
                {
                    printf("\t******* Grupo %d*******\n",profesores[var.i].grupos[j].noGrupo);
                    printf("\tNo. Alumnos: %d\n",profesores[var.i].grupos[j].noAlumnos);
                    for(k=0;k<profesores[var.i].grupos[j].noAlumnos;k++)
                        printf("\tCalificacion %d%c Alumno: %.2f\n",
                            k+1,167,profesores[var.i].grupos[j].calificaciones[k]);
                }
                system("pause");
                system("cls");
            }
            break;
        case'2':
            system("cls");
            printf("Ingrese el numero del Profesor a buscar: ");
            scanf("%d",&num);
            for(var.i=0;var.i<PROFES;var.i++)
            {
                if(num==profesores[var.i].noProfe)
                    break;
            }
            printf("*********** %d ***********\n",profesores[var.i].noProfe);
            printf("Nombre:  %s\n",profesores[var.i].nombre);
            printf("Salario: %.2f\n",profesores[var.i].salario);
            for(j=0;j<3;j++)
            {
                printf("\t******* Grupo %d*******\n",profesores[var.i].grupos[j].noGrupo);
                printf("\tNo. Alumnos: %d\n",profesores[var.i].grupos[j].noAlumnos);
                for(k=0;k<profesores[var.i].grupos[j].noAlumnos;k++)
                    printf("\tCalificacion %d%c Alumno: %.2f\n",
                        k+1,167,profesores[var.i].grupos[j].calificaciones[k]);
            }
            system("pause");
            system("cls");
            break;
        case'3':
            system("cls");
            printf("Ingresa la calve de la materia: ");
            scanf("%d",&num);
            system("cls");
            printf("Profesores que impraten la materia con clave \"%d\"\n",num);
            for(var.i=0;var.i<PROFES;var.i++)
            {
                for(j=0;j<3;j++)
                {
                    if(num==profesores[var.i].grupos[j].claveMateria)
                    {
                        printf("\t%s\n",profesores[var.i].nombre);
                        break;
                    }
                }
            }
            system("pause");
            system("cls");
            break;
        case'4':
            system("cls");
            mejorSueldo=profesores[0].salario;
            for(var.i=1;var.i<PROFES;var.i++)
            {
                if(mejorSueldo<profesores[var.i].salario)
                    mejorSueldo=profesores[var.i].salario;
            }
            printf("El profesor con mejor sueldo es: %s\n",profesores[var.i-1].nombre);
            system("pause");
            system("cls");
            break;
        case'5':
            printf("Saliendo del sistema de profesores...\n");
            system("pause");
            return 0;
        default:
            printf("Opcion no valida...\n");
            system("pause");
            system("cls");
            break;
        }
    }while(1);
    
    return 0;
}