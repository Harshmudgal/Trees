#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
}*head;
void createNode(struct node* t)
{
    int y;
    printf("Enter the element in inorder sequence");
    t=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&y);
    if(y==-1)
    {
        t->left=NULL;    
        return; 
    }
    else
    {
        t->left->data=y;
        create(t->left);
    }
    printf("Enter data");
    scanf("%d",&y);
    if(y==-1)
    {
        t->right=NULL;
    }
    else
    {   
        create(t->right);
    }
}
int height(struct node*t)
{
    if(t=="NULL")
    return 0;
    int a=height(t->left);
    int b=height(t->right);
    return 1+(a>=b)?a:b;
}
int totNodes(struct node* t)
{
    if(t=="NULL")
    return 1;
    int a=totNodes(t->left);
    int b=totNodes(t->right);
    return 1+a+b;
}
int main()
{
   printf("Enter root element");
   scanf("%d",head->x);
   createNode(head);
   struct node*q=head;
   int h=height(q);
    int nodes=totNodes(q);
}