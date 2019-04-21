#include<stdio.h>
struct bstnode
{
    int val;
    struct bstnode *l;
    struct bstnode *r;
};
struct bstnode*root=NULL;
struct bstnode *Node=NULL;

void insertion(int loc)
{
    Node=(struct bstnode*)malloc(sizeof(struct bstnode));
    Node->val=loc;
    Node->l=Node->r=NULL;
    if(root==NULL)
        root=Node;
    else
        search(root);
}
void search(struct bstnode *t)
{
    if(Node->val > t->val && t->r!=NULL)
        search(t->r);
    if(Node->val > t->val && t->r==NULL)
        t->r=Node;
    else if(Node->val < t->val && t->l!=NULL)
        search(t->l);
   else  if(Node->val < t->val && t->l==NULL)
        t->l=Node;
}
void displayINpreorder(struct bstnode*t)
{
    if(root==NULL)
        {printf("tree empty");
    return;
        }
        printf("%d ,",t->val);
        if(t->l!=NULL)
            displayINpreorder(t->l);
        if(t->r!=NULL)
            displayINpreorder(t->r);
}
int main()
{
    return 0;
}
