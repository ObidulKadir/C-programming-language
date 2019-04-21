#include<stdio.h>
int TOP,maxstk;
TOP=-1;
char stack[10]= {'A','B','C','D'};
char item;

void push(char item)
{

    if(TOP==maxstk-1)
    {
        printf("\n stack overflow\n");
        return ;
    }

    else

        TOP=TOP+1;

    stack[TOP]=item;
    return;
}
void display()
{
    int i;
    for(i=TOP;i>=0;i--)
    {
        printf("%c\n",stack[i]);
    }
}
int main()

{
    TOP=3;
    maxstk=10;
    display();
    printf("\nenter item");
    scanf("%c",&item);
    push(item);
    display(stack);
    return 0;

}
