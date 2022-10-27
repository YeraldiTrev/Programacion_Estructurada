/* Librerias utilizadas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Declaracion de constantes */
#define MATERIAS 7 /* Maximo de materias por alumno */
#define ALUMNOS 1000 /* Limite maximo de alumnos*/

/* Definicion de estructuras */
struct Domicilio
{
    char calleNum[120];
    int cp;
    char colonia[60];
    char ciudad[60];
    char telefono[15];
};
struct Calificaciones
{
    char materia[120];
    float promedio;
};
struct NivelEstudio
{
    char nivel[20];
    int grado;
    char salon[10];
    struct Calificaciones calfs[MATERIAS];
};
struct Alumno
{
    int matricula;
    char nomCompleto[120];
    struct Domicilio residencia;
    struct NivelEstudio nvlEstudio;
}escuela[ALUMNOS];

int main()
{
    /* Declaracion de variables */
    int alumnos,i,j,matricula,grado;
    float promedio=0;
    char opc, salon[10];

    /* Solicitud y validacion de alumnos a registrar */
    do
    {
        system("clear");
        printf("Ingrese la cantidad de alumnos a registrar: ");
        scanf("%d",&alumnos);
        if(alumnos<1||alumnos>ALUMNOS)
        {
            printf("La cantidad de alumnos debe estar entre 1 y %d...\n",ALUMNOS);
            system("pause");
            continue;
        }
        break;
    }while (1);
    
    /* Registro de alumnos */
    for(i=0;i<alumnos;i++)
    {
        system("clear");
        printf("********************** Registro %d%c alumno **********************\n",i+1,167);
        printf("Ingrese la matricula: ");
        scanf("%d",&escuela[i].matricula);
        fflush(stdin);
        printf("Ingrese el nombre completo: ");
        gets(escuela[i].nomCompleto);
        fflush(stdin);
        system("clear");
        /* Registro de datos de domicilio */
        /*
        printf("\tDatos de residencia....\n");
        printf("\tIngrese su calle y numero: ");
        gets(escuela[i].residencia.calleNum);
        fflush(stdin);
        printf("\tIngrese su codigo postal: ");
        scanf("%d",&escuela[i].residencia.cp);
        fflush(stdin);
        printf("\tIngrese su colonia: ");
        gets(escuela[i].residencia.colonia);
        fflush(stdin);
        printf("\tIngrese su ciudad: ");
        gets(escuela[i].residencia.ciudad);
        fflush(stdin);
        printf("\tIngrese su telefono: ");
        gets(escuela[i].residencia.telefono);
        fflush(stdin);
        system("clear");
        */
        printf("Nivel de estudios...\n");
        do
        {
            printf("1) Primaria.\n2)Secundaria\n3)Preparatoria.\n");
            printf("Ingrese el nivel de estudios segun las opciones: ");
            fflush(stdin);
            scanf("%c",&opc);
            if(opc=='1')
                strcpy(escuela[i].nvlEstudio.nivel,"Primaria");
            else if(opc=='2')
                strcpy(escuela[i].nvlEstudio.nivel,"Secundaria");
            else if(opc=='3')
                strcpy(escuela[i].nvlEstudio.nivel,"Preparatoria");
            else
            {
                printf("Ingresa un nivel escolar valido...\n");
                system("pause");
                system("clear");
                continue;
            }
            break;
        }while (1);
        printf("Ingrese el grado cursado: ");
        scanf("%d",&escuela[i].nvlEstudio.grado);
        fflush(stdin);
        printf("Ingrese el salon de curso: ");
        gets(escuela[i].nvlEstudio.salon);
        printf("\tCalificaciones por materia del alumno\n");
        /* Registro de materias y calificacion */
        for(j=0;j<MATERIAS;j++)
        {
            fflush(stdin);
            printf("\tIngrese el nombre de la %d%c materia: ",j+1,167);
            gets(escuela[i].nvlEstudio.calfs[j].materia);
            do
            {
                printf("\tIngrese la calificacion obtenida: ");
                scanf("%f",&escuela[i].nvlEstudio.calfs[j].promedio);
                if(escuela[i].nvlEstudio.calfs[j].promedio<0||escuela[i].nvlEstudio.calfs[j].promedio>100)
                {
                    printf("La calificacion debe de estar entre 0 y 100..\n");
                    system("pause");
                    system("clear");
                    continue;
                }
                break;
            }while(1);
        }
    }

    /* Acciones del programa */
    do
    {
        system("clear");
        printf("1. Promedio general de un alumno.\n2. Listado de alumnos.\n3. Mejor alumno.\n");
        printf("4. Salir.\nIngrese una opcion del menu: ");
        fflush(stdin);
        scanf("%c",&opc);
        switch(opc)
        {
        case '1':
            do
            {
                system("clear");
                printf("Ingresa la matricula del alumno: ");
                scanf("%d",&matricula);
                for(i=0;i<alumnos;i++)
                {
                    if(escuela[i].matricula==matricula)
                        break;
                    else if(i==(alumnos-1)&&matricula!=escuela[i].matricula)
                    {
                        printf("Matricula no encontrada...\n");
                        system("pause");
                    }

                }
                if(escuela[i].matricula==matricula)
                {
                    j=i;
                    for(i=0;i<MATERIAS;i++)
                        promedio+=escuela[j].nvlEstudio.calfs[i].promedio;
                    promedio/=MATERIAS;
                    break;
                }
            }while(1);
            printf("Promedio del alumno con matricula \"%d\": %3.2f\n",matricula,promedio);
            system("pause");
            break;
        case '2':
            do{
                printf("1) Primaria.\n2)Secundaria\n3)Preparatoria.\n");
                printf("Ingrese el nivel de estudios segun las opciones: ");
                fflush(stdin);
                scanf("%c",&opc);
                if(opc!='1'&&opc!='2'&&opc!='3')
                {
                    printf("Ingresa un nivel escolar valido...\n");
                    system("pause");
                    system("clear");
                    continue;
                }
                break;
            }while (1);
            do
            {
                printf("Ingrese el grado: ");
                scanf("%d",&grado);
                printf("Ingresa el salon: ");
                fflush(stdin);
                gets(salon);
                system("clear");
                for(i=0;i<alumnos;i++)
                {
                    if(escuela[i].nvlEstudio.grado==grado
                    &&(strcmp(salon,escuela[i].nvlEstudio.salon))==0)
                    {
                        printf("%d\t%s\t",escuela[i].matricula,escuela[i].nomCompleto);
                        for(j=0;j<MATERIAS;j++)
                            promedio+=escuela[i].nvlEstudio.calfs[j].promedio;
                        promedio/=MATERIAS;
                        printf("Promedio: %3.2f\n",promedio);
                    }
                    system("pause");
                }
                break;
            }while(1);
        case '4':
            system("clear");
            printf("Programa finalizado...:D\n");
            return 0;
        default:
            printf("Opcion No valida...\n");
            system("pause");
            break;
        }
    }while(1);

    return 0;
}