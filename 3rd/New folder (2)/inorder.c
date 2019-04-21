
#include<stdio.h>
struct bstnode
{
    int value;
    struct bstnode *l;
    struct bstnode *r;


};

struct bstnode *root=NULL;
struct bstnode *node =NULL;

void insertion(int data)
{
    node=(struct bstnode*)malloc(sizeof(struct bstnode));
    node->value=data;
    node->l=NULL;
    node->r=NULL;
    if(root==NULL)
    {
        root=node;
    }
    else
        search(root);

}

void search(struct bstnode *t)
{



     if(node->value < t->value && t->l !=NULL)
        search(t->l);
     if(node->value < t->value && t->l ==NULL)
        t->l= node;
       else  if(node->value > t->value && t->r !=NULL)
        search(t->r);
    else if(node->value > t->value && t->r ==NULL)
        t->r= node;

}
void displayINpreorder(struct bstnode *t)
{

    if(root==NULL)
    {
        printf("\n the tree is empty.....");
        return;
    }

    if(t->l != NULL)

        displayINpreorder(t->l);


    if(t->r != NULL)
        displayINpreorder(t->r);
        printf("%d, ",t->value);


}



int main()
{

    int data ,i;
    printf("\n enter node data  for insertion \n");
    for(i=0; i<3; i++)
    {
        scanf("%d",&data);
        insertion(data);

    }
    displayINpreorder(root);
    return 0;
}
















