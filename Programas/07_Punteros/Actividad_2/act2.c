#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int a,b,c,*p1,*p2;
    p1=&a;
    *p1=1;
    p2=&b;
    *p2=2;
    p1=p2;
    *p1=0;
    p2=&c;
    *p2=3;
    printf("%d %d %d\n",a,b,c);
    p1=p2;
    *p1=1;
    printf("%d %d %d",a,b,c);

    return 0;
}