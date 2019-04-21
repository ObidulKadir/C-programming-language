#include<stdio.h>
struct node
{
    int val;
    struct node *next;

};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;

void create_node(int value)
{
    Node=(struct node*) malloc(sizeof (struct node));
    Node->val=value;
    Node->next=NULL;

    if(head==NULL)
        head=tail=Node;
    else
        tail->next=Node;
         tail=Node;


}
void searchinlist(int searchitem)
{
    ptr=head;
    while(ptr !=NULL)
    {
        if(searchitem==ptr->val)
        {
            printf("item found\n");
            break;

        }
        else
            ptr=ptr->next;



    }
    if(ptr==NULL)
    {
        printf("not found");
    }
}
void display()
{
    ptr=head;
    while(ptr !=NULL)
    {
        printf("%d, ",ptr->val);
        ptr=ptr->next;
    }

}
int main()
{
    int i,item;
    for(i=0; i<5; i++)
        create_node(i);
    display();
    printf("enter the seach item\n");
    scanf("%d",&item);
    searchinlist(item);
    return 0;
}
