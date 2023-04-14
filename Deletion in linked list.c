#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
}*h=NULL,*t=NULL,*n=NULL,*s=NULL;
int main()
{
    int c=1,d,f=0, x,a=1,q,w,g=1,y;
    while(c)
    {
        printf("press 1 TO create check the existance of linked list\npress 2 create linked list\npress 3 to delete a element at last\ndelete the element from beg press 4\n delete between node press 5\n display press 6\nenter your choice = \n");
    
    
    scanf("%d",&d);
    switch(d)
    {
        case 1 : 
        
            if(h==NULL)
                printf("linked list is empty\n");
            else
                printf("list exists");
            
        
        break;
        case 2 :
        while(a) 
        {
            printf("enter the element to insert = ");
            n=(struct node *)malloc(sizeof(struct node *));
            scanf("%d",&n->data);
            n->nxt=NULL;
            if(f==0)
            {
                h=n;
                t=h;
                f=1;
            }
            else
            {
                t->nxt=n;
                t=n;
            }
            printf("enter 0 to exit or 1 to continue");
            scanf("%d",&a);
        }
        break;
        case 3 :
            t=h;
            while(t->nxt!=NULL)
            {
                s=t;
                t=t->nxt;
            }
            s->nxt=t->nxt;
            //t->nxt=NULL;
            
        break;
        case 4 :
            t=h->nxt;
            
    
            h=t;
            
            break;
        case 5 :
        while(g)
        {
            t=h;
            printf("enter the number to be deleted = ");
            scanf("%d",&y);
            while(t->data!=y&&t->nxt!=NULL)
            {
                s=t;
                t=t->nxt;
            }
            s->nxt=t->nxt;
            t->nxt=NULL;
            printf("enter 0 to exit or 1 to continue");
            scanf("%d",&g);
        }
        break;
            
        case 6:
        {
             t=h;
                while(t->nxt!=NULL)
                {
                    
                    
                    printf("--> %d ",t->data);
                    t=t->nxt;
                }
                printf("--> %d --> NULL\n",t->data);
            break;
            
    
        }
    }
    }
}
            
            
            
            
           
