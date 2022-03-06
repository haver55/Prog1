#include <stdio.h>
#include <stdbool.h>

int rendezett(int size,int tomb []);
int kicsi(int size,int tomb[]);
int nagy(int size,int tomb[]);

int main()
{
    int tomb1[5]={1,5,6,3,7};
    int size=5;
    int tomb2[6]={1,2,3,4,5,6};
    int size2=6;
    rendezett(size,tomb1);
    rendezett(size2,tomb2);
    kicsi(size,tomb1);
    kicsi(size2,tomb2);
    nagy(size,tomb1);
    nagy(size2,tomb2);
}

int rendezett(int size,int tomb [])
{
    
    int jo=0;
    for(int i=0; i<size-1;i++)
    {
        if(tomb[i]<=tomb[i+1])
        {
            jo+=1;
        }
    }
    if(jo==size-1)
    {
        printf("A tomb rendezett\n");
    }
    else
    {
        printf("a tomb nem rendezett\n");
    }
}
int kicsi(int size,int tomb [])
{
    int min=tomb[0];
    for(int i=0; i<size;i++)
    {
        if(tomb[i]<min)
        {
            min=tomb[i];
        }
    }
    printf("%d\n",min);
}
int nagy(int size,int tomb [])
{
    int max=tomb[0];
    for(int i=0; i<size;i++)
    {
        if(tomb[i]>max)
        {
            max=tomb[i];
        }
    }
    printf("%d\n",max);
}
