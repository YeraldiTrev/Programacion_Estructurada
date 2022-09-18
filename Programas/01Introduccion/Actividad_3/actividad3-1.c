#include <stdio.h>
#include <windows.h>

int main()
{
    system("cls");
    int a,b;
    printf("Ingrea el primer numero entero: ");
    scanf("%d", &a);
    printf("Ingrea el otro numero entero: ");
    scanf("%d", &b);

    if((a%b)==0)
        printf("a si es divisivble entre b");
    return 0;
}