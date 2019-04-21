#include<stdio.h>
#define stacksize 10
int top,i,maxstk,stack[stacksize]= {2,3,4,5,6};
void push(int item)
{
    if(top == maxstk)
    {
        printf("\n overflow\n");
        return;
    }
    else
    {
        top = top+1;
        stack[top] = item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n\nUnderflow.........!!!!\n\n");
        return;
    }
    else
    {
        top=top-1;
    }
}
display()
{
    for(i=0; i<=top; i++)
        printf("%d ",stack[i]);
}
int topc()
{
   for(i=0; stack[i]!=0; i++);
    return i-1;
}
int main()
{
    int new,a,b;
    //printf("\nEnter top and maxstk: \n");
    //scanf("%d%d",&top,&maxstk);
    top = topc();
    maxstk = stacksize;
    display();
    while(1)
    {
        if(top == maxstk)
        {
            printf("\noverflow\n");
            break;
        }
        printf("\nEnter new Item : \n");
        scanf("%d",&new);
        if(new==69)
            break;
        push(new);
        printf("\nNow the stack is........ \n");
        display();
    }
    while(1)
    {
        if(top==-1)
        {
            printf("\n\nUnderflow.........!!!!\n\n");
            break;
        }
        printf("\nEnter 1 for pop.....\nEnter 2 for exit...\n\n");
        scanf("%d",&new);
        if(new==2)
            break;
        pop();
        printf("\nNow the stack is........ \n");
        display();
    }

    return 0;
}
