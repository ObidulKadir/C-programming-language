#include<stdio.h>
int main()
{
    char ch;
    printf("input the code");
    scanf("%c",ch);
    switch(ch)
    {
    case 'b':
    case 'B':
    case 'L':
    case 'l':
    case 'd':
    case 'D':
        printf("%c is consonent ",ch);
        break;
    default :
        printf("%c is vowel",ch);


    }
    return 0;
}
