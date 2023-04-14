#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
}*h=NULL,*t=NULL,*n=NULL,*s=NULL;
int main()
{
    int c=1,d,f=0, x,a,q,w;
    while(c)
    {
        printf("press 1 TO create check the existance of linked list\npress 2 create linked list\npress 3 to insert elements in begging\npress 4 to insert the element in last\npress 5 to display the content\nenter your choice = \n");
    
    scanf("%d",&d);
    switch(d)
    {
        case 1 : 
        
            if(h==NULL)
                printf("linked list is empty");
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
            while(q)
            {
                printf("enter the element to enter at the beg");
                n=(struct node *)malloc(sizeof(struct node *));
                scanf("%d",&n->data);
                if(f==0)
                {
                    h=n;
                    f=1;
                    t=h;
                }
                else 
                {
                    n->nxt=h;
                    h=n;
                }
                printf("enter 0 to exit or 1 to continue");
                scanf("%d",&q);
                
                
            }
            break ;
            case 4 :
            while(w)
            {
                printf("enter the number to insert ");
                n=(struct node *)malloc(sizeof(struct node *));
                scanf("%d",&n->data);
                t=h;
                printf("enter the number to insert between ");
                scanf("%d",&x);
                while(t->data!=x&&t->nxt!=NULL)
                {
                    //s=t;
                    t=t->nxt;
                }
                if(t->data==x)
                {
                    printf("found");
                    n->nxt=t->nxt;
                    t->nxt=n;
                    n=NULL;
                    t=NULL;
                }
            
            printf("enter 0 to exit or 1 to continue");
            scanf("%d",&w);
            }
                
                break ;
                
            case 5 :
                t=h;
                while(t->nxt!=NULL)
                {
                    
                    
                    printf("--> %d ",t->data);
                    t=t->nxt;
                }
                printf("--> %d --> NULL",t->data);
            break;
            
    
    }
    printf("\nenter 1 to continue using list option or enter 0 to exit = ");
    scanf("%d",&c);
    }

}
