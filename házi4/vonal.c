#include <stdio.h>
#include <string.h>
#include "prog1.h"

void line(char c, int lenght);
int uthelye(char c, string s);
int db(char c, string s);
int match_ends(int n, string words[]);

int main()
{
    printf("hello\n");
    line('-', 40);
    printf("world\n");
    string s="programozas";
    char c = 'a';
    printf("%d \n", uthelye(c,s));
    printf("%d \n", db(c,s));
    for(int i=1;i<101;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("fizzbuzz \n");
        }
         else if(i%5==0)
        {
            printf("buzz \n");
        }
         else if(i%3==0)
        {
            printf("fizz \n");
        }
        else
        {
            printf("%d \n",i);
        }
    }
    
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;
    printf("%d \n", match_ends(szavak1_meret, szavak1));    
    
}

void line(char c, int lenght)
{
    for(int i=0; i<lenght;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}

int uthelye(char c, string s)
{
    int hely=-1;
    int len = strlen(s);
    for(int i=0; i<= len; i++)
    {
        if(s[i] == c)
        {
            hely=i;
        }
    }
    if(hely==-1)
    {
        return -1;
    }
    return hely;
}

int db(char c, string s)
{
    int len=strlen(s);
    int darab=0;
    for(int i=0; i<len;i++)
    {
        if(c==s[i])
        {
            darab+=1;
        }
    }
    return darab;
}

int match_ends(int n, string words[])
{
    int hany=0;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<strlen(i); j++)
        {
            if(strlen([i])[j]==strlen([i])[strlen([i])-1] && strlen([i])>=2)
            {
                hany+=1;
            }
            
        }
    }
    return hany;
}