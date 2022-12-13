#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
 typedef struct node
 {
     int data;
     struct node *next;
 }node;
 node *HEAD=NULL;
 void create(int n)
 {
     int i;
   struct node *temp ,*p,*q;
    q=(node*)malloc(sizeof(node));
    printf("\n Enter the value of first data");
    scanf("%d",&q->data);
   temp=q;
   HEAD=q;
    for (i=2;i<=n;i++)
    {
        p=(node*)malloc(sizeof(node));
        printf("\n Enter data");
        scanf("%d",&p->data);
        temp->next=p;
        p->next=NULL;
         temp=p;
    }
 }
     void display ()
    {
         node *temp;
         temp=HEAD;
         while(temp!=NULL)
         {
            printf("The data is %d",(temp->data));
            temp=temp->next;
         }
    }
    void insert()
    { int x;
        node *temp,*p;
        temp=HEAD;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        p=(node*)malloc(sizeof(node));
        printf("\n enter data");
        scanf("%d",&x);
        p->data=x;
        temp->next=p;
        p->next=NULL;
        }

    void delete()
    { int n,a;
    node *temp1,*temp2;
        printf("\n Enter the location");
        scanf("%d",&n);
        a=n;
        if(n==1)
        {
            temp1=HEAD;
            HEAD=HEAD->next;
            temp1->next=NULL;
            free(temp1);
        }
        else {
        temp1=HEAD;
        temp2=HEAD;
        while((n-2)!=0)
        {
            temp2=temp2->next;
            n=n-1;
            }
        while((a-1)!=0)
        {
            temp1=temp1->next;
            a=a-1;
             }
        temp2->next=temp1->next;
        temp1->next=NULL;
        free(temp1);
        printf("\n DELETED");
    }
    }
     void insert2()
    { int n,a;
    node *temp1,*temp2,*p;
        printf("\n Enter the location");
        scanf("%d",&n);
        a=n;
        temp1=HEAD;
        temp2=HEAD;
        if(n==1)
        {
            p=(node*)malloc(sizeof(node));
        printf("\n ENter data");
        scanf("%d",&p->data);
        p->next=HEAD;
        HEAD=p;
        }
        else
        {
        while((n-2)!=0)
        {
            temp2=temp2->next;
            n=n-1;
            }
        while((a-1)!=0)
        {
            temp1=temp1->next;
            a=a-1;
             }
        p=(node*)malloc(sizeof(node));
        printf("\n ENter data");
        scanf("%d",&p->data);
        temp2->next=p;
        p->next=temp1;
        printf("\n Inserted");
        }
    }
         void main()
  {
     int i,o;
     do{
     printf("\n Type 1 for display \n Type 2 for insert at end elemnt \n Type 3 insert at specific location");
     printf("\n Type 4 for create  \n Type 5 delete \n 6 Quit");
     scanf("%d",&i);
         switch(i)
         {
          case 1: display();
                break;
         case 2: insert();
                 break;
        case 3:  insert2();
                 break;
        case 4: printf("\n Enter no of nodes");
                scanf(" \n %d",&o);
                create(o);
                break;
        case 5:
            delete();
            break;
         default :printf("\n error");
         }
          } while(i!=6);
      }
