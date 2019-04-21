#include<stdio.h>
struct node
{

    int val;
    struct node *link;
};
struct node *head=NULL;
struct node *ptr=NULL;
struct node *tail=NULL;
struct node *Node=NULL;

void create_node(int value)
{
    Node=(struct node*) malloc(sizeof(struct node));
    Node->val=value;
    Node->link=NULL;
    if(head==NULL)
        head=tail=Node;
    else
        tail->link=Node;
    tail=Node;
}
void searchINlist(int lol)
{

    ptr=head;
    while(ptr!=NULL)
    {
        if(lol==ptr->val)
        {
            printf("item found");
            break;
        }
        else
            ptr=ptr->link;

    }

    if(ptr==NULL)
    {
        printf("item not found and sorry");
    }
}
void insert(int loc,int sos)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(loc==ptr->val)
        {
            printf("\n item found and insertion in progress");
            struct node *new=(struct node*)malloc(sizeof(struct node));
            new->val=sos;
            new->link=ptr->link;
            ptr->link=new;
            break;
        }
        else
            ptr=ptr->link;
    }
}

void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d",ptr->val);
        ptr=ptr->link;
    }
}
int main()
{
    int i,loc,item,bal;

    create_node(10);
    create_node(5);
    create_node(22);

    display();

    printf("\nEnter the word which after u can insert: \n");
    scanf("%d",&item);
    printf("\n\tenter item where u want to insert");
    scanf("%d",&bal);
    insert(item,bal);
    display();
}
