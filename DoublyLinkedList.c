#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *prev,*next;
}node;
node *head, *temp;

node *create()
{
    int n,val,i;
    node *p,*q;

    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        q=(node*)malloc(sizeof(node));
        printf("Enter value of node");
        scanf("%d",&val);
        q->data=val;
        q->next=NULL;
        q->prev=NULL;
        if(head == NULL)
        {
            head=q;
            p=q;
        }
        else
        {
            p->next=q;
            q->prev=p;
            p=q;
        }
    }
    return (head);
}
void display_rev()
{

    if (head == NULL)
    {
        printf("Linkedlist is empty!\n");
        return;
    }

    temp = head;
    printf("Elements in reverse direction\n");
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d \t",temp->data);
        temp = temp->prev;
    }
}
void main()
{
    head=NULL;
    int check;

    do
    {
        printf("\n------Doubly LinkedList Operations------\n");
        printf("1 --> create(), Create a linkedlist with n nodes\n");
        printf("2 --> display_rev(),  Display all nodes in reverse direction\n");
        printf("3--> Exit\n\n");
        printf("Enter an option: ");
        scanf("%d", &check);

        switch (check)
        {
        case 1:
            create();
            break;
        case 2:
            display_rev();
            break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Enter a valid option!!\n");
            break;
        }
    } while (check !=3);
}

