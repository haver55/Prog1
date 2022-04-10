#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
#include <string.h>

int main()
{
    int a = 0;
    int b = -48;
    char tomb[MAX];
    printf("A szam: ");
    fgets(tomb, MAX, stdin);
    int meret = strlen(tomb);
    for (int i = 0; i < meret - 1; i++)
    {
        a = tomb[i] + a + b;
    }
    printf("A számjegyek összege: %d\n", a);
}