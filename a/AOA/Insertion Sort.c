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
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = a[i];
        for (j = i - 1; j >= 0 && a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
    printf("Sorted Array Insertion Sort \n");
    for(int i=0;i<n;i++)
    {
       printf("%d \n",a[i]);
    }
}


