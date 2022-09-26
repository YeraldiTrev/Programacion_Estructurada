#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int n,i,j;
    float vinI=0,vinJ,vin1=0,vin2=0,vin3=0,vin4=0;
    printf("Ingresa los a%cos de consulta: ",164);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("Litros producidos de vino tipo %d producidos en el %d%c a%co: ",j,i,167,164);
            scanf("%f",&vinJ);
            switch(j)
            {
                case 1:vin1+=vinJ;break;
                case 2:vin2+=vinJ;break;
                case 3:vin3+=vinJ;break;
                case 4:vin4+=vinJ;break;
            }
        }
        vinI+=vin1+vin2+vin3+vin4;
    }

    printf("\nProduccion anual de vino: %9.2fL\n",vinI/n);
    printf("Produccion por tipo de vino en los utlimos %d a%cos\n",n,164);
    printf("Tipo 1: %9.2fL\nTipo 2: %9.2fL\nTipo 3: %9.2fL\nTipo 4: %9.2fL",vin1,vin2,vin3,vin4);
    return 0;
}  