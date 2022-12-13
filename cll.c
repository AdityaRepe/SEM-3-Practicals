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
        p->next=HEAD;
         temp=p;
    }
 }
    void display()
    {
         node *temp;
         temp=HEAD;
         printf("%d",temp->data);
         temp=temp->next;
         while(temp!=HEAD)
         {
            printf("The data is %d",(temp->data));
            temp=temp->next;
         }
    }

    void search(int n)
    {   int m=1,i=1;
        node *temp;
         temp=HEAD;
        if(temp->data==n)
        {
           printf("\n Element found at 1st location ");
           m=0;
        }
        temp=temp->next;
        while (temp!=HEAD)
        {
            if(temp->data==n)
            {
                printf("\n Element found at %d ",i+1);
                m=0;
                break;
            }
            temp=temp->next;
            i++;
        }
        if(m==1)
        {
            printf("\n NOT found");
        }
    }
    void delete_beg()
    {
        node *temp,*p;
        p=HEAD;
        while(p->next!=HEAD)
        {
          p=p->next;
        }
        temp=HEAD;
        HEAD=HEAD->next;
        temp->next=NULL;
        free(temp);
        p->next=HEAD;
        }
    void insert_end(int y)
    {
        node *temp ,*p;
        temp=HEAD;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        p=(node*)malloc(sizeof(node));
        p->data=y;
        temp->next=p;
        p->next=NULL;
    }
    void delete(int i)
    {
        node *temp,*p;
        temp=HEAD;
        p=HEAD;
        if(i==1)
        {
            temp=HEAD;
            HEAD=HEAD->next;
            free(temp);
        }
        else
        {
            while((i-2)!=0)
            {
                temp=temp->next;
                i--;
            }
             while((i-1)!=0)
            {
                p=p->next;
                i--;
            }
            temp->next=p->next;
            p->next=NULL;
            free(p);

        }
    }
  void main()
  {
     int i,m,n,l,o;
     do{
     printf("\n Type 1 for display \n Type 2 for search elemnt \n Type 3 deleting first element");
     printf("\n Type 4 for create  \n Type 5 Quit");
     scanf("%d",&i);
         switch(i)
         {
         case 1: display();
                break;
         case 2: printf("\n Enter the element to be found");
               scanf("%d",&m);
                 search(m);
                 break;
        case 3:  delete_beg();
                 break;
        case 4: printf("\n Enter no of nodes");
                scanf(" \n %d",&o);
                create(o);
                break;
         default :printf("\n error");
         }

     }while(i!=5);
  }
