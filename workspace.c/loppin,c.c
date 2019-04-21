#include<stdio.h>
int main ()
{
    int i,even=0,odd=0;
    for(i=0;i<=100;i++)
        if (i%2==0)
    {
        even=even+i;
        printf("%d",even);
    }
    else
    {
        odd=odd+i;
        printf("%d",odd);}
    return 0;
}
