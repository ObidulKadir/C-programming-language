
#include<stdio.h>
int check(int n)
{
    int i,flag=0;

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{

    int i,n;
    printf("enter the number:");
   scanf("%d",&n);
    i=check(n);
    if(i==0)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is a not prime number\n",n);
    }


    return 0;
}
