
#include<stdio.h>
struct bstnode
{
    int value;
    struct bstnode *l;
    struct bstnode *r;
};
struct bstnode *root=NULL;
struct bstnode *node=NULL;
void insertion(int val)
{
    node=(struct bstnode*)malloc (sizeof(struct bstnode));
    node->value=val;
    node->l=NULL;
    node->r=NULL;
    if(root==NULL)
    {
        root=node;

    }
    else
        search(root);

}
void search(struct bstnode *t )
{
    if(node->value >t->value && t->r!=NULL)
        search(t->r);
    if(node->value > t->value && t->r==NULL)
        t->r=node;
    else if(node->value <t->value && t->l!=NULL)
        search(t->l);
    else  if(node->value < t->value && t->l==NULL)
        t->l=node;
}


void displayINpreorder(struct bstnode *t)
{
    if(root==NULL)
    {
        printf("TREE IS EMPTY");
        return;
    }

    if(t->l!=NULL)
        displayINpreorder(t->l);
    printf("%d ,",t->value);

    if(t->r!=NULL)
        displayINpreorder(t->r);


}

int main()
{

    int data ,i;
    insertion(8);
    insertion(3);
    insertion(1);
    insertion(2);
    insertion(6);
    insertion(12);
    insertion(9);
    insertion(10);
    insertion(14);
displayINpreorder(root);

    printf("\n enter node data  for insertion \n");

    for(i=0; i<3; i++)
    {
        scanf("%d",&data);
        insertion(data);

    }
    displayINpreorder(root);
    return 0;
}
