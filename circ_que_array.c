#include<stdio.h>
#include<stdlib.h>
int f=-1;
int r=-1;
int n;
void inqueue(int arr[])
{
    int x;
    printf("\n Enter elements");
    scanf("%d",&x);
    if(f==(r+1)%n)
    {
    printf("Overflow");
    arr[r]=x;
    }
    else
    {
        r=(r+1)%n;
        arr[r]=x;
    }
}
void dequeue()
{
    if(f==-1||r==-1)
    printf("Nothing to delete");
    else
    {
        f=(f+1)%n;
    }
}
void traverse(int arr[])
{
    int fr=f;
    int re=r;
    if(fr<=re)
    {
        while(fr<=re)
        {
            printf("%d",arr[fr]);
            fr++;
        }
    }
    else
    {
        while((fr)%n!=(r+1))
        {
            printf("%d",&arr[fr]);
            fr++;
        }
    }
}
int main()
{
    printf("Enter total elements");
    scanf("%d",&n);
    int *a= (int*)malloc(n * sizeof(int)); 
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    r++;
    }
    f=0;
    inqueue(a);
    traverse(a);
    dequeue();
    traverse(a);
}