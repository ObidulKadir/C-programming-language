#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a and then b\n");
    scanf("%d%d",&a,&b);
   c=a;a=b;
   b=c;
    printf("a=%d + b=%d \n",a,b,c);
    return 0;
}
