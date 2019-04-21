#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is big");
    }
    else if (b>a)
    {
        printf("b is big");
    }

    else( a==b );

    {
        printf("b is equal");

    }
    return 0;
}
