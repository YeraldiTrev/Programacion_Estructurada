#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int i,j,cantEscenarios,cantMurallas,alturaSig, alturaAct;

    printf("Cantidad de escenarios: ");
    scanf("%d",&cantEscenarios);

    int saltosAltos[cantEscenarios], saltosBajos[cantEscenarios];

    for(i=0;i<=cantEscenarios;i++)
    {
        saltosAltos[i]=0;
        saltosBajos[i]=0;
    }

    for(i=1;i<=cantEscenarios;i++)
    {
        printf("Cantidad de murallas del escenario %d: ",i);
        scanf("%d",&cantMurallas);
        for(j=1;j<=cantMurallas;j++)
        {
            if(j>=2)
                alturaAct = alturaSig;
            if(j==1)
            {
                printf("Altura de la muralla %d: ",j);
                scanf("%d",&alturaSig);
            }
            else
            {
                printf("Altura de la muralla %d: ",j);
                scanf("%d",&alturaSig);
            }
            if(j>=2)
            {
                if(alturaSig > alturaAct)
                    saltosAltos[i-1]+=1;
                else if(alturaSig<=alturaAct)
                    saltosBajos[i-1]+=1;
            }
        }
    }
    printf("Para llegar, Mario necesita los siguientes saltos para llegar al castillo\n");
    printf("                   Altos Bajos\n");
    for(i=0;i<cantEscenarios;i++)
        printf("Escenario %d --->     %d     %d\n",i+1,saltosAltos[i],saltosBajos[i]);
    return 0;
}