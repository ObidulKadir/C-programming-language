
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

    if(node->value > t->value && t->r !=NULL)
        search(t->r);
    else if(node->value > t->value && t->r ==NULL)
        t->r= node;

    else  if(node->value < t->value && t->l !=NULL)
        search(t->l);
    else if(node->value < t->value && t->l ==NULL)
        t->l= node;

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

    printf("%d, ",t->value);

    if(t->r != NULL)
        displayINpreorder(t->r);

}



int main()
{

    int data ,i;
    printf("\n enter node data  for insertion ......\n");
    for(i=0; i<9; i++)
    {
        scanf("%d",&data);
        insertion(data);

    }
    displayINpreorder(root);
    data=search(&root,4);
    if (data)
    {
        printf("Searched node found\n");
    }
    else
    {
        printf("Data Not found in tree.\n");
    }

    return 0;
}
















