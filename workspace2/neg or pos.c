#include<stdio.h>
int check(int a)
{
    if(a<=0)
    {
        if(a==0)
            printf("number is zero");
        else
            printf("%d number is negative",a);
    }
    else
    {
        printf("%d number is positive",a);
    }
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    check(a);

}
