#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')
    {
        printf("%c is lower case",ch);

    }
    if(ch>='A' && ch <='B')
    {
        printf("%c is uper case",ch);
    }
    return 0;
}

