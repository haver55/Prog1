#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a = 0;
    int j = 0;
    int k;
    int c = 1;
    int b = 0;
    for (int i = 0; i < 100; i++)
    {
        b = b + pow(c, 2);
        c++;
    }
    printf("%d\n", b);
    for (int i = 0; i <= 100; i++)
    {
        a = j + a;
        j++;
    }
    k = pow(a, 2);
    printf("%d\n", k);
    printf("a kulonbseg %d\n", k - b);
}