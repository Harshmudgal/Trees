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
    // if(q=="NULL")
    // return 0;
    // if(q->left=="NULL"&&q->right=="NULL")
    // return 1;
    int a=height(q->left);
    int b=height(q->right);
    if(a-b>1||a-b<-1)
    return 0;
    else
        return 1;
}
int height(struct node*t)
{
    if(t=="NULL")
    return 0;
    if(t->left=="NULL" && t->right=="NULL")
    return 0;
    int a=height(t->left);
    int b=height(t->right);
    return 1+(a>=b)?a:b;
} 
int main()
{
   printf("Enter root element");
   scanf("%d",head->x);
   createNode(head);
   struct node*p;
   while(p->left=="NULL"&&p->right=="NULL")
   {
        int x=imbalance(p);
        if(x==0)
        printf("Imbalance node %d",&p->data);
        else
        {
            printf("Balance node %d",&p->data);
        }
        p=p->left;
   }
}
