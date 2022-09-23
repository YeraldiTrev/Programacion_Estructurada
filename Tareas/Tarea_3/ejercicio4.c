#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,j,k,l,alumnos;

    do
    {
        printf("Ingrese la cantidad de alumnos: ");
        scanf("%d",&alumnos);
        if(alumnos<=1)
        {
            printf("La cantidad de alumnos debe ser superior a 1...\n");
            continue;
        }
        break;
    }
    while(1);

    int matriculas[alumnos];
    float calificaciones[alumnos][5], promedios[alumnos];

    for(i=0;i<alumnos;i++)
    {
        printf("Ingresa la matricula del %d%c alumno: ",i+1,167);
        scanf("%d",&matriculas[i]);
        promedios[i]=0;
    }

    for(i=0;i<alumnos;i++)
    {
        printf("\n********** Alumno: %d **********\n",matriculas[i]);
        for(j=0;j<5;j++)
        {
            do
            {
                printf("Ingrese la %d%c calificacion: ",j+1,167);
                scanf("%f",&calificaciones[i][j]);
                if(calificaciones[i][j]<0||calificaciones[i][j]>100)
                {
                    printf("La clificacion debe ser de 0 a 100...\n");
                    continue;
                }
                break;
            } while(1);
            promedios[i]+=calificaciones[i][j];
        }
        promedios[i]/=5;
    }

    system("pause");
    system("clear");

    for(i=0;i<alumnos;i++)
    {
        printf("\n********** Alumno: %d **********\n",matriculas[i]);
        for(j=0;j<5;j++)
        {
            printf("Calificacion %d: %3.2f\n",j+1,calificaciones[i][j]);
        }
        printf("Promedio: %3.2f",promedios[i]);
        printf("\n");
    }

    float mejor = promedios[0];
    float peor = promedios[0];
    
    for(i=1;i<alumnos;i++)
    {
        if(mejor<promedios[i])
        {
            mejor = promedios[i];
            l=i;
        }
        if(peor>promedios[i])
        {
            peor=promedios[i];
            k=i;
        }
    }

    printf("\n\n********* Mejor Promedio ******\nMatricula: %d\nPromedio: %3.2f",matriculas[l],mejor);
    printf("\n********* Peor Promedio ******\nMatricula: %d\nPromedio: %3.2f",matriculas[k],peor);

    return 0;
}