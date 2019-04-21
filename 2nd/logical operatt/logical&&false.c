#include<stdio.h>

int main ()
{
    int local,higher,quality;
    local=4;
    higher=4;
    quality=!(local==4 || higher==5);
    printf("%d",quality);
    return 0;
}
