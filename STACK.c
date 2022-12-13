#include <stdio.h>
#include<conio.h>
int a[5];
int top=-1;
void main()
{
    int input,var;
    int b=1;
    while(b)
    {
        printf("1-PUSH 2-POP 3-PEEK 4-DISPLAY 5-EXIT \n");
        printf("Enter your option \n");
        scanf("%d",&input);
        if(input==1)
        {
            if(top==4)
            printf("Stack is full \n");
            else
            {
                printf("Enter the element to be inserted \n");
                scanf("%d",&var);
                push(var);
            }
        }
        else if(input==2)
        {
            if(top==-1)
            printf("Stack is empty \n");
            else
            {
                int x=pop();
                printf("The popped element is %d \n",x);
            }
        }
        else if(input==3)
        {
            if(top==-1)
            printf("Stack is empty \n");
            else
            printf("The topmost element is %d \n",a[top]);
        }
        else if(input==4)
        {
            if(top==-1)
            printf("Stack is empty \n");
            else
            display();
        }
        else
        {
            b=0;
        }
    }
}
void push(int x)
{
    top++;
    a[top]=x;
}
int pop()
{
    int x;
    x=a[top];
    top--;
    printf("The popped element is %d \n",x);
    return x;
}
void display()
{
    int i=top;
    for(i=top;i!=-1;i--)
    {
        printf("%d",a[i]);
    }
}
