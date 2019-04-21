#include<stdio.h>
int stringlength(char* str);
int main()
{
    char* ch="life is gonna hell";
    int len;
    len=stringlength(ch);
    printf("%d",len);
    getch();
    return 0;
}
int stringlength(char* str)
{
    int n=0;
    while (n++,*str++ !='\0');
    return n-1;
}
