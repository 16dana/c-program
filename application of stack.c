//c program to check the given  equation has balanced paranthesis or not.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char stk[100];
void push(char str)
{
    if(top==-1)
    {
        top++;
        stk[top]=str;
        
    }
    //stk[++top]=str;
}
void pop()
{
    
    top--;
    
}

int main()
{
    char str[100];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='(')
        {
            push(stk[i]);
        }
    
        if(str[i]==')')
        {
            if(top==-1)
            {
               printf("unbalanced");
                break;
                
            }
            else
            {
                top--;
            }
        }
        i++;
        
    }
    if(top==-1)
    {
        printf("balanced");
    }
    else 
    {
        printf("unbalanced");
    }

    
}
