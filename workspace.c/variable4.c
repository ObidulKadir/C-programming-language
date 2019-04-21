#include<stdio.h>
int main()
{
    int i,sum=0,a[]= {2,4,7,12},larger=12;

    for(i=0; i<4; i++)

    {
        if(a[i]>larger)
{
    sum=sum+larger;
}

       printf("%d is largest number",sum);
    }


    return 0;
}
