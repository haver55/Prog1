#include <stdio.h>

int main()
{
    printf("Adjon meg egy muveletet :");
    char muvelet;
    scanf("%c", &muvelet);
    printf("Adjon meg egy szamot ");
    int szam1;
    scanf("%d", &szam1);
    printf("Adjon meg egy szamot ");
    int szam2;
    scanf("%d", &szam2);
    
    
    if(muvelet=='+')
    {
        printf("%d %c %d =%d ", szam1, muvelet, szam2, szam1+szam2);
    }
    if(muvelet=='-')
    {
        printf("%d %c %d =%d ", szam1, muvelet, szam2, szam1-szam2);
    }
    if(muvelet=='*')
    {
        printf("%d %c %d =%d ", szam1, muvelet, szam2, szam1*szam2);
    }
    if(muvelet=='/')
    {
        printf("%d %c %d =%d ", szam1, muvelet, szam2, szam1/szam2);
    }
    if(muvelet=='%')
    {
        printf("%d %c %d =%d ", szam1, muvelet, szam2, szam1%szam2);
    }
    
   /*
    printf("Adjon meg egy szamot ");
    int szam1;
    scanf("%d", &szam1);
    printf("Adjon meg egy szamot ");
    int szam2;
    scanf("%d", &szam2);
    int i;
    int n=szam1*szam2;
    for(i=1; i<=szam1*szam2; ++i)
    {
        if(i%szam1==0 & i%szam2==0)
        {
          printf("A legnagyobb kozos oszto : %d", n/i);
           break;
           
        }
        
    }
   /*
   //legkisebb közös többszörös
   /*
   printf("Adjon meg egy szamot ");
    int szam1;
    scanf("%d", &szam1);
    printf("Adjon meg egy szamot ");
    int szam2;
    scanf("%d", &szam2);
    int i;
    for(i=1;i<=szam1*szam2; ++i)
    {
        if(i%szam1==0 & i%szam2==0)
        {
            printf("A legkisebb kozos tobbszoros : %d", i);
            break;
        }
        
    }
    */
    //primes
   /*
    printf("Adjon meg egy szamot ");
    int szam1;
    scanf("%d", &szam1);
    if(szam1%2==0 || szam1%3==0 ||szam1%5==0 ||szam1%7==0 )
    {
        printf("nem prim");
    }
    else
    {
      printf("prim");  
    }
   */
}