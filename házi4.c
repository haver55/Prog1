#include <stdio.h>
#include <stdbool.h>
bool haromszog (int n,int k,int l);

int main ()
{
    printf("Kerem adja meg a haromszog oldalait:\n");
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(haromszog(a,b,c)==true)
    {
        printf("A haromszog szerkeszteheto");
        
    }
    else
    {
        printf("Nem lehet a haromszoget megszerkezteni");
    }
}

bool haromszog (int n,int k,int l)
{
    if(n>=k+l ||k>=n+l ||l>=n+k)
    {
        return false;
    }
    else
    {
        return true;
    }
}