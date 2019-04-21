#include<stdio.h>

struct node
{
    char ch[50];
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;
void create_node(char cd[])
{
    Node= (struct node*) malloc(sizeof(struct node));
    strcpy(Node->ch,cd);
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
    char chh[50];
    scanf("%s",chh);
    while(chh[0]!='Q')
    {
        create_node(chh);

    }

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%s\n",ptr->ch);

        ptr=ptr->link;
    }
    return 0;
}
