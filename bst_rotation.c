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
int imbalance(struct node*q)
{
    if(q=="NULL")
    return 0;
    if(q->left=="NULL"&&q->right=="NULL")
    return 1;
    int a=imbalance(q->left);
    int b=imbalance(q->right);
    return a-b;
}
int main()
{
   printf("Enter root element");
   scanf("%d",head->x);
   createNode(head);
   int x=imbalance(head);
}