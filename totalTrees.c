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
    }
    else
    {
        t->data=y;
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
void Inorder(struct node*p)  // left root right
{
    if(p)
    {
    Inorder(p->left);
    printf("%d",p->data);
    Inorder(p->right);
    }
}
void Postorder(struct node*p) //left right root
{
    if(p)
    {
    Inorder(p->left);
    Inorder(p->right);
    printf("%d",p->data);
    }
}
void Preorder(struct node*p) //root left right
{
    if(p)
    {
    printf("%d",p->data);
    Inorder(p->left);
    Inorder(p->right);
    }
}
int main()
{
   printf("Enter root element");
   scanf("%d",head->x);
   createNode(head);
   struct node*q=head;
   Inorder(q);
   q=head;
   Postorder(q);
   q=head;
   Preorder(q);
}
