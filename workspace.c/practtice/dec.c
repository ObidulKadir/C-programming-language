#include<stdio.h>
int main()
{
    int a,b;
    a=2;
    b = (--a)+(--a)+(--a);
    printf("%d %d",a,b);
    return 0;
}

