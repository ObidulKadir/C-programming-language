#include<stdio.h>
int main()
{
    int i,j,a,b=4;
    for(i=1;i<=5;i++)
    {
        for(a=b;a>=1;a--)
        {
            printf("_");

        }
        b--;
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);}
         printf(" \n");
    }
    return 0;
}
