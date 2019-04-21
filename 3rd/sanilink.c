#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    struct node *y;
    struct node *z;
};
typedef struct node NODE;
NODE *head=NULL;
NODE *ptr=NULL;
NODE *N1;
NODE *N2;
NODE *N3;
NODE *N4;
NODE *N5;
void create_node()
{
    N1=(NODE*)malloc(sizeof(NODE));
    N2=(NODE*)malloc(sizeof(NODE));
    N3=(NODE*)malloc(sizeof(NODE));
    N4=(NODE*)malloc(sizeof(NODE));
    N5=(NODE*)malloc(sizeof(NODE));
    N1->x=5;
    N1->y=N4;
    N1->z=N2;
    N2->x=6;
    N2->y=N5;
    N2->z=N3;
    N3->x=8;
    N3->y=NULL;
    N3->z=N4;
    N4->x=12;
    N4->y=N2;
    N4->z=N5;
    N5->x=18;
    N5->y=N3;
    N5->z=NULL;
}
void display()
{
    ptr=N1;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->x);
        ptr=ptr->z;
    }
}

int main()
{
    create_node();
    display();
    return 0;
}
