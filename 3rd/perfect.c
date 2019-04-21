#include<stdio.h>
int function(int n)
{
    int i,sum=0;

    for(i=1; i<n; i++)
    {
        if(n%i==0)

            sum+=i;

    }
    return sum;
}
int main()
{

    int i,n,sum;
    printf("enter the number:");
    scanf("%d",&n);


    sum=function(n);

    if(sum==n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is a not perfect number\n",n);
    }

    return 0;
}
