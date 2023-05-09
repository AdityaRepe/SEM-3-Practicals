#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the no of elements \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n - 1);
    printf("Sorted Array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
int partition(int a[],int start,int end)
{
    int pivot=end,i=start,j=start;
    while(i<end)
    {
        if(a[i]<a[pivot])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
        i++;
    }
    int temp=a[j];
    a[j]=a[pivot];
    a[pivot]=temp;
    return j;
}
void quickSort(int a[],int start,int end)
{
    if(start<end)
    {
        int p=partition(a,start,end);
        quickSort(a,start,p-1);
        quickSort(a,p+1,end);
    }
}
