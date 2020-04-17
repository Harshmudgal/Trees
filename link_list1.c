#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
}*head;

void createnode(int n)
{
    int x;
    printf("Enter first element");
    scanf("%d",&x);
    head = (struct node*)malloc(sizeof(struct node));
    head->link = NULL;
    head->data=x;
    struct node *ptr=head;
    for(int i=1;i<n;i++)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter node elements");
        scanf("%d",&x);
        temp->data=x;
        temp->link=NULL;
        ptr->link=temp;
        ptr=temp;
    }
    
}
void addFirst()
{
    int x;
    printf("Enter new node first");
    scanf("%d",&x);
    struct node*t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->link=head;
    head=t;
}
void addEnd()
{
    struct node*ptr=head;
    int x;
    printf("Enter new node end");
    scanf("%d",&x);
    struct node*e=(struct node*)malloc(sizeof(struct node));
    e->data=x;
    e->link=NULL;
    while(ptr->link!=NULL)
    ptr=ptr->link;
    ptr->link=e;
}
void addMiddle()
{
    int x;
    struct node*ptr=head;
    printf("Enter new node middle");
    scanf("%d",&x);
    struct node*s=(struct node*)malloc(sizeof(struct node));
    printf("Enter location to be added");
    int p;
    scanf("%d",&p);
    for(int i=1;i<p;i++)
    ptr=ptr->link;
    s->data=x;
    s->link=ptr->link;
    ptr->link=s;
    
}
void delFirst()
{ 
    struct node*ptr=head;
   
    head=head->link;
    free(ptr);
    
}
void delEnd()
{
    struct node*ptr=head;
    
    while(ptr->link->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=NULL;
}
void delMiddle()
{
    struct node*ptr=head;
    
    int n;
    printf("Enter the location to be deleted");
    scanf("%d",&n);
    for(int i=1;i<n-1;i++)
    ptr=ptr->link;
    ptr->link=ptr->link->link;
}
void traverse()
{
    struct node *ptr=head;
    while(ptr)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Total elements");
    scanf("%d",&n);
    createnode(n);
    traverse();
    addFirst();
    traverse();
    addEnd();
    traverse();
    addMiddle();
    traverse();
    delFirst();
    traverse();
    delEnd();
    traverse();
    delMiddle();
    traverse();
}
