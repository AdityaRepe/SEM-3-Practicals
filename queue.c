#include<stdio.h>
#include<conio.h>
int queue[10],front=-1,rear=-1;
void main()
{
    int choice,a=1,x;
    do
    {
       printf("Enter your choice 1-Enqueue 2-Dequeue 3-Display 4-Exit \n");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
               enqueue();
               break;
           case 2:
               x=dequeue();
               printf("%d is the removed element \n",x);
               break;
           case 3:
               display();
               break;
           case 4:
               printf("Exit \n");
               a=0;
               break;
           default:
               a=0;

       }
    }
    while(a);
}
void enqueue()
{
    int val;
    printf("Enter the value to be inserted \n");
    scanf("%d",&val);
    if(rear==9)
        printf("Queue is full \n");
    else if(rear==-1)
    {
        front++;
        rear++;
        queue[rear]=val;
    }
    else
    {
        rear++;
        queue[rear]=val;
    }
}
int dequeue()
{
    int x;
    if(front==-1)
        printf("Queue is empty \n");
    else if(front==rear)
    {
        x=queue[front];
        front=-1;
        rear=-1;
    }
    else
    {
        x=queue[front];
        front++;
    }
    return x;
}
void display()
{
    int i=front;
    printf("The elements in the queue are \n");
    while(i!=rear)
    {
        printf("%d \n",queue[i]);
        i=(i+1)%10;
    }
    printf("%d",queue[i]);
}
