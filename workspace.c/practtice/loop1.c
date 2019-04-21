
#include<stdio.h>
int main()
{
    int i,sum=0,odd=0;
    for(i=0;i<=10;i++)
        if(i%3==0)
    {
        sum=sum+i;
printf("%d-E\n",i);
    }
    else{
        odd=odd+i;
printf("%d-O\n",i);
    }
        printf("sum of %d odd of %d",sum,odd);


    return 0;
}
