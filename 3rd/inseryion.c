#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *Node = NULL;
struct node *ptr = NULL;

void create_node(int value){
    Node = (struct node*) malloc(sizeof (struct node));
    Node->data = value;
    Node->link = NULL;

    if(head == NULL)
        head = tail = Node;
    else {
        tail->link = Node;
        tail = Node;
    }
}

void display(){
    ptr = head;
    while(ptr != NULL){
        printf("%d, ", ptr->data);
        ptr = ptr->link;
    }
}
void insert(int loc, int ni)
{
    ptr = head;
    while(ptr != NULL){
        if(loc == ptr->data){
            printf("\nItem found and insertion is in progress\n");
            struct node *New =(struct node*) malloc(sizeof (struct node));
            New->data=ni;
            New->link=ptr->link;
            ptr->link=New;
            break;
        }else
        ptr = ptr->link;
    }
    //if(ptr==NULL)
       // printf("\nItem not found.\n");
}

int main()
{
    int i, item,loc;
    for(i=1; i<=3; i++)
        create_node(i*10);
        display();
    printf("\npick the value after which you want to insert the new node");
    scanf("%d", &loc);
printf("\nEnter newItem to insert next.\n");
    scanf("%d", &item);
    insert(loc,item);
    display();
    return 0;
}
