#include<stdio.h>
int check(int a)
{
    int i,sum=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            sum+=i;
    }
    return sum;
}
int main()
{
    printf("You can Know The given Number is Perfect Or Not !\nPress 0 or, any negative number for Exit!\n\n");
    int a,i,sum;
    scanf("%d",&a);
    while(a>0)
    {
        sum=check(a);
    if(sum==a)
        printf("%d is a Perfect Number.\n",a);
    else
        printf("%d is Not Perfect Number.\n",a);
    scanf("%d",&a);
    }
    return 0;
}

