#include<stdio.h>

int main()
{
   int i,j;
   char n='A';
   for(i=0;i<7;i++)
   {
    n='A';
    for(j=0;j<13;j++)
    {
        if(j==7&&i==0)
        {
            n=n-2;
            printf("%c",n);
        }
        else if(j>=0&&j<=6-i)
            printf("%c",n++);
        else if(j>=6+i && j<=12)
            printf("%c",--n);
        else
            printf(" ");
    }
    printf("\n");
   }
    return 0;
}