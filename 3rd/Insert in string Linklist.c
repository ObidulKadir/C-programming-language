#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data[50];
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;
void create_node(char value[])
{
    Node =(struct node*)malloc(sizeof(struct node));
    strcpy(Node->data,value);
    Node->link=NULL;
    if(head==NULL)
        head=tail=Node;
    else
    {
        tail->link=Node;
        tail=Node;
    }
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%s ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
void insert(char loc[],char ni[])
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(strcmp(loc,ptr->data)==0)
        {
            printf("\nEnter the found and new Line is\n");
            struct node *new=(struct node*)malloc(sizeof(struct node));
            strcpy(new->data,ni);
            new->link=ptr->link;
            ptr->link=new;
            break;
        }
        else
            ptr=ptr->link;

    }
}
int main()
{
    char chh[50],item[50],loc[50];
    scanf("%s",chh);
    create_node(chh);
    scanf("%s",chh);
    create_node(chh);

    display ();
   printf("\nEnter the word which after u can insert: \n");
    scanf("%s",loc);
    getchar();
    printf("\nEnter any word to insert\n");
    scanf("%s",item);
    getchar();
    insert(loc,item);
    display();
    return 0;

}
