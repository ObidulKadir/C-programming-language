#include<stdio.h>
#define stksize 10
int top,i,maxstk,stack[stksize]= {1,2,3,4,5};
void push (int item)
{
    if(top==maxstk-1)
    {
        printf("\n overflow");
        return;
    }
    else
        top=top+1;
    stack[top]=item;
}
void pop()
{
    if(top==-1)
    {
        printf("\n underflow");
        return;
    }
    else
        top=top-1;
}
display()
{
    for(i=top; i>=0; i--)
        printf("\n%d",stack[i]);
}
int topc()
{
    for(i=0; stack[i]!=0; i++);
    printf("top is %d",i-1);
    return i-1;
}
int main()
{
    int new,a,b;
    //printf("\nEnter top and maxstk: \n");
    //scanf("%d%d",&top,&maxstk);

    while(5)
    {
        top = topc();
    maxstk = stksize;
    display();
        if(top==maxstk-1)
        {
            printf("\n overflow");
            return;
        }
        printf("\nenter the new item,,,,,,,,,!!!");
        scanf("%d",&new);
        if(new==5)
            break;
        push(new);
        display();
    }
    while(1)
    {
        if(top==-1)
    {
        printf("\n underflow");
        return;
    }
        printf("\n 1 item for pop  ......\n 2 for exit");
        scanf("%d",&new);
        if(new==2)
            break;
        pop();
        printf("\n n0w stack is............!!!!!");
        display();

    }
return 0;
}
