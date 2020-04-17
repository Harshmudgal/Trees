#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* ahead;
}*head;
void createNode(int n)
{
    int x;
    printf("Enter first element");
    scanf("%d",&x);
    head = (struct node*)malloc(sizeof(struct node));
    head->prev= NULL;
    head->data=x;
    head->ahead=NULL;
    struct node*ptr=head;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&x);
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->ahead=NULL;
        temp->prev=ptr;
        ptr->ahead=temp;
        ptr=temp;
    }
}
void delete()
{
    int n;
    printf("Enter the location to be deleted");
    scanf("%d",&n);
    struct node*ptr=head;
    struct node* temp;
    for(int i=1;i<n-1;i++)
    ptr=ptr->ahead;
    temp=ptr->ahead->ahead;
    ptr->ahead=temp;
    temp->prev=ptr;
}
void traverse()
{
    struct node* ptr=head;
    while(ptr)
    {
        printf("%d",ptr->data);
        ptr=ptr->ahead;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the total number of elements");
    scanf("%d",&n);
    createNode(n);
    traverse();
    delete();
    traverse();
}