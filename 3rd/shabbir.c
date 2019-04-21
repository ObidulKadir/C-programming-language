#include<stdio.h>
struct node
{
    char ch[100];
    struct node*next;
};

struct node*head=NULL;
struct node*tail=NULL;
struct node*Node=NULL;
struct node*ptr;
void create_node(char str)
{
    Node=(struct node*)malloc(sizeof(struct node));
    Node->ch[]=str;
    Node->next=NULL;
    if(head==NULL)
        head=tail=Node;
    else{
        tail->next=Node;
        tail=Node;
    }
}
int main()
{
    create_node("sabbIR");
    ptr=head;

        printf("%s",ptr->ch);
    ptr=ptr->next;
    return 0;
}
