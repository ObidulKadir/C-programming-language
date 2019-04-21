#include<stdio.h>
struct node
{
    int val;
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;
void create_node(int value)
{
    Node= (struct node*) malloc(sizeof(struct node));
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
int main()
{
    int i;

    create_node(6);
    create_node(7);
    create_node(8);
    create_node(9);
    /*int i;
     for(i=0; i<5; i++)

         create_node(i+5);
     ptr=head;
     while(ptr !=NULL)
     {
         printf("%d, ",ptr->var);
         ptr=ptr->link;*/
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ,",ptr->val);
        ptr=ptr->link;
    }
    return 0;
}
