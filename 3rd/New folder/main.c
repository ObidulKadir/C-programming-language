#include <stdio.h>
#include <stdlib.h>
int maxstk, top;

int pushinstack(char s[], char ch)
{
    if(top == maxstk -1)
    {
        printf("\nstack overflow.\n");
        return -1;
    }
    else
    {
        top =top + 1;
        s[top] = ch;
        return 0;
    }

}
void display( char s[])
{
    int i;
    for(i=0; i<=top; i++)
    {
        printf("%c\n", s[i]);
    }
}
int main()
{
    char stack[8] = {'A','B','c'};
    char item ;

    maxstk =8;
    top = 2;
    display(stack);
    printf("\nEnter item to push.\n");
    scanf("%c", &item);
    pushinstack(stack, item);
    display(stack);
    return 0;
}
