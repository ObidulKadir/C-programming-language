#include<stdio.h>
int main()
{
    int i,a[5]={2,5,67,8,9},sum=0;
    for(i=0;i<5;i++)
    {sum=a[i]-sum;
	}
    printf(" \n%d",sum);
    return 0;
}

