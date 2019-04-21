#include<stdio.h>
#define lenght 10
int maxstk,i,top,stack[lenght]= {1,2,3,4,5};
void push(int item)
{
    if(top==maxstk)
    {
        printf("overflow");
        return ;
    }
    else
        top=top+1;
    stack[top]=item;
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
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
    for(i=0; stack[i]!=0; i++)
        return i-1;
}
int main()
{
    int new;
       while(1)
    {
        top = topc();
    maxstk = lenght;
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
