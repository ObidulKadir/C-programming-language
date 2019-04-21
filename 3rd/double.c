#include<stdio.h>
struct node
{
    int z;
    struct node *y;
    struct node *z;

};
struct node *E = NULL;
struct node *N1 = NULL;
struct node *N2 = NULL;
struct node *N3 =NULL;
struct node *N4 =NULL;
struct node *N5 =NULL;

void create_node(int val,int val2,int val3,int val4,int val5)
{
    N1=(struct node*) malloc(sizeof(struct node));
    N2=(struct node*) malloc(sizeof(struct node));
    N3=(struct node*) malloc(sizeof(struct node));
    N4=(struct node*) malloc(sizeof(struct node));
    N5=(struct node*) malloc(sizeof(struct node));

    N1->x=val;
    N2->x=val2;
    N3->x=val3;
    N4->x=val4;
    N5->x=val5;

    N1->y=N5;
    N2->y=N3;
    N3->y=NULL;
    N4->y=N2;
    N5->y=N3;

    N1->z=N2;
    N2->z=N3;
    N3->z=N4;
    N4->z=N5;
    N5->z=NULL;


    E=N1;

} struct node *ptr=NULL;
void display()
{
    ptr=E;
    while(ptr !=NULL)
    {
        printf("%d",ptr->x);

        ptr=ptr->z;
    }
}

int main()
{
    create_node(5);
    create_node(6);
    create_node(8);
    create_node(12);
    create_node(18);
display();
return 0;
}
