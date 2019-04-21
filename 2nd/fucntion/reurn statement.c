#include<stdio.h>
float change_data(int n,int s,int r)
{
    int result;
    result=n+s+r;
    return result;
}
void main(void)
{
    float result;
    result=change_data(12.1,3,5);
    printf("\n result is %f",result);
    getch();
}
