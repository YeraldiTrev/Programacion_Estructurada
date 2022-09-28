#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int votos[5]={0},i;
    char voto;

    printf("Ingrese el candidato (1 al 5) a votar: \n");
    do
    {
        fflush(stdin);
        scanf("%c", &voto);
        if(voto == '0')
        {
            printf("\nJornada de votos finalizada...\n");
            break;
        }
        
        switch (voto)
        {
        case '1':
            votos[0]+=1;break;
        case '2':
            votos[1]+=1;break;
        case '3':
            votos[2]+=1;break;
        case '4':
            votos[3]+=1;break;
        case '5':
            votos[4]+=1;break;
        default:
            printf("\nCandidato no encontrado....\n");
            system("pause");
            system("clear");
            printf("Ingrese el candidato (1 al 5) a votar: \n");
            break;
        }
    } while (1);

    for(i=0;i<5;i++)
        printf("Votos del candidato %d: %d\n",i+1,votos[i]);
    return 0;
}