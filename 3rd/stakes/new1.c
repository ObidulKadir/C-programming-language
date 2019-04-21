
#include<stdio.h>
int TOP,maxstk;
TOP=-1;
char stack[10]="i am ";
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
void pop()
{
    if(TOP<0)
    {
        printf("\n stack underflow");
        return ;
    }
    TOP=TOP-1;
}
void display()
{
    int i;
    for(i=TOP;i>=0;i--)
    {
        printf("\n%s\n",stack[i]);
    }
}
int main()

{
    TOP=1;
    maxstk=10;
    display();
    printf("\nenter item");
     scanf("%s",&item);

    push(item);
    display(stack);
     pop();
    printf("\npop is progress");
    display();

    return 0;

}
