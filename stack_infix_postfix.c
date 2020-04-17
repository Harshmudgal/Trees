#include<stdio.h>
#include<stdlib.h>
traverse(int a[],int t)
{
    for(int i=top;i>=0;i++)
    printf("%d",a[i]);
}
int main()
{
    int n;
    printf("Enter total elements");
    scanf("%d",&n);
    int *a=(int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int top=n-1;
    char c;
    printf("For exiting enter 1");
    scanf("%c",&c);
    while(c!=1)
    {
        switch(c)
        {
            case '+':
            a[top-1]=a[top-1]+a[top];
            top--;
            break;
            case '-':
            a[top-1]=a[top-1]-a[top];
            top--;
            break;
            case '*':
            a[top-1]=a[top-1]*a[top];
            top--;
            break;
            case '/':
            a[top-1]=a[top-1]/a[top];
            top--;
            break;
            case default:
            printf("Wrong input");
            break;
        }
    }
    traverse(a,top);
}