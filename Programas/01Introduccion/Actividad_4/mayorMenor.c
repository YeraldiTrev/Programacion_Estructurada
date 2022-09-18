#include <stdio.h>
#include <windows.h>

int main()
{
    system("clear");
    int a,b;

    printf("Inserta el primer numero: ");
    scanf("%d", &a);

    printf("Inserta el segundo numero: ");
    scanf("%d", &b);

    system("clear");
    
    if(a > b)
    {
        printf("Mayor: a=%d\n",a);
        printf("Menor: b=%d",b);
    }
    else
    {
        printf("Mayor: b=%d\n",b);
        printf("Menor: a=%d",a);
    }
    return 0;
}
