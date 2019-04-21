#include<stdio.h>
int function(int i)
{
    if(i%2==0)

    {
        printf("%d number is  even\n",i);
    }

    else
    {
        printf("%d number is odd\n",i);
    }

}
int main()
{
    int i;
    printf("enter the number:");
    scanf("%d",&i);
    function(i);
}
