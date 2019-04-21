#include<stdio.h>
void sum_of_all(void)
{
    int n,sum;
    sum=0;for(n=0;n<=100;n++)
    sum=sum+n;
    printf("\n sum all nmber %d",sum);
    getch();
}
void main(void)
{
    sum_of_all();
}
