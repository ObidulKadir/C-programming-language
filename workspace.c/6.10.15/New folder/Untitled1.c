#include<stdio.h>

int main()

{
    double selling_price,total_profit,cost_price;
    printf("enter the value of selling_price:");
    scanf("%lf",&selling_price);
     printf("enter the value of total_profit:");
    scanf("%lf",&total_profit);
    cost_price=(selling_price-total_profit)/15;
    printf("one item cost price is %lf",cost_price);
    return 0;
}
