#include <stdio.h>
#include <stdlib.h>
int main() 
{
    system("clear");
	int i,j,num,div=0,mul=0,n;
	
	printf("Introduzca un numero: ");
	scanf("%d", &n);
    system("clear");

    printf("********** Numeros Perfectos entre 1 y %d **********\n",n);

    for(i=2;i<=n;i++)
    {
        div = 0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                div+=j;
        }
        if(div==i)
            printf("%d ",i);
    }
	return 0;
}