#include<stdio.h>
struct node
{
    int p;
    struct node *q;
};
struct node *E=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;
void create_node(int value)
{
    Node=(struct node*)malloc(sizeof(struct node));
    Node->p=value;
    Node->q=NULL;
    if(E==NULL)
        E=tail=Node;
    else
    {
        tail->q=Node;
        tail = Node;
    }
}
int main()
{
    int n;
    create_node(5);
    ptr=E;
    while(ptr !=NULL)
    {
        printf("%d, ",ptr->p);
        ptr=ptr->q;
    }
    return 0;
}
