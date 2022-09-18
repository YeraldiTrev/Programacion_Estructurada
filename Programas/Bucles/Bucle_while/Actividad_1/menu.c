#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char opc;

    while (1)
    {
        printf("1. Depositar\n2. Retirar\n3. Salir\n");
        fflush(stdin);
        scanf("%c",&opc);
        
        printf("\n");

        switch (opc)
        {
        case '1':
            printf("\nDeposito\n");
            break;
        case '2':
            printf("\nRetiro\n");
            break;
        case '3':
            printf("\nSalio del ATM\n");
            exit(1);
        default:
            printf("\nIngrese una opcion que este en el menu...\n");
            break;
        }

        system("pause");
        system("clear");
    }
    return 0;
}