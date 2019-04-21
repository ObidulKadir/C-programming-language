#include<stdio.h>
int main()
{
    char n;
    printf("input the character");
    scanf("%c",&n);
    switch(n)
    {
        case 61:
        printf("brasilial");
        break;
        case 71:
        printf("salavador");
        break;
        default :
            printf("DDD nao cadastrado");

    }
    return 0;
}
