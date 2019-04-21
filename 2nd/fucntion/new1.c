#include<stdio.h>
void add(int a,int b)
{
int sum;
    sum=a+b;
    return sum;

}
int main()
{int sum;
    add(2,4);
    add(4,7);
    add(8,4);printf("\n%d",sum);
    return 0;
}
