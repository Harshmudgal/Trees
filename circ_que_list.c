#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
}*head;
void createnode()
{
    int x;
    printf("Enter first element");
    scanf("%d",&x);
    head = (struct node*)malloc(sizeof(struct node));
    head->link=NULL;
    head->data=x;
    int i;
    printf("For entering more enter 1 , if not then -1");
    scanf("%d",&i);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(i)
    {
        printf("Element \n");
        scanf("%d \n",&x);
        struct node*ptr=head;  
        ptr->data=x;
        ptr->link=head;
        temp->link=ptr;
        temp=ptr;
        printf("Emter 1 or -1 \n");
        scanf("%d",&i);
    }
}
traverse()
{
    struct node*h=head;
    struct node*t=temp;
    while(h!=t->link)
    {
        printf("%d",h->data);
        h=h->link;
    }
}
inqueue()
{
    struct node*ptr;
    int x;
    scanf("%d",&x);
    ptr->data=x;
    temp->link=ptr;
    ptr->link=head;
    temp=ptr;
}
dequeue()
{
    head=head->link;
    temp->link=head;
}
int main()
{
    int n;
    scanf("%d",&n);
    createnode();
    teaverse();
    inqueue();
    teaverse();
    dequeue();
    traverse();
}