#include<stdio.h>
double add(double x, double y)
{
    double sum;
    sum= x+y;
    return sum;
}
double subtraction(double x, double y)
{
    double subtract;
    subtract= x-y;
    return subtract;
}
double product(double x, double y)
{
    double product;
    product= x*y;
    return product;
}
double division(double x, double y)
{
    double division;
    division= x/y;
    return division;
}
double main()
{
    double num1, num2,sum,subtract,multiple,divide;
    char ch;
    printf("enter your operation:");
    scanf("%c",&ch);

    printf("enter the 1st numbers: ");
    scanf("%lf", &num1);
    printf("enter the 2nd numbers: ");
    scanf("%lf",&num2);

    sum=add(num1,num2);
    subtract=subtraction(num1,num2);
    multiple=product(num1,num2);
    divide=division(num1,num2);

    switch (ch)

    {
    case '+':
 printf("%lf",sum);
        break;
    case '-':
        printf("%lf",subtract);
        break;
    case '*':
        printf("%lf",multiple);
        break;
    case '/':
        printf("%lf",divide);
        break;
    default:
        printf("you enter invalid operation");
    }
    return 0;
}
