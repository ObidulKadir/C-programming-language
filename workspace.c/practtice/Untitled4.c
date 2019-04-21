#include<stdio.h>
int main ()
 {
int num,num1,num2;
char sign;
printf("enter the number:");
scanf("%d",num1);
scanf("%d",num2);
num=num1+num2;
sign='+';


printf("%d %c %d=%d",num1,sign,num2,num);
return 0;


 }
