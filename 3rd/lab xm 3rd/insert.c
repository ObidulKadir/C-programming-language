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
    if(ptr==NULL)
    {
        printf("\T ITEM NOT FOUND");
    }
}

void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d",ptr->val);
        ptr=ptr->link;
    }
}
struct node * prev=NULL;

void nodeDelete(int loc)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(loc==ptr->val)
        {
            printf("\n\t item found and deltion in prrogress");
            if(prev!=NULL)
                prev->link=ptr->link;
            else
                head=ptr->link;
            break;


        }
        else
        {
            prev=ptr;
            ptr=ptr->link;
        }
    }

}
int main()
{
    int i,loc,item,bal,sos;

    create_node(10);
    create_node(5);
    create_node(22);

    display();

    printf("\nEnter the word which after u can insert: \n");
    scanf("%d",&item);
    printf("\n\tinsert item is");
    scanf("%d",&bal);
    insert(item,bal);
    printf("\t new node is\n");
    display();
    printf("\t\t enetr item for delete");
    scanf("%d",&sos);
    nodeDelete(sos);
    printf("\t after deletion new node is....");
    display();

}
