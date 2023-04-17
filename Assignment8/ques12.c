#include<stdio.h>

int main()
{
     int i,j;
     char n='A';
    for(i=0;i<4;i++)
    {
        n='A';
        for(j=0;j<7;j++)
        {
            if(j>=i&&j<=6-i)
            {
            printf("%c",n);
             if(j<3)
                n++;
             else
                n--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}