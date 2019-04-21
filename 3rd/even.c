
#include<stdio.h>
int check(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
int main()
{

    int n;
    printf("enter the value");

    scanf("%d",n);
    check(n);

}
