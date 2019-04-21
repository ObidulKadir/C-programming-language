#include<stdio.h>
struct node
{

    int val;
    struct node *link;

};
struct node *head =NULL;
struct node *tail=NULL;
struct node *Node=NULL;
struct node *ptr=NULL;
struct node*prev=NULL;

void create_node(int value)
{
    Node=(struct node*) malloc(sizeof(struct node));
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
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->val);
        ptr=ptr->link;
    }
}
void searchinlist(int item)
{
    ptr=head;
    while(ptr!=NULL)
    {
        if(item==ptr->val)
        {
            printf("\n item found");
                break;
        }

        else

            ptr=ptr->link;


    }
    if(ptr==NULL)
        printf("item not found");
}
void nodeDelete(int loc)
{
    ptr = head;
    while(ptr != NULL){
        if(loc == ptr->val){
            printf("\nItem found and deletion is in progress\n");
            if(prev != NULL)
            prev->link = ptr->link;
            else
                head = ptr->link;
            break;
        }else{
            prev = ptr;
        ptr = ptr->link;}
    }
}
void insert(int loc,int ni)
{
    ptr=head;
    while(ptr!=ptr->val)
    {
        if(loc==ptr->val){
            printf("\n item found and insertion is progress");
            struct node *New=(struct node*) malloc(sizeof(struct node));
            New->val=ni;
            New->link=ptr->link;
            ptr->link=New;
            break;
        }
        else
            ptr=ptr->link;
    }

}*/
int main()
{
    int i,item;
    for(i=1; i<3; i++)

        create_node(i*10);

    display();
    printf("enetre search item");
    scanf("%d", &item);
    // printf("enter the new item for node");
    // scanf("%d", &item);
    // insert(loc,item);
    searchinlist(item);
    display();

    return 0;
}
