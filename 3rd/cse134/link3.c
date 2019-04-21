#include<stdio.h>
struct node
{
    int var;
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;

void create_node(int value)
{
    Node = (struct node*) malloc(sizeof (struct node));
    Node->var = value;
    Node->link = NULL;


    if(head==NULL)
        head =tail = Node;
    else
    {
        tail->link = Node;
        tail = Node;

    }
}
void searchinlist(int searchitem)
{
    ptr = head;
    while(ptr!=NULL)
    {
        if(searchitem == ptr->var)
        {
            printf("\n item found!\n");
            break;
        }
        else

            ptr=ptr->link;
    }
    if(ptr==NULL)
        printf("\n ITEM not found");


}
void display()
{

    ptr=head;
    while(ptr !=NULL)
    {
        printf("%d, ",ptr->var);
        ptr=ptr->link;
    }

}
int main()
{
    int i,item;
    for(i=0; i<5; i++)

        create_node(i+5);
    display();
    printf("\nenter the serach item number:");
    scanf("%d",&item);
    //searchinlist(item);

    return 0;
}
