#include <stdio.h>
#include <windows.h>

int main()
{
    system("clear");
    int a = 10, b = 15;
    float c = 12.2, d = 1.1;

    printf("%d + %d = %d\n", a, b, (a+b));
    printf("%.2f - %.2f = %.2f", c, d, (c-d));
    return 0;
}
