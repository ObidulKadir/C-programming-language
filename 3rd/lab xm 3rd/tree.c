#include<stdio.h>
struct bstnode
{
    int val;
    struct bstnode*l;
    struct bstnode *r;


};
struct bstode *root=NULL;
struct bstnode *node=NULL;

void insertion(int loc)
{
    node=(struct bstnode *)malloc(sizeof(struct bstnode));
    node->val=loc;
    node->l=node->r=NULL;
    if(root==NULL)
        root=node;
    else
        search(root);

}
void search(struct bstnode *t)
{
    if(node->val > t->val && t->r !=NULL)
        search(t->r);
    if(node ->val >t->val && t->r==NULL)
        t->r=node;
    else if(node->val <t->val && t->l !=NULL)
        search(t->l);
    else if(node->val <t->val && t->l==NULL)
        t->l=node;
}
void displayINpreorder(struct bstnode *t)
{
    if(root==NULL)
    {
        printf("TREE EMPTY");
        return;
    }

    if(t->l !=NULL)
        displayINpreorder(t->l);

    if(t->r !=NULL)
        displayINpreorder(t->r);
         printf("%d ,",t->val);

}
int main()
{
    int i,data;
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
    for(i=1; i<3; i++)
    {
        scanf("%d",&data);
        insertion(data);
    }
    displayINpreorder(root);
}
