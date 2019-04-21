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
struct node *prev = NULL;
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
void nodeDelete(int loc)
{
    ptr = head;
    while(ptr != NULL){
        if(loc == ptr->data){
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

int main()
{
    int i,loc;
    for(i=1; i<=3; i++)
        create_node(i*10);
        display();
   printf ("\nEnter the value you want to delete.\n");
    scanf("%d",&loc);
   nodeDelete(loc);
display();
   printf("\n");
    return 0;
}
