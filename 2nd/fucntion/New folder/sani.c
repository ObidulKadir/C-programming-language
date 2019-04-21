#include<stdio.h>
int check(int n)
{
    int b,i,sum=0;
    b=n/2;
    for(i=2; i<=b; i++)
    {
        if(n%i==0)
        {
            sum=1;
            break;
        }
    }
    return sum;
}
int main()
{

    int i,n;
    printf("enter the number:");
    scanf("%d",&n);


        i=check(n);
        if(i==0)
            printf("%d is a prime number\n",n);
        else
            printf("%d is a not prime number\n",n);


    return 0;
}
