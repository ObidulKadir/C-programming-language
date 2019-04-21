#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *link;
};
struct node *head= NULL;
struct node *tail= NULL;
struct node *Node= NULL;
struct node *ptr= NULL;
void create_node(int value)
{
    Node = (struct node*) malloc(sizeof (struct node));
    Node->val = value;
    Node->link=NULL;
    if(head==NULL)
        head = tail = Node;
    else
    {
        tail->link=Node;
        tail= Node;
    }
}
void print()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->val);
        //printf("%d \n",ptr);
        ptr=ptr->link;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        create_node(n);

    }
    print("%d,",n);
    //create_node(5);
    //create_node(10);
    //create_node(15);

    return 0;
}

