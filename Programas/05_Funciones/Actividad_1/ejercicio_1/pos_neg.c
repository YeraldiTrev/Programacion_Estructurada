#include <stdio.h>
#include <stdlib.h>

char signo(int n)
{
    if(n>=0)
        return 'P';
    return 'N';
}

int main()
{
    system("cls");
    int n;
    printf("Ingresa un numero: ");
    scanf("%d",&n);
    printf("Sigo del numero: \'%c\'",signo(n));
    return 0;
}