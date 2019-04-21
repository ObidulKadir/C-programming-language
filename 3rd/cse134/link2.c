#include<stdio.h>
struct node
{
    char p;
    struct node *q;

};
struct node *E = NULL;
struct node *N1 = NULL;
struct node *N2 = NULL;
struct node *N3 =NULL;

void create_node(char val,char val2,char val3)
{
    N1=(struct node*) malloc(sizeof(struct node));
    N2=(struct node*) malloc(sizeof(struct node));
    N3=(struct node*) malloc(sizeof(struct node));

    N1->p=val;
    N2->p=val2;
    N3->p=val3;

    N1->q=N2; //N1->q=N3;
    N2->q=N3; //N2->q=N1;
    N3->q=NULL;
    E=N1;

}
struct node *ptr=NULL;
void display()
{
    ptr=E;
    while(ptr !=NULL)
    {
        printf("%c",ptr->p);
        ptr=ptr->q;
    }
}

int main()
{
    create_node('W' , 'X','Z');
    display();
    return 0;
}
