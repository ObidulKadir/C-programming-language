#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int x;
    struct Node *y;
};
typedef struct Node node;
node *head=NULL;
node *tail=NULL;
node *N=NULL;
node *ptr=NULL;
node *prev=NULL;
void create_node(int val)
{
    N=(node*) malloc(sizeof(node));
    N->x=val;
    N->y=NULL;
    if(head==NULL)
        head=tail=N;
    else
    {
        tail->y=N;
        tail=N;
    }
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->x);
        ptr=ptr->y;
    }
    printf("\n");
}
void deletion(int item)
{

    int count=0;
    ptr=head;
    while(ptr!=NULL)
    {
        if(item==ptr->x)
        {
            count++;
            if(count==2)
            {
                prev->y=ptr->y;
                break;
            }
        }
        else
        {
            prev=ptr;

        }
         ptr=ptr->y;

    }
}
int main()
{
    create_node(18);
    create_node(13);
    create_node(10);
    create_node(18);
    printf("List Before Deletion: ");
    display();
    deletion(18);
    printf("List After Deletion: ");
    display();
    return 0;
}
