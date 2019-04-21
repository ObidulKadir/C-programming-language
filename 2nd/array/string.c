#include<stdio.h>
int main()
{
    char* pch="home";
    int len;
    len=stringlength(pch);
    printf("\n %d",len);
    getch();
    return 0;
}
int stringlength(char*str)
{
    int n=0;
    while (n++,*str++ !='\0')
        ;

return n-1;
}
