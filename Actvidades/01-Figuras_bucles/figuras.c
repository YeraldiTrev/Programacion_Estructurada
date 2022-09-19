#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declaracion de variables */
    int i, j, k, espacios, contador;
    float tl1,tl2,tl3,th,tb;
    float cl;
    float ra, rb;
    float roD, rod, rol;
    char opcionFigura, opcionAccion;

    
    do
    {
        system("clear");
        printf("\n********** SELECCION DE FIGURA **********\n1) Triangulo.\n2) Cuadrado.");
        printf("\n3) Rectangulo.\n4) Rombo.\n5) Salir.\nSelecciona una opcion: ");
        fflush(stdin);
        scanf("%c",&opcionFigura);
        printf("\n");

        /* Seleccion de figura */
        if(opcionFigura == '1')
        {
            /* Entrada de los datos */
            do
            {
                system("clear");
                printf("Ingresa la medida de los 3 lados: \n");
                scanf("%f \n%f \n%f",&tl1, &tl2, &tl3);
                printf("Ingresa la medida de la base y de la altura: \n");
                scanf("%f \n%f",&tb, &th);
                if(tl1 <= 0 || tl2 <= 0 || tl3 <= 0 || tb <= 0 || th <= 0)
                {
                    printf("\nLos datos deben de ser mayores que 0...\n");
                    system("pause");
                    continue;
                }
                break;
            } while (1);
        
            /* Menu de acciones */
            do
            {
                system("clear");
                printf("\n********** SELECCION DE ACCION **********\n1) Calcular Area.\n2) Calcular perimetro.");
                printf("\n3) Dibujar Figura.\n4) Regresar al menu anterior.\nSelecciona una opcion: ");
                fflush(stdin);
                scanf("%c",&opcionAccion);

                if (opcionAccion == '4')
                {   
                    system("pause");
                    break;
                }

                switch (opcionAccion)
                {
                case '1':
                    printf("\n%crea = %.2f\n",181,((tb*th)/2));
                    system("pause");
                    break;
                case '2':
                    printf("\nPerimetro = %.2f\n",(tl1+tl2+tl3));
                    system("pause");
                    break;
                case '3':
                    espacios = th;
                    for(i = 0; i <= th; i++)
                    {   
                        for(k=1;k<=espacios;k++)
                        {
                            printf(" ");
                        }
                        for(j = 0; j < i; j++)
                        {
                            printf("*"); 
                        }
                        printf("\n");
                        espacios--;
                    }
                    system("pause");
                    break;
                default:
                printf("Favor de ingresar una opcion del menu...");
                    continue;
                }
            }while (1);
        }
        else if(opcionFigura=='2')
        {
            /* Entrada de datos */
            do
            {
                system("clear");
                printf("Ingresa la medida del lado del cuadrado: ");
                scanf("%f",&cl);
                if(cl <= 0)
                {
                    printf("\nEl dato debe de ser mayor que 0...\n");
                    system("pause");
                    continue;
                }
                break;
            } while (1);
        
            /* Menu de acciones */
            do
            {
                system("clear");
                printf("\n********** SELECCION DE ACCION **********\n1) Calcular Area.\n2) Calcular perimetro.");
                printf("\n3) Dibujar Figura.\n4) Regresar al menu anterior.\nSelecciona una opcion: ");
                fflush(stdin);
                scanf("%c",&opcionAccion);

                if (opcionAccion == '4')
                {   
                    system("pause");
                    break;
                }

                switch (opcionAccion)
                {
                case '1':
                    printf("\n%crea = %.2f\n",181,(cl*cl));
                    system("pause");
                    break;
                case '2':
                    printf("\nPerimetro = %.2f\n",(cl*4));
                    system("pause");
                    break;
                case '3':
                    for(i = 1; i <= cl; i++)
                    {   
                        for(j = 1;j<=cl;j++)
                            printf("*");
                        printf("\n");
                    }
                    system("pause");
                    break;
                default:
                printf("Favor de ingresar una opcion del menu...");
                    continue;
                }
            }while (1);
        }
        else if(opcionFigura=='3')
        {
            /* Entrada de datos */
            do
            {
                system("clear");
                printf("Ingresa la medida de la altura: ");
                scanf("%f",&ra);
                printf("Ingresa la medida de la base: ");
                scanf("%f",&rb);
                if(ra <= 0 || rb <= 0 || ra >= rb)
                {
                    printf("\nLa base debe ser mayor que la altura y los datos mayores que 0...\n");
                    system("pause");
                    continue;
                }
                break;
            } while (1);
        
            /* Menu de acciones */
            do
            {
                system("clear");
                printf("\n********** SELECCION DE ACCION **********\n1) Calcular Area.\n2) Calcular perimetro.");
                printf("\n3) Dibujar Figura.\n4) Regresar al menu anterior.\nSelecciona una opcion: ");
                fflush(stdin);
                scanf("%c",&opcionAccion);

                if (opcionAccion == '4')
                {   
                    system("pause");
                    break;
                }

                switch (opcionAccion)
                {
                case '1':
                    printf("\n%crea = %.2f\n",181,(rb*ra));
                    system("pause");
                    break;
                case '2':
                    printf("\nPerimetro = %.2f\n",(2*ra)+(2*rb));
                    system("pause");
                    break;
                case '3':
                    for(i = 1; i <= ra; i++)
                    {   
                        for(j = 1;j<=rb;j++)
                            printf("*");
                        printf("\n");
                    }
                    system("pause");
                    break;
                default:
                printf("Favor de ingresar una opcion del menu...");
                    continue;
                }
            }while (1);
        }
        else if(opcionFigura=='4')
        {
            /* Entrada de datos */
            do
            {
                system("clear");
                printf("Ingresa la medida de la diagonal mayor: ");
                scanf("%f",&roD);
                printf("Ingresa la medida de la diagonal menor: ");
                scanf("%f",&rod);
                printf("Ingresa la medida del lado: ");
                scanf("%f",&rol);
                if(roD <= 0 || rod <= 0 || rol <= 0)
                {
                    printf("\nLa medida de los datos deben ser mayores que 0...\n");
                    system("pause");
                    continue;
                }
                break;
            } while (1);
        
            /* Menu de acciones */
            do
            {
                system("clear");
                printf("\n********** SELECCION DE ACCION **********\n1) Calcular Area.\n2) Calcular perimetro.");
                printf("\n3) Dibujar Figura.\n4) Regresar al menu anterior.\nSelecciona una opcion: ");
                fflush(stdin);
                scanf("%c",&opcionAccion);

                if (opcionAccion == '4')
                {   
                    system("pause");
                    break;
                }

                switch (opcionAccion)
                {
                case '1':
                    printf("\n%crea = %.2f\n",181,((roD*rod)/2));
                    system("pause");
                    break;
                case '2':
                    printf("\nPerimetro = %.2f\n",(rol*4));
                    system("pause");
                    break;
                case '3':
                    contador = 1;
                    /* Triangulo Superior */
                    for (i=(roD/2);i>=1;i--)
                    {
                        for (espacios=0; espacios<=i;espacios++)
                        {
                            printf(" ");
                        }

                        for (j=1;j<=contador;j++)
                        {
                            printf("*");
                        }
                        printf("\n");                          
                        contador += 2;
                    }

                    /*Triangulo inferior*/
                    for (i= 4; i>= 1; i--)
                    {
                        for (espacios=6;espacios>=i;espacios--)
                        {        
                            printf(" ");
                        }
                        
                        for (j= 2;j<=contador-3;j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                        contador-= 2;
                    }
                    system("pause");
                    break;
                default:
                printf("Favor de ingresar una opcion del menu...");
                    continue;
                }
            }while (1);
        }
        else if(opcionFigura=='5')
        {
            printf("\nSaliendo del programa...\nBuen dia...");
            exit(1);
        }
        else
        {
            printf("\nFavor de ingresar una opcion del menu...\n");
            system("pause");
        }

    }while(1);

    return 0;
}