#include <stdio.h>
#include <math.h>
void kiir(int size, int tomb[]);
void abszol(int size, int tomb[]);
int main()
{
    int tomb[7]={2,4,8,3,9,-7,1};
    int size=7;
    int kul=0;
    for(int i=0;i<size-1;i++)
    {
        if(tomb[i]>=tomb[i+1])
        {
            kul+=tomb[i]-tomb[i+1];
        }
        else
        {
            kul+=tomb[i+1]-tomb[i];
        }
    }
    printf("%d\n",kul);
    kiir(size,tomb);
    abszol(size,tomb);
}
void kiir(int size, int tomb[])
{
    
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", tomb[i]);
    }
}

void abszol(int size,int tomb[])
{
    for(int i=0;i<size;i++)
    {
        if(tomb[i]<0)
        {
            tomb[i]=abs(tomb[i]);
        }
        printf("%d ",tomb[i]);
    }
    
    
}