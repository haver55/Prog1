#include <stdio.h>
#include <math.h>
#define PI 3.142857
int körkerület(int n)
    {
        int result= 2*n*PI;
        return result;
    }
    int körterület(int s)
    {
        int eredmeny=s*s*PI;
        return eredmeny;
    }
    int gömbfel(int r)
    {
        int eredmeny2=4*r*r*PI;
        return eredmeny2;
    }
    int gömbtérfog(int t)
    {
        int eredmeny3=(4*t*t*t*PI)/3;
        return eredmeny3;
    }
int main()
{
    
   printf("Kerem adja meg a kor sugarat\n");
   int sugar;
   scanf("%d", &sugar);
   printf("A kor kerulete: %d\n", körkerület(sugar));
   printf("A kor terulete: %d\n", körterület(sugar));
   printf("Kerem adja meg a gomb sugarat\n");
   int sugar2;
   scanf("%d", &sugar2);
   printf("A gomb felszine: %d\n", gömbfel(sugar2));
   printf("A gomb felszine: %d\n", gömbtérfog(sugar2));
}
 