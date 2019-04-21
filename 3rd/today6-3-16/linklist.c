#include<stdio.h>
struct node
{
    int val;
    struct node *link;
};
struct node *ptr=NULL;
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node*prev=NULL;

void create_node(int value)
{
    Node=(struct node*) malloc(sizeof(struct node));
    Node->val=value;
    Node->link=NULL;
    if(head==NULL)
        head=tail=Node;
    else
    {
        tail->link=Node;
        tail=Node;
    }

}

display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d",ptr->val);
        ptr=ptr->link;
    }
}
void serachinlist(int item)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(item==ptr->val)
        {
            printf("item found");
            break;
        }
        else
            ptr=ptr->link;
    }
    if(ptr==NULL)
        printf("NOT found");

}
int main()
{
    int i,item;
    for(i=1; i<=3; i++)
        create_node(i*10);
    display();
    scanf("%d",&item);
    serachinlist(item);

    return 0;
}
