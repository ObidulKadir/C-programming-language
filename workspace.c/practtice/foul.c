#include<stdio.h>
int main ()
{
    int num,num2,test;
    scanf("%d %d",&num,&num2);
   test=num;
   num=num2;
   num2=test;
    printf("%d = %d",num,num2);
    return 0;

}
