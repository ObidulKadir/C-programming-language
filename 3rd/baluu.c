#include<stdio.h>
int check(int a)
{
    if(a<=0)
    {
        if(a==0)
            printf("%d is equal",a);
        else
        printf("%d is neg",a);
    }
    else
    {
        printf("%d is positive",a);
    }
    return 0;
}
int main()
{

int a;
scanf("%d",&a);
check(a);
}
