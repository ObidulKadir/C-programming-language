#include<stdio.h>
void sum_of_all(int gk)
{
    long int n,sum;
    sum=0;
    for(n=0;n<=gk;n++)
sum=sum+n;
    printf("\n sum of all nubers from 1 to %d is %ld\n",gk,sum);
    getch();

}
void main(void)
{

    sum_of_all(200);
return 0;
}
