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
    for(i=0;i<=TOP;i++)
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
    pop();
    printf("\npop is progress");
    display();
    return 0;

}
