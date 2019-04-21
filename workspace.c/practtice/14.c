#include<stdio.h>
int main ()
{
    int num1,num2,sum,div,multi;
    char sign;
    scanf("%d%d",&num1,&num2);
    printf("input the sign:");
    sign=getch(sign);
    switch(sign)
    {
        case '+':
        sum=num1+num2;
        printf("%d +%d=%d",num1,num2,sum);
        break;
    }


return 0;
}
