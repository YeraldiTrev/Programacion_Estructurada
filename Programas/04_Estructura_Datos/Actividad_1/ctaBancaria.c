/*
    1. Alta Registrar cuenta bancaria, preguntar los datos 1,2,3. 
    2. Baja de cuenta. Solicitar noCuenta, verificar si existe el noCuenta, si lo encuentra
       verificar si ya esta dado de baja, si no lo esta, cambiar estatus, si ya lo esta decirlo.
    3. Movimientos. 
        A)Deposito 
        B)Retiro, validar que tenga saldo para retirar.
    4. Consulta. 
        A)Consultar todos. 
        B)Consultar por cuenta. Solicitar noCuenta, si no esta decirlo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CuentaBancaria
{  
    char noCuenta[13]; //12 digitos
    char nombre[40];
    int tipoTarjeta; //1. Debito 2.Credito 3.Con chequera.
    float saldo;
    int estatus; // 1. Activo 0.Inactivo
};
#define PERSONAS 3
int main()
{  
    int i,altas=2;
    char opc,noCta[13];
    float saldos;
    struct CuentaBancaria cuentas[PERSONAS];
    /*
    strcpy(cuentas[0].noCuenta,"123456789012");
    strcpy(cuentas[0].nombre,"Yeraldi Trevino");
    cuentas[0].tipoTarjeta=1;
    cuentas[0].saldo=19.20;
    cuentas[0].estatus=1;
    strcpy(cuentas[1].noCuenta,"123456789021");
    strcpy(cuentas[1].nombre,"Adolfo Herrera");
    cuentas[1].tipoTarjeta=2;
    cuentas[1].saldo=19.78;
    cuentas[1].estatus=0;
    */

    do
    {
        system("cls"); 
        printf("1. Alta De Cuenta.\n2. Baja De Cuenta.\n3. Movimientos.");
        printf("\n4. Consulta.\n5. Salir.\nElige una opcion del menu: ");
        fflush(stdin);
        scanf("%c",&opc);
        if(opc=='1')
        {
            system("cls");
            do
            {
                printf("Ingresa el numero de cuenta: ");
                fflush(stdin);
                gets(cuentas[altas].noCuenta);
                if(strlen(cuentas[altas].noCuenta)<12)
                {
                    printf("El numero de cuenta debe de ser de 12 digitos...\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                for(i=0;i<PERSONAS;i++)
                {
                    if(i==altas)
                        continue;
                    else if(strcmp(cuentas[altas].noCuenta,cuentas[i].noCuenta)==0)
                    {
                        printf("Numero de cuenta ya registrado...\n");
                        system("pause");
                        system("cls");
                        break;
                    }
                }
                if(strcmp(cuentas[altas].noCuenta,cuentas[i].noCuenta)==0)
                    continue;
                break;
            }while(1);

            printf("Ingresa el nombre del beneficiario: ");
            fflush(stdin);
            gets(cuentas[altas].nombre);

            do
            {
                printf("Ingresa el tipo de tarjeta (1.Debito 2.Credito 3.Con chequera): ");
                scanf("%d",&cuentas[altas].tipoTarjeta);
                if(cuentas[altas].tipoTarjeta<1||cuentas[altas].tipoTarjeta>3)
                {
                    printf("Tipo de tarjeta no valida...\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                break;
            }while(1);
            cuentas[altas].saldo=0;
            cuentas[altas].estatus=1;
            system("pause");
            system("cls");
            altas++;   
        }
        else if(opc=='2')
        {
            system("cls");
            do
            {
                printf("Ingresa el numero de cuenta: ");
                fflush(stdin);
                gets(noCta);
                if(strlen(noCta)<12)
                {
                    printf("El numero de cuenta debe de ser de 12 digitos...\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                for(i=0;i<PERSONAS;i++)
                {
                    if(strcmp(noCta,cuentas[i].noCuenta)==0)
                    {
                        if(cuentas[i].estatus==0)
                        {
                            printf("Esta cuenta ya esta deshabilitada...\n");
                            printf("Desea utilizar otro numero de cuenta? [Y(SI)/N(NO)]-> ");
                            fflush(stdin);
                            scanf("%c",&opc);
                            system("pause");
                            system("cls");
                        }
                        else
                        {
                            cuentas[i].estatus=0;
                            printf("Se deshabilito esta cuenta...\n");
                            system("pause");
                            system("cls");
                        }
                        break;
                    }
                }
                if(opc=='Y'||opc=='y')
                    continue;
                break;
            }while(1);
            
        }
        else if(opc=='3')
        {
           do
           {
                do
                {
                    system("cls");
                    printf("Ingresa el numero de cuenta: ");
                    fflush(stdin);
                    gets(noCta);
                    if(strlen(noCta)<12)
                    {
                        printf("El numero de cuenta debe de ser de 12 digitos...\n");
                        system("pause");
                        system("cls");
                        continue;
                    }
                    else
                    {
                        for(i=0;i<PERSONAS;i++)
                        {
                            if(strcmp(noCta,cuentas[i].noCuenta)==0)
                                break;
                        }
                        if (strcmp(noCta,cuentas[i].noCuenta)!=0)
                        {
                            printf("Numero de cuenta no encontrado...\n");
                            printf("Desea ingresar otra? [Y(SI)/N(NO)] -> ");
                            fflush(stdin);
                            scanf("%c",&opc);
                            if(opc=='y'||opc=='Y')
                            {
                                system("pause");
                                system("cls");
                                continue;
                            }
                            else if(opc!='n'&&opc!='N')
                                opc='n';
                        }
                        if(cuentas[i].estatus==0)
                        {
                            printf("La cuenta esta inactiva....\n");
                            printf("Desea ingresar otra? [Y(SI)/N(NO)] -> ");
                            fflush(stdin);
                            scanf("%c",&opc);
                            if(opc=='y'||opc=='Y')
                            {
                                system("pause");
                                system("cls");
                                continue;
                            }
                            else if(opc!='n'&&opc!='N')
                                opc='n';
                        }
                    }
                    break;
                }while(1);

                if(opc=='N'||opc=='n')
                {
                    break;
                }

                do
                {
                    system("cls");
                    printf("1. Deposito.\n2. Retiro.\nSeleccione el movimiento a realizar: ");
                    fflush(stdin);
                    scanf("%c",&opc);
                    if(opc=='1')
                    {
                        do
                        {
                            printf("Ingrese la cantidad a depositar: $");
                            scanf("%f",&saldos);
                            if(saldos<=0)
                            {
                                printf("Favor de ingresar una cantidad valida...\n");
                                system("pause");
                                system("cls");
                                continue;
                            }
                            cuentas[i].saldo+=saldos;
                            break;
                        }while(1);
                    }
                    else if(opc=='2')
                    {
                        if(cuentas[i].saldo<=0)
                        {
                            printf("La cuenta no tiene saldo...\n");
                            system("pause");
                            system("cls");
                            break;
                        }
                        else
                        {
                            do
                            {
                                printf("Ingrese la cantidad a retirar: $");
                                scanf("%f",&saldos);
                                if(saldos<=0)
                                {
                                    printf("Favor de ingresar una cantidad valida...\n");
                                    system("pause");
                                    system("cls");
                                    continue;
                                }
                                else if(saldos>cuentas[i].saldo)
                                {
                                    printf(" El monto de retiro excede el saldo de la cuenta...\n");
                                    system("pause");
                                    system("cls");
                                    continue;
                                }
                                cuentas[i].saldo-=saldos;
                                break;
                            }while(1);
                        }
                    }
                    else
                    {
                        printf("Opcion no valida...\n");
                        system("pause");
                        system("cls");
                    }
                    printf("Saldo Actual: $%.2f\n",cuentas[i].saldo);
                    system("pause");
                    system("cls");
                    break;
                }while(1);
                break;
           }while(1);
           
        }
        else if(opc=='4')
        {
            do
            {
                system("cls");
                printf("1. Consultar todas las cuentas.\n2. Consultar una cuenta\n");
                printf("Seleccione una opcion: ");
                fflush(stdin);
                scanf("%c",&opc);
                system("cls");
                if(opc=='1')
                {
                    printf("  noCuenta\t%-5sNombre%-30s     Tipo Tarjeta   ","","");
                    printf("\t       Saldo\tEstatus\n");
                    for(i=0;i<altas;i++)
                    {
                        printf("%s\t%-40s   ",cuentas[i].noCuenta,cuentas[i].nombre);
                        printf("%8d \t\t%12.2f",cuentas[i].tipoTarjeta,cuentas[i].saldo);
                        printf("%8d",cuentas[i].estatus);
                        printf("\n");
                    }
                }
                else if(opc=='2')
                {
                    do
                    {
                        printf("Ingresa el numero de cuenta: ");
                        fflush(stdin);
                        gets(noCta);
                        if(strlen(noCta)<12)
                        {
                            printf("El numero de cuenta debe de ser de 12 digitos...\n");
                            system("pause");
                            system("cls");
                            continue;
                        }
                        for(i=0;i<PERSONAS;i++)
                        {
                            if(strcmp(noCta,cuentas[i].noCuenta)==0)
                                break;
                        }
                        if(strcmp(noCta,cuentas[i].noCuenta)!=0)
                        {
                            printf("Numero de cuenta no encontrado...\n");
                            printf("Desea utilizar otro numero de cuenta? [Y(SI)/N(NO)]-> ");
                            fflush(stdin);
                            scanf("%c",&opc);
                            system("pause");
                            system("cls");
                        }
                        if(opc=='Y'||opc=='y')
                            continue;
                        break;
                    }while(1);
                    system("cls");
                    printf("*************************************\n");
                    printf("noCuenta:     %s\n",cuentas[i].noCuenta);
                    printf("Nombre:       %s\n",cuentas[i].nombre);
                    printf("Tipo Tarjeta: %d\n",cuentas[i].tipoTarjeta);
                    printf("Saldo:        %.2f\n",cuentas[i].saldo);
                    printf("Estatus:      %d\n",cuentas[i].estatus);
                    printf("*************************************\n");
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("Opcion no valida...\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                system("pause");
                break;
            }while (1);
            
        }
        else if(opc=='5')
        {
            system("cls");
            printf("*******************************************\n");
            printf("*******************************************\n");
            printf("*** Gracias por usar cajeros BanTrev :D ***\n");
            printf("*******************************************\n");
            printf("*******************************************\n");
            break;
        }
        else 
        {
            printf("Opcion no valida...\n");
            system("pause");
            system("cls");
            continue;
        }
    }while(1);
    return 0;
}
