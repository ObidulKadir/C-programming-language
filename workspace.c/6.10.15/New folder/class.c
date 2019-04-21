#include<stdio.h>

int main ()

{
    int x,y,z;
    x=2;
    y=5;
    z=0;
    x=y++ + x++ + ++x +x++;
    printf("x=%d y=%d",x,y);
    return 0;
}
