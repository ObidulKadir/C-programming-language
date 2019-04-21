#include<stdio.h>
int function(int i)
{
    if(i%2==0)
    {
        printf("%d is even",i);
    }
    else
    {
        printf("%d is odd",i);
    }
    return 0;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<t;i++)
    {

        int i;
        printf("enter the value\n");
        scanf("%d",&i);
        function(i);
    }
}
