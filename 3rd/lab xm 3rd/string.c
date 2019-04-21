#include<stdio.h>
struct node
{
    char val[50];
    struct node *link;

};
struct node*head=NULL;
struct node*ptr=NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *prev=NULL;

void create_node(char loc[])
{
    Node=(struct node*)malloc(sizeof(struct node));
    strcpy(Node->val,loc);
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
        printf("\n%s",ptr->val);
        ptr=ptr->link;
    }
}
void insert(char loc[],char ni[])
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(strcmp(loc,ptr->val)==0)
        {
            printf("\nEnter the found and new Line is\n");
            struct node *new=(struct node*)malloc(sizeof(struct node));
            strcpy(new->val,ni);
            new->link=ptr->link;
            ptr->link=new;
            break;
        }
        else
            ptr=ptr->link;

    }
}
void deletion (char value[])
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(strcmp(value,ptr->val)==0)
        {
            printf("\t item found an progress");
            if(prev!=NULL)
                prev->link=ptr->link;
            else
                ptr=ptr->link;
            break;
        }
        else
            prev=ptr;
        ptr=ptr->link;

    }
}
int main()
{

    char chh[50],item[50],loc[50],new[11];
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
    printf("delte item");
    scanf("%s",new);
    deletion(new);
    display();
    return 0;

}
