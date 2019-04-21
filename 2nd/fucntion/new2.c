#include<stdio.h>
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int sum;
    sum=add(4,2);
    printf("\n%d",sum);
    sum=add(3,5);
    printf("\n%d",sum);
    return 0;
}
