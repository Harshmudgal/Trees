#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
}*head;
struct node *createnode()
{
    struct node *p;
    int x;
    //printf("Enter data(-1 for no node):");
    scanf("%d",&x);
    if(x==-1)
	return NULL;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    printf("Enter left child of %d:\n",x);
    p->left=createnode();
    printf("Enter right child of %d:\n",x);
    p->right=createnode();
    return p;
}
void inorder(struct node*p)
{
    if(p!=NULL)
    {
        traverse(p->left);
        printf("%d ,",p->data);
        traverse(p->right);
    }    
}
void postorder(struct node*p)
{
    if(p!=NULL)
    {
        traverse(p->left);
        traverse(p->right);
        printf("%d ,",p->data);
    }    
}
void preorder(struct node*p)
{
    if(p!=NULL)
    {
        printf("%d ,",p->data);
        traverse(p->left);
        traverse(p->right);
    }    
}
int main()
{
    printf("Enter first node");
    head=createnode();
    inorder(head);
    preorder(head);
    postorder(head);
}
