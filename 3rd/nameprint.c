#include<stdio.h>
struct node
{
    char* var[100];
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;

void create_node(char* value)
{
    Node = (struct node*) malloc(sizeof (struct node));
    strcpy(Node,"kadir");
    Node->var[100]= value;
    Node->link = NULL;


    if(head==NULL)
        head =tail = Node;
    else
    {
        tail->link = Node;
        tail = Node;

    }
}
/*void searchinlist(int searchitem)
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


}*/
void display()
{

    ptr=head;
    while(ptr !=NULL)
    {
       printf("%s",ptr->var);
        ptr=ptr->link;
    }

}
int main()
{


     create_node(Node);
    display();
   // printf("\nenter the serach item number:");
    //scanf("%d",&item);
    //searchinlist(item);

    return 0;
}
