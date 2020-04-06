#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    struct node*left;
    struct node*right;
}*head;
void createNode(struct node* t)
{
    int y;
    printf("Enter the element in inorder sequence");
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&y);
    if(y==-1)
    {
        t->left=NULL;     
    }
    else
    {
        temp->x=y;
        t->left=temp;
        create(temp);
    }
    printf("Enter data");
    scanf("%d",&y);
    struct node* temp2=(struct node*)malloc(sizeof(struct node));
    if(y==-1)
    {
        temp2->right=NULL;
    }
    else
    {   
        temp2->data=y;
        t->right=temp2;
        create(temp2);
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