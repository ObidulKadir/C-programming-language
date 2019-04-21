#include<stdio.h>
struct node{
int val;
struct node*link;
};
struct node *head=NULL;
struct node*tail=NULL;

struct node*ptr=NULL;
struct node *Node=NULL;

void create_node(int value)
{
    Node=(struct node*)malloc(sizeof(struct node));
    Node->val=value;
    Node->link=NULL;
    if(head==NULL)
        head=tail=Node;
    else
        tail->link=Node;
    tail=Node;

}
void search(int loc)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(loc==ptr->val)
        {
            printf("itrm found");
            break;

        }
        else
            ptr=ptr->link;
    }
    if(ptr==NULL)
        printf("not");
}
void insert(int loc ,int sos)
{
    ptr=head;
    while(ptr!=head)
    {
        if(loc==ptr->val)
        {
            printf("inertio hosse");
            struct node*new=(struct node*)malloc(sizeof(struct node));
            new->val=sos;
            new->link=ptr->link;
            ptr->link=new;
            break;
        }else
        ptr=ptr->link;
    }
}
struct node *prev=NULL;
void deletete(int loc)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(loc==ptr->link)
        {
            printf("founde");
            if(prev!=NULL)
                prev->link=ptr->link;
            else
                ptr=ptr->link;

        }else
        prev=ptr;
        ptr=ptr->link;

    }
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->val);
        ptr=ptr->link;
    }
}
int main()
{
    return 0;
}
