#include<stdio.h>
int maxstk,top;
top=-1;
char stack[10]= {'A','B','C','D'};
char item;
void push(char item)
{

    if(top==maxstk-1)
    {
        printf("\n stack overflow\n");
        return ;
    }
    else

       top=top+1;

    stack[top]=item;
    return;
}
void pop()
{
    if(top<0)
    {
     printf("stack underflow");
     return;

    }
    top=top-1;
}
void display()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("\n%c",stack[i]);
    }
}
int main()
{
    top=3;
    maxstk=10;
    display();
    printf("\nenter the item");
    scanf("%c",&item);
    push(item);
    display(stack);
    pop();
    printf("\npop is progress");
    display();
return 0;

}
