#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a[100];
    printf("Enter the no of elements ");
    scanf("%d",&n);
    void ascend(int a[],int n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a number ");
        scanf("%d",&a[i]);
    }
    ascend(a,n);
    getch();
}
void ascend(int a[],int n)
{
    int i,j,temp,min=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
     printf("Ascending array \n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d \n",a[i]);
    }
}

