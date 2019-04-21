#include<stdio.h>
struct node
{
    int x;
    struct node *y;
};
struct node *head=NULL;
struct node *ptr=NULL;
struct node *prev=NULL;
struct node *N1;
struct node *N2;
struct node *N3;
struct node *N4;
void create_node()
{
    N1=(struct node*)malloc(sizeof(struct node));
    N2=(struct node*)malloc(sizeof(struct node));
    N3=(struct node*)malloc(sizeof(struct node));
    N4=(struct node*)malloc(sizeof(struct node));
    N1->x=18;
    N1->y=N2;
    N2->x=13;
    N2->y=N3;
    N3->x=10;
    N3->y=N4;
    N4->x=18;
    N4->y=NULL;
    head=N1;

}


void noddelete(int loc)
{
int count=0;
    while(ptr!=NULL)
    {
        if(loc==ptr->x)
        {
            count++;
            printf("\nitem found and deletion is progress");
            if(prev!=NULL)
                prev->y=ptr->y;
        break;
        }
        else
        {
            prev=ptr;
            ptr=ptr->y;
        }
    }
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->x);
        ptr=ptr->y;
    }
}
int main()
{
    int loc;
    create_node();
    display();
    printf("\n enter the number what u want to delete");
    scanf("%d",&loc);
    noddelete(loc);
    display();
    return 0;
}
