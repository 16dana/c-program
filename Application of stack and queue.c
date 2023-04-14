#include <stdio.h>

void push(int o);
int pop();
void enqueue();
int dequeue();
void show();
int a[100];
int arr[100];
int r=-1;
int f=-1;
int top=-1;
int stk[10];
int main()
{
    int i,j,n;
    printf("enter the no of elements to insert = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the element %d to insert = ",i);
        scanf("%d",&a[i]);
        enqueue(a[i]);
        
    }
    printf("queue before reverse = ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        dequeue();
        
    }
    printf("\n\nreversed queue = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",pop());
    
    }
    
}

void enqueue(int p)
{
    if(f==-1)
    {
        f=1+f;
    }
    r=r+1;
    arr[r]=p;
}
int dequeue()
{
    int tp;
    tp=arr[f];
    f++;
    push(tp);
    //f++;
    return tp;
}
void push(int tp)
{
    if(top==-1)
    {
        top=1;
        stk[top]=tp;
    }
    
    top++;
    stk[top]=tp;
    
}

int pop()
{
    int y;
    
    y=stk[top];
    top=top-1;

    return y;
}



