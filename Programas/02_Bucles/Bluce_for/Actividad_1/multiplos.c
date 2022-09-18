#include <stdio.h>
#include <stdlib.h>

int main()
{   
    system("cls");
    int i, num, mul3=0, mul5=0, mul=0;

    for(i=0;i<=9;i++)
    {
        mul3=0, mul5=0, mul=0;
        printf("Ingresa el numero %d: ",i+1);
        scanf("%d",&num);

        if(num%3==0)
            mul3+=1;
        if(num%3 == 0 && num%5 == 0)
            mul=+1;
        if(num%5==0)
            mul5+=1;
    }

    printf("\nMultiplos de 5: %d\n",mul5);
    printf("Multiplos de 3: %d\n",mul3);
    printf("Multiplos de ambos: %d\n",mul);
    return 0;
}