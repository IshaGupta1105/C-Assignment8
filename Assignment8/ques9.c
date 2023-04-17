#include<stdio.h>

int main()
{
    int i,j,c;
    for(i=0;i<=3;i++)
    {
        c=1;
        for(j=0;j<=6;j++)
        {
            if(j>=i&&j<=6-i)
            {
             printf("%d",c);
             if(j<3)
               c++;
              else
                c--; 
            
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}