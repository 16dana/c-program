#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
   int data;
   struct node *nxt;
}*h=NULL,*t=NULL,*n=NULL;
void ins();
int display();
int p=0;
int main()
{
    
    int a=1;
   
    while(a)
    {
        int c;
         printf("press 1 to insert the element\npress 2 to display the element\n");
         printf("enter your choice here --> ");
         scanf("%d",&c);
        switch(c)
        {
            case 1 :
                 ins();
                 break;
            case 2 :
                 display();
                 break;
            
        }
        printf("exit press 0 to exit or press 1 to continue");
        
        scanf("%d",&a);
        
        
    }
}
    void ins()
    {
        printf("enter the element to be inserted here -->");
        n=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&n->data);
        n->nxt=NULL;
        if(p==0)
        {
            h=n;
            
            t=h;
            p=1;
        }
        else
        {
            n->pre=t;
            t->nxt=n;
            t=n;
            
            
        }
    }
    int  display()
    {
        printf("Given Doubly linked list ");
        t=h;
        while(t->nxt!= NULL)
        {
            printf("--> %d",t->data);
            t=t->nxt;
        }
        printf(" --> %d -->NULL\n",t->data);
    }
    



